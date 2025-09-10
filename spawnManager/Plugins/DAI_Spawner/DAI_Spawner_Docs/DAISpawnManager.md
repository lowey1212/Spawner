# DAI_Spawner / DAISpawnManager

_Declared in `Source/DAI_Spawner/Public/DAISpawnManager.h`._

Core spawning actor that can be placed in levels to manage sophisticated spawning of other actors with support for different area shapes, weighted random selection, unique instance rules, cooldowns, and advanced placement logic.

## Overview

The `ADAISpawnManager` is the primary spawning system component providing:

- **Flexible Spawn Areas**: Multiple geometric shapes with customizable parameters
- **Weighted Selection**: Probability-based spawning from configurable tables
- **Instance Management**: Unique spawning with cooldowns and active limits
- **Performance Optimization**: Async batching and hierarchical instanced meshes
- **Advanced Placement**: NavMesh projection, collision avoidance, volume constraints
- **Level Integration**: Streaming coordination and marker-based placement

## Blueprint Nodes

### SpawnActors

> Creates actors or instances based on the current spawn table configuration.

- **Blueprint Category:** `Spawn`
- **Node Type:** `BlueprintCallable`
- **Display Name:** `Spawn Now`
- **Keywords:** `spawn emit create`

**Signature**

`void SpawnActors()`

**Inputs**

_No inputs._

**Returns**: `void`

**Description**

Triggers the spawning process according to the configured spawn rules. Considers all spawn entries by weight, validates spawn conditions, and creates actors with proper placement. Safe to call repeatedly as unique/cooldown rules will be observed.

**Usage Notes**
- Respects unique instance and cooldown restrictions
- Processes all placement validation rules
- Can trigger async spawning for performance optimization
- Automatically schedules next spawn if loop spawning is enabled

---

### DespawnAll

> Removes all actors spawned by this spawn manager and cleans up non-permanent static meshes.

- **Blueprint Category:** `Spawn`
- **Node Type:** `BlueprintCallable`
- **Display Name:** `Despawn All`
- **Keywords:** `remove clear destroy despawn`

**Signature**

`void DespawnAll()`

**Inputs**

_No inputs._

**Returns**: `void`

**Description**

Destroys all dynamically spawned actors managed by this spawner and clears any non-permanent static meshes. Persistent static meshes (where `bStaticMeshPermanent` is true) remain and can be cleaned up manually if desired.

**Usage Notes**
- Only affects actors spawned by this specific manager
- Preserves permanent static meshes for environmental persistence
- Clears cooldown timers and active instance tracking
- Does not affect actors spawned by other systems

---

### CanSpawnForEntry

> Blueprint-implementable validation function to determine if a spawn entry should be allowed to spawn.

- **Blueprint Category:** `Spawn`
- **Node Type:** `BlueprintCallable`, `BlueprintNativeEvent`
- **Display Name:** `Can Spawn For Entry`
- **Keywords:** `allow block validate spawn`

**Signature**

`bool CanSpawnForEntry(const FSpawnEntry& Entry) const`

**Inputs**

- `Entry` _(FSpawnEntry)_ - The spawn entry being evaluated for spawning

**Returns**: `bool` - True to allow spawning, false to block

**Description**

Override this function in Blueprints or C++ to implement custom spawn conditions. The default implementation checks `RequiredTags` on the first player pawn. This allows integration with quest systems, time-of-day logic, and other complex conditions.

**Usage Notes**
- Called for each potential spawn entry before spawning
- Can be overridden in Blueprint for custom validation logic
- Default implementation validates player required tags
- Return false to quietly skip the spawn without errors

## Component Properties

### Spawn Area Configuration

#### SpawnAreaShape _(ESpawnAreaShape)_
- **Default**: Circle
- **Options**: Square, Circle, Curve, Noise
- **Description**: Geometric shape used when selecting spawn locations

#### Radius _(float)_
- **Default**: 500.0
- **Range**: 0.0+
- **Description**: Maximum distance from the spawner at which actors may spawn

#### RadiusCurve _(UCurveFloat*)_
- **Condition**: Only when SpawnAreaShape is Curve
- **Description**: Curve used to bias radial spawn distance (0-1 input maps to distance)

### Spawn Behavior

#### bSpawnOnBeginPlay _(bool)_
- **Default**: true
- **Description**: Whether to automatically spawn one actor when play begins

