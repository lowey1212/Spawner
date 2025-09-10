#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "DAIHubDeveloperSettings.generated.h"

UCLASS(Config=Game, DefaultConfig, meta=(DisplayName="DAI Hub"))
class DAI_HUB_API UDAIHubDeveloperSettings : public UDeveloperSettings
{
    GENERATED_BODY()

public:
    UDAIHubDeveloperSettings();

    UPROPERTY(EditDefaultsOnly, Config, Category="Budgets", meta=(ToolTip="Default perf budgets"))
    TMap<FGameplayTag, float> DefaultBudgets;

    UPROPERTY(EditDefaultsOnly, Config, Category="Debug", meta=(ToolTip="Enable hub debug logs"))
    bool bDebug;
};