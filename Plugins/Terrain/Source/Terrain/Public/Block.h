// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"

#include "Utils/TestStruct.h"


#include "Block.generated.h"
UCLASS(Abstract, Blueprintable)
class TERRAIN_API ABlock : public AActor, public TestStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Instanced, Category = "General|Faces")
		UProceduralMeshComponent* Mesh;

	
public:	
	// Sets default values for this actor's properties
	ABlock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	virtual void BlockUpdate();

};
