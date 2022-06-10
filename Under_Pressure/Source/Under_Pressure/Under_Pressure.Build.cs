// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Under_Pressure : ModuleRules
{
	public Under_Pressure(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
