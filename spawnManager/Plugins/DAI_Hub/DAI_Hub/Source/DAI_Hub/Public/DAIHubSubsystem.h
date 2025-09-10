#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Tickable.h"
#include "DAIHubEventBus.h"
#include "DAI/Hub/DAIHubServiceRegistry.h"
#include "GameplayTagContainer.h"
#include "Misc/Guid.h"
#include "DAIHubEventPayload.h"
#include "Interfaces/Map/IDAIMapService.h"
#include "DAIHubSubsystem.generated.h"

class UEngine;
extern ENGINE_API UEngine* GEngine;
class UWorld;

// Dynamic delegate used for Blueprint subscriptions to hub events
DECLARE_DYNAMIC_DELEGATE_OneParam(FDAIHubEventBPDelegate, const FDAIHubEventPayload&, Event);

UCLASS()
class DAI_HUB_API UDAIHubSubsystem : public UGameInstanceSubsystem, public FTickableGameObject
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    virtual void Tick(float DeltaTime) override;
    virtual TStatId GetStatId() const override;
    virtual bool IsTickable() const override { return true; }

    void Publish(const FDAIHubEventPayload& Event);

    // Perf budget façade
    bool AcquireBudget(const FGameplayTag& Channel, float Amount);
    void ReleaseBudget(const FGameplayTag& Channel, float Amount);
    float GetRemainingBudget(const FGameplayTag& Channel) const;
    void GetPerfBudget(const FGameplayTag& Channel, float& OutLimit, float& OutUsed) const;

    // Spawn façade
    FGuid RequestSpawn(const FGameplayTag& SpawnTag);
    void Despawn(const FGuid& SpawnHandle);

    // Save façade
    void RequestSave();

    FGuid SubscribeToTopic(const FGameplayTag& Topic, FDAIHubEventBPDelegate Handler);
    void Unsubscribe(FGuid Handle);

    template<typename InterfaceType>
    void RegisterService(TScriptInterface<InterfaceType> Service)
    {
        if (auto* Hub = GEngine->GetEngineSubsystem<UDAIHubServiceRegistry>())
        {
            Hub->Register(Service.GetObject());
        }
    }

    template<typename InterfaceType>
    TScriptInterface<InterfaceType> GetService() const
    {
        if (auto* Hub = GEngine->GetEngineSubsystem<UDAIHubServiceRegistry>())
        {
            return Hub->GetInterface<InterfaceType>();
        }
        return nullptr;
    }

    TScriptInterface<IDAIMapService> GetMapService() const
    {
        return GetService<IDAIMapService>();
    }

    FDAIHubEventBus& GetBus() { return *EventBus; }

    void GetRegisteredServiceNames(TArray<FString>& OutNames) const
    {
        if (auto* Hub = GEngine->GetEngineSubsystem<UDAIHubServiceRegistry>())
        {
            Hub->GetRegisteredServiceNames(OutNames);
        }
    }

private:
    TUniquePtr<FDAIHubEventBus> EventBus;

    struct FBPSubscription
    {
        FGameplayTag Topic;
        FDelegateHandle NativeHandle;
    };

    TMap<FGuid, FBPSubscription> BPSubscriptions;

    void OnWorldInit(UWorld* World, const UWorld::InitializationValues IVS);
};
