// Minimal Build.cs for the Ultra Sky plugin
using UnrealBuildTool;

public class DAI_UltraSky : ModuleRules
{
    public DAI_UltraSky(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_5;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "RenderCore",
            "RHI",
            "Projects",
            "Niagara",
            "GameplayAbilities",
            "GameplayTasks"
            // Removed DAI_Hub dependency - UltraSky now standalone
        });

        PrivateDependencyModuleNames.AddRange(new string[] {
            "Slate",
            "SlateCore",
            "Niagara",
            "AudioMixer"
        });

        if (Target.bBuildEditor)
        {
            PrivateDependencyModuleNames.AddRange(new string[] {
                "AssetRegistry"
            });
        }
    }
}
