#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DAIUltraSkyRadialStorm.generated.h"

class UBillboardComponent;
class UDAIUltraSkyBiomeData;

UCLASS(BlueprintType)
class DAI_ULTRASKY_API ADAIUltraSkyRadialStorm : public AActor
{
    GENERATED_BODY()
public:
    ADAIUltraSkyRadialStorm();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|Storm", meta = (ToolTip = "Outer radius of storm influence (world units)."))
    float OuterRadius = 50000.0f;

    // Inner fraction (0..1) used by gameplay/FX; center can be calmer or eye of storm
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|Storm", meta = (ClampMin = "0.0", ClampMax = "1.0", ToolTip = "Inner radius fraction used for eye/calm zone calculations."))
    float InnerFraction = 0.25f;

    // Optional biome applied while inside radius
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DAI_UltraSky|Storm", meta = (ToolTip = "Biome to apply while inside storm radius (optional)."))
    TObjectPtr<UDAIUltraSkyBiomeData> StormBiome;

    // Optional condition name to force while inside (e.g., "Storm", "Rain")
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DAI_UltraSky|Storm", meta = (ToolTip = "Weather condition name forced while inside storm (e.g. Storm, Rain)."))
    FName StormCondition = FName("Storm");

    // Priority vs other storms/overrides when overlapping
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|Storm", meta = (ToolTip = "Priority when multiple storms overlap (higher wins)."))
    int32 Priority = 10;

    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    static void GetAllStorms(TArray<ADAIUltraSkyRadialStorm *> &OutStorms);

private:
    static TWeakObjectPtr<UWorld> RegistryWorld;
    static TArray<TWeakObjectPtr<ADAIUltraSkyRadialStorm>> Registry;
};
