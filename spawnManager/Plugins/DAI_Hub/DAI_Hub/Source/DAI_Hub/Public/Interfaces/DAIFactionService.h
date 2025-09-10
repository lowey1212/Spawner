#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "DAIFactionService.generated.h"

enum class EFactionRelation : uint8;
class AActor;

UINTERFACE(MinimalAPI)
class UDAIFactionService : public UInterface
{
    GENERATED_BODY()
};

class DAI_HUB_API IDAIFactionService
{
    GENERATED_BODY()

public:
    virtual void AdjustReputation(AActor* Subject, const FGameplayTag& Faction, float Delta, FName Reason) = 0;
    virtual float GetReputation(AActor* Subject, const FGameplayTag& Faction) const = 0;
    virtual EFactionRelation GetRelation(const FGameplayTag& A, const FGameplayTag& B) const = 0;
    virtual bool AreHostile(const AActor* A, const AActor* B) const = 0;
    virtual void SetMembership(AActor* Actor, const FGameplayTagContainer& Membership) = 0;
    virtual void ClearMembership(AActor* Actor) = 0;
    virtual FGameplayTagContainer GetMemberships(AActor* Actor) const = 0;
    virtual void SetRelationshipOverride(const FGameplayTag& A, const FGameplayTag& B, EFactionRelation Relation) = 0;
    virtual void ClearRelationshipOverride(const FGameplayTag& A, const FGameplayTag& B) = 0;
};