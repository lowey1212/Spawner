#include "DAIUltraSkyActor.h"

#include "Components/DirectionalLightComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Components/SkyLightComponent.h"
#include "Components/SceneComponent.h"
#include "Engine/World.h"
#include "Components/SkyAtmosphereComponent.h"
#include "Components/VolumetricCloudComponent.h"
#include "Materials/MaterialParameterCollection.h"
#include "Materials/MaterialParameterCollectionInstance.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "DAIUltraSkyBiomeData.h"
#include "DAIUltraSkyBiomeVolume.h"
#include "DAIUltraSkyWeatherOverrideVolume.h"
#include "DAIUltraSkyRadialStorm.h"
#include "Components/WindDirectionalSourceComponent.h"
#include "DAIUltraSkyClimatePreset.h"
#include "AbilitySystemComponent.h"
#include "DAIUltraSkyAttributeSet.h"
#include "DAIHubSubsystem.h"
#include "DAI/Hub/DAIHubAccess.h"
#include "HubGameplayTags.h"
#include "Services/DAI_WeatherService.h"
#include "HAL/IConsoleManager.h"

// Local helper (placed early for forward reference)
static void UltraSky_Publish(UWorld *World, const FGameplayTag &Tag, UObject *Sender)
{
    if (!World)
        return;
    if (UGameInstance *GI = World->GetGameInstance())
        if (auto *Hub = DAI_HUB(GI))
            Hub->Publish(FDAIHubEventPayload(Tag, Sender));
}

static void UltraSky_Publish_Condition(UWorld *World, const FGameplayTag &Tag, UObject *Sender, const FName &Condition)
{
    if (!World)
        return;
    if (UGameInstance *GI = World->GetGameInstance())
        if (auto *Hub = DAI_HUB(GI))
        {
            FDAIHubEventPayload Payload(Tag, Sender);
            if (!Condition.IsNone())
            {
                // Encode condition as a context tag if a tag with that name exists (optional)
                // Otherwise stash in Reason via implicit conversion if user defines matching tag asset.
                // For now just leave empty (Blueprint can query service for detail).
            }
            Hub->Publish(Payload);
        }
}

static void UltraSky_Publish_SnowThreshold(UWorld *World, UObject *Sender, float Value, bool bUpward)
{
    if (!World)
        return;
    if (UGameInstance *GI = World->GetGameInstance())
        if (auto *Hub = DAI_HUB(GI))
        {
            FDAIHubEventPayload Payload(TAG_DAI_UltraSky_SnowDepthThresholdCrossed, Sender);
            Payload.Strength = bUpward ? Value : -Value; // sign encodes direction
            Hub->Publish(Payload);
        }
}

DEFINE_LOG_CATEGORY_STATIC(LogDAIUltraSky, Log, All);

ADAIUltraSkyActor::ADAIUltraSkyActor()
{
    PrimaryActorTick.bCanEverTick = true;

    Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    SetRootComponent(Root);

    SunLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("SunLight"));
    SunLight->SetupAttachment(Root);
    SunLight->bAffectTranslucentLighting = true; // atmosphere linkage implicit
    SunLight->Mobility = EComponentMobility::Movable;

    SkyLight = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLight"));
    SkyLight->SetupAttachment(Root);
    SkyLight->Mobility = EComponentMobility::Movable;
    SkyLight->bRealTimeCapture = false; // we manage recapture on a cadence

    Atmosphere = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("SkyAtmosphere"));
    Atmosphere->SetupAttachment(Root);

    VolumetricClouds = CreateDefaultSubobject<UVolumetricCloudComponent>(TEXT("VolumetricClouds"));
    VolumetricClouds->SetupAttachment(Root);

    HeightFog = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("HeightFog"));
    HeightFog->SetupAttachment(Root);
}

void ADAIUltraSkyActor::OnConstruction(const FTransform &Transform)
{
    Super::OnConstruction(Transform);
    UpdateSunRotationFromTime();
    ApplyAtmosphereSettings();
    ApplyCloudSettings();
    SkyLightTimeAccumulator = 0.0f;
}

void ADAIUltraSkyActor::BeginPlay()
{
    Super::BeginPlay();
    // Initialize biome to default if provided
    if (DefaultBiome)
    {
        ApplyBiomeInstant(DefaultBiome);
    }

    // Register as UltraSky weather service with hub
    if (UGameInstance *GI = GetGameInstance())
    {
        if (auto *Hub = DAI_HUB(GI))
        {
            // Temporarily treat the actor itself as weather service (implements inline adapter below)
            TScriptInterface<IDAI_WeatherService> WeatherIface;
            WeatherIface.SetObject(this);
            WeatherIface.SetInterface(Cast<IDAI_WeatherService>(this));
            if (WeatherIface.GetInterface())
            {
                Hub->RegisterService<IDAI_WeatherService>(WeatherIface);
            }
            // Also attach dependency info to registry (currently none) so it participates in readiness.
            if (auto *Reg = GEngine->GetEngineSubsystem<UDAIHubServiceRegistry>())
            {
                TArray<TSubclassOf<UObject>> Deps; // e.g., add perf/map if required later
                Reg->RegisterWithDependencies(this, Deps);
            }
        }
    }

    if (bEnableWindDirectionalSource)
    {
        WindSource = NewObject<UWindDirectionalSourceComponent>(this, TEXT("UltraSkyWind"));
        if (WindSource)
        {
            WindSource->SetupAttachment(RootComponent);
            WindSource->RegisterComponent();
        }
    }

    LastSnowAccumulation = SnowAccumulation;
    LastPublishedCondition = CurrentCondition;
    LastPublishedBiomeName = GetActiveBiomeName();
}

