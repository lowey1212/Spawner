#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Interface.h"
#include "DAISpawnerService.generated.h"

UINTERFACE(MinimalAPI)
class UDAISpawnerService : public UInterface {
  GENERATED_BODY()
};

class DAI_HUB_API IDAISpawnerService {
  GENERATED_BODY()

public:
  /** Request a spawn by tag and return a handle identifying the request */
  virtual FGuid RequestSpawn(const FGameplayTag &SpawnTag) = 0;

  /** Despawn an actor previously spawned via this service */
  virtual void Despawn(const FGuid &SpawnHandle) = 0;

  /** Register a spawnable type with the given tag */
  virtual void RegisterSpawnable(const FGameplayTag &SpawnTag) = 0;
};