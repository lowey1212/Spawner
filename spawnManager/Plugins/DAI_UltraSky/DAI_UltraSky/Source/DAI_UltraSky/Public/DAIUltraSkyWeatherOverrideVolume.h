#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "DAIUltraSkyWeatherOverrideVolume.generated.h"

class UDAIUltraSkyBiomeData;

UENUM(BlueprintType)
enum class EDAIUltraSkyOverrideMode : uint8
{
    Disabled UMETA(DisplayName = "Disabled"),
    SinglePreset UMETA(DisplayName = "Single Preset"),
};

UCLASS(BlueprintType)
class DAI_ULTRASKY_API ADAIUltraSkyWeatherOverrideVolume : public AVolume
{
    GENERATED_BODY()
public:
    ADAIUltraSkyWeatherOverrideVolume();

    // Enable/disable effect of this volume
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|Override", meta = (ToolTip = "Override mode; Disabled ignores volume, SinglePreset applies specified biome/condition."))
    EDAIUltraSkyOverrideMode Mode = EDAIUltraSkyOverrideMode::SinglePreset;

    // Priority: higher wins when overlapping
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|Override", meta = (ToolTip = "Priority when multiple override volumes overlap (higher wins)."))
    int32 Priority = 0;

    // When Mode == SinglePreset
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DAI_UltraSky|Override", meta = (ToolTip = "Biome to force while inside (used when Mode=SinglePreset)."))
    TObjectPtr<UDAIUltraSkyBiomeData> OverrideBiome;

    // Optional condition override applied while inside this volume (e.g., Rain, Snow)
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DAI_UltraSky|Override", meta = (ToolTip = "Weather condition name to force while inside (optional)."))
    FName OverrideCondition;

    // Blend seconds used when entering this volume
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DAI_UltraSky|Override", meta = (ClampMin = "0.0", ToolTip = "Seconds to blend in override on volume enter."))
    float EnterBlendSeconds = 1.5f;

    // Blend seconds used when leaving this volume
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DAI_UltraSky|Override", meta = (ClampMin = "0.0", ToolTip = "Seconds to blend out override on volume exit."))
    float ExitBlendSeconds = 1.5f;

    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    static void GetAllVolumes(TArray<ADAIUltraSkyWeatherOverrideVolume *> &OutVolumes);

private:
    static TWeakObjectPtr<UWorld> RegistryWorld;
    static TArray<TWeakObjectPtr<ADAIUltraSkyWeatherOverrideVolume>> Registry;
};
