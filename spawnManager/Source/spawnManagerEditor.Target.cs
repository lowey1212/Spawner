using UnrealBuildTool;
using System.Collections.Generic;

// Defines how to build the editor version of the game.
public class spawnManagerEditorTarget : TargetRules
{
        public spawnManagerEditorTarget(TargetInfo Target) : base(Target)
        {
                // This target builds the Unreal Editor project.
                Type = TargetType.Editor;
                DefaultBuildSettings = BuildSettingsVersion.V5;

                // Modules needed when running inside the editor.
                ExtraModuleNames.AddRange( new string[] { "spawnManager" } );
        }
}