void ADAIUltraSkyActor::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    if (bAutoRunDayNight && DayLengthSeconds > KINDA_SMALL_NUMBER)
    {
        const float HoursPerSecond = 24.0f / FMath::Max(DayLengthSeconds, 0.001f);
        TimeOfDay = FMath::Fmod(TimeOfDay + HoursPerSecond * DeltaSeconds, 24.0f);
        UpdateSunRotationFromTime();
    }

    MaybeRecaptureSkyLight(DeltaSeconds);
    TickBiomeSystem(DeltaSeconds);

    // Wind gusts
    WindNoiseTime += DeltaSeconds * WindGustSpeed;
    const float Noise = 0.5f * (FMath::PerlinNoise1D(WindNoiseTime) + 1.0f); // 0..1
    const float WindIntensity = FMath::Clamp(WindBaseIntensity + WindGustStrength * Noise, 0.0f, 1.0f);
    CachedWindIntensity = WindIntensity;
    if (WindSource)
    {
        WindSource->Strength = WindIntensity;
        WindSource->Speed = 1.0f; // keep neutral, let content scale
        WindSource->SetWorldRotation(FRotator(0.0f, WindDirectionDegrees, 0.0f));
    }
    // Publish to MPC if provided
    if (GlobalWindMPC)
    {
        if (UMaterialParameterCollectionInstance *Inst = GetWorld()->GetParameterCollectionInstance(GlobalWindMPC))
        {
            Inst->SetScalarParameterValue(MPCParam_WindIntensity, WindIntensity);
            Inst->SetScalarParameterValue(MPCParam_WindDirectionDegrees, WindDirectionDegrees);
        }
    }

    // Random weather driver (timerless simple accumulator)
    if (bEnableRandomWeather && ClimatePreset)
    {
        static FRandomStream RNG;
        static bool bInit = false;
        static float TimeToNextPick = 0.0f;
        if (!bInit)
        {
            RNG.Initialize(RandomSeed);
            TimeToNextPick = RandomWeatherBaseInterval * RNG.FRandRange(0.75f, 1.25f);
            bInit = true;
        }
        TimeToNextPick -= DeltaSeconds;
        if (TimeToNextPick <= 0.0f)
        {
            // Choose season bins
            const float S = FMath::Clamp(Season, 0.0f, 4.0f);
            const int32 S0 = FMath::Clamp((int32)FMath::FloorToFloat(S), 0, 3);
            const int32 S1 = FMath::Clamp(S0 + 1, 0, 3);
            const float Alpha = FMath::Clamp(S - (float)S0, 0.0f, 1.0f);

            auto ArrForIndex = [this](int32 Index) -> const TArray<FUltraSkyWeatherChoice> &
            {
                switch (Index)
                {
                case 0:
                    return ClimatePreset->SpringChoices;
                case 1:
                    return ClimatePreset->SummerChoices;
                case 2:
                    return ClimatePreset->AutumnChoices;
                default:
                    return ClimatePreset->WinterChoices;
                }
            };

            const TArray<FUltraSkyWeatherChoice> &A0 = ArrForIndex(S0);
            const TArray<FUltraSkyWeatherChoice> &A1 = ArrForIndex(S1);

            // Pick from blended distributions (simple: pick list based on alpha threshold)
            const bool bPickFromSecond = RNG.FRand() < Alpha;
            const TArray<FUltraSkyWeatherChoice> &Choices = bPickFromSecond ? A1 : A0;

            float TotalW = 0.0f;
            for (const auto &C : Choices)
            {
                TotalW += FMath::Max(C.Weight, 0.0f);
            }
            if (TotalW > 0.0f && Choices.Num() > 0)
            {
                float Pick = RNG.FRandRange(0.0f, TotalW);
                const FUltraSkyWeatherChoice *Selected = nullptr;
                for (const auto &C : Choices)
                {
                    const float W = FMath::Max(C.Weight, 0.0f);
                    if (Pick <= W)
                    {
                        Selected = &C;
                        break;
                    }
                    Pick -= W;
                }
                if (!Selected)
                {
                    Selected = &Choices.Last();
                }

                if (Selected)
                {
                    if (Selected->Biome)
                    {
                        ForceApplyBiome(Selected->Biome, Selected->Biome->SuggestedBlendSeconds);
                    }
                    if (!Selected->Condition.IsNone())
                    {
                        ForceCondition(Selected->Condition);
                    }
                }
            }

            TimeToNextPick = RandomWeatherBaseInterval * RNG.FRandRange(0.75f, 1.25f);
        }
    }

    // Auto switch rain/snow from temperature
    if (bAutoSnowFromTemperature)
    {
        const float TempC = QueryTemperatureC();
        const float Precip01 = QueryPrecipitation01();

        const bool bSnowing = (CurrentCondition == FName("Snow"));
        const bool bRaining = (CurrentCondition == FName("Rain"));

        if (bRaining && TempC <= SnowTempThresholdC)
        {
            ForceCondition(FName("Snow"));
        }
        else if (bSnowing && TempC > SnowTempThresholdC)
        {
            ForceCondition(FName("Rain"));
        }

        // Accumulation and wetness
        float Snow = SnowAccumulation;
        float Wet = Wetness;
        if (CurrentCondition == FName("Snow"))
        {
            Snow += SnowAccumulationRate * Precip01 * DeltaSeconds;
            Wet = FMath::Max(Wet - WetnessDryRate * DeltaSeconds, 0.0f);
        }
        else if (CurrentCondition == FName("Rain"))
        {
            Wet += WetnessAccumulationRateRain * Precip01 * DeltaSeconds;
            // If very wet and below freezing, allow some snow conversion
            if (TempC <= SnowTempThresholdC - 2.0f)
            {
                Snow += 0.25f * SnowAccumulationRate * Precip01 * DeltaSeconds;
            }
            // Some rain removes snow
            Snow = FMath::Max(0.0f, Snow - 0.25f * SnowMeltRate * DeltaSeconds);
        }
        else
        {
            // Clear weather: melt snow if warm, dry wetness
            if (TempC > SnowTempThresholdC)
            {
                Snow = FMath::Max(0.0f, Snow - SnowMeltRate * DeltaSeconds);
            }
            Wet = FMath::Max(0.0f, Wet - WetnessDryRate * DeltaSeconds);
        }

        SnowAccumulation = FMath::Clamp(Snow, 0.0f, 1.0f);
        Wetness = FMath::Clamp(Wet, 0.0f, 1.0f);

        // Publish to MPC if available (use GlobalWindMPC to avoid adding more collections)
        if (GlobalWindMPC)
        {
            if (UMaterialParameterCollectionInstance *Inst = GetWorld()->GetParameterCollectionInstance(GlobalWindMPC))
            {
                Inst->SetScalarParameterValue(FName("Snow"), SnowAccumulation);
                Inst->SetScalarParameterValue(FName("Wetness"), Wetness);
            }
        }
    }

    // Publish time-of-day tick every ~5 real seconds
    TimeOfDayEventAccumulator += DeltaSeconds;
    if (TimeOfDayEventAccumulator >= 5.0f)
    {
        UltraSky_Publish(GetWorld(), TAG_DAI_UltraSky_TimeOfDayTick, this);
        TimeOfDayEventAccumulator = 0.0f;
    }

    // Publish wind update if change exceeds threshold or 10s elapsed
    WindEventAccumulator += DeltaSeconds;
    if (FMath::Abs(CachedWindIntensity - LastWindEventIntensity) > 0.05f || WindEventAccumulator >= 10.0f)
    {
        UltraSky_Publish(GetWorld(), TAG_DAI_UltraSky_WindUpdated, this);
        LastWindEventIntensity = CachedWindIntensity;
        WindEventAccumulator = 0.0f;
    }

    // Publish biome/condition change events if changed (after all logic modifications this frame)
    const FName CurrentBiomeName = GetActiveBiomeName();
    if (CurrentBiomeName != LastPublishedBiomeName && !CurrentBiomeName.IsNone())
    {
        UltraSky_Publish(GetWorld(), TAG_DAI_UltraSky_BiomeChanged, this);
        LastPublishedBiomeName = CurrentBiomeName;
    }
    if (CurrentCondition != LastPublishedCondition && !CurrentCondition.IsNone())
    {
        UltraSky_Publish(GetWorld(), TAG_DAI_UltraSky_WeatherChanged, this);
        // Precipitation detection: simple heuristic based on condition names (Rain/Snow)
        const bool bWasPrecip = bIsPrecipitating;
        bIsPrecipitating = (CurrentCondition == FName("Rain") || CurrentCondition == FName("Snow"));
        if (bIsPrecipitating != bWasPrecip)
        {
            UltraSky_Publish(GetWorld(), bIsPrecipitating ? TAG_DAI_UltraSky_PrecipitationStarted : TAG_DAI_UltraSky_PrecipitationStopped, this);
        }
        // Storm heuristic: conditions containing "Storm" or named exactly "Storm"
        const bool bPrevStorm = bIsStorming;
        bIsStorming = CurrentCondition.ToString().Contains(TEXT("Storm"));
        if (bIsStorming != bPrevStorm)
        {
            UltraSky_Publish(GetWorld(), bIsStorming ? TAG_DAI_UltraSky_StormStarted : TAG_DAI_UltraSky_StormEnded, this);
        }
        LastPublishedCondition = CurrentCondition;
    }

    // Snow threshold crossings
    if (SnowAccumulation != LastSnowAccumulation)
    {
        CheckSnowThresholdCrossings(LastSnowAccumulation, SnowAccumulation);
        LastSnowAccumulation = SnowAccumulation;
    }
}

