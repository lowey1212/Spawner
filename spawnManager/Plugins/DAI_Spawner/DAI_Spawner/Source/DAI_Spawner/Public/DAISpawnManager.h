#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/WeakObjectPtr.h"
#include "DAISpawnManager.generated.h"

class UHierarchicalInstancedStaticMeshComponent;
class UCurveFloat;
class UMaterialInterface;
class UPrimitiveComponent;
class UStaticMesh; // <-- added forward declaration

/**
 * Enum describing the shape of the spawn area.  Circle and Square are
 * straightforward geometric primitives, Curve allows sampling of a user supplied
 * curve asset to shape the boundary.
 */
UENUM(BlueprintType)
enum class ESpawnAreaShape : uint8
{
    Circle UMETA(DisplayName = "Circle"),
    Square UMETA(DisplayName = "Square"),
    Curve  UMETA(DisplayName = "Curve")
};

/**
 * A single entry in the spawn list.  Each entry specifies weight, amount per batch,
 * whether it’s unique, cooldowns, optional static mesh (with persistence) and required tags.
 */
USTRUCT(BlueprintType)
struct FSpawnEntry
{
    GENERATED_BODY()

    /** The actor class to spawn. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
    TSubclassOf<AActor> ActorClass = nullptr;

    /** Static mesh to instance along with the actor (optional). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Mesh")
    UStaticMesh* StaticMesh = nullptr;

    /** Whether the mesh should persist after the actor is destroyed. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Mesh")
    bool bMeshPersists = false;

    /** Number of units to spawn for this entry in a batch. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
    int32 Amount = 1;

    /** Weight for random selection. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn", meta = (ClampMin = "0.0"))
    float Weight = 1.f;

    /** Chance to skip spawn even if selected (0..1). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float SpawnChance = 1.f;

    /** Only one instance of this actor may exist at once. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Unique")
    bool bUniqueInstance = false;

    /** Cooldown in seconds before another of this class can spawn (unique). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Unique", meta = (EditCondition = "bUniqueInstance", ClampMin = "0.0"))
    float UniqueRespawnCooldown = 0.f;

    /** Required tags on first player pawn to allow spawn. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Requirements")
    TArray<FName> RequiredPlayerTags;
};

/** Runtime-only container describing a single pending spawn choice. */
struct FPendingSpawn
{
    TSubclassOf<AActor> ActorClass = nullptr; // class to spawn
    UStaticMesh* Mesh = nullptr;       // optional instanced mesh
    bool                bMeshPersists = false;
    int32               Count = 0;            // remaining spawns for this item
    int32               PerEntryIndex = -1;   // index into SpawnEntries
};

/**
 * DAISpawnManager – manages weighted, batched spawns plus optional instanced meshes,
 * editor debug visualisation, and (now) safety & nav validation.
 */
UCLASS(Blueprintable)
class DAI_SPAWNER_API ADAISpawnManager : public AActor
{
    GENERATED_BODY()

public:
    ADAISpawnManager();

    /** Root HISM that owns per-mesh HISM children. */
    UPROPERTY(VisibleAnywhere, Category = "Spawn|Mesh")
    UHierarchicalInstancedStaticMeshComponent* HISMComponent;

    /** Use a placed marker to supply spawn location for meshes; actors use marker’s SpawnPoint. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Marker")
    bool bUseMarker = false;

    /** Marker actor, if using a marker. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Marker", meta = (EditCondition = "bUseMarker"))
    AActor* MarkerActor = nullptr;

    /** Area shape. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Area")
    ESpawnAreaShape AreaShape = ESpawnAreaShape::Circle;

    /** Area radius/half-extent depending on shape. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Area", meta = (ClampMin = "0.0"))
    float AreaSize = 1000.f;

    /** Optional curve for custom boundary. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Area")
    UCurveFloat* AreaCurve = nullptr;

    /** Draw editor debug. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug")
    bool bDebug = false;

    /** Entries used for weighted selection. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
    TArray<FSpawnEntry> SpawnEntries;

    /** Spawn immediately on BeginPlay. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Timing")
    bool bSpawnOnBeginPlay = false;

    /** Loop automatic spawning between min/max interval. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Timing")
    bool bLoopSpawning = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Timing", meta = (ClampMin = "0.0"))
    float SpawnIntervalMin = 5.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Timing", meta = (ClampMin = "0.0"))
    float SpawnIntervalMax = 10.f;

    /** Max number spawned per tick (budget). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Perf", meta = (ClampMin = "1"))
    int32 MaxSpawnsPerTick = 8;

    /** Trigger a spawn batch now. */
    UFUNCTION(BlueprintCallable, Category = "Spawn")
    void SpawnActors();

