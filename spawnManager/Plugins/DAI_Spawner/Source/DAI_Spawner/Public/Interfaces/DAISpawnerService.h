// Minimal UInterface-based IDAISpawnerService matching original hub interface so other plugins can reference it
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "DAISpawnerService.generated.h"

UINTERFACE(MinimalAPI)
class UDAISpawnerService : public UInterface
{
    GENERATED_BODY()
};

class IDAISpawnerService
{
    GENERATED_BODY()

public:
    virtual FGuid RequestSpawn(const FGameplayTag &SpawnTag) = 0;
    virtual void Despawn(const FGuid &SpawnHandle) = 0;
    virtual void RegisterSpawnable(const FGameplayTag &SpawnTag) = 0;
};
