#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "Interfaces/DAISpawnerService.h"
#include "Interfaces/DAISaveFragmentProvider.h"
#include "Dom/JsonObject.h"
#include "SpawnerServiceSubsystem.generated.h"

/**
 * World subsystem implementing the spawner service.
 */
UCLASS()
class DAI_SPAWNER_API USpawnerServiceSubsystem : public UWorldSubsystem, public IDAISpawnerService, public IDAISaveFragmentProvider
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    // IDAISpawnerService
    virtual FGuid RequestSpawn(const FGameplayTag& SpawnTag) override;
    virtual void Despawn(const FGuid& SpawnHandle) override;
    virtual void RegisterSpawnable(const FGameplayTag& SpawnTag) override;

    // IDAISaveFragmentProvider
    virtual FName GetFragmentId() const override;
    virtual TSharedPtr<FJsonObject> GetSaveFragment() const override;
    virtual void ApplySaveFragment(const TSharedPtr<FJsonObject>& Fragment) override;

private:
    TMap<FGuid, FGameplayTag> ActiveSpawns;
    TSet<FGameplayTag> SpawnableTags;

    void PublishSpawnEvent(const FGameplayTag& EventTag, const FGameplayTag& SpawnTag);
};