#### bLoopSpawning _(bool)_
- **Default**: false
- **Description**: Whether to continue spawning automatically at intervals

#### SpawnIntervalMin/Max _(float)_
- **Default**: 30.0 / 60.0 seconds
- **Condition**: Only when bLoopSpawning is true
- **Description**: Minimum and maximum time between automatic spawns

#### MaxSpawnPerTick _(int32)_
- **Default**: 50
- **Description**: Maximum number of actors spawned in a single tick for performance

### Placement Rules

#### bProjectToNavMesh _(bool)_
- **Default**: true
- **Description**: Whether spawn locations are projected onto the navigation mesh

#### SafePlacementRadius _(float)_
- **Default**: 0.0
- **Description**: Radius for overlap checks when spawning (0 disables)

#### MinDistanceBetweenSpawns _(float)_
- **Default**: 0.0
- **Description**: Minimum required distance between newly spawned actors

#### bAlignToGround _(bool)_
- **Default**: true
- **Description**: Rotate actors so their up vector matches the ground normal

#### bFaceMarkerForward _(bool)_
- **Default**: false
- **Description**: When aligning to ground, also face marker's forward direction

### Volume Constraints

#### InclusionVolumes _(TArray<AVolume*>)_
- **Description**: Volumes that spawns must be inside (empty = any location)

#### ExclusionVolumes _(TArray<AVolume*>)_
- **Description**: Volumes that spawns must avoid

#### ForbiddenActorTags _(TArray<FName>)_
- **Description**: Actor tags that block spawning when detected beneath spawn point

#### ForbiddenPhysMaterials _(TArray<UPhysicalMaterial*>)_
- **Description**: Physical materials that disallow spawning on surfaces

### Level Streaming

#### bWaitForLevelToLoad _(bool)_
- **Default**: false
- **Description**: Delay spawns until specified streaming level is loaded

#### RequiredLevelName _(FName)_
- **Description**: Name of streaming level that must be loaded before spawning

### Randomization Control

#### bDeterministic _(bool)_
- **Default**: false
- **Description**: Enable deterministic random sequence for reproducible spawns

#### Seed _(int32)_
- **Default**: 12345
- **Description**: Seed value used when bDeterministic is true

### Debug Tools

#### bDebug _(bool)_
- **Default**: false
- **Description**: Enable in-editor debug previews and spawn area visualization

## Spawn Entry Configuration

### FSpawnEntry Structure

Each entry in the `SpawnEntries` array defines a potential spawn with the following properties:

#### Basic Spawn Properties
- **ActorClass**: The actor class to spawn
- **Weight**: Relative probability for selection (must be positive)
- **Amount**: Number of actors to spawn when this entry is selected
- **SpawnChance**: Final probability check (0.0-1.0) even after selection

#### Instance Management
- **bUniqueInstance**: Only allow one instance of this class at a time
- **CooldownMin/Max**: Time range before unique actors can respawn
- **bUseRandomCooldown**: Use random cooldown between min/max values
- **MaxActive**: Maximum simultaneous instances (0 = unlimited)

#### Placement Control
- **bUseMarker**: Use specific marker instead of random location
- **MarkerActor**: Reference to marker actor for precise placement
- **ActorOffset**: Position offset applied to actor spawn location
- **MeshOffset**: Position offset applied to companion static mesh

#### Companion Mesh
- **StaticMesh**: Optional static mesh to spawn with the actor
- **bStaticMeshPermanent**: Whether mesh persists after actor destruction

#### Conditional Spawning
- **RequiredTags**: Player tags required for this entry to spawn

## Usage Examples

### Basic Wildlife Spawning

```
// Configure spawn manager for organic wildlife placement
SpawnAreaShape = Noise
Radius = 1000.0
bProjectToNavMesh = true
bAlignToGround = true

// Spawn entries
Entry 0: Bear (Weight: 1, Unique: true, Cooldown: 300s)
Entry 1: Wolf (Weight: 3, Amount: 2-4, MaxActive: 8)
Entry 2: Deer (Weight: 5, Amount: 1-3, MaxActive: 12)
```

### Quest-Based Treasure Spawning

