// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockComponent.h"

// Sets default values for this component's properties
UBlockComponent::UBlockComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	/* ...
	north = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NorthFace"));
	east = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EastFace"));
	south = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SouthFace"));
	west = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WestFace"));
	up = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UpFace"));
	down = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DownFace"));
	*/
}


// Called when the game starts
void UBlockComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UBlockComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UBlockComponent::BlockUpdate()
{
}

