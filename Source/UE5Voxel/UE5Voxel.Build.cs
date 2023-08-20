// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5Voxel : ModuleRules
{
	public UE5Voxel(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "Terrain", "ProceduralMeshComponent" });
	}
}