```
// Precise treasure placement with requirements
SpawnAreaShape = Circle (marker-based)
bSpawnOnBeginPlay = false

// Spawn entry
Entry: Treasure Chest
  bUseMarker = true
  MarkerActor = TreasureCaveMarker
  RequiredTags = ["Quest.TreasureHunt.Active"]
  StaticMesh = ChestMesh
  bStaticMeshPermanent = true
```

### Performance-Optimized Ambient Spawning

```
// High-frequency ambient spawning with performance controls
bLoopSpawning = true
SpawnIntervalMin = 10.0
SpawnIntervalMax = 30.0
MaxSpawnPerTick = 20

// Multiple ambient entries with weight distribution
Entry 0: Butterfly (Weight: 10, MaxActive: 50)
Entry 1: Bird (Weight: 5, MaxActive: 20)
Entry 2: Firefly (Weight: 8, MaxActive: 30)
```

## Advanced Features

### Curve-Based Distribution

```
// Use curve to bias spawns toward edges of area
SpawnAreaShape = Curve
RadiusCurve = EdgeBiasCurve  // Curve that ramps up from 0 to 1

// Results in more spawns near the perimeter
```

### Volume-Constrained Spawning

```
// Spawn only in safe areas, avoid dangerous zones
InclusionVolumes = [SafeZoneVolume1, SafeZoneVolume2]
ExclusionVolumes = [LavaVolume, DeepWaterVolume]
ForbiddenPhysMaterials = [LavaMaterial, IceMaterial]
```

### Level Streaming Coordination

```
// Wait for streaming level before spawning boss
bWaitForLevelToLoad = true
RequiredLevelName = "BossArena_Stream"

// Entry for boss that requires loaded level
Entry: BossActor (bUniqueInstance = true)
```

### Deterministic Spawning

```
// Reproducible spawning for testing/demos
bDeterministic = true
Seed = 42

// Same spawn results every time with this seed
```

## Performance Optimization

### Async Spawning
- Set `MaxSpawnPerTick` to prevent frame rate spikes
- Large spawn operations are automatically batched across frames
- Monitor performance with debug tools

### HISM Integration
- Companion static meshes use Hierarchical Instanced Static Mesh components
- Efficient rendering for many identical meshes
- Automatic instance management and cleanup

### Memory Management
- Weak pointers track active instances to prevent memory leaks
- Automatic cleanup of destroyed actor references
- Efficient spawn location caching and validation

## Integration Patterns

### Quest System Integration

```cpp
// Custom spawn validation in Blueprint
bool CanSpawnForEntry_Implementation(const FSpawnEntry& Entry)
{
    // Check quest requirements
    if(QuestManager->IsQuestActive("SpecialEncounter"))
    {
        return true;
    }
    
    // Default validation
    return Super::CanSpawnForEntry_Implementation(Entry);
}
```

### Faction System Integration

```cpp
// Faction-aware spawning
bool CanSpawnForEntry_Implementation(const FSpawnEntry& Entry)
{
    // Check player faction standing
    float Reputation = FactionService->GetReputation(Player, LocalFaction);
    return Reputation > RequiredReputation;
}
```

### Save System Integration

```cpp
// Persistent spawn state
void SaveSpawnState()
{
    // Save active spawns and cooldown timers
    SaveData->SpawnManagerStates.Add(GetUniqueID(), GetCurrentState());
}
```

## Troubleshooting

### Common Issues

#### Spawns Not Appearing
- Check spawn area radius and placement validation
- Verify spawn entries have positive weights
- Ensure required conditions are met
- Check debug visualization for placement issues

#### Performance Problems
- Reduce `MaxSpawnPerTick` value
- Optimize spawn validation logic
- Check for excessive spawn frequency
- Monitor HISM instance counts

#### Placement Failures
- Verify NavMesh coverage in spawn areas
- Check volume constraints and forbidden materials
- Ensure adequate safe placement radius
- Test with debug visualization enabled

### Debug Tools

#### Editor Visualization
- Enable `bDebug` to see spawn areas and placement attempts
- Use ghost materials for mesh previews
- Visualize marker positions and transforms

#### Runtime Monitoring
- Log spawn attempts and validation results
- Monitor active instance counts per class
- Track cooldown timers and unique instance status
- Profile spawn validation performance

#### Performance Profiling
- Monitor frame time impact of spawn operations
- Check memory usage with large spawn tables
- Validate async spawning behavior
- Test with maximum concurrent spawns