#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "DAIPerfService.generated.h"

UINTERFACE(MinimalAPI)
class UDAIPerfService : public UInterface
{
    GENERATED_BODY()
};

class DAI_HUB_API IDAIPerfService
{
    GENERATED_BODY()

public:
    virtual void SetBudget(const FGameplayTag& Channel, float Budget) = 0;
    virtual bool Acquire(const FGameplayTag& Channel, float Amount) = 0;
    virtual void Release(const FGameplayTag& Channel, float Amount) = 0;
    virtual float GetRemaining(const FGameplayTag& Channel) const = 0;
    virtual float GetLimit(const FGameplayTag& Channel) const = 0;
    virtual float GetUsed(const FGameplayTag& Channel) const = 0;
};