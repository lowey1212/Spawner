
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/WeakObjectPtr.h"
#include "DAISpawnManager.generated.h"

class UHierarchicalInstancedStaticMeshComponent;
class USceneComponent;
class UCurveFloat;
class UMaterialInterface;
class UPrimitiveComponent;
class AVolume;
class UPhysicalMaterial;
class UStaticMeshComponent;

/**
 * Enum describing the shape of the spawn area.  Circle and Square are
 * straightforward geometric primitives, Curve allows sampling of a user supplied
 * radius curve to bias distribution along a radial gradient, and Noise uses
 * Perlin noise to scatter spawns more organically.  Additional shapes can be
 * added later by extending GetSpawnLocation().
 */
UENUM(BlueprintType)
enum class ESpawnAreaShape : uint8
{
    /** Spawn points are chosen within a square of side length 2*Radius centred on the actor. */
    Square UMETA(DisplayName = "Square"),

    /** Spawn points are chosen within a circle of radius Radius centred on the actor. */
    Circle UMETA(DisplayName = "Circle"),

    /** Spawn points use a user provided curve (0..1 input) to bias the radial distribution. */
    Curve UMETA(DisplayName = "Curve"),

    /** Spawn points are chosen using Perlin noise to produce more natural scatter. */
    Noise UMETA(DisplayName = "Noise")
};

/**
 * Structure that defines a single entry in the spawn table.  Each entry
 * specifies what actor to spawn, how likely it is to be selected relative to
 * other entries, whether only one instance of that actor may exist at once,
 * optional cooldown windows when unique instances are destroyed, the static
 * mesh that should accompany the actor (if any), whether that mesh should
 * persist beyond the lifetime of the actor and a list of tags that must be
 * present on the first player pawn in order for the spawn to proceed.  A
 * simple probability field (SpawnChance) allows designers to dial in random
 * non‑spawning even when an entry is selected by weight.
 */
USTRUCT(BlueprintType)
struct FSpawnEntry
{
    GENERATED_BODY()

