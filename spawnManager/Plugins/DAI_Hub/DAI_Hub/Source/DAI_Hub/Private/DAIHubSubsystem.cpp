#include "DAIHubSubsystem.h"
#include "DAI_HubLogging.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "GameplayTagContainer.h"
#include "HubGameplayTags.h"
#include "Interfaces/DAIPerfService.h"
#include "Interfaces/DAISpawnerService.h"
#include "Interfaces/DAISaveService.h"
#include <limits>

void UDAIHubSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    EventBus = MakeUnique<FDAIHubEventBus>();
    FWorldDelegates::OnPostWorldInitialization.AddUObject(this, &UDAIHubSubsystem::OnWorldInit);

    UE_LOG(LogDAIHub, Display, TEXT("Hub subsystem initialized"));
}

void UDAIHubSubsystem::Deinitialize()
{
    FWorldDelegates::OnPostWorldInitialization.RemoveAll(this);
    EventBus.Reset();
}

void UDAIHubSubsystem::Tick(float DeltaTime)
{
    if (EventBus)
    {
        EventBus->DispatchQueued();
    }
}

TStatId UDAIHubSubsystem::GetStatId() const
{
    RETURN_QUICK_DECLARE_CYCLE_STAT(UDAIHubSubsystem, STATGROUP_Tickables);
}

void UDAIHubSubsystem::Publish(const FDAIHubEventPayload& Event)
{
    if (EventBus)
    {
        EventBus->Publish(Event);
    }
}

bool UDAIHubSubsystem::AcquireBudget(const FGameplayTag& Channel, float Amount)
{
    if (TScriptInterface<IDAIPerfService> Service = GetService<IDAIPerfService>())
    {
        return Service->Acquire(Channel, Amount);
    }
    // No perf service means no budget restrictions
    return true;
}

void UDAIHubSubsystem::ReleaseBudget(const FGameplayTag& Channel, float Amount)
{
    if (TScriptInterface<IDAIPerfService> Service = GetService<IDAIPerfService>())
    {
        Service->Release(Channel, Amount);
    }
}

float UDAIHubSubsystem::GetRemainingBudget(const FGameplayTag& Channel) const
{
    if (TScriptInterface<IDAIPerfService> Service = GetService<IDAIPerfService>())
    {
        return Service->GetRemaining(Channel);
    }
    return TNumericLimits<float>::Max();
}

void UDAIHubSubsystem::GetPerfBudget(const FGameplayTag& Channel, float& OutLimit, float& OutUsed) const
{
    OutLimit = 0.f;
    OutUsed = 0.f;
    if (TScriptInterface<IDAIPerfService> Service = GetService<IDAIPerfService>())
    {
        OutLimit = Service->GetLimit(Channel);
        OutUsed = Service->GetUsed(Channel);
    }
}

FGuid UDAIHubSubsystem::RequestSpawn(const FGameplayTag& SpawnTag)
{
    if (TScriptInterface<IDAISpawnerService> Service = GetService<IDAISpawnerService>())
    {
        return Service->RequestSpawn(SpawnTag);
    }
    return FGuid();
}

void UDAIHubSubsystem::Despawn(const FGuid& SpawnHandle)
{
    if (TScriptInterface<IDAISpawnerService> Service = GetService<IDAISpawnerService>())
    {
        Service->Despawn(SpawnHandle);
    }
}

void UDAIHubSubsystem::RequestSave()
{
    if (TScriptInterface<IDAISaveService> Service = GetService<IDAISaveService>())
    {
        Service->QueueSave();
    }
}

void UDAIHubSubsystem::OnWorldInit(UWorld* World, const UWorld::InitializationValues IVS)
{
    if (World && World->IsGameWorld())
    {
        UE_LOG(LogDAIHub, Log, TEXT("Hub alive for world %s"), *World->GetName());
        Publish(FDAIHubEventPayload(TAG_Hub_System_WorldReady, World));
    }
}

FGuid UDAIHubSubsystem::SubscribeToTopic(const FGameplayTag& Topic, FDAIHubEventBPDelegate Handler)
{
    if (!EventBus || !Handler.IsBound())
    {
        return FGuid();
    }

    FDelegateHandle NativeHandle = EventBus->Subscribe(Topic, FDAIHubEventDelegate::FDelegate::CreateLambda(
        [Handler](const FDAIHubEventPayload& Payload) mutable
        {
            Handler.ExecuteIfBound(Payload);
        }));

    FGuid Id = FGuid::NewGuid();
    BPSubscriptions.Add(Id, {Topic, NativeHandle});
    return Id;
}

void UDAIHubSubsystem::Unsubscribe(FGuid Handle)
{
    if (EventBus)
    {
        if (FBPSubscription* Sub = BPSubscriptions.Find(Handle))
        {
            EventBus->Unsubscribe(Sub->Topic, Sub->NativeHandle);
            BPSubscriptions.Remove(Handle);
        }
    }
}
