#include "DAIUltraSkyBlueprintLibrary.h"
#include "DAIUltraSkyActor.h"
#include "EngineUtils.h"
#include "Engine/World.h"
#include "Engine/DirectionalLight.h"
#include "Engine/SkyAtmosphere.h"
#include "Engine/ExponentialHeightFog.h"
#include "Engine/VolumetricCloud.h"
#include "UObject/UnrealType.h"

static ADAIUltraSkyActor *GetUltraSkyActor(const UObject *WorldContext)
{
    if (!WorldContext)
        return nullptr;
    if (UWorld *World = WorldContext->GetWorld())
    {
        for (TActorIterator<ADAIUltraSkyActor> It(World); It; ++It)
        {
            return *It;
        }
    }
    return nullptr;
}

void UDAIUltraSkyBlueprintLibrary::DAI_SetUltraSkyTime(ADAIUltraSkyActor *UltraSky, float TimeOfDay)
{
    if (UltraSky)
    {
        UltraSky->SetTimeOfDay(TimeOfDay);
    }
}

void UDAIUltraSkyBlueprintLibrary::DAI_SetUltraSkyDayLength(ADAIUltraSkyActor *UltraSky, float DayLengthSeconds)
{
    if (UltraSky)
    {
        UltraSky->SetDayLengthSeconds(DayLengthSeconds);
    }
}

ADAIUltraSkyActor *UDAIUltraSkyBlueprintLibrary::DAI_GetUltraSkyActorFromService(const UObject *WorldContextObject)
{
    return GetUltraSkyActor(WorldContextObject);
}

float UDAIUltraSkyBlueprintLibrary::DAI_GetUltraSkyTimeOfDay(const UObject *WorldContextObject)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        return Actor->GetTimeOfDay();
    }
    return 0.f;
}

FName UDAIUltraSkyBlueprintLibrary::DAI_GetUltraSkyCondition(const UObject *WorldContextObject)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        return Actor->GetCurrentCondition();
    }
    return NAME_None;
}

float UDAIUltraSkyBlueprintLibrary::DAI_GetUltraSkySnowAccum(const UObject *WorldContextObject)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        return Actor->GetSnowAccumulation();
    }
    return 0.f;
}

float UDAIUltraSkyBlueprintLibrary::DAI_GetUltraSkyWindIntensity(const UObject *WorldContextObject)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        return Actor->GetWindIntensity();
    }
    return 0.f;
}

void UDAIUltraSkyBlueprintLibrary::DAI_ForceUltraSkyCondition(const UObject *WorldContextObject, FName ConditionName)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        Actor->ForceCondition(ConditionName);
    }
}

float UDAIUltraSkyBlueprintLibrary::DAI_GetUltraSkyWetness(const UObject *WorldContextObject)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        return Actor->GetWetness();
    }
    return 0.f;
}

FName UDAIUltraSkyBlueprintLibrary::DAI_GetUltraSkyBiome(const UObject *WorldContextObject)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        return Actor->GetActiveBiomeName();
    }
    return NAME_None;
}

bool UDAIUltraSkyBlueprintLibrary::DAI_GetUltraSkyIsPrecipitating(const UObject *WorldContextObject)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        return Actor->IsPrecipitating();
    }
    return false;
}

bool UDAIUltraSkyBlueprintLibrary::DAI_GetUltraSkyIsStorming(const UObject *WorldContextObject)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        return Actor->IsStorming();
    }
    return false;
}

float UDAIUltraSkyBlueprintLibrary::DAI_GetUltraSkyWindDirection(const UObject *WorldContextObject)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        return Actor->GetWindDirectionDegrees();
    }
    return 0.f;
}

void UDAIUltraSkyBlueprintLibrary::DAI_SetUltraSkySnowThresholds(const UObject *WorldContextObject, const TArray<float> &Thresholds)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        Actor->SnowDepthThresholds = Thresholds;
    }
}

bool UDAIUltraSkyBlueprintLibrary::DAI_ForceUltraSkyBiomeByName(const UObject *WorldContextObject, FName BiomeAssetName, float BlendSeconds)
{
    if (ADAIUltraSkyActor *Actor = GetUltraSkyActor(WorldContextObject))
    {
        if (Actor->DefaultBiome && Actor->DefaultBiome->GetFName() == BiomeAssetName)
        {
            Actor->ForceApplyBiome(Actor->DefaultBiome, BlendSeconds);
            return true;
        }
        for (const TObjectPtr<UDAIUltraSkyBiomeData> &B : Actor->Presets)
        {
            if (B && B->GetFName() == BiomeAssetName)
            {
                Actor->ForceApplyBiome(B.Get(), BlendSeconds);
                return true;
            }
        }
    }
    return false;
}

void UDAIUltraSkyBlueprintLibrary::DAI_SpawnDefaultSky(const UObject *WorldContextObject)
{
    if (!WorldContextObject)
    {
        return;
    }
    UWorld *World = WorldContextObject->GetWorld();
    if (!World)
    {
        return;
    }

    FActorSpawnParameters Params;
    Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    ADirectionalLight *DirLight = World->SpawnActor<ADirectionalLight>(FVector::ZeroVector, FRotator::ZeroRotator, Params);
    World->SpawnActor<AExponentialHeightFog>(FVector::ZeroVector, FRotator::ZeroRotator, Params);
    World->SpawnActor<ASkyAtmosphere>(FVector::ZeroVector, FRotator::ZeroRotator, Params);
    World->SpawnActor<AVolumetricCloud>(FVector::ZeroVector, FRotator::ZeroRotator, Params);

    UClass *SkySphereClass = LoadClass<AActor>(nullptr, TEXT("/Engine/EngineSky/BP_Sky_Sphere.BP_Sky_Sphere_C"));
    if (SkySphereClass)
    {
        AActor *SkySphere = World->SpawnActor<AActor>(SkySphereClass, FTransform::Identity, Params);
        if (SkySphere && DirLight)
        {
            if (FObjectProperty *DirProp = FindFProperty<FObjectProperty>(SkySphere->GetClass(), TEXT("DirectionalLightActor")))
            {
                DirProp->SetObjectPropertyValue_InContainer(SkySphere, DirLight);
            }
            if (UFunction *RefreshFunc = SkySphere->FindFunction(TEXT("RefreshMaterial")))
            {
                SkySphere->ProcessEvent(RefreshFunc, nullptr);
            }
        }
    }
}