FName ADAIUltraSkyActor::GetActiveBiomeName() const
{
    if (ActiveBiome)
    {
        return ActiveBiome->BiomeName;
    }
    return FName();
}

float ADAIUltraSkyActor::QueryTemperatureC() const
{
    if (bUseGASAttributesForSnowLogic)
    {
        const AActor *Source = WeatherAnchor ? WeatherAnchor.Get() : this;
        if (Source)
        {
            if (const UAbilitySystemComponent *ASC = Source->FindComponentByClass<UAbilitySystemComponent>())
            {
                if (const UDAIUltraSkyAttributeSet *Set = ASC->GetSet<UDAIUltraSkyAttributeSet>())
                {
                    return Set->GetTemperatureC();
                }
            }
        }
    }
    // Fallback simple approximation: colder at night
    const float Hour = TimeOfDay;
    const bool bNight = (Hour < 6.0f || Hour > 18.0f);
    return bNight ? 0.0f : 10.0f;
}

float ADAIUltraSkyActor::QueryPrecipitation01() const
{
    if (bUseGASAttributesForSnowLogic)
    {
        const AActor *Source = WeatherAnchor ? WeatherAnchor.Get() : this;
        if (Source)
        {
            if (const UAbilitySystemComponent *ASC = Source->FindComponentByClass<UAbilitySystemComponent>())
            {
                if (const UDAIUltraSkyAttributeSet *Set = ASC->GetSet<UDAIUltraSkyAttributeSet>())
                {
                    return FMath::Clamp(Set->GetPrecipitation(), 0.0f, 1.0f);
                }
            }
        }
    }
    // If raining/snowing, assume mid precipitation; otherwise 0
    if (CurrentCondition == FName("Rain") || CurrentCondition == FName("Snow"))
    {
        return 0.5f;
    }
    return 0.0f;
}

void ADAIUltraSkyActor::StampFootprintAtLocation(FVector WorldLocation, float Strength)
{
    if (!IsSnowDeepEnoughForFootprints())
    {
        return;
    }
    OnFootprintStamped.Broadcast(WorldLocation, FMath::Clamp(Strength, 0.0f, 1.0f));
}

void ADAIUltraSkyActor::SetTimeOfDay(float NewTimeOfDay)
{
    TimeOfDay = FMath::Clamp(NewTimeOfDay, 0.0f, 24.0f - KINDA_SMALL_NUMBER);
    UpdateSunRotationFromTime();
}

void ADAIUltraSkyActor::SetDayLengthSeconds(float NewLength)
{
    DayLengthSeconds = FMath::Max(NewLength, 0.1f);
}

void ADAIUltraSkyActor::UpdateSunRotationFromTime()
{
    // Simple model: map time of day to sun pitch (-90..+90) with noon at +75 deg for nicer lighting
    // 0h=midnight below horizon, 6h=sunrise, 12h=noon, 18h=sunset
    const float Normalized = TimeOfDay / 24.0f; // 0..1
    const float DegreesPerDay = 360.0f;
    const float Azimuth = FMath::Fmod(Normalized * DegreesPerDay, 360.0f); // east->west

    // Elevation curve: shift sine so that 0h is -90 deg pitch (night), 12h near max
    const float Elevation = FMath::Sin(Normalized * 2.0f * PI) * 90.0f * 0.95f; // -85..+85 approx

    const FRotator NewRot(Elevation, Azimuth, 0.0f);
    SunLight->SetWorldRotation(NewRot);
}

