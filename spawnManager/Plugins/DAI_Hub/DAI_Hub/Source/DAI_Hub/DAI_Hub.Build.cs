using UnrealBuildTool;
using System.IO;

public class DAI_Hub : ModuleRules
{
    public DAI_Hub(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "NetCore",
            "PhysicsCore",
            "GameplayTags",
            "DeveloperSettings",
            "Json",
            "SignificanceManager"
        });

        PublicIncludePaths.Add(Path.Combine(EngineDirectory, "Plugins/Runtime/SignificanceManager/Source/SignificanceManager/Public"));

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "Slate",
            "SlateCore"
        });
    }
}
