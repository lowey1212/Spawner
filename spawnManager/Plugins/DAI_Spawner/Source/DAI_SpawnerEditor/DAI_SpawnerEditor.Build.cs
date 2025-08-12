using UnrealBuildTool;

public class DAI_SpawnerEditor : ModuleRules
{
    public DAI_SpawnerEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core", "CoreUObject", "Engine", "Slate", "SlateCore"
        });

        PrivateDependencyModuleNames.AddRange(new string[] {
            "DAI_Spawner",
            "ToolMenus",
            "LevelEditor",
            "EditorFramework",
            "UnrealEd",
            "DeveloperSettings",
            "Projects"             // ← required for IPluginManager::Get()
        });
    }
}