void ADAIUltraSkyActor::ApplyAtmosphereSettings()
{
    if (Atmosphere)
    {
        // Scale Rayleigh and Mie via multipliers for simple authoring
        Atmosphere->RayleighScatteringScale = FMath::Max(RayleighScatteringScale, 0.0f);
        Atmosphere->MieScatteringScale = FMath::Max(MieScatteringScale, 0.0f);
        Atmosphere->MultiScatteringFactor = 1.0f;
    }
}

void ADAIUltraSkyActor::ApplyCloudSettings()
{
    if (VolumetricClouds)
    {
        VolumetricClouds->SetLayerBottomAltitude(1000.0f);
        VolumetricClouds->SetLayerHeight(6000.0f);
        VolumetricClouds->SetGroundAlbedo(FColor(48, 48, 48));
    }
}

void ADAIUltraSkyActor::MaybeRecaptureSkyLight(float DeltaSeconds)
{
    if (!SkyLight)
    {
        return;
    }

    if (SkyLightRecaptureInterval <= 0)
    {
        return;
    }

    SkyLightTimeAccumulator += DeltaSeconds;
    if (SkyLightTimeAccumulator >= SkyLightRecaptureInterval)
    {
        SkyLightTimeAccumulator = 0.0f;
        SkyLight->RecaptureSky();
    }
}

void ADAIUltraSkyActor::ApplyFogSettings(float Fog)
{
    if (HeightFog)
    {
        HeightFog->FogDensity = FMath::Max(Fog, 0.0f);
    }
}

void ADAIUltraSkyActor::TickBiomeSystem(float DeltaSeconds)
{
    if (!bUseBiomeVolumes)
    {
        return;
    }

    BiomeCheckAccumulator += DeltaSeconds;
    if (BiomeCheckAccumulator >= BiomeCheckInterval)
    {
        BiomeCheckAccumulator = 0.0f;
        EvaluateVolumesAndSetTargetBiome();
    }

    if (TargetBiome && ActiveBiome != TargetBiome)
    {
        if (BiomeBlendTimeRemaining <= 0.0f || BiomeBlendDuration <= 0.0f)
        {
            ApplyBiomeInstant(TargetBiome);
        }
        else
        {
            const float Step = FMath::Clamp(DeltaSeconds / FMath::Max(BiomeBlendDuration, KINDA_SMALL_NUMBER), 0.0f, 1.0f);
            BlendBiomeTowards(TargetBiome, Step);
            BiomeBlendTimeRemaining -= DeltaSeconds;
            if (BiomeBlendTimeRemaining <= 0.0f)
            {
                ApplyBiomeInstant(TargetBiome);
            }
        }
    }
}

void ADAIUltraSkyActor::EvaluateVolumesAndSetTargetBiome()
{
    FVector AnchorLoc = GetActorLocation();
    if (WeatherAnchor)
    {
        AnchorLoc = WeatherAnchor->GetActorLocation();
    }

    // Check override volumes and storms first
    UDAIUltraSkyBiomeData *OverrideBiome = nullptr;
    FName OverrideCondition;
    float OverrideBlendSeconds = 0.0f;
    int32 OverridePriority = MIN_int32;

    EvaluateOverrideVolumes(AnchorLoc, OverrideBiome, OverrideCondition, OverrideBlendSeconds, OverridePriority);
    EvaluateRadialStorms(AnchorLoc, OverrideBiome, OverrideCondition, OverrideBlendSeconds, OverridePriority);

    if (OverrideBiome)
    {
        TargetBiome = OverrideBiome;
        BiomeBlendDuration = OverrideBlendSeconds;
        BiomeBlendTimeRemaining = BiomeBlendDuration;
        if (!OverrideCondition.IsNone())
        {
            CurrentCondition = OverrideCondition;
            UpdateConditionFX(TargetBiome);
        }
        return;
    }

    TArray<ADAIUltraSkyBiomeVolume *> Volumes;
    ADAIUltraSkyBiomeVolume::GetAllVolumes(Volumes);

    UDAIUltraSkyBiomeData *BestBiome = nullptr;
    int32 BestPriority = MIN_int32;

    for (ADAIUltraSkyBiomeVolume *Volume : Volumes)
    {
        if (!IsValid(Volume) || !IsValid(Volume->Biome))
        {
            continue;
        }
        if (Volume->EncompassesPoint(AnchorLoc))
        {
            if (!BestBiome || Volume->Priority > BestPriority)
            {
                BestBiome = Volume->Biome;
                BestPriority = Volume->Priority;
            }
        }
    }

    if (!BestBiome)
    {
        BestBiome = DefaultBiome ? DefaultBiome.Get() : nullptr;
    }

    if (BestBiome && BestBiome != TargetBiome)
    {
        TargetBiome = BestBiome;
        BiomeBlendDuration = BestBiome->SuggestedBlendSeconds;
        BiomeBlendTimeRemaining = BiomeBlendDuration;
    }
}

void ADAIUltraSkyActor::EvaluateOverrideVolumes(const FVector &AnchorLoc, UDAIUltraSkyBiomeData *&OutBiome, FName &OutCondition, float &OutBlendSeconds, int32 &OutPriority)
{
    TArray<ADAIUltraSkyWeatherOverrideVolume *> Vols;
    ADAIUltraSkyWeatherOverrideVolume::GetAllVolumes(Vols);
    for (ADAIUltraSkyWeatherOverrideVolume *V : Vols)
    {
        if (!IsValid(V) || V->Mode == EDAIUltraSkyOverrideMode::Disabled)
        {
            continue;
        }
        if (V->EncompassesPoint(AnchorLoc))
        {
            if (V->Priority >= OutPriority)
            {
                OutPriority = V->Priority;
                OutBiome = V->OverrideBiome ? V->OverrideBiome.Get() : OutBiome;
                OutCondition = !V->OverrideCondition.IsNone() ? V->OverrideCondition : OutCondition;
                OutBlendSeconds = V->EnterBlendSeconds;
            }
        }
    }
}

