#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "Curves/CurveFloat.h"
#include "TimerManager.h"
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

/** Rules describing how and when a spawned actor should be removed */
USTRUCT(BlueprintType)
struct FDespawnPolicy
{
    GENERATED_BODY();

    /** Despawn if farther than this distance from its spawn transform. Negative disables check */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Despawn")
    float MaxDistance = -1.f;

    /** Despawn after this many seconds. Negative disables check */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Despawn")
    float TimeToLive = -1.f;

    /** Despawn when actor is no longer rendered */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Despawn")
    bool bDespawnOutOfView = false;

    /** If set, actor is teleported back when exceeding radius instead of despawn */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Despawn")
    float LeashRadius = -1.f;

    /** If true the actor will despawn when an owning quest finishes */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Despawn")
    bool bDespawnOnQuestEnd = false;
};

/** Options controlling how dead actors return */
USTRUCT(BlueprintType)
struct FRespawnSettings
{
    GENERATED_BODY();

    /** Allow this actor to respawn after death */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Respawn")
    bool bRespawnOnDeath = false;

    /** Delay before respawn occurs */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Respawn", meta=(EditCondition="bRespawnOnDeath"))
    float RespawnDelay = 0.f;

    /** Number of actors to respawn in a wave */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Respawn", meta=(EditCondition="bRespawnOnDeath"))
    int32 WaveCount = 0;

    /** Multiplier applied each respawn to increase difficulty */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Respawn", meta=(EditCondition="bRespawnOnDeath"))
    float DifficultyMultiplier = 1.f;
};

/** Simple persistent representation of a spawned actor */
USTRUCT(BlueprintType)
struct FPersistentSpawnData
{
    GENERATED_BODY();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Persistence")
    TSubclassOf<AActor> ActorClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Persistence")
    FTransform Transform;
};

/** Internal pool used for recycling spawned actors */
USTRUCT()
struct FSpawnPool
{
    GENERATED_BODY();

    UPROPERTY()
    TArray<AActor*> Inactive;

    AActor* Acquire(UWorld* World, TSubclassOf<AActor> Class, const FTransform& Transform);
    void Release(AActor* Actor);
};

/** Runtime info for active spawned actors */
USTRUCT()
struct FActiveSpawn
{
    GENERATED_BODY();

    UPROPERTY()
    AActor* Actor = nullptr;

    UPROPERTY()
    FTransform SpawnTransform;

    UPROPERTY()
    float SpawnTime = 0.f;

    UPROPERTY()
    FDespawnPolicy DespawnPolicy;

    UPROPERTY()
    FRespawnSettings Respawn;
};

/** Entry describing what and how to spawn.
 *  Renamed to avoid clashing with similarly named structs in other modules.
 */
USTRUCT(BlueprintType)
struct FManagedSpawnEntry
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

    /** Minimum random rotation applied on spawn */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn|Transform")
    FRotator RandomRotationMin = FRotator::ZeroRotator;

    /** Maximum random rotation applied on spawn */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn|Transform")
    FRotator RandomRotationMax = FRotator::ZeroRotator;

    /** Minimum random scale applied on spawn */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn|Transform")
    FVector RandomScaleMin = FVector(1.f, 1.f, 1.f);

    /** Maximum random scale applied on spawn */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn|Transform")
    FVector RandomScaleMax = FVector(1.f, 1.f, 1.f);

    /** If true uses uniform scaling based on X of scale range */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn|Transform")
    bool bUniformScale = true;

    /** Cooldown settings */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn")
    FSpawnCooldown Cooldown;

    /** Despawn behavior for actors spawned from this entry */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn|Lifecycle")
    FDespawnPolicy DespawnPolicy;

    /** Respawn configuration */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn|Lifecycle")
    FRespawnSettings RespawnSettings;

    /** Number of actors to prewarm in the pool on BeginPlay */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn|Performance")
    int32 PrewarmCount = 0;

    /** Should actors be saved and restored across sessions */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn|Persistence")
    bool bPersistent = false;
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
    TArray<FManagedSpawnEntry> Entries;

    /** Maximum milliseconds per frame spent spawning */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn|Performance")
    float SpawnTimeBudgetMs = 2.f;

    /** Maximum number of actors spawned per frame */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawn|Performance")
    int32 SpawnCountBudget = 5;

    /** Perform a spawn cycle based on context */
    UFUNCTION(BlueprintCallable, Category="Spawn")
    void SpawnCycle(const FSpawnContext& Context);

    /** Save currently active spawns for persistence */
    UFUNCTION(BlueprintCallable, Category="Spawn|Persistence")
    TArray<FPersistentSpawnData> SaveActiveSpawns() const;

    /** Restore active spawns from saved data */
    UFUNCTION(BlueprintCallable, Category="Spawn|Persistence")
    void LoadActiveSpawns(const TArray<FPersistentSpawnData>& Data);

protected:
    virtual void BeginPlay() override;
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    bool CanSpawnEntry(const FManagedSpawnEntry& Entry) const;
    float GetEntryWeight(const FManagedSpawnEntry& Entry, const FSpawnContext& Context) const;
    bool RespectCooldown(const FManagedSpawnEntry& Entry) const;
    void UpdateCooldown(const FManagedSpawnEntry& Entry);

    void PrewarmPools();
    void HandleDespawn(int32 Index);

    TArray<FActiveSpawn> ActiveSpawns;
    TMap<TSubclassOf<AActor>, FSpawnPool> Pools;

    static TMap<FName, int32> GlobalTagCounts;
    static TMap<FName, double> ClassCooldowns;
    static TMap<FName, double> TagCooldowns;
    static double GlobalCooldownTime;
};

