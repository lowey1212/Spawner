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

UCLASS(BlueprintType)
class DAI_ULTRASKY_API UDAIUltraSkyBlueprintLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "DAI_UltraSky")
    static void DAI_SetUltraSkyTime(ADAIUltraSkyActor *UltraSky, float TimeOfDay);

    UFUNCTION(BlueprintCallable, Category = "DAI_UltraSky")
    static void DAI_SetUltraSkyDayLength(ADAIUltraSkyActor *UltraSky, float DayLengthSeconds);

    // Find the first Ultra Sky actor in the world.
    UFUNCTION(BlueprintPure, Category = "DAI_UltraSky|Service")
    static ADAIUltraSkyActor *DAI_GetUltraSkyActorFromService(const UObject *WorldContextObject);

    UFUNCTION(BlueprintPure, Category = "DAI_UltraSky|Service")
    static float DAI_GetUltraSkyTimeOfDay(const UObject *WorldContextObject);

    UFUNCTION(BlueprintPure, Category = "DAI_UltraSky|Service")
    static FName DAI_GetUltraSkyCondition(const UObject *WorldContextObject);

    UFUNCTION(BlueprintPure, Category = "DAI_UltraSky|Service")
    static float DAI_GetUltraSkySnowAccum(const UObject *WorldContextObject);

    UFUNCTION(BlueprintPure, Category = "DAI_UltraSky|Service")
    static float DAI_GetUltraSkyWindIntensity(const UObject *WorldContextObject);

    UFUNCTION(BlueprintCallable, Category = "DAI_UltraSky|Service")
    static void DAI_ForceUltraSkyCondition(const UObject *WorldContextObject, FName ConditionName);

    UFUNCTION(BlueprintPure, Category = "DAI_UltraSky|Service")
    static float DAI_GetUltraSkyWetness(const UObject *WorldContextObject);

    UFUNCTION(BlueprintPure, Category = "DAI_UltraSky|Service")
    static FName DAI_GetUltraSkyBiome(const UObject *WorldContextObject);

    UFUNCTION(BlueprintPure, Category = "DAI_UltraSky|Service")
    static bool DAI_GetUltraSkyIsPrecipitating(const UObject *WorldContextObject);

    UFUNCTION(BlueprintPure, Category = "DAI_UltraSky|Service")
    static bool DAI_GetUltraSkyIsStorming(const UObject *WorldContextObject);

    UFUNCTION(BlueprintPure, Category = "DAI_UltraSky|Service")
    static float DAI_GetUltraSkyWindDirection(const UObject *WorldContextObject);

    UFUNCTION(BlueprintCallable, Category = "DAI_UltraSky|Service")
    static void DAI_SetUltraSkySnowThresholds(const UObject *WorldContextObject, const TArray<float> &Thresholds);

    UFUNCTION(BlueprintCallable, Category = "DAI_UltraSky|Service")
    static bool DAI_ForceUltraSkyBiomeByName(const UObject *WorldContextObject, FName BiomeAssetName, float BlendSeconds = 0.0f);
};
