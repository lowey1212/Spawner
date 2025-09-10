#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "DAIDismemberService.generated.h"

UINTERFACE(MinimalAPI)
class UDAIDismemberService : public UInterface { GENERATED_BODY() };

class DAI_HUB_API IDAIDismemberService
{
    GENERATED_BODY()
public:
    // Queue a sever request on an owner (server-authoritative).
    virtual void RequestSever(AActor* Owner, FName PartID, FName Socket, const FGameplayTag& ContextTag = FGameplayTag()) = 0;

    // Push a representation hint (e.g., from significance / perf).
    virtual void PushRepresentationHint(AActor* Owner, uint8 Mode /* maps to EDAI_LimbRepresentation */) = 0;

    // Register/unregister bridges (components that know how to mutate skeletal/mutable state)
    virtual void RegisterBridge(class UDAI_PerfBridgeComponent* Bridge) = 0;
    virtual void UnregisterBridge(class UDAI_PerfBridgeComponent* Bridge) = 0;
};
