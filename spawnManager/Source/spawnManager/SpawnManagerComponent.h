#pragma once

#include "Components/ActorComponent.h"
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "GameplayTagContainer.h"
#include "TimerManager.h"
#include "UObject/WeakObjectPtr.h"

#include "SpawnManagerComponent.generated.h"

class UStaticMesh;
class UMaterialInterface;
class UWorld;
class UNiagaraSystem;

/**
 * Describes how we track cooldown timers:
 * per actor class, per gameplay tag, or one timer shared by all spawns.
 */
UENUM(BlueprintType)
enum class ECooldownScope : uint8 { PerClass, PerTag, Global };

// Key used to look up cooldown timers
struct FCooldownKey {
  FName Name = NAME_None;
  ECooldownScope Scope = ECooldownScope::Global;

  bool operator==(const FCooldownKey &Other) const {
    return Name == Other.Name && Scope == Other.Scope;
  }
};

FORCEINLINE uint32 GetTypeHash(const FCooldownKey &Key) {
  return HashCombine(GetTypeHash(Key.Name), static_cast<uint32>(Key.Scope));
}

struct FCooldownData {
  double Time = 0.0;
};

/** Configurable cooldown with optional curve and scope */
USTRUCT(BlueprintType)
struct FSpawnCooldown {
  GENERATED_BODY()

  /** How many seconds to wait before spawning again */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cooldown",
            meta = (ToolTip = "How many seconds to wait before spawning again"))
  float BaseCooldown = 0.f;

  /** Optional curve to change the cooldown as more actors spawn */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cooldown",
            meta = (ToolTip =
                        "Optional curve to change the cooldown as more actors spawn"))
  UCurveFloat *CooldownCurve = nullptr;

  /** Whether cooldown is tracked per class, per tag, or for everyone */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cooldown",
            meta = (ToolTip =
                        "Whether cooldown is tracked per class, per tag, or globally"))
  ECooldownScope Scope = ECooldownScope::PerClass;
};

/** Rules describing how and when a spawned actor should be removed */
USTRUCT(BlueprintType)
struct FDespawnPolicy {
  GENERATED_BODY();

  /**
   * If the actor wanders this far from where it spawned, remove it.
   * Use a negative value to disable this check.
   */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Despawn",
            meta = (ToolTip =
                        "Remove the actor if it wanders beyond this distance; negative disables"))
  float MaxDistance = -1.f;

  /** How many seconds the actor is allowed to live. Negative means forever. */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Despawn",
            meta = (ToolTip =
                        "How many seconds the actor may live before being removed; negative means forever"))
  float TimeToLive = -1.f;

  /** Remove the actor if it hasn't been seen on screen recently */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Despawn",
            meta = (ToolTip =
                        "Remove the actor if it hasn't been seen on screen recently"))
  bool bDespawnOutOfView = false;

  /** Instead of removing the actor, bring it back when it exceeds this radius
   */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Despawn",
            meta = (ToolTip =
                        "Bring the actor back when it exceeds this radius instead of removing it"))
  float LeashRadius = -1.f;

  /** Despawn when an associated quest is finished */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Despawn",
            meta = (ToolTip = "Despawn when an associated quest is finished"))
  bool bDespawnOnQuestEnd = false;
};

/** Settings for bringing an actor back after it dies */
USTRUCT(BlueprintType)
struct FRespawnSettings {
  GENERATED_BODY();

  /** Should the actor come back to life when it dies */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Respawn",
            meta = (ToolTip =
                        "Should the actor come back to life when it dies"))
  bool bRespawnOnDeath = false;

  /** How long to wait before bringing the actor back */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Respawn",
            meta = (EditCondition = "bRespawnOnDeath",
                     ToolTip =
                         "Delay before bringing the actor back"))
  float RespawnDelay = 0.f;

  /** Number of actors to revive at once */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Respawn",
            meta = (EditCondition = "bRespawnOnDeath",
                     ToolTip =
                         "Number of actors to revive at once"))
  int32 WaveCount = 0;

  /** Difficulty boost applied each time it respawns */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Respawn",
            meta = (EditCondition = "bRespawnOnDeath",
                     ToolTip =
                         "Difficulty boost applied each time it respawns"))
  float DifficultyMultiplier = 1.f;
};

