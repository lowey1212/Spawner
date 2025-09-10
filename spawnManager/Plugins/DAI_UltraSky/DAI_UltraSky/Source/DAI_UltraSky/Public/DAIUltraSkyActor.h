// Copyright (c) DAI
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/DAIUltraSkyService.h"
#include "Services/DAI_WeatherService.h"
#include "DAIUltraSkyActor.generated.h"

class USceneComponent;
class UDirectionalLightComponent;
class USkyLightComponent;
class USkyAtmosphereComponent;
class UVolumetricCloudComponent;
class UExponentialHeightFogComponent;
class UMaterialParameterCollection;
class UMaterialParameterCollectionInstance;
class UNiagaraSystem;
class UNiagaraComponent;
class UDAIUltraSkyBiomeData;
class ADAIUltraSkyBiomeVolume;
class ADAIUltraSkyWeatherOverrideVolume;
class ADAIUltraSkyRadialStorm;
class UWindDirectionalSourceComponent;
class UDAIUltraSkyClimatePreset;
class UAbilitySystemComponent;
class UDAIUltraSkyAttributeSet;
class UDAIUltraSkyBiomeData;

UCLASS(BlueprintType, Blueprintable)
class DAI_ULTRASKY_API ADAIUltraSkyActor : public AActor, public IDAIUltraSkyService, public IDAI_WeatherService
{
    GENERATED_BODY()

public:
    ADAIUltraSkyActor();

    virtual void OnConstruction(const FTransform &Transform) override;
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;

    // Base setup
    UPROPERTY(VisibleAnywhere, Category = "UltraSky", meta = (ToolTip = "Root scene component for UltraSky actor."))
    TObjectPtr<USceneComponent> Root;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UltraSky|Components", meta = (ToolTip = "Primary directional light representing the sun."))
    TObjectPtr<UDirectionalLightComponent> SunLight;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UltraSky|Components", meta = (ToolTip = "SkyLight capturing ambient lighting."))
    TObjectPtr<USkyLightComponent> SkyLight;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UltraSky|Components", meta = (ToolTip = "SkyAtmosphere component controlling Rayleigh / Mie scattering."))
    TObjectPtr<USkyAtmosphereComponent> Atmosphere;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UltraSky|Components", meta = (ToolTip = "Volumetric clouds component for dynamic cloud rendering."))
    TObjectPtr<UVolumetricCloudComponent> VolumetricClouds;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UltraSky|Components", meta = (ToolTip = "Height fog component used for atmospheric ground haze."))
    TObjectPtr<UExponentialHeightFogComponent> HeightFog;

    // Settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Time", meta = (ToolTip = "Automatically advance time-of-day each tick using DayLengthSeconds."))
    bool bAutoRunDayNight = true;

    // Length of a day in seconds of real time (24h cycle)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Time", meta = (ClampMin = "1.0", ToolTip = "Real-time seconds for a full 24h cycle."))
    float DayLengthSeconds = 600.0f; // 10 minutes per day

    // Current time of day [0..24)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Time", meta = (ClampMin = "0.0", ClampMax = "24.0", ToolTip = "Current time of day in hours [0,24)."))
    float TimeOfDay = 8.0f; // 8 AM by default

    // SkyLight recapture cadence
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Performance", meta = (ClampMin = "0.1", ToolTip = "Seconds between SkyLight recaptures (performance tradeoff)."))
    float SkyLightRecaptureInterval = 5.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Atmosphere", meta = (ClampMin = "0.0", ToolTip = "Global multiplier for Rayleigh scattering intensity."))
    float RayleighScatteringScale = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Atmosphere", meta = (ClampMin = "0.0", ToolTip = "Global multiplier for Mie scattering intensity."))
    float MieScatteringScale = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Clouds", meta = (ClampMin = "0.0", ClampMax = "1.0", ToolTip = "Target normalized cloud coverage (0 clear, 1 overcast)."))
    float CloudCoverage = 0.3f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Clouds", meta = (ClampMin = "0.0", ClampMax = "1.0", ToolTip = "Target normalized volumetric cloud density."))
    float CloudDensity = 0.6f;

