#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/Function.h"
#include "UObject/Interface.h"
#include "DAILoadDirectorService.generated.h"

UINTERFACE(MinimalAPI)
class UDAILoadDirectorService : public UInterface {
  GENERATED_BODY()
};

class DAI_HUB_API IDAILoadDirectorService {
  GENERATED_BODY()

public:
  /** Trigger loading of a region */
  virtual void LoadRegion(const FGameplayTag &Region) = 0;

  /** Trigger unloading of a region */
  virtual void UnloadRegion(const FGameplayTag &Region) = 0;

  /** Query if a region is currently ready/loaded */
  virtual bool IsRegionReady(const FGameplayTag &Region) const = 0;

  /** Execute callback once the region is ready */
  virtual void WhenReady(const FGameplayTag &Region, TFunction<void()> Callback) = 0;
};