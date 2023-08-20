// Fill out your copyright notice in the Description page of Project Settings.


#include "Slice.h"

// Sets default values
ASlice::ASlice()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void ASlice::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < 5; i++) {
		auto c = CreateDefaultSubobject<UChunk>(TEXT("Chunk " + i));
		c->SetRelativeLocation(FVector(0, 0, i * 1600));
		ChunkArray.Add(c);
	}
	
}

// Called every frame
void ASlice::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