void ADAIUltraSkyActor::EvaluateRadialStorms(const FVector &AnchorLoc, UDAIUltraSkyBiomeData *&OutBiome, FName &OutCondition, float &OutBlendSeconds, int32 &OutPriority)
{
    TArray<ADAIUltraSkyRadialStorm *> Storms;
    ADAIUltraSkyRadialStorm::GetAllStorms(Storms);
    for (ADAIUltraSkyRadialStorm *S : Storms)
    {
        if (!IsValid(S) || S->OuterRadius <= 0.0f)
        {
            continue;
        }
        const float Dist = FVector::Dist2D(AnchorLoc, S->GetActorLocation());
        if (Dist <= S->OuterRadius)
        {
            if (S->Priority >= OutPriority)
            {
                OutPriority = S->Priority;
                if (S->StormBiome)
                {
                    OutBiome = S->StormBiome;
                }
                if (!S->StormCondition.IsNone())
                {
                    OutCondition = S->StormCondition;
                }
                OutBlendSeconds = 2.0f; // default blend for storms
            }
        }
    }
}

void ADAIUltraSkyActor::ApplyBiomeInstant(const UDAIUltraSkyBiomeData *Biome)
{
    if (!Biome)
    {
        return;
    }

    // Apply sky values
    CloudCoverage = Biome->TargetCloudCoverage;
    CloudDensity = Biome->TargetCloudDensity;
    ApplyCloudSettings();
    ApplyFogSettings(Biome->TargetFogDensity);

    UpdateMPCFromBiome(Biome, 1.0f);
    ActiveBiome = const_cast<UDAIUltraSkyBiomeData *>(Biome);
    UpdateConditionFX(Biome);
}

void ADAIUltraSkyActor::BlendBiomeTowards(const UDAIUltraSkyBiomeData *Target, float AlphaStep)
{
    if (!ActiveBiome || !Target)
    {
        return;
    }
    // Lerp sky parameters each tick
    CloudCoverage = FMath::Lerp(CloudCoverage, Target->TargetCloudCoverage, AlphaStep);
    CloudDensity = FMath::Lerp(CloudDensity, Target->TargetCloudDensity, AlphaStep);
    ApplyCloudSettings();
    // Fog: query current from component then lerp to target
    const float CurrentFog = HeightFog ? HeightFog->FogDensity : 0.0f;
    const float NewFog = FMath::Lerp(CurrentFog, Target->TargetFogDensity, AlphaStep);
    ApplyFogSettings(NewFog);

    UpdateMPCFromBiome(Target, AlphaStep);
}

void ADAIUltraSkyActor::UpdateMPCFromBiome(const UDAIUltraSkyBiomeData *Biome, float LerpAlpha)
{
    if (!Biome || !Biome->MaterialParamCollection)
    {
        return;
    }
    if (UWorld *World = GetWorld())
    {
        UMaterialParameterCollectionInstance *Inst = World->GetParameterCollectionInstance(Biome->MaterialParamCollection);
        if (Inst)
        {
            // Scalars
            for (const TPair<FName, float> &Pair : Biome->MPCScalarOverrides)
            {
                float CurrentValue = 0.0f;
                Inst->GetScalarParameterValue(Pair.Key, CurrentValue);
                const float NewValue = FMath::Lerp(CurrentValue, Pair.Value, LerpAlpha);
                Inst->SetScalarParameterValue(Pair.Key, NewValue);
            }
            // Vectors
            for (const TPair<FName, FLinearColor> &Pair : Biome->MPCVectorOverrides)
            {
                FLinearColor CurrentValue = FLinearColor::Black;
                Inst->GetVectorParameterValue(Pair.Key, CurrentValue);
                const FLinearColor NewValue = FLinearColor(
                    FMath::Lerp(CurrentValue.R, Pair.Value.R, LerpAlpha),
                    FMath::Lerp(CurrentValue.G, Pair.Value.G, LerpAlpha),
                    FMath::Lerp(CurrentValue.B, Pair.Value.B, LerpAlpha),
                    FMath::Lerp(CurrentValue.A, Pair.Value.A, LerpAlpha));
                Inst->SetVectorParameterValue(Pair.Key, NewValue);
            }
        }
    }
}

void ADAIUltraSkyActor::UpdateConditionFX(const UDAIUltraSkyBiomeData *Biome)
{
    if (!Biome)
    {
        return;
    }

    // If CurrentCondition not set, prefer "Clear" as default
    FName Condition = CurrentCondition.IsNone() ? FName("Clear") : CurrentCondition;

    UNiagaraSystem *NewSystem = nullptr;
    if (const TObjectPtr<UNiagaraSystem> *FoundPtr = Biome->ConditionFX.Find(Condition))
    {
        if (FoundPtr->Get())
        {
            NewSystem = FoundPtr->Get();
        }
    }

    if (ActiveConditionFX)
    {
        if (!NewSystem)
        {
            ActiveConditionFX->DestroyComponent();
            ActiveConditionFX = nullptr;
        }
        else if (ActiveConditionFX->GetAsset() != NewSystem)
        {
            ActiveConditionFX->DestroyComponent();
            ActiveConditionFX = nullptr;
        }
    }

    if (!ActiveConditionFX && NewSystem)
    {
        ActiveConditionFX = UNiagaraFunctionLibrary::SpawnSystemAttached(NewSystem, RootComponent, NAME_None, FVector::ZeroVector, FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset, true);
    }
}

void ADAIUltraSkyActor::ForceApplyBiome(UDAIUltraSkyBiomeData *Biome, float BlendSeconds)
{
    if (!Biome)
    {
        return;
    }
    if (BlendSeconds <= 0.0f)
    {
        ApplyBiomeInstant(Biome);
    }
    else
    {
        TargetBiome = Biome;
        BiomeBlendDuration = BlendSeconds;
        BiomeBlendTimeRemaining = BlendSeconds;
    }
    // Biome change event will be published in Tick after state update; proactively update LastPublishedBiomeName to force event next tick.
    if (Biome && Biome->BiomeName != LastPublishedBiomeName)
    {
        LastPublishedBiomeName = NAME_None; // ensures publish next tick
    }
}

void ADAIUltraSkyActor::ForceCondition(FName ConditionName)
{
    if (CurrentCondition == ConditionName)
    {
        return; // no change
    }
    CurrentCondition = ConditionName;
    UpdateConditionFX(ActiveBiome ? ActiveBiome.Get() : (DefaultBiome ? DefaultBiome.Get() : nullptr));
    // Force immediate publish (don't wait for tick) for user-invoked changes
    UltraSky_Publish(GetWorld(), TAG_DAI_UltraSky_WeatherChanged, this);
    LastPublishedCondition = CurrentCondition;
}

