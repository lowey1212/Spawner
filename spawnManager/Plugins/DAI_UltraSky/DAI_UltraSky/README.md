# DAI Ultra Sky (Prototype)

Lightweight, extensible dynamic sky/atmosphere actor for UE 5.5 and 5.6 using built-in components: DirectionalLight (sun), SkyAtmosphere, SkyLight, Volumetric Clouds, and Exponential Height Fog.

Features
- Time-of-day animation with configurable day length
- Skylight recapture on a set interval (for performance)
- Basic controls for Rayleigh/Mie scales and cloud coverage/density
- Pure C++ actor with Blueprint-callable helpers
- Biome volumes + DataAssets drive weather, FX, and materials
- GAS integration: AttributeSet for weather and a sample ability to trigger conditions/biomes
- Weather Override Volumes: local biome/condition overrides with priority and blends
- Radial Storm actor: circular storms that pass over the player (condition + optional biome)
- Wind gusts + wind source: optional `UWindDirectionalSourceComponent`, Perlin-noise gusts, and MPC outputs for `WindIntensity`/`WindDirectionDegrees`
- Climate preset + random weather: season-aware weighted picks that set biome/condition with intervals and deterministic seeding
- Environment sounds: component that crossfades ambient sounds per condition
- Lightning Controller: timed/random strikes with Niagara bolt/glow + optional thunder delay
- Tornado Actor: spawns/moves a Niagara tornado system with simple pathing
- Snow system: auto switch rain↔snow based on temperature, snow accumulation and wetness published to MPC, footprint event to hook decals/material effects
- Runtime configuration application via `ApplySkyConfiguration` and `ApplyWeatherConfiguration` functions (UE 5.5/5.6)

Usage
1. Enable the plugin `DAI Ultra Sky` in your project Plugins.
2. Add `DAI Ultra Sky Actor` to your level.
3. Tweak TimeOfDay, DayLengthSeconds, SkyLightRecaptureInterval, and atmosphere/cloud settings.
4. Create Biomes: Content Browser → Misc → Data Asset → `DAIUltraSkyBiomeData`.
   - Set TargetCloudCoverage/Density, TargetFogDensity.
   - Assign a `MaterialParameterCollection` and add overrides (e.g., Wetness, RainAmount, Water_WaveScale).
   - Map weather conditions to Niagara systems in `ConditionFX` (e.g., key `Rain` → your rain Niagara System).
5. Add Biome Volumes: Place `DAIUltraSkyBiomeVolume`, assign your Biome, set `Priority` if volumes overlap.
6. On the Ultra Sky actor, set `DefaultBiome` and optionally a `WeatherAnchor` (e.g., player pawn).
7. Drive weather by setting `CurrentCondition` to names that exist in the biome’s `ConditionFX` (e.g., `Rain`).
8. Local overrides:
   - Place `DAIUltraSkyWeatherOverrideVolume` and set `OverrideBiome` and/or `OverrideCondition`. Use `Priority` and `Enter/ExitBlendSeconds`.
   - Place `DAIUltraSkyRadialStorm` and set `OuterRadius`, optional `StormBiome`, and `StormCondition`.
9. Wind gusts:
   - On Ultra Sky, enable `bEnableWindDirectionalSource`. Set `WindBaseIntensity`, `WindGustStrength`, `WindGustSpeed`, and `WindDirectionDegrees`.
   - Optionally assign `GlobalWindMPC` and use parameters `WindIntensity` and `WindDirectionDegrees` in materials.
10. Random weather:
   - Create a `DAIUltraSkyClimatePreset` and populate seasonal `WeatherChoice` arrays.
   - On Ultra Sky, set `ClimatePreset`, enable `bEnableRandomWeather`, tweak `Season`, `RandomWeatherBaseInterval`, `RandomSeed`.
11. Environment sounds:
   - Add `DAIUltraSkyEnvironmentSoundComponent` to any actor, assign `UltraSky`, add `Sounds` entries keyed by condition names, set `CrossfadeSeconds`.
12. Lightning:
   - Place `DAIUltraSkyLightningController`. Assign `LightningSystem` (bolt) and optional `LightningGlowSystem` (cloud glow). Set `Min/MaxIntervalSeconds`, `StrikeRadius`, and `ThunderSound`.
   - Set `UltraSky` to bias strikes around the weather anchor. Call `TriggerRandomStrike()` or `TriggerStrikeAtLocation()` from BP/gameplay when needed.
13. Tornado:
   - Place `DAIUltraSkyTornado`. Assign `TornadoSystem`. Set `TornadoScale`, `MoveSpeed`, and `TargetLocation`. Use `StartTornado`, `StopTornado`, and `SetTargetLocation` at runtime.
