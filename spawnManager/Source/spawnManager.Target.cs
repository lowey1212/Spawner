using UnrealBuildTool;
using System.Collections.Generic;

// Defines how to build the playable game.
public class spawnManagerTarget : TargetRules
{
        public spawnManagerTarget(TargetInfo Target) : base(Target)
        {
                // This target builds the game itself.
                Type = TargetType.Game;
                DefaultBuildSettings = BuildSettingsVersion.V5;

                // Tell the build system which modules make up this game.
                ExtraModuleNames.AddRange( new string[] { "spawnManager" } );
        }
}