void ADAIUltraSkyActor::EditorRecaptureSkylight()
{
    if (SkyLight)
    {
        SkyLight->RecaptureSky();
    }
}

void ADAIUltraSkyActor::EditorApplySelectedPreset()
{
    if (Presets.IsValidIndex(EditorSelectedPresetIndex) && Presets[EditorSelectedPresetIndex])
    {
        ForceApplyBiome(Presets[EditorSelectedPresetIndex], Presets[EditorSelectedPresetIndex]->SuggestedBlendSeconds);
    }
}

#if WITH_EDITOR
#include "UObject/Package.h"
#include "AssetRegistry/AssetRegistryModule.h"
// Material graph building for editor-created examples
#include "Materials/Material.h"
#include "Materials/MaterialExpressionTextureSampleParameter2D.h"
#include "Materials/MaterialExpressionTextureCoordinate.h"
#include "Materials/MaterialExpressionVectorParameter.h"
#include "Materials/MaterialExpressionComponentMask.h"
#include "Materials/MaterialExpressionSubtract.h"
#include "Materials/MaterialExpressionAppendVector.h"
#include "Materials/MaterialExpressionLength.h"
#include "Materials/MaterialExpressionMultiply.h"
#include "Materials/MaterialExpressionOneMinus.h"
#include "Materials/MaterialExpressionSmoothStep.h"
#include "Materials/MaterialExpressionMax.h"
#include "Materials/MaterialExpressionScalarParameter.h"
#include "DAIUltraSkyFootprintMask.h"
#include "DAIUltraSkyFootprintApplierComponent.h"
#include "EngineUtils.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

static UObject *DAIUltraSky_CreateAsset(UClass *AssetClass, const FString &PackagePath, const FString &AssetName)
{
    UPackage *Package = CreatePackage(*(PackagePath + TEXT("/") + AssetName));
    Package->FullyLoad();
    UObject *NewAsset = NewObject<UObject>(Package, AssetClass, *AssetName, RF_Public | RF_Standalone);
    if (NewAsset)
    {
        FAssetRegistryModule::AssetCreated(NewAsset);
        Package->MarkPackageDirty();
    }
    return NewAsset;
}

void ADAIUltraSkyActor::EditorCreateUltraSkySamples()
{
    // Create content under /Game/UltraSkySamples
    const FString BasePath = TEXT("/Game/UltraSkySamples");

    // 1) Create MPC with common params
    UMaterialParameterCollection *MPC = Cast<UMaterialParameterCollection>(DAIUltraSky_CreateAsset(UMaterialParameterCollection::StaticClass(), BasePath, TEXT("MPC_UltraSky_Global")));
    if (MPC)
    {
        auto AddScalar = [&](const FName Name)
        {
            FCollectionScalarParameter Scalar;
            Scalar.ParameterName = Name;
            Scalar.DefaultValue = 0.0f;
            MPC->ScalarParameters.Add(Scalar);
        };
        auto AddVector = [&](const FName Name)
        {
            FCollectionVectorParameter Vec;
            Vec.ParameterName = Name;
            Vec.DefaultValue = FLinearColor::Black;
            MPC->VectorParameters.Add(Vec);
        };
        AddScalar(FName("WindIntensity"));
        AddScalar(FName("WindDirectionDegrees"));
        AddScalar(FName("Wetness"));
        AddScalar(FName("Snow"));
        AddScalar(FName("WaterWaveScale"));
        AddVector(FName("SkyTint"));
        MPC->MarkPackageDirty();
    }

    // 2) Create two sample biomes
    UDAIUltraSkyBiomeData *BiomeClear = Cast<UDAIUltraSkyBiomeData>(DAIUltraSky_CreateAsset(UDAIUltraSkyBiomeData::StaticClass(), BasePath, TEXT("Biome_Clear")));
    if (BiomeClear)
    {
        BiomeClear->BiomeName = FName("Clear");
        BiomeClear->TargetCloudCoverage = 0.1f;
        BiomeClear->TargetCloudDensity = 0.2f;
        BiomeClear->TargetFogDensity = 0.002f;
        BiomeClear->MaterialParamCollection = MPC;
        BiomeClear->MPCScalarOverrides.Add(FName("Wetness"), 0.0f);
        BiomeClear->MPCScalarOverrides.Add(FName("Snow"), 0.0f);
        BiomeClear->MPCScalarOverrides.Add(FName("WaterWaveScale"), 0.3f);
        BiomeClear->SuggestedBlendSeconds = 2.0f;
        BiomeClear->MarkPackageDirty();
    }

    UDAIUltraSkyBiomeData *BiomeRain = Cast<UDAIUltraSkyBiomeData>(DAIUltraSky_CreateAsset(UDAIUltraSkyBiomeData::StaticClass(), BasePath, TEXT("Biome_Rain")));
    if (BiomeRain)
    {
        BiomeRain->BiomeName = FName("Rain");
        BiomeRain->TargetCloudCoverage = 0.85f;
        BiomeRain->TargetCloudDensity = 0.9f;
        BiomeRain->TargetFogDensity = 0.035f;
        BiomeRain->MaterialParamCollection = MPC;
        BiomeRain->MPCScalarOverrides.Add(FName("Wetness"), 1.0f);
        BiomeRain->MPCScalarOverrides.Add(FName("Snow"), 0.0f);
        BiomeRain->MPCScalarOverrides.Add(FName("WaterWaveScale"), 0.8f);
        BiomeRain->SuggestedBlendSeconds = 3.0f;
        BiomeRain->MarkPackageDirty();
    }

    // 3) Create a climate preset referencing both
    if (UDAIUltraSkyClimatePreset *NewClimatePreset = Cast<UDAIUltraSkyClimatePreset>(DAIUltraSky_CreateAsset(UDAIUltraSkyClimatePreset::StaticClass(), BasePath, TEXT("Climate_Temperate"))))
    {
        FUltraSkyWeatherChoice ClearSpring;
        ClearSpring.Biome = BiomeClear;
        ClearSpring.Condition = FName("Clear");
        ClearSpring.Weight = 3.0f;
        FUltraSkyWeatherChoice RainSpring;
        RainSpring.Biome = BiomeRain;
        RainSpring.Condition = FName("Rain");
        RainSpring.Weight = 1.0f;
        NewClimatePreset->SpringChoices = {ClearSpring, RainSpring};
        NewClimatePreset->SummerChoices = {ClearSpring, RainSpring};
        NewClimatePreset->AutumnChoices = {ClearSpring, RainSpring};
        NewClimatePreset->WinterChoices = {ClearSpring, RainSpring};
        NewClimatePreset->MarkPackageDirty();
    }

    // 4) Assign to this actor for convenience
    if (MPC)
    {
        GlobalWindMPC = MPC;
    }
    Presets.Reset();
    if (BiomeClear)
    {
        Presets.Add(BiomeClear);
    }
    if (BiomeRain)
    {
        Presets.Add(BiomeRain);
    }
}

