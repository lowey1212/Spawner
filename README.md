README

DAI Spawner Example Project (spawnManager)

This repository contains the **DAI Spawner Example Project** for Unreal Engine 5. It is designed to showcase how you would integrate and drive the `DAI_Spawner` plugin in a concrete project, alongside the broader DAI (Dynamic AI) plugin ecosystem.

- **Engine**: Unreal Engine 5 (Third Person BP template base)
- **Primary focus**: Runtime actor spawning, pooling, and advanced spawn patterns
- **Key plugin**: `DAI_Spawner` — not included in this repository; you must provide your own licensed copy of the plugin.

## Repository Layout

- `spawnManager/` – Unreal example project using the DAI Spawner plugin
- `spawnManager/Plugins/DAI_Spawner/` – DAI Spawner plugin (expected location; plugin content is not shipped in this repo)
- `DAI_Spawner_Docs/` – Companion documentation for how this project uses DAI Spawner

## DAI_Spawner Overview

`DAI_Spawner` is a spawning coordination plugin that extends Unreal's native spawning and placement features. It provides:

- **Flexible spawn areas** – circle, square, curve, and noise-based distributions
- **Weighted spawn tables** – probability-based selection of actors to spawn
- **Unique instance and cooldown rules** – control how often specific actors can appear
- **Precise marker-based placement** – exact spawn locations via marker actors
- **Performance-aware spawning** – async batching, per-tick spawn limits, and HISM support
- **Integration hooks** – intended to coordinate with other DAI plugins (AI, quests, factions, performance, etc.)

For a full conceptual and API overview of the plugin itself, see the main DAI_Spawner docs (not part of this repo) such as `docs/plugins/DAI_Spawner.md`.

For **how this example project uses DAI_Spawner** specifically, see:

- `DAI_Spawner_Docs/README.md` – Example-project companion docs
- `DAI_Spawner_Docs/INDEX.md` – High-level feature and system overview
- `DAI_Spawner_Docs/DAISpawnManager.md` – Detailed reference for the core spawn manager actor

## Getting Started

### Prerequisites

- **Unreal Engine 5.x** installed via the Epic Games Launcher
- **Visual Studio 2022** (or newer) with the **Game development with C++** workload
- A licensed copy of the **DAI_Spawner** plugin (and any required DAI core plugins)

### Clone the Repository

```powershell
cd f:\githubdesktop
git clone https://github.com/lowey1212/Spawner.git
cd Spawner\spawnManager
```

Adjust the path as needed for your local setup.

### Install / Provide DAI_Spawner

1. Obtain the `DAI_Spawner` plugin from its distribution channel.
2. Copy the plugin folder into `spawnManager/Plugins/DAI_Spawner/`.
3. Ensure the `.uplugin` file and plugin source/binaries are present.

> The plugin itself is **not** shipped in this GitHub repo. You must provide your own copy.

### Open the Project

1. In **File Explorer**, double-click `spawnManager\spawnManager.uproject`.
2. If prompted, let Unreal generate Visual Studio project files and compile modules.
3. Once the Unreal Editor opens, load the example map(s), such as `Content/ThirdPerson/Maps/ThirdPersonMap.umap` or any dedicated spawner test maps you add.

Alternatively, you can:

1. Open `spawnManager\spawnManager.sln` in Visual Studio.
2. Build the `spawnManager` target.
3. Start debugging or run the project, which will launch the Unreal Editor.

## Example Usage in This Project

Inside the `spawnManager` project, look for:

- Level and actor Blueprints under `Content/` that use **`DAI_Spawner`** Blueprint nodes.
- Any `DAISpawnManager`-like setup actors or manager Blueprints placed in the level.
- Marker actors (e.g. "spawn markers") used to drive precise placement.

Common patterns demonstrated include:

- **Simple spawn on trigger** – Blueprint events calling DAI Spawner nodes to create actors.
- **Pattern and wave spawning** – radial/line/noise spawn patterns and timed waves.
- **Object pooling** – reusing actors instead of repeatedly spawning/destroying.

The concrete behavior and node usage are described in more depth in:

- `DAI_Spawner_Docs/README.md` – how this example wires up the spawner
- `DAI_Spawner_Docs/DAISpawnManager.md` – spawn manager node and property details

## Project Structure (High Level)

- `spawnManager/Config/` – Default Unreal configuration (`DefaultEngine.ini`, `DefaultGame.ini`, etc.)
- `spawnManager/Content/` – Game content, Blueprints, and assets that **use** DAI Spawner
- `spawnManager/Source/spawnManager/` – C++ game module entry (`spawnManager.Build.cs`, `spawnManager.cpp`, `spawnManager.h`)
- `spawnManager/Plugins/DAI_Spawner/` – Expected location for the DAI Spawner plugin (not included)

## Cleaning & Regenerating

The root project includes a helper script:

- `spawnManager/CleanAndRegenerate.bat` – Clean intermediates and regenerate Visual Studio project files.

Run it from a **Developer Command Prompt** or PowerShell window as needed.

## Contributing

This repository is primarily an **example and reference** for DAI Spawner integration. If you extend it:

- Follow standard Unreal C++ and Blueprint style.
- Keep **example content** focused and readable.
- When possible, update both example usage and `DAI_Spawner_Docs/` so that docs and behavior stay in sync.

Pull requests are welcome but should be narrowly scoped and well-documented.

## License & Ownership

This repository is an Unreal Engine 5 example project intended to demonstrate how to integrate and drive the **DAI Spawner** plugin in a real game project.

- The `DAI_Spawner` plugin itself is a **separate, owned plugin**. You must legally own/access that plugin to use it beyond this example.
- This project is built on **Unreal Engine 5** and is subject to the standard Unreal Engine End User License Agreement (EULA). Use of Unreal Engine binaries, headers, and associated content must comply with Epic Games' license terms.

See the official Unreal Engine EULA at: https://www.unrealengine.com/eula

Any additional licensing terms for the DAI Spawner plugin or related DAI plugins are governed by their own agreements and are **separate** from the Unreal Engine EULA.

---

Last updated: November 30, 2025
Compatible with: Unreal Engine 5.x