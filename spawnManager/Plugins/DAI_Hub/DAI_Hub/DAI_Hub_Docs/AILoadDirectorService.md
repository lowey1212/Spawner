# DAI_Hub / AILoadDirectorService

_Declared in `Source/DAI_Hub/Public/Interfaces/DAILoadDirectorService.h`._

## Overview

`IDAILoadDirectorService` abstracts world‑partition or streaming logic behind a
simple interface. Regions are identified by gameplay tags and consumers may
query readiness or schedule callbacks for when a region becomes available.

### Methods

- `LoadRegion(Tag)`: mark a region as loaded and broadcast readiness events.
- `UnloadRegion(Tag)`: signal that a region has been unloaded.
- `IsRegionReady(Tag)`: check whether the region is currently available.
- `WhenReady(Tag, Callback)`: execute the provided callback once the region is
  ready; if already loaded it runs immediately.

### Gameplay Tags

- `DAI.Load.Region.Requested` &ndash; a region load has been requested.
- `DAI.Load.Region.Ready` &ndash; region finished loading and is ready.
- `DAI.Load.Region.Unloaded` &ndash; region has been unloaded.