    /** Returns a spawn point for the actor (center + random offset within area). */
    UFUNCTION(BlueprintCallable, Category = "Spawn")
    FVector GetSpawnLocation() const;

    virtual void OnConstruction(const FTransform& Transform) override;
    virtual void BeginPlay() override;

    // --- Runtime state ---

    /** Current pending selections to spawn (built per batch). */
    // Runtime-only; no reflection
    TArray<FPendingSpawn> PendingSpawns;

    /** Active-by-class for distance checks & uniqueness. */
    // Runtime-only; no reflection
    TMap<TSubclassOf<AActor>, TArray<TWeakObjectPtr<AActor>>> ActiveByClass;

    /** One HISM per unique mesh, all owned by this spawner. */
    UPROPERTY()
    TMap<UStaticMesh*, UHierarchicalInstancedStaticMeshComponent*> MeshToHISM;

    /** Get or create the HISM for a given mesh. */
    UHierarchicalInstancedStaticMeshComponent* GetOrCreateHISM(UStaticMesh* Mesh);

    /** Redraws non-persistent debug shapes. */
    void DrawDebugArea() const;

    /** Clears non-persistent editor debug previews. */
    void ClearNonPersistentDebug();

    UFUNCTION()
    void HandleSpawnedActorDestroyed(AActor* DestroyedActor);

    // --- Placement / Safety ---

    /** Min distance between any two spawned actors (units). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Safety", meta = (ClampMin = "0.0"))
    float MinDistanceBetweenSpawns = 150.f;

    /** Min distance from the local player pawn. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Safety", meta = (ClampMin = "0.0"))
    float MinDistanceFromPlayer = 600.f;

    /** Max attempts to find a safe spot for one spawn before skipping. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Safety", meta = (ClampMin = "1"))
    int32 MaxPlacementAttempts = 10;

    /** Perform navmesh validation with ProjectPointToNavigation. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Nav")
    bool bValidateNavmesh = true;

    /** If nav validation fails, try nearest point on navmesh. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Nav", meta = (EditCondition = "bValidateNavmesh"))
    bool bUseNearestOnNavFail = true;

    /** Z offset applied to actor spawns (after nav projection). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Offsets")
    float ActorZOffset = 0.f;

    /** Z offset applied to static mesh instances. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Offsets")
    float MeshZOffset = 0.f;

    /** If no safe placement found within MaxPlacementAttempts, skip the spawn. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Safety")
    bool bSkipWhenUnsafe = true;

    // Helpers for placement safety & nav
    bool TryFindSafeSpawn(FVector& OutActorLoc, FVector& OutMeshLoc) const;
    bool IsFarEnoughFromOthers(const FVector& Test) const;
    bool IsFarEnoughFromPlayer(const FVector& Test) const;
    bool HasBlockingOverlap(const FVector& Test) const;

private:
    /** Internal function that performs the actual spawning and schedules the next automatic spawn. */
    void SpawnActorsInternal();

    /** Handle used for scheduling the automatic spawning timer. */
    FTimerHandle SpawnTimerHandle;

    /** Records the last spawn time for each unique actor class to implement cooldowns. */
    TMap<TSubclassOf<AActor>, float> LastSpawnTimeMap;

    /** Holds weak pointers to the active unique instances when bUniqueInstance is set. */
    TMap<TSubclassOf<AActor>, TWeakObjectPtr<AActor>> ActiveInstances;
};