/** How long a companion mesh should stick around */
UENUM(BlueprintType)
enum class ECompanionLifetime : uint8 { Permanent, TiedToActor, TimedFade };

/** Where to position a companion mesh */
UENUM(BlueprintType)
enum class ECompanionPlacement : uint8 { AtMarker, AtActor, OffsetForward };

/** Configuration for a static mesh spawned alongside the main actor */
USTRUCT(BlueprintType)
struct FStaticMeshCompanion {
  GENERATED_BODY();

  /** Mesh to spawn */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Companion",
            meta =
                (ToolTip =
                     "Utility mesh for the actor, e.g. a bear cave for a bear boss"))
  UStaticMesh *Mesh = nullptr;

  /** Optional material overrides; a random one is chosen */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Companion",
            meta =
                (ToolTip =
                     "Optional material overrides; one is chosen at random"))
  TArray<UMaterialInterface *> MaterialOverrides;

  /** How long the extra mesh should stay alive */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Companion",
            meta = (ToolTip =
                         "How long the extra mesh should stay alive"))
  ECompanionLifetime Lifetime = ECompanionLifetime::Permanent;

  /** If using TimedFade, how many seconds before it disappears */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Companion",
            meta = (EditCondition = "Lifetime==ECompanionLifetime::TimedFade",
                     ToolTip =
                         "If using TimedFade, seconds before the mesh disappears"))
  float LifetimeSeconds = 0.f;

  /** Where to place the mesh relative to the main spawn */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Companion",
            meta = (ToolTip =
                         "Where to place the mesh relative to the main spawn"))
  ECompanionPlacement Placement = ECompanionPlacement::AtMarker;

  /** How far forward to move the mesh when using OffsetForward placement */
  UPROPERTY(
      EditAnywhere, BlueprintReadWrite, Category = "Companion",
      meta = (EditCondition = "Placement==ECompanionPlacement::OffsetForward",
               ToolTip =
                   "How far forward to move the mesh when using OffsetForward"))
  float ForwardOffset = 0.f;

  /** Lowest random rotation angles */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Companion|Transform",
            meta = (ToolTip = "Lowest random rotation angles"))
  FRotator RandomRotationMin = FRotator::ZeroRotator;

  /** Highest random rotation angles */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Companion|Transform",
            meta = (ToolTip = "Highest random rotation angles"))
  FRotator RandomRotationMax = FRotator::ZeroRotator;

  /** Smallest random size */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Companion|Transform",
            meta = (ToolTip = "Smallest random size"))
  FVector RandomScaleMin = FVector(1.f, 1.f, 1.f);

  /** Largest random size */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Companion|Transform",
            meta = (ToolTip = "Largest random size"))
  FVector RandomScaleMax = FVector(1.f, 1.f, 1.f);

  /** If true, scale equally on all axes using the X value */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Companion|Transform",
            meta =
                (ToolTip =
                     "If true, scale equally on all axes using the X value"))
  bool bUniformScale = true;

  /** Optional Niagara effect to play alongside the mesh */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Companion",
            meta = (ToolTip =
                         "Optional Niagara effect to play alongside the mesh"))
  UNiagaraSystem *SpawnEffect = nullptr;
};

/** Simple persistent representation of a spawned actor */
USTRUCT(BlueprintType)
struct FPersistentSpawnData {
  GENERATED_BODY();

  /** Type of actor that was spawned */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Persistence",
            meta = (ToolTip = "Type of actor that was spawned"))
  TSubclassOf<AActor> ActorClass;

  /** Where the actor was located */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Persistence",
            meta = (ToolTip = "Where the actor was located"))
  FTransform Transform;
};

/** Internal pool used for recycling spawned actors */
USTRUCT()
struct FSpawnPool {
  GENERATED_BODY();

  /** Actors that are currently not in use */
  UPROPERTY(meta = (ToolTip = "Actors that are currently not in use"))
  TArray<AActor *> Inactive;

  /** Get an actor from the pool or spawn a new one if needed */
  AActor *Acquire(UWorld *World, TSubclassOf<AActor> Class,
                  const FTransform &Transform);

  /** Return an actor back to the pool for later reuse */
  void Release(AActor *Actor);
};

/** Runtime info for active spawned actors */
USTRUCT()
struct FActiveSpawn {
  GENERATED_BODY();

  /** The actual actor instance we spawned */
  UPROPERTY(meta = (ToolTip = "The actual actor instance we spawned"))
  AActor *Actor = nullptr;

