# DAI_Spawner Plugin – Example Project Companion Docs

This document explains how the `DAI_Spawner` plugin is used **inside this example project**, and how to reproduce the same patterns in your own game.

For the full technical reference of `DAI_Spawner` (all components, Blueprint nodes, data structs, and developer settings), see the main documentation in `docs/plugins/DAI_Spawner.md`.

---

## 1. Role of DAI_Spawner in the Example Project

In this example project, `DAI_Spawner` is responsible for:

- Centralized **runtime actor spawning** (enemies, props, FX, projectiles).
- **Object pooling** to avoid repeated spawn/destroy cost.
- **Spawn location management**, including validation and registered spawn points.
- **Pattern and wave spawning** for combat or event sequences.
- Optional **GAS-driven spawning abilities** when a Gameplay Ability System is present.

The plugin operates as a **companion system** to the broader DAI stack in the example project.

> This project is intentionally kept small and focused: it is here to showcase how to use `DAI_Spawner`, not to provide a full game.

---

## 2. Project Structure

Key locations relevant to `DAI_Spawner` inside this project:

- `Plugins/DAI_Spawner/` – Core plugin code, uplugin file, and resources.
- `Content/` – Game-specific Blueprints and assets that *use* the spawner.
- `Config/DefaultGame.ini` – May contain default settings for DAI plugins, including spawner config.
- `Config/DefaultEngine.ini` – May register subsystems or system defaults required by DAI.

You should treat the plugin folder as **upstream code** and the rest of the project as **your sandbox**.

---

## 3. Enabling and Verifying the Plugin

1. Open `spawnManager.uproject` in Unreal Engine 5.
2. Go to `Edit → Plugins`.
3. Under the DAI category, ensure `DAI_Spawner` is **enabled**.
4. Restart the editor if prompted.

If the plugin fails to load, check:

- Your engine version vs. the version targeted by the plugin.
- That all required DAI dependencies are present (e.g. `DAI`, and any modules referenced by `DAI_Spawner.uplugin`).

---

## 4. Example Usage Patterns in This Project

### 4.1 Simple Spawn on Trigger

A typical beginner setup in the example project:

- A level Blueprint (or actor Blueprint) listens to an overlap / event.
- When the event fires, it calls a `DAI_Spawner` Blueprint function such as:
  - `SpawnActorAdvanced`
  - `SpawnInPattern`
- The spawned actor class points to project-specific assets (e.g. a character Blueprint or FX actor).

Inspect level and actor Blueprints in `Content/` that:

- Contain nodes from the **`DAI_Spawner`** category.
- Own components like `DAISpawnPoolComponent` or `DAISpawnLocationComponent`.

These are your primary learning examples.

### 4.2 Object Pooling for Repeatable Spawns

The example project demonstrates pooling in two places:

- A **setup phase** (e.g. GameMode or Manager Blueprint) where `CreateSpawnPool` is called.
- Multiple **runtime spawn events** that then use `GetPooledActor` / `ReturnToPool` instead of `SpawnActor` / `DestroyActor`.

This pattern is ideal for:

- Projectiles
- Repeating FX
- Frequently spawned temporary actors

### 4.3 Pattern and Wave Spawning

The project includes examples that call into pattern and wave helpers, such as:

- `SpawnInPattern` – used for circular or line formations around a point.
- `SpawnWave` – used for simple timed waves.

Look for these nodes in:

- Any `Spawner_` example maps.
- GameMode / controller Blueprints handling wave logic.

### 4.4 Integration with Other DAI Systems

Where present, the example project may hook spawns into:

- **DAI_AI** – spawned actors join AI squads or adopt AI behaviors.
- **DAI_PerfMngr** – spawn rates or pool sizes may adapt to performance.

These integrations are optional for understanding basic spawning, but illustrate how DAI systems cooperate in a real game.

---

## 5. Project Settings for DAI_Spawner

Navigate to `Edit → Project Settings → Game → DAI Spawner`.

In this example project, you will typically see:

- **`bEnableSpawnSystem`** – enabled.
- A reasonable **`MaxConcurrentSpawns`** and **`SpawnBudgetMs`** tuned for example scenes.
- **`bEnableObjectPooling`** – enabled, often with a modest `MaxTotalPooledActors` value.
- **`bValidateSpawnLocations`** – enabled for predictable behavior in test maps.
- Debug options (`bDrawSpawnDebug`, `bDrawPoolStats`) usually **off** by default but available for exploration.

You are encouraged to tweak these settings while running the example maps to see:

- How aggressive spawn rates impact performance.
- How pooling controls memory and hitches.
- How strict validation settings change where actors can spawn.

---

## 6. Migrating Patterns into Your Own Project

To adopt these patterns in another Unreal project:

1. Install and enable the `DAI_Spawner` plugin (and DAI core as needed).
2. Copy or recreate:
   - Blueprint logic that calls `DAI_Spawner` nodes.
   - Relevant `DAISpawnPoolComponent` / `DAISpawnLocationComponent` configurations.
   - Any supporting data assets or tags referenced by the example Blueprints.
3. Adjust paths and class references to point to your own assets.
4. Review your **Project Settings → DAI Spawner** and mirror values that make sense for your game scale.

Use this example project as a **reference, not a dependency**: your production game should own its content and tuning.

---

## 7. Limitations & Scope

- The example project is **not a full game** and intentionally omits:
  - Save/load flows
  - Full quest or progression systems
  - Networked / multiplayer edge cases
- It focuses on **local spawning behavior** and editor-friendly inspection.
- Some assets may assume other DAI plugins are available; if you strip those plugins out, you may need to relink or adjust Blueprints.

---

## 8. License and Usage

The `DAI_Spawner` plugin code is distributed under its own license as part of the DAI system.

This example project is provided for **demonstration and integration guidance** and is intended to be used:

- With **Unreal Engine 5** under the **standard Unreal Engine EULA**.
- In accordance with any additional terms that apply to the DAI plugin suite.

By using this project, you agree to:

- Comply with Epic Games' Unreal Engine license.
- Respect the licensing terms of the DAI plugins.

If you are unsure about redistribution or commercial usage, treat this repository as **reference material** and consult the main DAI / DAI_Spawner license text before shipping anything built on top of it.

---

_Last updated: November 30, 2025_

For deeper details on the spawner internals, refer to `docs/plugins/DAI_Spawner.md` in the main documentation suite.