// Stripped: dynamic editor material creation removed for runtime build stability.
static UMaterial *DAIUltraSky_CreateMaterial(const FString &, const FString &) { return nullptr; }

void ADAIUltraSkyActor::EditorCreateFootprintDemo()
{
#if WITH_EDITOR
    UE_LOG(LogDAIUltraSky, Log, TEXT("EditorCreateFootprintDemo stubbed (editor material generation removed)."));
#endif
}

void ADAIUltraSkyActor::EditorRemoveFootprintAppliers()
{
    // Stubbed out for minimal runtime build. Original implementation iterated world actors and removed components.
    UE_LOG(LogDAIUltraSky, Log, TEXT("EditorRemoveFootprintAppliers stubbed (no-op)."));
}
#endif // WITH_EDITOR

void ADAIUltraSkyActor::CheckSnowThresholdCrossings(float OldValue, float NewValue)
{
    if (SnowDepthThresholds.Num() == 0)
    {
        return;
    }
    // Sort once if unsorted
    bool bNeedsSort = false;
    for (int32 i = 1; i < SnowDepthThresholds.Num(); ++i)
    {
        if (SnowDepthThresholds[i] < SnowDepthThresholds[i - 1])
        {
            bNeedsSort = true;
            break;
        }
    }
    if (bNeedsSort)
    {
        SnowDepthThresholds.Sort();
    }
    if (FMath::IsNearlyEqual(OldValue, NewValue))
    {
        return;
    }
    const bool bUp = NewValue > OldValue;
    const float MinVal = FMath::Min(OldValue, NewValue);
    const float MaxVal = FMath::Max(OldValue, NewValue);
    for (float Thresh : SnowDepthThresholds)
    {
        if (Thresh > 1.f || Thresh < 0.f)
            continue;
        if (Thresh > MinVal && Thresh <= MaxVal)
        {
            // crossing; publish using NewValue magnitude sign-coded for direction
            UltraSky_Publish_SnowThreshold(GetWorld(), this, NewValue, bUp);
        }
    }
}

// ----------------- Console Commands -----------------
static FAutoConsoleCommand CCmd_UltraSky_Status(
    TEXT("UltraSky.Status"),
    TEXT("Print UltraSky service status (time, biome, condition, snow, wind)."),
    FConsoleCommandDelegate::CreateStatic([]()
                                          {
                                              if (!GEngine)
                                                  return;
                                              if (UWorld *World = GEngine->GetCurrentPlayWorld())
                                              {
                                                  if (UGameInstance *GI = World->GetGameInstance())
                                                  {
                                                      if (auto *Hub = DAI_HUB(GI))
                                                      {
                                                          if (TScriptInterface<IDAIUltraSkyService> Svc = Hub->GetService<IDAIUltraSkyService>())
                                                          {
                                                              UE_LOG(LogDAIUltraSky, Log, TEXT("[UltraSky] Time=%.2f Biome=%s Cond=%s Snow=%.2f Wet=%.2f Wind=%.2f Dir=%.1f"),
                                                                     Svc->GetTimeOfDay(), *Svc->GetActiveBiomeName().ToString(), *Svc->GetCurrentCondition().ToString(), Svc->GetSnowAccumulation(), Svc->GetWetness(), Svc->GetWindIntensity(), Svc->GetWindDirectionDegrees());
                                                          }
                                                          else
                                                          {
                                                              UE_LOG(LogDAIUltraSky, Warning, TEXT("[UltraSky] Service not registered."));
                                                          }
                                                      }
                                                  }
                                              } }),
    ECVF_Default);

