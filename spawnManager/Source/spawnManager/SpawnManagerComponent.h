#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "Curves/CurveFloat.h"
#include "SpawnManagerComponent.generated.h"

/** Scope for spawn cooldowns */
UENUM(BlueprintType)
enum class ECooldownScope : uint8
{
    PerClass,
    PerTag,
    Global
};

/** Configurable cooldown with optional curve and scope */
USTRUCT(BlueprintType)
struct FSpawnCooldown
{
    GENERATED_BODY()

    /** Base cooldown in seconds */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cooldown")
    float BaseCooldown = 0.f;

    /** Optional curve to drive cooldown based on spawn count */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cooldown")
    UCurveFloat* CooldownCurve = nullptr;

    /** Determines if cooldown is unique per class, tag, or global */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cooldown")
    ECooldownScope Scope = ECooldownScope::PerClass;
};

/** Entry describing what and how to spawn */
USTRUCT(BlueprintType)
struct FSpawnEntry
{
    GENERATED_BODY()

    /** Class to spawn */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn")
    TSubclassOf<AActor> ActorClass;

    /** Minimum number to spawn during a cycle */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn")
    int32 MinPerCycle = 0;

    /** Maximum number to spawn during a cycle */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn")
    int32 MaxPerCycle = 1;

    /** Optional global cap for this entry across all spawners */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn")
    int32 GlobalCap = -1;

    /** Tags/Faction identifiers */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn")
    FGameplayTagContainer Tags;

    /** Base weight for selection */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn")
    float Weight = 1.f;

    /** Multipliers applied when context contains matching tags */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn")
    TMap<FName, float> TagWeightModifiers;

    /** Weight adjustment curves */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn")
    UCurveFloat* TimeOfDayWeight = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn")
    UCurveFloat* PlayerLevelWeight = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn")
    UCurveFloat* DifficultyWeight = nullptr;

    /** Cooldown settings */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn")
    FSpawnCooldown Cooldown;
};

/** External factors affecting spawn weights */
USTRUCT(BlueprintType)
struct FSpawnContext
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Context")
    float TimeOfDay = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Context")
    int32 PlayerLevel = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Context")
    FName Biome;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Context")
    int32 Difficulty = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Context")
    FGameplayTagContainer GameplayTags;
};

/** Component handling advanced spawn selection */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SPAWNMANAGER_API USpawnManagerComponent : public UActorComponent
{
    GENERATED_BODY()
public:
    USpawnManagerComponent();

    /** Entries available for spawning */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn")
    TArray<FSpawnEntry> Entries;

    /** Perform a spawn cycle based on context */
    UFUNCTION(BlueprintCallable, Category="Spawn")
    void SpawnCycle(const FSpawnContext& Context);

protected:
    bool CanSpawnEntry(const FSpawnEntry& Entry) const;
    float GetEntryWeight(const FSpawnEntry& Entry, const FSpawnContext& Context) const;
    bool RespectCooldown(const FSpawnEntry& Entry) const;
    void UpdateCooldown(const FSpawnEntry& Entry);

    static TMap<FName, int32> GlobalTagCounts;
    static TMap<FName, double> ClassCooldowns;
    static TMap<FName, double> TagCooldowns;
    static double GlobalCooldownTime;
};

