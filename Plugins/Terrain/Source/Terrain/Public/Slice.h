// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chunk.h"

#include "Slice.generated.h"

UCLASS()
class TERRAIN_API ASlice : public AActor
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<UChunk*> ChunkArray;

public:	
	// Sets default values for this actor's properties
	ASlice();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
