// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TestStruct.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class FaceDirection : uint8
{
	FD_NORTH	UMETA(DisplayName = "North"),
	FD_EAST		UMETA(DisplayName = "East"),
	FD_SOUTH	UMETA(DisplayName = "South"),
	FD_WEST		UMETA(DisplayName = "West"),
	FD_UP		UMETA(DisplayName = "Up"),
	FD_DOWN		UMETA(DisplayName = "Down")
};

class TERRAIN_API TestStruct
{
public:
	TestStruct();
	~TestStruct();
};
