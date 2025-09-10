#include "DAIHubBlueprintLibrary.h"
#include "DAIHubEventPayload.h"
#include "DAIHubSubsystem.h"
#include "Interfaces/DAISpawnerService.h"
#include <limits>

UDAIHubSubsystem *UDAIHubBlueprintLibrary::GetHub(UObject *WorldContextObject) {
  if (!WorldContextObject) {
    return nullptr;
  }
  UWorld *World = WorldContextObject->GetWorld();
  if (!World) {
    return nullptr;
  }
  UGameInstance *GI = World->GetGameInstance();
  return GI ? GI->GetSubsystem<UDAIHubSubsystem>() : nullptr;
}

bool UDAIHubBlueprintLibrary::AcquirePerfBudget(UObject *WorldContextObject,
                                                FGameplayTag Channel,
                                                float Amount) {
  if (UDAIHubSubsystem *Hub = GetHub(WorldContextObject)) {
    return Hub->AcquireBudget(Channel, Amount);
  }
  return true;
}

void UDAIHubBlueprintLibrary::ReleasePerfBudget(UObject *WorldContextObject,
                                                FGameplayTag Channel,
                                                float Amount) {
  if (UDAIHubSubsystem *Hub = GetHub(WorldContextObject)) {
    Hub->ReleaseBudget(Channel, Amount);
  }
}

FGuid UDAIHubBlueprintLibrary::RequestSpawn(UObject *WorldContextObject,
                                            FGameplayTag SpawnTag) {
  if (UDAIHubSubsystem *Hub = GetHub(WorldContextObject)) {
    return Hub->RequestSpawn(SpawnTag);
  }
  return FGuid();
}

void UDAIHubBlueprintLibrary::Despawn(UObject *WorldContextObject,
                                      FGuid SpawnHandle) {
  if (UDAIHubSubsystem *Hub = GetHub(WorldContextObject)) {
    Hub->Despawn(SpawnHandle);
  }
}

void UDAIHubBlueprintLibrary::RegisterSpawnable(UObject* WorldContextObject, FGameplayTag SpawnTag)
{
    if (UDAIHubSubsystem* Hub = GetHub(WorldContextObject))
    {
        if (TScriptInterface<IDAISpawnerService> Service = Hub->GetService<IDAISpawnerService>())
        {
            Service->RegisterSpawnable(SpawnTag);
        }
    }
}

void UDAIHubBlueprintLibrary::RequestSave(UObject *WorldContextObject) {
  if (UDAIHubSubsystem *Hub = GetHub(WorldContextObject)) {
    Hub->RequestSave();
  }
}

FGuid UDAIHubBlueprintLibrary::SubscribeToTopic(UObject* WorldContextObject,
                                                FGameplayTag Topic,
                                                const FDAIHubEventBPDelegate& Handler)
{
    if (UDAIHubSubsystem* Hub = GetHub(WorldContextObject))
    {
        return Hub->SubscribeToTopic(Topic, Handler);
    }
    return FGuid();
}

void UDAIHubBlueprintLibrary::UnsubscribeFromTopic(UObject* WorldContextObject, FGuid Handle)
{
    if (UDAIHubSubsystem* Hub = GetHub(WorldContextObject))
    {
        Hub->Unsubscribe(Handle);
    }
}

float UDAIHubBlueprintLibrary::GetRemainingPerfBudget(
    UObject *WorldContextObject, FGameplayTag Channel) {
  if (UDAIHubSubsystem *Hub = GetHub(WorldContextObject)) {
    return Hub->GetRemainingBudget(Channel);
  }
  return TNumericLimits<float>::Max();
}

void UDAIHubBlueprintLibrary::GetPerfBudget(UObject *WorldContextObject,
                                            FGameplayTag Channel,
                                            float &OutLimit, float &OutUsed) {
  OutLimit = 0.f;
  OutUsed = 0.f;
  if (UDAIHubSubsystem *Hub = GetHub(WorldContextObject)) {
    Hub->GetPerfBudget(Channel, OutLimit, OutUsed);
  }
}

void UDAIHubBlueprintLibrary::GetDiscoveredServices(
    UObject *WorldContextObject, TArray<FString> &OutServiceNames) {
  OutServiceNames.Reset();
  if (UDAIHubSubsystem *Hub = GetHub(WorldContextObject)) {
    Hub->GetRegisteredServiceNames(OutServiceNames);
  }
}

void UDAIHubBlueprintLibrary::GetFactionEventTopics(
    UObject *WorldContextObject, TArray<FGameplayTag> &OutTopics) {
  OutTopics.Reset();
  if (UDAIHubSubsystem *Hub = GetHub(WorldContextObject)) {
    const TArray<FDAIHubEventPayload> &History = Hub->GetBus().GetHistory();
    for (const FDAIHubEventPayload &Event : History) {
      if (Event.Topic.ToString().StartsWith(TEXT("DAI.Faction."))) {
        OutTopics.Add(Event.Topic);
      }
    }
  }
}
