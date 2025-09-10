#pragma once

#include "Engine/DataAsset.h"
#include "Materials/MaterialParameterCollection.h"
#include "NiagaraSystem.h"
#include "DAIUltraSkyBiomeData.generated.h"

UCLASS(BlueprintType)
class DAI_ULTRASKY_API UDAIUltraSkyBiomeData : public UDataAsset
{
    GENERATED_BODY()
public:
    // Display name for debugging/UI
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Biome", meta = (ToolTip = "Display/debug name for this biome."))
    FName BiomeName = NAME_None;

    // Atmosphere/Cloud/Fog targets for this biome
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Biome|Sky", meta = (ClampMin = "0.0", ClampMax = "1.0", ToolTip = "Target cloud coverage when biome fully applied (0 clear, 1 overcast)."))
    float TargetCloudCoverage = 0.3f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Biome|Sky", meta = (ClampMin = "0.0", ClampMax = "1.0", ToolTip = "Target cloud density shaping clouds (0 thin, 1 thick)."))
    float TargetCloudDensity = 0.6f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Biome|Fog", meta = (ClampMin = "0.0", ToolTip = "Target exponential height fog density override."))
    float TargetFogDensity = 0.02f;

    // Optional parameter collection to drive world materials (wetness, puddles, water waves, etc.)
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Biome|Materials", meta = (ToolTip = "Optional MPC providing scalar/vector parameters for materials."))
    TObjectPtr<UMaterialParameterCollection> MaterialParamCollection;

    // Scalar overrides to apply to the MPC when this biome is fully active
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Biome|Materials", meta = (ToolTip = "Scalar parameter overrides applied when biome fully blended in."))
    TMap<FName, float> MPCScalarOverrides;

    // Vector overrides to apply to the MPC when this biome is fully active
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Biome|Materials", meta = (ToolTip = "Vector (linear color) overrides applied when biome fully blended in."))
    TMap<FName, FLinearColor> MPCVectorOverrides;

    // Weather condition to Niagara system mapping, e.g., "Rain" -> Niagara system
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Biome|FX", meta = (ToolTip = "Mapping of weather condition name -> Niagara system to spawn."))
    TMap<FName, TObjectPtr<UNiagaraSystem>> ConditionFX;

    // Suggested blend time when transitioning into this biome
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Biome", meta = (ToolTip = "Suggested seconds to blend when entering this biome."))
    float SuggestedBlendSeconds = 3.0f;
};
