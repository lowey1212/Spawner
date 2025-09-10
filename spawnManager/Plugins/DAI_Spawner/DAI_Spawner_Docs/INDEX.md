# DAI_Spawner — Documentation

_Newbie-friendly reference for Blueprint nodes and settings._

## Overview

DAI_Spawner is a sophisticated actor spawning system for Unreal Engine that provides advanced spawning capabilities with:

- **Flexible Spawn Areas**: Multiple geometric shapes (circle, square, curve-based, noise)
- **Weighted Selection**: Probability-based spawning from configurable spawn tables
- **Unique Instance Management**: Singleton spawning with cooldown timers
- **Precise Placement**: Marker-based spawning for exact positioning
- **Performance Optimization**: Async batching and hierarchical instanced static mesh (HISM) support
- **Advanced Placement Logic**: NavMesh projection, collision avoidance, volume constraints
- **Level Streaming Integration**: Spawning coordination with level streaming
- **Tag-Based Conditions**: Player tag requirements for conditional spawning

## Quick Start

- Look for nodes under the Blueprint category shown below.
- All node names start with `DAI_` to be easy to search.

## Components Reference

- [DAISpawnManager](DAISpawnManager.md) - Core spawning actor with advanced configuration options
- [DAISpawnMarker](DAISpawnMarker.md) - Precise placement markers for spawning actors
- [SpawnerActor](SpawnerActor.md) - Simple spawner actor for basic use cases
- [FSpawnEntry](FSpawnEntry.md) - Data structure for defining spawn table entries
- [ESpawnAreaShape](ESpawnAreaShape.md) - Enumeration of available spawn area shapes

## Key Features

### 🎯 Intelligent Spawning
- Weighted random selection from spawn tables
- Unique instance management with automatic cooldowns
- Tag-based conditional spawning based on player state
- Maximum active instance limits per spawn type

### 🗺️ Advanced Placement
- Multiple spawn area shapes (circle, square, curve, noise)
- NavMesh projection for AI-compatible spawning
- Safe placement with collision and overlap detection
- Minimum distance enforcement between spawns
- Volume-based inclusion/exclusion zones

### 📍 Precise Control
- Marker-based spawning for exact placement
- Cached transforms for shipping builds (markers removed)
- Companion static mesh spawning with persistence options
- Ground material and actor tag filtering

### ⚡ Performance Optimized
- Async batching to prevent frame rate spikes
- Hierarchical Instanced Static Mesh (HISM) for companion meshes
- Configurable spawn limits per tick
- Efficient collision detection and validation

### 🌊 Level Streaming Support
- Automatic level loading coordination
- Spawning delays until required levels are loaded
- Streaming-aware placement validation
- Memory-efficient marker transform caching

### 🔧 Designer Friendly
- Visual debug tools and editor previews
- Curve-based spawn distribution control
- Comprehensive spawn entry configuration
- Real-time parameter adjustment in editor

## Architecture Overview

The DAI_Spawner system uses a modular approach:

1. **Manager Layer**: `ADAISpawnManager` handles spawn logic and configuration
2. **Marker Layer**: `ADAISpawnMarker` provides precise placement capabilities
3. **Data Layer**: `FSpawnEntry` structures define what and how to spawn
4. **Performance Layer**: HISM components and async processing optimize runtime
5. **Integration Layer**: Level streaming and navigation mesh coordination

## Spawn Area Shapes

### Circle
- Uniform distribution within a circular area
- Radius-based boundary definition
- Ideal for natural, organic spawning patterns

### Square
- Uniform distribution within a square area
- Side length = 2 × Radius
- Good for structured, grid-like layouts

### Curve
- Custom distribution using designer-defined curves
- Curve input (0-1) maps to radial distance
- Allows biased spawning (center-heavy, edge-heavy, etc.)

### Noise
- Perlin noise-based distribution for organic patterns
- More natural scattering than uniform shapes
- Reduces obvious geometric patterns in spawn placement

## Spawn Entry Configuration

### Basic Properties
- **Actor Class**: What to spawn
- **Weight**: Relative probability of selection
- **Amount**: How many to spawn when selected
- **Spawn Chance**: Final probability check (0-1)

### Instance Management
- **Unique Instance**: Only one instance allowed at a time
- **Cooldown**: Minimum time before respawning unique instances
- **Max Active**: Maximum simultaneous instances (0 = unlimited)

### Placement Control
- **Use Marker**: Enable precise marker-based placement
- **Actor Offset**: Position offset from spawn point
- **Mesh Offset**: Position offset for companion static mesh

### Conditional Spawning
- **Required Tags**: Player tags required for spawning
- **Custom Validation**: Blueprint-implementable spawn conditions

## Integration with Other DAI Plugins

- **DAI_Hub**: Registers as spawning service in the service registry
- **DAI_Map**: Coordinates with level streaming and navigation
- **DAI_QuestManager**: Quest-triggered spawning and objective coordination
- **DAI_Faction**: Faction-aware spawning and territory control
- **DAI_AI**: AI-compatible spawn placement with NavMesh integration

## Best Practices

### Spawn Design
- Use appropriate spawn shapes for your game's aesthetic
- Balance spawn weights for desired encounter variety
- Design cooldowns that match gameplay pacing
- Consider player agency in spawn triggering

### Performance Optimization
- Use HISM for companion meshes when spawning many instances
- Set reasonable MaxSpawnPerTick values
- Implement efficient spawn validation logic
- Monitor memory usage with large spawn tables

### Placement Strategy
- Use NavMesh projection for AI characters
- Set appropriate SafePlacementRadius values
- Design inclusion/exclusion volumes carefully
- Test spawn placement in various level conditions

### Level Integration
- Coordinate with level streaming systems
- Cache marker transforms for shipping builds
- Use appropriate spawn timing (BeginPlay vs. manual)
- Test spawn behavior across level transitions

## Common Use Cases

### Dynamic Enemy Encounters
```
// Wildlife spawning with organic placement
Spawn Area: Noise shape
Entries: Bear (weight 1), Wolf Pack (weight 3), Deer (weight 5)
Placement: NavMesh projected, avoid roads
```

### Treasure and Collectibles
```
// Rare item spawning with precise placement
Spawn Area: Marker-based
Entries: Rare Gem (unique, long cooldown)
Placement: Specific cave locations, with chest mesh
```

### Ambient Life
```
// Background atmosphere spawning
Spawn Area: Circle with curve bias toward edges
Entries: Birds, Insects, Small Animals
Placement: Loop spawning with short intervals
```

### Quest-Related Spawning
```
// Conditional objective spawning
Spawn Area: Square in settlement
Entries: Quest NPC (requires quest tag)
Placement: Safe areas, avoid player buildings
```

## Troubleshooting

### Common Issues
- **Spawns not appearing**: Check spawn conditions and validation logic
- **Performance problems**: Reduce MaxSpawnPerTick or optimize spawn validation
- **Placement failures**: Verify NavMesh coverage and collision settings
- **Marker issues**: Ensure transforms are cached for shipping builds

### Debug Tools
- Use debug visualization in editor
- Monitor spawn attempt logs
- Validate placement conditions
- Check level streaming coordination

### Performance Monitoring
- Track spawn validation timing
- Monitor HISM instance counts
- Check memory usage with large spawn tables
- Profile async spawning performance