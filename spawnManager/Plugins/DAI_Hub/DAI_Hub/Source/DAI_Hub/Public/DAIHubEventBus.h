#pragma once

#include "Containers/Queue.h"
#include "CoreMinimal.h"
#include "DAIHubEventPayload.h"
#include "GameplayTagContainer.h"

DECLARE_MULTICAST_DELEGATE_OneParam(DAI_HUB_API FDAIHubEventDelegate,
                                    const FDAIHubEventPayload &);

class DAI_HUB_API FDAIHubEventBus {
public:
  FDelegateHandle Subscribe(const FGameplayTag &Topic,
                            const FDAIHubEventDelegate::FDelegate &Handler);
  void Unsubscribe(const FGameplayTag &Topic, FDelegateHandle Handle);
  void Publish(const FDAIHubEventPayload &Event);
  void DispatchQueued();
  const TArray<FDAIHubEventPayload> &GetHistory() const { return History; }

private:
  TMap<FGameplayTag, FDAIHubEventDelegate> Subscribers;
  TQueue<FDAIHubEventPayload, EQueueMode::Mpsc> Queue;
  TArray<FDAIHubEventPayload> History;
  int32 HistorySize = 8;
  void AddToHistory(const FDAIHubEventPayload &Event);
};