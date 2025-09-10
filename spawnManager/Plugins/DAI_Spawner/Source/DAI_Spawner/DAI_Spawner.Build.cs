// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DAI_Spawner : ModuleRules
{
        public DAI_Spawner(ReadOnlyTargetRules Target) : base(Target)
        {
                PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

                PublicDependencyModuleNames.AddRange(
                        new string[]
                        {
                                "Core",
                                "GameplayTags",
                                "Json"
                        }
                        );


                PrivateDependencyModuleNames.AddRange(
                        new string[]
                        {
                                "CoreUObject",
                                "Engine",
                                "Slate",
                                "SlateCore",
                                "UMG",
                                "NavigationSystem",
                                "AIModule",
                                "PhysicsCore",
                                "JsonUtilities"
                        }
                        );


                DynamicallyLoadedModuleNames.AddRange(
                        new string[]
                        {
                        }
                        );
        }
}
