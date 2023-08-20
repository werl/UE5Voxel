// Fill out your copyright notice in the Description page of Project Settings.


#include "Block.h"

// Sets default values
ABlock::ABlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh	= CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Mesh"));
	TArray<FVector> verts = { FVector(0.5, 0.5, 0.5), FVector(-0.5, 0.5, 0.5), FVector(-0.5, -0.5, 0.5), FVector(0.5, -0.5, 0.5), FVector(0.5, 0.5, -0.5), FVector(-0.5, 0.5, -0.5), FVector(-0.5, -0.5, -0.5), FVector(0.5, -0.5, -0.5) };
	TArray<int32> tris = {
		0,1,2,
		2,3,0,

		0,1,5,
		5,4,0,

		1,2,6,
		6,5,1,

		2,3,7,
		7,6,2,

		3,0,4,
		4,7,3,

		6,7,4,
		4,5,6
	};
	Mesh->CreateMeshSection(0, verts, tris, const TArray<FVector>() , TArray<FVector2D>(), TArray<FLinearColor>(), TArray<FProcMeshTangent>(), true);
}

// Called when the game starts or when spawned
void ABlock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABlock::BlockUpdate()
{
}

