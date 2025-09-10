#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "DAIUltraSkyBlueprintLibrary.generated.h"

class ADAIUltraSkyActor;
class UWorld;
class UDAIUltraSkyBiomeData;
class UDAIUltraSkyClimatePreset;
class UDAIUltraSkyFootprintApplierComponent;
class UDAIUltraSkyFootprintMask;
class UDAIUltraSkyWeatherOverrideVolume;
class UDAIUltraSkyRadialStorm;
class UDAIUltraSkyTornado;
class UDAIUltraSkyLightningController;
class UDAIUltraSkyAttributeSet;
class UMaterialParameterCollectionInstance;

UCLASS()
class DAI_ULTRASKY_API UDAIUltraSkyBlueprintLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "UltraSky")
    static void SetUltraSkyTime(ADAIUltraSkyActor *UltraSky, float TimeOfDay);

    UFUNCTION(BlueprintCallable, Category = "UltraSky")
    static void SetUltraSkyDayLength(ADAIUltraSkyActor *UltraSky, float DayLengthSeconds);

    // Find the first Ultra Sky actor in the world.
    UFUNCTION(BlueprintPure, Category = "UltraSky|Service")
    static ADAIUltraSkyActor *GetUltraSkyActorFromService(const UObject *WorldContextObject);

    UFUNCTION(BlueprintPure, Category = "UltraSky|Service")
    static float GetUltraSkyTimeOfDay(const UObject *WorldContextObject);

    UFUNCTION(BlueprintPure, Category = "UltraSky|Service")
    static FName GetUltraSkyCondition(const UObject *WorldContextObject);

    UFUNCTION(BlueprintPure, Category = "UltraSky|Service")
    static float GetUltraSkySnowAccum(const UObject *WorldContextObject);

    UFUNCTION(BlueprintPure, Category = "UltraSky|Service")
    static float GetUltraSkyWindIntensity(const UObject *WorldContextObject);

    UFUNCTION(BlueprintCallable, Category = "UltraSky|Service")
    static void ForceUltraSkyCondition(const UObject *WorldContextObject, FName ConditionName);

    UFUNCTION(BlueprintPure, Category = "UltraSky|Service")
    static float GetUltraSkyWetness(const UObject *WorldContextObject);

    UFUNCTION(BlueprintPure, Category = "UltraSky|Service")
    static FName GetUltraSkyBiome(const UObject *WorldContextObject);

    UFUNCTION(BlueprintPure, Category = "UltraSky|Service")
    static bool GetUltraSkyIsPrecipitating(const UObject *WorldContextObject);

    UFUNCTION(BlueprintPure, Category = "UltraSky|Service")
    static bool GetUltraSkyIsStorming(const UObject *WorldContextObject);

    UFUNCTION(BlueprintPure, Category = "UltraSky|Service")
    static float GetUltraSkyWindDirection(const UObject *WorldContextObject);

    UFUNCTION(BlueprintCallable, Category = "UltraSky|Service")
    static void SetUltraSkySnowThresholds(const UObject *WorldContextObject, const TArray<float> &Thresholds);

    UFUNCTION(BlueprintCallable, Category = "UltraSky|Service")
    static bool ForceUltraSkyBiomeByName(const UObject *WorldContextObject, FName BiomeAssetName, float BlendSeconds = 0.0f);
};