14. Snow and footprints:
   - On Ultra Sky, enable `bAutoSnowFromTemperature` and set `SnowTempThresholdC`.
   - Accumulation: `SnowAccumulation` rises when condition is `Snow` (scaled by precipitation), melts when warm; `Wetness` rises when `Rain`, dries over time.
   - MPC: if `GlobalWindMPC` is assigned, the actor writes `Snow` and `Wetness` scalar parameters for your materials.
   - Footprints: bind to `OnFootprintStamped(Location, Strength)` and spawn footprint decals or trigger your material footprint system when `IsSnowDeepEnoughForFootprints()` is true. Call `StampFootprintAtLocation` from anim notifies with foot world position.
15. Footprint Mask (render target):
   - Place `DAIUltraSkyFootprintMask` covering the area where you want footprints. It auto-binds to Ultra Sky’s `OnFootprintStamped` if `UltraSky` is assigned.
   - Assign `StampMaterial` that composites a circular stamp into the existing mask (param names: `PrevMask`, `CenterUV` (float2), `Radius`, `Strength`, `Falloff`). The actor calls `DrawMaterialToRenderTarget` with `PrevMask` set to the current `MaskRT`.
   - Optional: assign `FadeMaterial` that reads `PrevMask` and outputs `PrevMask * (1 - FadeAmount)`. Enable `bEnableAutoFade` and set `FadePerSecond`.
   - In your landscape/mesh materials, sample the `MaskRT` (TextureObject from the actor) in worldspace UVs matching the mask mapping. Use it to add snow indentation normal/height tint or blend a footprint normal/decal layer.

Material wiring helpers
- Use `UDAIUltraSkyMaterialLibrary`:
  - `GetFootprintMaskRT(Mask)` returns the render target.
  - `ApplyFootprintMaskToActorMaterials(Target, TextureParamName, Mask, bCreateMID)` sets the texture parameter on all materials of all mesh components on `Target` (creates MIDs if asked).
  - `SetScalarOnActorMaterials(Target, ParamName, Value, bCreateMID)` to push simple scalars if you prefer per-material over MPC.

Auto-assign component
- Add `UDAIUltraSkyFootprintApplierComponent` to any actor (e.g., landscape or static mesh actor):
  - Set `TextureParamName` to your material’s footprint mask texture parameter (default `FootprintMaskTex`).
  - Optionally leave `FootprintMask` empty and enable `bAutoFindNearestMask` to auto-select the nearest/containing `DAIUltraSkyFootprintMask`.
  - It applies the mask on BeginPlay and re-applies every `RefreshInterval` seconds (creates MIDs if `bCreateMID` is true).

Editor helpers
- On the Ultra Sky actor details:
  - `EditorCreateUltraSkySamples`: generates sample assets under `/Game/UltraSkySamples` (MPC, Clear/Rain biomes, Temperate climate) and assigns them.
  - `EditorApplySelectedPreset`: applies the biome at `Presets[EditorSelectedPresetIndex]` with its suggested blend.
  - `EditorRecaptureSkylight`: forces a Skylight recapture now.
  - `EditorCreateFootprintDemo`: generates `M_FootprintStamp` and `M_FootprintFade` materials, then spawns `UltraSky_FootprintMask_Demo` in the level bound to this Ultra Sky.
  - Auto-wiring: the demo button also scans the level to add `UDAIUltraSkyFootprintApplierComponent` to Landscape and StaticMesh/InstancedMesh actors, setting parameter `FootprintMaskTex` to the demo mask.
  - `EditorRemoveFootprintAppliers`: removes all auto-added `UDAIUltraSkyFootprintApplierComponent` instances from the level.

GAS (Gameplay Ability System)
- AttributeSet: add `UDAIUltraSkyAttributeSet` to your `UAbilitySystemComponent` owner.
  - Attributes: `TemperatureC`, `Humidity`, `WindSpeedKph`, `Precipitation`, `Cloudiness`.
- Ability: `UGA_DAIUltraSky_TriggerWeather` (InstancedPerExecution, ServerOnly)
  - Set `ConditionName` (e.g., `Rain`) and optional `TargetBiome` + `BiomeBlendSeconds`.
  - Grant the ability to your ASC and activate it to push weather into the first `ADAIUltraSkyActor` in the world.

Notes
- This is not a copy of any marketplace asset and uses only engine components. It is intended as a clean base you can extend (weather states, moon/starfield, advanced solar position, curves, etc.).
- For physically accurate sun position by latitude/longitude and date, extend `UpdateSunRotationFromTime()` with a solar model or drive the actor with a data asset.
- For water/landscape material updates, prefer a Material Parameter Collection and reference it in each `UDAIUltraSkyBiomeData`. The actor blends MPC scalars/vectors as biomes change.
