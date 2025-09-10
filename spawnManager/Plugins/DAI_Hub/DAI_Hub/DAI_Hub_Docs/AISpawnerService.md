# DAI_Hub / AISpawnerService

_Declared in `Source/DAI_Hub/Public/Interfaces/DAISpawnerService.h`._

The spawner service routes spawn requests identified by gameplay tags. A world
subsystem can register itself as the implementation and broadcast spawn
approval or failure events through the hub.

### Gameplay Tags

- `DAI.Spawn.Request` &ndash; a spawn has been requested.
- `DAI.Spawn.Approved` &ndash; the request was approved.
- `DAI.Spawn.Failed` &ndash; the request was rejected.
- `DAI.Spawn.Despawned` &ndash; an existing spawn was removed.
