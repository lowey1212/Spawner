using UnrealBuildTool;

public class DAI_SpawnerEditor : ModuleRules
{
    public DAI_SpawnerEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core", "CoreUObject", "Engine", "Slate", "SlateCore", "UMG", "DAI_Spawner"
            });

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "UnrealEd"
            });
    }
}
