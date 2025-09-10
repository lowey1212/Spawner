#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "DAIUltraSkyBiomeVolume.generated.h"

class UDAIUltraSkyBiomeData;

UCLASS(BlueprintType)
class DAI_ULTRASKY_API ADAIUltraSkyBiomeVolume : public AVolume
{
    GENERATED_BODY()
public:
    ADAIUltraSkyBiomeVolume();

    // Assign the biome definition this volume represents
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DAI_UltraSky|Biome", meta = (ToolTip = "Biome data asset applied while actor inside volume."))
    TObjectPtr<UDAIUltraSkyBiomeData> Biome;

    // Priority: higher takes precedence when volumes overlap
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DAI_UltraSky|Biome", meta = (ClampMin = "0", ToolTip = "Higher priority wins when volumes overlap."))
    int32 Priority = 0;

    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    static void GetAllVolumes(TArray<ADAIUltraSkyBiomeVolume *> &OutVolumes);

private:
    static TWeakObjectPtr<UWorld> RegistryWorld;
    static TArray<TWeakObjectPtr<ADAIUltraSkyBiomeVolume>> Registry;
};
