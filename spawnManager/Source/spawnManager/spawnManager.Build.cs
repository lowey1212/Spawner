using UnrealBuildTool;

// Build rules tell Unreal which modules and libraries this project needs.
public class spawnManager : ModuleRules {
  public spawnManager(ReadOnlyTargetRules Target) : base(Target) {
    // Use precompiled headers to speed up build times.
    PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

    // Core Unreal modules required by the project.
    PublicDependencyModuleNames.AddRange(new string[] {
        "Core", "CoreUObject", "Engine", "InputCore", "GameplayTags", "Niagara"
    });
  }
}
