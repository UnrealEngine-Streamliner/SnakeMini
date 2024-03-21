// Snake Game. Copyright Streamliner. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class SnakeMiniTarget : TargetRules
{
	public SnakeMiniTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "SnakeMini" } );
	}
}