static FAutoConsoleCommand CCmd_UltraSky_ForceCondition(
    TEXT("UltraSky.ForceCondition"),
    TEXT("UltraSky.ForceCondition <Name> : Force weather condition immediately."),
    FConsoleCommandWithArgsDelegate::CreateStatic([](const TArray<FString> &Args)
                                                  {
                                                      if (Args.Num() < 1)
                                                      {
                                                          UE_LOG(LogDAIUltraSky, Warning, TEXT("Usage: UltraSky.ForceCondition <Name>"));
                                                          return;
                                                      }
                                                      if (!GEngine)
                                                          return;
                                                      if (UWorld *World = GEngine->GetCurrentPlayWorld())
                                                      {
                                                          if (UGameInstance *GI = World->GetGameInstance())
                                                          {
                                                              if (auto *Hub = DAI_HUB(GI))
                                                              {
                                                                  if (TScriptInterface<IDAIUltraSkyService> Svc = Hub->GetService<IDAIUltraSkyService>())
                                                                  {
                                                                      if (ADAIUltraSkyActor *Actor = Cast<ADAIUltraSkyActor>(Svc.GetObject()))
                                                                      {
                                                                          Actor->ForceCondition(FName(*Args[0]));
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      } }),
    ECVF_Default);

static FAutoConsoleCommand CCmd_UltraSky_ForceBiome(
    TEXT("UltraSky.ForceBiome"),
    TEXT("UltraSky.ForceBiome <BiomeAssetName> : Force biome immediately (no blend)."),
    FConsoleCommandWithArgsDelegate::CreateStatic([](const TArray<FString> &Args)
                                                  {
                                                      if (Args.Num() < 1)
                                                      {
                                                          UE_LOG(LogDAIUltraSky, Warning, TEXT("Usage: UltraSky.ForceBiome <BiomeAssetName>"));
                                                          return;
                                                      }
                                                      if (!GEngine)
                                                          return;
                                                      if (UWorld *World = GEngine->GetCurrentPlayWorld())
                                                      {
                                                          if (UGameInstance *GI = World->GetGameInstance())
                                                          {
                                                              if (auto *Hub = DAI_HUB(GI))
                                                              {
                                                                  if (TScriptInterface<IDAIUltraSkyService> Svc = Hub->GetService<IDAIUltraSkyService>())
                                                                  {
                                                                      if (ADAIUltraSkyActor *Actor = Cast<ADAIUltraSkyActor>(Svc.GetObject()))
                                                                      {
                                                                          // Find biome by asset name among actor presets and default list
                                                                          FName TargetName(*Args[0]);
                                                                          if (Actor->DefaultBiome && Actor->DefaultBiome->GetFName() == TargetName)
                                                                          {
                                                                              Actor->ForceApplyBiome(Actor->DefaultBiome, 0.0f);
                                                                              return;
                                                                          }
                                                                          for (const TObjectPtr<UDAIUltraSkyBiomeData> &B : Actor->Presets)
                                                                          {
                                                                              if (B && B->GetFName() == TargetName)
                                                                              {
                                                                                  Actor->ForceApplyBiome(B.Get(), 0.0f);
                                                                                  return;
                                                                              }
                                                                          }
                                                                          UE_LOG(LogDAIUltraSky, Warning, TEXT("UltraSky.ForceBiome: Biome '%s' not found in actor presets/default."), *Args[0]);
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      } }),
    ECVF_Default);

static FAutoConsoleCommand CCmd_UltraSky_SetSnowThresholds(
    TEXT("UltraSky.SetSnowThresholds"),
    TEXT("UltraSky.SetSnowThresholds <v1> <v2> ... : Set snow depth thresholds (0..1)."),
    FConsoleCommandWithArgsDelegate::CreateStatic([](const TArray<FString> &Args)
                                                  {
                                                      if (!GEngine)
                                                          return;
                                                      if (UWorld *World = GEngine->GetCurrentPlayWorld())
                                                      {
                                                          if (UGameInstance *GI = World->GetGameInstance())
                                                          {
                                                              if (auto *Hub = DAI_HUB(GI))
                                                              {
                                                                  if (TScriptInterface<IDAIUltraSkyService> Svc = Hub->GetService<IDAIUltraSkyService>())
                                                                  {
                                                                      if (ADAIUltraSkyActor *Actor = Cast<ADAIUltraSkyActor>(Svc.GetObject()))
                                                                      {
                                                                          TArray<float> NewThresh;
                                                                          for (const FString &S : Args)
                                                                          {
                                                                              NewThresh.Add(FCString::Atof(*S));
                                                                          }
                                                                          Actor->SnowDepthThresholds = NewThresh;
                                                                          UE_LOG(LogDAIUltraSky, Log, TEXT("UltraSky: Set %d snow thresholds."), NewThresh.Num());
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      } }),
    ECVF_Default);

static FAutoConsoleCommand CCmd_UltraSky_PrintSnowThresholds(
    TEXT("UltraSky.PrintSnowThresholds"),
    TEXT("List configured snow depth thresholds."),
    FConsoleCommandDelegate::CreateStatic([]()
                                          {
                                              if (!GEngine)
                                                  return;
                                              if (UWorld *World = GEngine->GetCurrentPlayWorld())
                                              {
                                                  if (UGameInstance *GI = World->GetGameInstance())
                                                  {
                                                      if (auto *Hub = DAI_HUB(GI))
                                                      {
                                                          if (TScriptInterface<IDAIUltraSkyService> Svc = Hub->GetService<IDAIUltraSkyService>())
                                                          {
                                                              if (ADAIUltraSkyActor *Actor = Cast<ADAIUltraSkyActor>(Svc.GetObject()))
                                                              {
                                                                  FString List;
                                                                  for (int32 i = 0; i < Actor->SnowDepthThresholds.Num(); ++i)
                                                                  {
                                                                      List += FString::Printf(TEXT("%.3f"), Actor->SnowDepthThresholds[i]);
                                                                      if (i + 1 < Actor->SnowDepthThresholds.Num())
                                                                          List += TEXT(", ");
                                                                  }
                                                                  UE_LOG(LogDAIUltraSky, Log, TEXT("UltraSky: Snow Thresholds = [%s]"), *List);
                                                              }
                                                          }
                                                      }
                                                  }
                                              } }),
    ECVF_Default);

static FAutoConsoleCommand CCmd_UltraSky_DumpConfig(
    TEXT("UltraSky.DumpConfig"),
    TEXT("Dump key UltraSky configuration values."),
    FConsoleCommandDelegate::CreateStatic([]()
                                          {
                                              if (!GEngine)
                                                  return;
                                              if (UWorld *World = GEngine->GetCurrentPlayWorld())
                                              {
                                                  if (UGameInstance *GI = World->GetGameInstance())
                                                  {
                                                      if (auto *Hub = DAI_HUB(GI))
                                                      {
                                                          if (TScriptInterface<IDAIUltraSkyService> Svc = Hub->GetService<IDAIUltraSkyService>())
                                                          {
                                                              if (ADAIUltraSkyActor *Actor = Cast<ADAIUltraSkyActor>(Svc.GetObject()))
                                                              {
                                                                  UE_LOG(LogDAIUltraSky, Log, TEXT("UltraSky Config: DayLength=%.1f AutoRun=%d SkyRecapture=%.1f WindBase=%.2f Gust=%.2f SnowRates(Add=%.3f Melt=%.3f) WetRates(Add=%.3f Dry=%.3f)"),
                                                                         Actor->DayLengthSeconds,
                                                                         Actor->bAutoRunDayNight ? 1 : 0,
                                                                         Actor->SkyLightRecaptureInterval,
                                                                         Actor->WindBaseIntensity,
                                                                         Actor->WindGustStrength,
                                                                         Actor->SnowAccumulationRate,
                                                                         Actor->SnowMeltRate,
                                                                         Actor->WetnessAccumulationRateRain,
                                                                         Actor->WetnessDryRate);
                                                              }
                                                          }
                                                      }
                                                  }
                                              } }),
    ECVF_Default);
