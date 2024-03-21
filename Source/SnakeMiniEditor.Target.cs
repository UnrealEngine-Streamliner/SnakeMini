// Snake Game. Copyright Streamliner. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class SnakeMiniEditorTarget : TargetRules
{
	public SnakeMiniEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "SnakeMini" } );
	}
}
