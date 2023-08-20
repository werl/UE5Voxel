// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5VoxelGameMode.h"
#include "UE5VoxelCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5VoxelGameMode::AUE5VoxelGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
