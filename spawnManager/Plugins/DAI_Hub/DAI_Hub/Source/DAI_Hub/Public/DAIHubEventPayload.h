#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DAIHubEventPayload.generated.h"

USTRUCT(BlueprintType)
struct DAI_HUB_API FDAIHubEventPayload {
  GENERATED_BODY()

  UPROPERTY(BlueprintReadOnly, Category = "DAI|Hub",
            meta = (DisplayName = "DAI_Topic",
                    ToolTip = "Topic. Visible in Blueprints.",
                    Categories = "Hub.Topic"))
  FGameplayTag Topic;

  UPROPERTY(
      BlueprintReadOnly, Category = "DAI|Hub",
      meta = (DisplayName = "DAI_Sender",
              ToolTip = "Who sent this event (usually the object raising it)."))
  TObjectPtr<UObject> Sender = nullptr;

  UPROPERTY(BlueprintReadOnly, Category = "DAI|Hub",
            meta = (DisplayName = "DAI_Instigator",
                    ToolTip = "Who initiated this event."))
  TObjectPtr<UObject> Instigator = nullptr;

  UPROPERTY(BlueprintReadOnly, Category = "DAI|Hub",
            meta = (DisplayName = "DAI_Time",
                    ToolTip = "Game time when the event was raised."))
  double Time = 0.0;

  UPROPERTY(BlueprintReadOnly, Category = "DAI|Hub",
            meta = (DisplayName = "DAI_Reason",
                    ToolTip = "Reason for the event if any."))
  FGameplayTag Reason;

  UPROPERTY(BlueprintReadOnly, Category = "DAI|Hub",
            meta = (DisplayName = "DAI_Result",
                    ToolTip = "Result tag for the event."))
  FGameplayTag Result;

  UPROPERTY(BlueprintReadOnly, Category = "DAI|Hub",
            meta = (DisplayName = "DAI_Strength",
                    ToolTip = "Optional strength value."))
  float Strength = 0.f;

  UPROPERTY(BlueprintReadOnly, Category = "DAI|Hub",
            meta = (DisplayName = "DAI_Velocity",
                    ToolTip = "Optional velocity."))
  FVector Velocity = FVector::ZeroVector;

  UPROPERTY(BlueprintReadOnly, Category = "DAI|Hub",
            meta = (DisplayName = "DAI_Context", ToolTip = "Contextual tags."))
  FGameplayTagContainer ContextTags;

  // Constructors
  FDAIHubEventPayload() = default;

  FDAIHubEventPayload(const FGameplayTag &InTopic, UObject *InSender)
      : Topic(InTopic), Sender(InSender) {}
};