    // Weather/biome system
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Weather", meta = (ToolTip = "Enable biome volume system to drive weather/visual parameters."))
    bool bUseBiomeVolumes = true;

    // If set, weather is evaluated around this anchor (e.g., player pawn)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Weather", meta = (ToolTip = "Actor used as spatial anchor for biome & weather evaluation (e.g., player)."))
    TObjectPtr<AActor> WeatherAnchor = nullptr;

    // How frequently to re-evaluate biome volumes (seconds)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Weather", meta = (ClampMin = "0.1", ToolTip = "Seconds between biome volume overlap evaluations."))
    float BiomeCheckInterval = 1.0f;

    // Default biome if none overlaps
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UltraSky|Weather", meta = (ToolTip = "Fallback biome used if no volume applies."))
    TObjectPtr<UDAIUltraSkyBiomeData> DefaultBiome;

    // Current weather condition name (e.g., "Clear", "Rain"). If empty, auto from biome.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Weather", meta = (ToolTip = "Manually forced weather condition name; leave empty for biome-driven."))
    FName CurrentCondition;

    UFUNCTION(BlueprintCallable, Category = "UltraSky|Weather")
    void ForceApplyBiome(UDAIUltraSkyBiomeData *Biome, float BlendSeconds = 0.0f);

    UFUNCTION(BlueprintCallable, Category = "UltraSky|Weather")
    void ForceCondition(FName ConditionName);

    // Editor helpers
    UFUNCTION(CallInEditor, Category = "UltraSky|Editor")
    void EditorRecaptureSkylight();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Editor", meta = (ToolTip = "Biome presets list for quick editing / preview."))
    TArray<TObjectPtr<UDAIUltraSkyBiomeData>> Presets;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Editor", meta = (ToolTip = "Index into Presets array selected for apply operations."))
    int32 EditorSelectedPresetIndex = 0;

    UFUNCTION(CallInEditor, Category = "UltraSky|Editor")
    void EditorApplySelectedPreset();

#if WITH_EDITOR
    UFUNCTION(CallInEditor, Category = "UltraSky|Editor")
    void EditorCreateUltraSkySamples();

    UFUNCTION(CallInEditor, Category = "UltraSky|Editor")
    void EditorCreateFootprintDemo();

    UFUNCTION(CallInEditor, Category = "UltraSky|Editor")
    void EditorRemoveFootprintAppliers();
#endif
    // Blueprint utilities
    UFUNCTION(BlueprintCallable, Category = "UltraSky|Time")
    void SetTimeOfDay(float NewTimeOfDay);

    UFUNCTION(BlueprintCallable, Category = "UltraSky|Time")
    void SetDayLengthSeconds(float NewLength);

    // IDAIUltraSkyService implementation
    // Consolidated overrides (both services use same signatures except WeatherService adds GetTimeOfDayHours)
    virtual float GetTimeOfDay() const override { return TimeOfDay; }
    virtual FName GetActiveBiomeName() const override;
    virtual FName GetCurrentCondition() const override { return CurrentCondition; }
    virtual float GetSnowAccumulation() const override { return SnowAccumulation; }
    virtual float GetWetness() const override { return Wetness; }
    virtual bool IsPrecipitating() const override { return bIsPrecipitating; }
    virtual bool IsStorming() const override { return bIsStorming; }
    virtual float GetWindIntensity() const override { return CachedWindIntensity; }
    virtual float GetWindDirectionDegrees() const override { return WindDirectionDegrees; }
    virtual float GetTimeOfDayHours() const override { return TimeOfDay; }
    // CurrentCondition, Wetness, SnowAccumulation already covered by same-named methods

protected:
    void UpdateSunRotationFromTime();
    void ApplyAtmosphereSettings();
    void ApplyCloudSettings();
    void ApplyFogSettings(float FogDensity);
    void MaybeRecaptureSkyLight(float DeltaSeconds);
    void TickBiomeSystem(float DeltaSeconds);
    void EvaluateVolumesAndSetTargetBiome();
    void EvaluateOverrideVolumes(const FVector &AnchorLoc, /*out*/ UDAIUltraSkyBiomeData *&OutBiome, /*out*/ FName &OutCondition, /*out*/ float &OutBlendSeconds, /*out*/ int32 &OutPriority);
    void EvaluateRadialStorms(const FVector &AnchorLoc, /*out*/ UDAIUltraSkyBiomeData *&OutBiome, /*out*/ FName &OutCondition, /*out*/ float &OutBlendSeconds, /*out*/ int32 &OutPriority);
    void ApplyBiomeInstant(const UDAIUltraSkyBiomeData *Biome);
    void BlendBiomeTowards(const UDAIUltraSkyBiomeData *Target, float AlphaStep);
    void UpdateMPCFromBiome(const UDAIUltraSkyBiomeData *Biome, float LerpAlpha);
    void UpdateConditionFX(const UDAIUltraSkyBiomeData *Biome);

