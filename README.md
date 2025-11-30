# spawnManager

An Unreal Engine project based on the **Third Person BP** template, used as a playground for experimenting with spawning logic, blueprints, and gameplay testing.

## Project Overview

- **Engine**: Unreal Engine 5 (Third Person Blueprint template)
- **Entry Module**: `spawnManager` (see `Source/spawnManager/spawnManager.cpp`)
- **Content**: Includes third-person character, prototype level assets, and custom blueprints like `spawner.uasset` and `dai_marker.uasset`.

This repo is intended for learning, prototyping, and demonstrating spawning systems in Unreal (e.g., spawning characters, markers, or other actors at runtime).

## Getting Started

### Prerequisites

- **Unreal Engine 5.x** installed via the Epic Games Launcher
- **Visual Studio 2022** (or newer) with the **Game development with C++** workload, if you plan to build C++ code
- **Git** (optional, for cloning the repo)

### Clone the Repository

```powershell
cd f:\githubdesktop
git clone https://github.com/lowey1212/Spawner.git
cd Spawner\spawnManager
```

> Adjust the path if your local folder layout is different.

### Open the Project

You can open the project either from the `.uproject` file or from the `.sln` file:

1. In **File Explorer**, double‑click `spawnManager\spawnManager.uproject`.
2. If prompted, let Unreal generate project files.
3. Once the Unreal Editor opens, load the `ThirdPersonMap` level from `Content/ThirdPerson/Maps/ThirdPersonMap.umap`.

Or, using Visual Studio:

1. Open `spawnManager\spawnManager.sln`.
2. Build the `spawnManager` target.
3. From the **Debug** menu, start the project (this will launch the Unreal Editor).

## Usage

The project currently uses the standard Third Person BP setup plus custom spawn‑related blueprints and assets under `Content`.

Typical uses include:

- Testing actor spawning logic in Blueprints
- Experimenting with markers and level prototyping utilities
- Iterating on character/AI spawning behavior in a safe sandbox project

Open the relevant Blueprints such as `spawner.uasset` inside the Unreal Editor to inspect or modify the spawning behavior.

## Project Structure (High Level)

- `Config/` – Default Unreal configuration (`DefaultEngine.ini`, `DefaultGame.ini`, etc.)
- `Content/` – Game content (Third Person assets, prototype materials/meshes, custom spawn blueprints)
- `Source/spawnManager/` – C++ game module (`spawnManager.Build.cs`, `spawnManager.cpp`, `spawnManager.h`)
- `Plugins/` – Optional plugins (empty or project‑specific, depending on your setup)

## Cleaning & Regenerating

There is a helper script in the root project folder:

- `CleanAndRegenerate.bat` – Can be used to clean intermediate files and regenerate Visual Studio project files. Run it from a **Developer Command Prompt** or PowerShell window if needed.

## Contributing

This project is primarily a personal/learning sandbox. Feel free to fork it, experiment with your own spawning systems, and adapt the project to your needs.

If you open a PR, please keep changes focused and clearly documented.

## License

This project is licensed under the terms described in `LICENSE`. Unreal Engine itself and included starter assets are subject to Epic Games' Unreal Engine EULA.