  /** Where the actor was originally placed */
  UPROPERTY(meta = (ToolTip = "Where the actor was originally placed"))
  FTransform SpawnTransform;

  /** Game time when the actor appeared */
  UPROPERTY(meta = (ToolTip = "Game time when the actor appeared"))
  float SpawnTime = 0.f;

  /** Rules for removing the actor later */
  UPROPERTY(meta = (ToolTip = "Rules for removing the actor later"))
  FDespawnPolicy DespawnPolicy;

  /** Settings describing how to respawn after death */
  UPROPERTY(meta = (ToolTip = "Settings describing how to respawn after death"))
  FRespawnSettings Respawn;

  /** Any companion actors created along with the main one */
  UPROPERTY(meta =
                (ToolTip =
                     "Any companion actors created along with the main one"))
  TArray<AActor *> Companions;
};

/** Entry describing what and how to spawn.
 *  Renamed to avoid clashing with similarly named structs in other modules.
 */
USTRUCT(BlueprintType)
struct FManagedSpawnEntry {
  GENERATED_BODY()

  /** Class to spawn */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn",
            meta = (ToolTip = "Class to spawn"))
  TSubclassOf<AActor> ActorClass;

  /** Minimum number to spawn during a cycle */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn",
            meta = (ToolTip = "Minimum number to spawn during a cycle"))
  int32 MinPerCycle = 0;

  /** Maximum number to spawn during a cycle */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn",
            meta = (ToolTip = "Maximum number to spawn during a cycle"))
  int32 MaxPerCycle = 1;

  /** Optional global cap for this entry across all spawners */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn",
            meta = (ToolTip =
                         "Optional global cap for this entry across all spawners"))
  int32 GlobalCap = -1;

  /** Tags/Faction identifiers */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn",
            meta = (ToolTip = "Tags or faction identifiers"))
  FGameplayTagContainer Tags;

  /** Base weight for selection */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn",
            meta = (ToolTip = "Base weight for selection"))
  float Weight = 1.f;

  /** Multipliers applied when context contains matching tags */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn",
            meta = (ToolTip =
                         "Multipliers applied when context contains matching tags"))
  TMap<FName, float> TagWeightModifiers;

  /** Weight adjustment curves */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn",
            meta = (ToolTip = "Weight adjustment curve for time of day"))
  UCurveFloat *TimeOfDayWeight = nullptr;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn",
            meta = (ToolTip = "Weight adjustment curve for player level"))
  UCurveFloat *PlayerLevelWeight = nullptr;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn",
            meta = (ToolTip = "Weight adjustment curve for game difficulty"))
  UCurveFloat *DifficultyWeight = nullptr;

  /** Location offset applied on spawn */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Transform",
            meta = (ToolTip = "Location offset applied on spawn"))
  FVector LocationOffset = FVector::ZeroVector;

  /** Minimum random rotation applied on spawn */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Transform",
            meta = (ToolTip = "Minimum random rotation applied on spawn"))
  FRotator RandomRotationMin = FRotator::ZeroRotator;

  /** Maximum random rotation applied on spawn */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Transform",
            meta = (ToolTip = "Maximum random rotation applied on spawn"))
  FRotator RandomRotationMax = FRotator::ZeroRotator;

  /** Minimum random scale applied on spawn */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Transform",
            meta = (ToolTip = "Minimum random scale applied on spawn"))
  FVector RandomScaleMin = FVector(1.f, 1.f, 1.f);

  /** Maximum random scale applied on spawn */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Transform",
            meta = (ToolTip = "Maximum random scale applied on spawn"))
  FVector RandomScaleMax = FVector(1.f, 1.f, 1.f);

  /** If true uses uniform scaling based on X of scale range */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Transform",
            meta =
                (ToolTip =
                     "If true, uses uniform scaling based on the X value of the range"))
  bool bUniformScale = true;

  /** Cooldown settings */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn",
            meta = (ToolTip = "Cooldown settings"))
  FSpawnCooldown Cooldown;

  /** Despawn behavior for actors spawned from this entry */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Lifecycle",
            meta = (ToolTip =
                         "Despawn behavior for actors spawned from this entry"))
  FDespawnPolicy DespawnPolicy;

  /** Respawn configuration */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Lifecycle",
            meta = (ToolTip = "Respawn configuration"))
  FRespawnSettings RespawnSettings;

  /** Companion static meshes to spawn with the actor */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Companion",
            meta = (ToolTip =
                         "Companion static meshes to spawn with the actor"))
  TArray<FStaticMeshCompanion> StaticMeshCompanions;

  /** Number of actors to prewarm in the pool on BeginPlay */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Performance",
            meta = (ToolTip =
                         "Number of actors to prewarm in the pool on BeginPlay"))
  int32 PrewarmCount = 0;

  /** Should actors be saved and restored across sessions */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Persistence",
            meta = (ToolTip =
                         "Should actors be saved and restored across sessions"))
  bool bPersistent = false;
};

