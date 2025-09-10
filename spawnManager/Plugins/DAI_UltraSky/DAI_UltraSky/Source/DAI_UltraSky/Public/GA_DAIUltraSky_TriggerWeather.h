#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GA_DAIUltraSky_TriggerWeather.generated.h"

class ADAIUltraSkyActor;
class UDAIUltraSkyBiomeData;

UCLASS(BlueprintType, Blueprintable)
class DAI_ULTRASKY_API UGA_DAIUltraSky_TriggerWeather : public UGameplayAbility
{
    GENERATED_BODY()
public:
    UGA_DAIUltraSky_TriggerWeather();

    // Ability input or auto activation – sets condition and/or biome on the first UltraSky actor in the world
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|Ability", meta = (ToolTip = "Weather condition to set (leave None to only change biome)."))
    FName ConditionName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|Ability", meta = (ToolTip = "Biome to apply (optional)."))
    TObjectPtr<UDAIUltraSkyBiomeData> TargetBiome;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAI_UltraSky|Ability", meta = (ClampMin = "0.0", ToolTip = "Seconds to blend into TargetBiome if provided."))
    float BiomeBlendSeconds = 2.0f;

protected:
    virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                 const FGameplayAbilityActorInfo *ActorInfo,
                                 const FGameplayAbilityActivationInfo ActivationInfo,
                                 const FGameplayEventData *TriggerEventData) override;
};