    /** The actor class to spawn. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
    TSubclassOf<AActor> ActorClass = nullptr;

    /** Weight used for weighted random selection.  Must be positive to be considered. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn", meta = (ClampMin = "0.0"))
    float Weight = 1.0f;

    /** If true, only one instance of this ActorClass may exist at any given time. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
    bool bUniqueInstance = false;

    /** Minimum cooldown in seconds before this entry may spawn again when unique. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn", meta = (EditCondition = "bUniqueInstance", ClampMin = "0.0"))
    float CooldownMin = 5.0f;

    /** Maximum cooldown in seconds before this entry may spawn again when unique. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn", meta = (EditCondition = "bUniqueInstance", ClampMin = "0.0"))
    float CooldownMax = 10.0f;

    /** If true, choose a random cooldown between CooldownMin and CooldownMax.  If false, CooldownMin is used as a fixed delay. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn", meta = (EditCondition = "bUniqueInstance"))
    bool bUseRandomCooldown = false;

    /** Optional static mesh to place at the spawn location along with the actor. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
    UStaticMesh* StaticMesh = nullptr;

    /** If true, the static mesh instance will persist after the actor is destroyed. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
    bool bStaticMeshPermanent = false;

    /** A list of tags that must be present on the first player pawn for this spawn to occur. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
    TArray<FName> RequiredTags;

    /** Additional probability check (0.0–1.0).  Even if this entry is selected by weight, it may still not spawn. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float SpawnChance = 1.0f;

    /** How many actors to spawn each time this entry is selected. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn", meta = (ClampMin = "1"))
    int32 Amount = 1;

    /** Max number of active actors of this entry allowed at once (0 = unlimited). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn", meta = (ClampMin = "0"))
    int32 MaxActive = 0;

    /** Optional offset applied to the actor spawn location.  When using a marker this is relative to the marker's root. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Placement")
    FVector ActorOffset = FVector::ZeroVector;

    /** Optional offset applied to the static mesh location.  When using a marker this is relative to the marker's spawn point. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Placement")
    FVector MeshOffset = FVector::ZeroVector;

    /** If true, spawn using the specified marker rather than a random location. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Marker")
    bool bUseMarker = false;

    /** Marker providing spawn transforms when bUseMarker is enabled.  The actor spawns at the marker's root while the
     *  static mesh uses the marker's SpawnPoint if available.  If the marker lacks a SpawnPoint the root is used for both.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Marker", meta = (EditCondition = "bUseMarker"))
    AActor* MarkerActor = nullptr;
};

/**
 * ADAISpawnManager is an actor that can be placed in a level to manage spawning
 * of other actors.  It supports different area shapes, weighted random
 * selection from a list of spawn entries, unique instance rules, cooldowns,
 * optional static meshes and tag based conditional spawning.  Spawning can be
 * triggered on BeginPlay, called manually, or scheduled on a timer to repeat
 * automatically.
 */
 /** Pending spawn request item for async batching. */
USTRUCT(BlueprintType)
struct FPendingSpawn
{
    GENERATED_BODY()
    UPROPERTY()
    TSubclassOf<AActor> ActorClass = nullptr;
    UPROPERTY()
    int32 Count = 0;
    UPROPERTY()
    int32 PerEntryIndex = -1; // index into SpawnEntries for mesh/flags lookups
};

UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DAI_SPAWNER_API ADAISpawnManager : public AActor
{
    GENERATED_BODY()

public:
    /** Default constructor.  Sets sensible defaults and creates internal components. */
    ADAISpawnManager();

    /** The shape of the volume within which spawn points will be generated. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
    ESpawnAreaShape SpawnAreaShape = ESpawnAreaShape::Circle;

    /** Maximum distance from the spawner at which actors may spawn. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn", meta = (ClampMin = "0.0"))
    float Radius = 500.0f;

    /** List of entries from which a random selection will be made when spawning. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
    TArray<FSpawnEntry> SpawnEntries;

    /** Whether to automatically spawn one actor on BeginPlay. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
    bool bSpawnOnBeginPlay = true;

    /** Whether to automatically continue spawning at random intervals. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
    bool bLoopSpawning = false;

    /** Minimum interval between automatic spawns when bLoopSpawning is true. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn", meta = (EditCondition = "bLoopSpawning", ClampMin = "0.0"))
    float SpawnIntervalMin = 30.0f;

    /** Maximum interval between automatic spawns when bLoopSpawning is true. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn", meta = (EditCondition = "bLoopSpawning", ClampMin = "0.0"))
    float SpawnIntervalMax = 60.0f;


    /** Global async batch size: maximum actors to spawn per tick. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
    int32 MaxSpawnPerTick = 50;
    /**
     * Optional curve used when SpawnAreaShape is Curve.  The curve is sampled
     * at a random x in 0..1 and multiplied by Radius to determine the spawn
     * distance from the spawner.  This allows designers to bias where in the
     * volume spawns occur (e.g. close to centre or around the edges).
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Curve")
    UCurveFloat* RadiusCurve = nullptr;

    /**
     * Simple scene root used for attachments.  Static mesh components are
     * created on demand only when entries request a mesh.
     */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawn")
    USceneComponent* SceneRoot;

    /** If true, spawn locations are projected onto the navigation mesh. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Placement")
    bool bProjectToNavMesh = true;

    /** Radius used when validating safe placement.  Zero disables the overlap check. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Placement", meta = (ClampMin = "0.0"))
    float SafePlacementRadius = 0.0f;

    /** Minimum distance required between newly spawned actors. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Placement", meta = (ClampMin = "0.0"))
    float MinDistanceBetweenSpawns = 0.0f;

    /** Volumes that spawns must be inside (empty = any location). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Placement")
    TArray<AVolume*> InclusionVolumes;

    /** Volumes that spawns must avoid. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Placement")
    TArray<AVolume*> ExclusionVolumes;

    /** Actor tags considered forbidden when detected beneath the spawn point. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Placement")
    TArray<FName> ForbiddenActorTags;

    /** Physical materials that disallow spawning when detected on the ground. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Placement")
    TArray<UPhysicalMaterial*> ForbiddenPhysMaterials;

    /** Align spawn rotation to ground normal. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Placement")
    bool bAlignToGround = true;

    /** When aligning to ground, optionally face the marker's forward direction. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|Placement")
    bool bFaceMarkerForward = false;

    /** If true and RequiredLevelName is set, spawning will wait until that streaming level is loaded. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|LevelStreaming")
    bool bWaitForLevelToLoad = false;

    /** Name of the streaming level that must be loaded before spawning. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn|LevelStreaming")
    FName RequiredLevelName;

    /** Spawn one actor according to the configured rules.  If multiple entries
     *  exist they will be considered by weight.  This method is exposed to
     *  Blueprints so designers can trigger spawns manually.  It is safe to
     *  call this repeatedly; unique/cooldown rules will be observed. */
    UFUNCTION(BlueprintCallable, Category = "Spawn")
    void SpawnActors();

    /** Destroy all dynamically spawned actors and clear any non‑permanent
     *  static meshes.  Persistent static meshes (bStaticMeshPermanent == true)
     *  remain and can be cleaned up manually if desired. */
    UFUNCTION(BlueprintCallable, Category = "Spawn")
    void DespawnAll();

protected:
    virtual void BeginPlay() override;
    virtual void OnConstruction(const FTransform& Transform) override;

    /**
     * Override this in Blueprints or C++ to implement custom spawn conditions.
     * The default implementation will check RequiredTags on the first player
     * pawn.  Return true to allow spawning or false to skip the spawn.  If
     * false is returned the spawn call will end quietly.  This allows hook
     * up to quest systems, time‑of‑day logic and other complex conditions
     * without modifying the C++ class.
     */
    UFUNCTION(BlueprintNativeEvent, Category = "Spawn")
    bool CanSpawnForEntry(const FSpawnEntry& Entry);
    virtual bool CanSpawnForEntry_Implementation(const FSpawnEntry& Entry);

    /**
     * Compute a random spawn location within the configured volume.
     * Used internally for entries that are not bound to a marker.
     */
    FVector GetSpawnLocation() const;


public:
    virtual void Tick(float DeltaSeconds) override;
#if WITH_EDITOR
    virtual bool ShouldTickIfViewportsOnly() const override { return bDebug; }
#endif

    /** Enable in-editor debug previews and radius. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug")
    bool bDebug = false;

    /** Optional ghost material to apply to preview meshes in editor. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug")
    UMaterialInterface* DebugGhostMaterial = nullptr;

private:
    /** Queue of pending spawns to process in Tick. */
    TArray<FPendingSpawn> PendingSpawns;

    /** Recently spawned locations used to enforce minimum separation. */
    TArray<FVector> RecentSpawnLocations;

    /** Track active instances per class for MaxActive enforcement. */
    TMap<TSubclassOf<AActor>, TArray<TWeakObjectPtr<AActor>>> ActiveByClass;

    /** One HISM per unique mesh, all owned by this spawner. */
    UPROPERTY()
    TMap<UStaticMesh*, UHierarchicalInstancedStaticMeshComponent*> MeshToHISM;

    /** Get or create the HISM for a given mesh. */
    UHierarchicalInstancedStaticMeshComponent* GetOrCreateHISM(UStaticMesh* Mesh);

#if WITH_EDITOR
    /** Redraws non-persistent debug shapes. */
    void DrawDebugArea() const;

    /** Clears non-persistent editor debug previews. */
    void ClearNonPersistentDebug();

    /** Actors spawned in the editor to preview marker placements. */
    UPROPERTY(Transient)
    TArray<TObjectPtr<AActor>> EditorPreviewActors;

    /** Mesh components spawned in the editor for previewing marker placements. */
    UPROPERTY(Transient)
    TArray<TObjectPtr<UStaticMeshComponent>> EditorPreviewMeshes;
#endif

private:
    /** Internal function that performs the actual spawning and schedules the next
     *  automatic spawn if bLoopSpawning is enabled. */
    void SpawnActorsInternal();

    /** Handle used for scheduling the automatic spawning timer. */
    FTimerHandle SpawnTimerHandle;

    /** Records the last spawn time for each unique actor class to implement cooldowns. */
    TMap<TSubclassOf<AActor>, float> LastSpawnTimeMap;

    /** Holds weak pointers to the active unique instances so that we can avoid
     *  spawning additional ones when bUniqueInstance is set.  When the actor
     *  is destroyed the pointer becomes invalid. */
    TMap<TSubclassOf<AActor>, TWeakObjectPtr<AActor>> ActiveInstances;
};
