#include "DAIHubEventBus.h"

FDelegateHandle FDAIHubEventBus::Subscribe(const FGameplayTag& Topic, const FDAIHubEventDelegate::FDelegate& Handler)
{
    return Subscribers.FindOrAdd(Topic).Add(Handler);
}

void FDAIHubEventBus::Unsubscribe(const FGameplayTag& Topic, FDelegateHandle Handle)
{
    if (FDAIHubEventDelegate* Delegate = Subscribers.Find(Topic))
    {
        Delegate->Remove(Handle);
    }
}

void FDAIHubEventBus::Publish(const FDAIHubEventPayload& Event)
{
    if (!IsInGameThread())
    {
        Queue.Enqueue(Event);
        return;
    }
    if (FDAIHubEventDelegate* Delegate = Subscribers.Find(Event.Topic))
    {
        Delegate->Broadcast(Event);
    }
    AddToHistory(Event);
}

void FDAIHubEventBus::DispatchQueued()
{
    FDAIHubEventPayload Event;
    while (Queue.Dequeue(Event))
    {
        if (FDAIHubEventDelegate* Delegate = Subscribers.Find(Event.Topic))
        {
            Delegate->Broadcast(Event);
        }
        AddToHistory(Event);
    }
}

void FDAIHubEventBus::AddToHistory(const FDAIHubEventPayload& Event)
{
    History.Add(Event);
    if (History.Num() > HistorySize)
    {
        History.RemoveAt(0);
    }
}
