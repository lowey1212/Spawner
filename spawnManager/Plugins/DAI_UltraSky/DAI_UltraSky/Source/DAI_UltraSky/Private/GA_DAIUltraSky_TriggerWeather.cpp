#include "GA_DAIUltraSky_TriggerWeather.h"
#include "DAIUltraSkyActor.h"
#include "DAIUltraSkyBiomeData.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"

UGA_DAIUltraSky_TriggerWeather::UGA_DAIUltraSky_TriggerWeather()
{
    InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerExecution;
    NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
}

void UGA_DAIUltraSky_TriggerWeather::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                                     const FGameplayAbilityActorInfo* ActorInfo,
                                                     const FGameplayAbilityActivationInfo ActivationInfo,
                                                     const FGameplayEventData* TriggerEventData)
{
    if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
    {
        EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
        return;
    }

    UWorld* World = (ActorInfo && ActorInfo->AvatarActor.IsValid()) ? ActorInfo->AvatarActor->GetWorld() : nullptr;
    if (!World)
    {
        EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
        return;
    }

    ADAIUltraSkyActor* UltraSky = nullptr;
    for (TActorIterator<ADAIUltraSkyActor> It(World); It; ++It)
    {
        UltraSky = *It;
        break;
    }

    if (UltraSky)
    {
        if (!ConditionName.IsNone())
        {
            UltraSky->ForceCondition(ConditionName);
        }
        if (TargetBiome)
        {
            UltraSky->ForceApplyBiome(TargetBiome, BiomeBlendSeconds);
        }
    }

    EndAbility(Handle, ActorInfo, ActivationInfo, false, false);
}
