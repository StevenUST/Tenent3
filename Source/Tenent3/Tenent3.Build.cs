// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tenent3 : ModuleRules
{
	public Tenent3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
