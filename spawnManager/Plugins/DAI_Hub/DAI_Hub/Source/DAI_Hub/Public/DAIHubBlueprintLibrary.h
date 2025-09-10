#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DAIHubSubsystem.h"
#include "DAIHubBlueprintLibrary.generated.h"

UCLASS()
class DAI_HUB_API UDAIHubBlueprintLibrary : public UBlueprintFunctionLibrary {
  GENERATED_BODY()

public:
  UFUNCTION(BlueprintPure, Category = "DAI|Hub",
            meta = (WorldContext = "WorldContextObject",
                    DisplayName = "DAI_GetHub", ToolTip = "Get Hub."))
  static class UDAIHubSubsystem *GetHub(UObject *WorldContextObject);

  UFUNCTION(BlueprintCallable, Category = "DAI|Hub",
            meta = (WorldContext = "WorldContextObject",
                    DisplayName = "DAI_AcquirePerfBudget",
                    ToolTip = "Reserve, release, or read the performance /n budget for a channel."))
  static bool AcquirePerfBudget(UObject *WorldContextObject,
                                FGameplayTag Channel, float Amount);

  UFUNCTION(BlueprintCallable, Category = "DAI|Hub",
            meta = (WorldContext = "WorldContextObject",
                    DisplayName = "DAI_ReleasePerfBudget",
                    ToolTip = "Remove or release release perf budget."))
  static void ReleasePerfBudget(UObject *WorldContextObject,
                                FGameplayTag Channel, float Amount);

  UFUNCTION(BlueprintCallable, Category = "DAI|Hub",
            meta = (WorldContext = "WorldContextObject",
                    DisplayName = "DAI_RequestSpawn",
                    ToolTip = "Request a spawn by tag."))
  static FGuid RequestSpawn(UObject *WorldContextObject, FGameplayTag SpawnTag);

  UFUNCTION(BlueprintCallable, Category = "DAI|Hub",
            meta = (WorldContext = "WorldContextObject",
                    DisplayName = "DAI_Despawn",
                    ToolTip = "Despawn a previously spawned actor."))
  static void Despawn(UObject *WorldContextObject, FGuid SpawnHandle);

  UFUNCTION(BlueprintCallable, Category = "DAI|Hub",
            meta = (WorldContext = "WorldContextObject",
                    DisplayName = "DAI_RegisterSpawnable",
                    ToolTip = "Register a spawnable type by tag."))
  static void RegisterSpawnable(UObject* WorldContextObject, FGameplayTag SpawnTag);

  UFUNCTION(BlueprintCallable, Category = "DAI|Hub",
            meta = (WorldContext = "WorldContextObject",
                    DisplayName = "DAI_RequestSave",
                    ToolTip = "Request a save operation."))
  static void RequestSave(UObject *WorldContextObject);

  UFUNCTION(BlueprintCallable, Category = "DAI|Hub",
            meta = (WorldContext = "WorldContextObject", AutoCreateRefTerm="Handler",
                    DisplayName = "DAI_SubscribeToTopic",
                    ToolTip = "Subscribe to a hub topic."))
  static FGuid SubscribeToTopic(UObject *WorldContextObject, FGameplayTag Topic,
                                const FDAIHubEventBPDelegate& Handler);

  UFUNCTION(BlueprintCallable, Category = "DAI|Hub",
            meta = (WorldContext = "WorldContextObject", DisplayName = "DAI_UnsubscribeFromTopic",
                    ToolTip = "Unsubscribe from a hub topic."))
  static void UnsubscribeFromTopic(UObject *WorldContextObject, FGuid Handle);

  UFUNCTION(BlueprintPure, Category = "DAI|Hub",
            meta = (WorldContext = "WorldContextObject",
                    DisplayName = "DAI_GetRemainingPerfBudget",
                    ToolTip = "Get Remaining Perf Budget."))
  static float GetRemainingPerfBudget(UObject *WorldContextObject,
                                      FGameplayTag Channel);

  UFUNCTION(BlueprintPure, Category = "DAI|Hub",
            meta = (WorldContext = "WorldContextObject",
                    DisplayName = "DAI_GetPerfBudget",
                    ToolTip = "Get Perf Budget."))
  static void GetPerfBudget(UObject *WorldContextObject, FGameplayTag Channel,
                            float &OutLimit, float &OutUsed);

  UFUNCTION(BlueprintCallable, Category = "DAI|Hub|Dev",
            meta = (WorldContext = "WorldContextObject",
                    DisplayName = "DAI_GetDiscoveredServices"))
  static void GetDiscoveredServices(UObject *WorldContextObject,
                                    TArray<FString> &OutServiceNames);

  UFUNCTION(BlueprintCallable, Category = "DAI|Hub|Dev",
            meta = (WorldContext = "WorldContextObject",
                    DisplayName = "DAI_GetFactionEventTopics"))
  static void GetFactionEventTopics(UObject *WorldContextObject,
                                    TArray<FGameplayTag> &OutTopics);
};