    // Wind gusts
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Wind", meta = (ToolTip = "Enable spawning & updating a wind directional source actor."))
    bool bEnableWindDirectionalSource = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Wind", meta = (ClampMin = "0.0", ToolTip = "Baseline wind intensity (0..1) before gust modulation."))
    float WindBaseIntensity = 0.5f; // 0..1 baseline

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Wind", meta = (ClampMin = "0.0", ToolTip = "Wind gust amplitude added to base (0..1)."))
    float WindGustStrength = 0.5f; // added on top of base via noise (0..1)

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Wind", meta = (ClampMin = "0.01", ToolTip = "Gust noise speed (larger = faster variation)."))
    float WindGustSpeed = 0.1f; // noise rate

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Wind", meta = (ClampMin = "0.0", ClampMax = "360.0", ToolTip = "Wind direction in degrees (0 = +X)."))
    float WindDirectionDegrees = 0.0f;

    // Optional MPC to publish wind parameters
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Wind|MPC", meta = (ToolTip = "Optional material parameter collection to broadcast wind params."))
    TObjectPtr<UMaterialParameterCollection> GlobalWindMPC;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Wind|MPC", meta = (ToolTip = "Scalar parameter name for wind intensity in MPC."))
    FName MPCParam_WindIntensity = FName("WindIntensity");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Wind|MPC", meta = (ToolTip = "Scalar parameter name for wind direction (degrees) in MPC."))
    FName MPCParam_WindDirectionDegrees = FName("WindDirectionDegrees");

    // Snow/rain integration (auto switch and accumulation)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Snow", meta = (ToolTip = "Auto switch to snow accumulation logic based on temperature/precipitation."))
    bool bAutoSnowFromTemperature = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Snow", meta = (ToolTip = "Temperature (Celsius) threshold at/under which precipitation becomes snow."))
    float SnowTempThresholdC = 0.5f; // <= becomes snow

    // 0..1 snow depth proxy for materials and gameplay
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Snow", meta = (ClampMin = "0.0", ClampMax = "1.0", ToolTip = "Current snow depth proxy (0 none, 1 max)."))
    float SnowAccumulation = 0.0f;

    // per-second rates
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Snow", meta = (ClampMin = "0.0", ToolTip = "Rate per second snow depth increases during snowfall."))
    float SnowAccumulationRate = 0.02f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Snow", meta = (ClampMin = "0.0", ToolTip = "Rate per second snow depth melts when conditions allow."))
    float SnowMeltRate = 0.01f;

    // Wetness proxy 0..1 published to MPC
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Snow", meta = (ClampMin = "0.0", ClampMax = "1.0", ToolTip = "Surface wetness proxy (0 dry, 1 soaked)."))
    float Wetness = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Snow", meta = (ClampMin = "0.0", ToolTip = "Wetness accumulation rate while raining (per second)."))
    float WetnessAccumulationRateRain = 0.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Snow", meta = (ClampMin = "0.0", ToolTip = "Drying rate per second when not precipitating."))
    float WetnessDryRate = 0.1f;

    // If true, query TemperatureC/Precipitation from GAS on the WeatherAnchor (UDAIUltraSkyAttributeSet)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Snow", meta = (ToolTip = "Query GAS attribute set for TemperatureC / Precipitation instead of local simulation."))
    bool bUseGASAttributesForSnowLogic = true;

