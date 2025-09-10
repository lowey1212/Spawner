#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DAIUltraSkyClimatePreset.generated.h"

class UDAIUltraSkyBiomeData;

USTRUCT(BlueprintType)
struct FDAIUltraSkyWeatherChoice
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ToolTip = "Biome applied when this weather condition is selected."))
    TObjectPtr<UDAIUltraSkyBiomeData> Biome = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ToolTip = "Weather condition name (e.g. Clear, Rain, Snow, Storm)."))
    FName Condition; // e.g., Clear, Rain, Snow, Storm

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = "0.0", ToolTip = "Relative selection weight within season (0 disables). Not auto-normalized."))
    float Weight = 1.0f;
};

// Seasons: 0=Spring, 1=Summer, 2=Autumn, 3=Winter
UCLASS(BlueprintType)
class DAI_ULTRASKY_API UDAIUltraSkyClimatePreset : public UDataAsset
{
    GENERATED_BODY()
public:
    // Per season weighted choices
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DAI_UltraSky|Climate", meta = (ToolTip = "Spring season weighted weather choices (picked by Weight probability)."))
    TArray<FDAIUltraSkyWeatherChoice> SpringChoices;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DAI_UltraSky|Climate", meta = (ToolTip = "Summer season weather choices."))
    TArray<FDAIUltraSkyWeatherChoice> SummerChoices;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DAI_UltraSky|Climate", meta = (ToolTip = "Autumn/Fall season weather choices."))
    TArray<FDAIUltraSkyWeatherChoice> AutumnChoices;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DAI_UltraSky|Climate", meta = (ToolTip = "Winter season weather choices."))
    TArray<FDAIUltraSkyWeatherChoice> WinterChoices;
};