/** External factors affecting spawn weights */
USTRUCT(BlueprintType)
struct FSpawnContext {
  GENERATED_BODY()

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Context",
            meta = (ToolTip =
                         "Current time of day used for weight adjustments"))
  float TimeOfDay = 0.f;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Context",
            meta = (ToolTip = "Player level for weight calculations"))
  int32 PlayerLevel = 1;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Context",
            meta = (ToolTip = "Biome identifier used for spawning"))
  FName Biome;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Context",
            meta = (ToolTip = "Game difficulty level"))
  int32 Difficulty = 1;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Context",
            meta = (ToolTip =
                         "Gameplay tags influencing spawn selection"))
  FGameplayTagContainer GameplayTags;
};

/** Component handling advanced spawn selection */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SPAWNMANAGER_API USpawnManagerComponent : public UActorComponent {
  GENERATED_BODY()
public:
  USpawnManagerComponent();

  /** Entries available for spawning */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn",
            meta = (ToolTip = "Entries available for spawning"))
  TArray<FManagedSpawnEntry> Entries;

  /** Maximum milliseconds per frame spent spawning */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Performance",
            meta = (ToolTip =
                         "Maximum milliseconds per frame spent spawning"))
  float SpawnTimeBudgetMs = 2.f;

  /** Maximum number of actors spawned per frame */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Performance",
            meta = (ToolTip =
                         "Maximum number of actors spawned per frame"))
  int32 SpawnCountBudget = 5;

  /** Perform a spawn cycle based on context */
  UFUNCTION(BlueprintCallable, Category = "Spawn")
  void SpawnCycle(const FSpawnContext &Context);

  /** Save currently active spawns for persistence */
  UFUNCTION(BlueprintCallable, Category = "Spawn|Persistence")
  TArray<FPersistentSpawnData> SaveActiveSpawns() const;

  /** Restore active spawns from saved data */
  UFUNCTION(BlueprintCallable, Category = "Spawn|Persistence")
  void LoadActiveSpawns(const TArray<FPersistentSpawnData> &Data);

protected:
  virtual void BeginPlay() override;
  virtual void
  TickComponent(float DeltaTime, ELevelTick TickType,
                FActorComponentTickFunction *ThisTickFunction) override;

  /** Checks if this entry is allowed to spawn right now */
  bool CanSpawnEntry(const FManagedSpawnEntry &Entry) const;

  /** Calculates how likely this entry is to be chosen based on context */
  float GetEntryWeight(const FManagedSpawnEntry &Entry,
                       const FSpawnContext &Context) const;

  /** Makes sure a spawn obeys its cooldown rules */
  bool RespectCooldown(const FManagedSpawnEntry &Entry) const;

  /** Records the time when an entry was spawned to enforce cooldowns */
  void UpdateCooldown(const FManagedSpawnEntry &Entry);

  /** Fills actor pools so future spawns are faster */
  void PrewarmPools();

  /** Removes an actor and updates bookkeeping */
  void HandleDespawn(int32 Index);

  /** List of actors currently spawned by this component */
  TArray<FActiveSpawn> ActiveSpawns;

  /** Pools keep inactive actors around so we can reuse them later */
  TMap<TSubclassOf<AActor>, FSpawnPool> Pools;

  /** Counts how many actors are using each gameplay tag across all managers */
  static TMap<FName, int32> GlobalTagCounts;

  /** Shared table of cooldown timers keyed by class, tag, or global scope */
  static TMap<FCooldownKey, FCooldownData> Cooldowns;

  /** Keeps track of which game world initialized the static data */
  static TWeakObjectPtr<UWorld> InitializedWorld;
};