    // Footprints
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Snow", meta = (ClampMin = "0.0", ClampMax = "1.0", ToolTip = "Minimum snow accumulation required before footprints allowed."))
    float FootprintSnowThreshold = 0.25f;

    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFootprintStamped, FVector, Location, float, Strength);

    UPROPERTY(BlueprintAssignable, Category = "UltraSky|Snow", meta = (ToolTip = "Event fired when a footprint is stamped (location & strength)."))
    FOnFootprintStamped OnFootprintStamped;

    UFUNCTION(BlueprintCallable, Category = "UltraSky|Snow")
    bool IsSnowDeepEnoughForFootprints() const { return SnowAccumulation >= FootprintSnowThreshold; }

    UFUNCTION(BlueprintCallable, Category = "UltraSky|Snow")
    void StampFootprintAtLocation(FVector WorldLocation, float Strength = 1.0f);

    // Random weather driver
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|RandomWeather", meta = (ToolTip = "Enable stochastic weather selection driven by climate preset."))
    bool bEnableRandomWeather = false;

    // Current season 0..4 (0=Spring,1=Summer,2=Autumn,3=Winter; blends allowed)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|RandomWeather", meta = (ClampMin = "0.0", ClampMax = "4.0", ToolTip = "Current season index (0 Spring..3 Winter). Fractional values allow blending."))
    float Season = 0.0f;

    // If set, choices come from here; otherwise random weather is disabled
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|RandomWeather", meta = (ToolTip = "Climate preset providing weighted biome/condition choices per season."))
    TObjectPtr<UDAIUltraSkyClimatePreset> ClimatePreset;

    // Base interval seconds between weather picks; can be randomized +/- 25%
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|RandomWeather", meta = (ClampMin = "5.0", ToolTip = "Base seconds between weather picks (actual jittered ±25%)."))
    float RandomWeatherBaseInterval = 120.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|RandomWeather", meta = (ToolTip = "Seed for deterministic random weather (0 = non-deterministic)."))
    int32 RandomSeed = 1337;

    // Threshold crossings for snow depth will trigger hub events (TAG_DAI_UltraSky_SnowDepthThresholdCrossed).
    // Positive Strength in event = upward crossing; negative Strength = downward crossing. Strength magnitude is current SnowAccumulation after crossing.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UltraSky|Snow", meta = (ToolTip = "Normalized snow depth thresholds (0..1) that fire events when crossed up or down."))
    TArray<float> SnowDepthThresholds;

private:
    float SkyLightTimeAccumulator = 0.0f;

    // Biome state
    UPROPERTY(Transient, meta = (ToolTip = "Active biome currently driving visuals."))
    TObjectPtr<UDAIUltraSkyBiomeData> ActiveBiome;

    UPROPERTY(Transient, meta = (ToolTip = "Target biome being blended towards."))
    TObjectPtr<UDAIUltraSkyBiomeData> TargetBiome;

    float BiomeBlendTimeRemaining = 0.0f;
    // Service-derived state flags
    bool bIsPrecipitating = false;
    bool bIsStorming = false;
    float CachedWindIntensity = 0.0f;
    float TimeOfDayEventAccumulator = 0.0f;
    float WindEventAccumulator = 0.0f;
    float LastWindEventIntensity = -1.f;
    float BiomeBlendDuration = 0.0f;
    float LastSnowAccumulation = 0.0f;
    FName LastPublishedCondition;
    FName LastPublishedBiomeName;

    // Cached FX component for current condition
    UPROPERTY(Transient, meta = (ToolTip = "Active Niagara component for current weather condition FX."))
    TObjectPtr<UNiagaraComponent> ActiveConditionFX;

    float BiomeCheckAccumulator = 0.0f;

    // Wind state
    UPROPERTY(Transient, meta = (ToolTip = "Spawned wind directional source component (if enabled)."))
    TObjectPtr<UWindDirectionalSourceComponent> WindSource;
    float WindNoiseTime = 0.0f;

    // Helpers
    float QueryTemperatureC() const;
    float QueryPrecipitation01() const;
    void CheckSnowThresholdCrossings(float OldValue, float NewValue);
};
