// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlockComponent.generated.h"


UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TERRAIN_API UBlockComponent : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	/*UPROPERTY(EditAnywhere, Instanced, Category = "General|Faces")
		UStaticMeshComponent* north;
	UPROPERTY(EditAnywhere, Instanced, Category = "General|Faces")
		UStaticMeshComponent* east;
	UPROPERTY(EditAnywhere, Instanced, Category = "General|Faces")
		UStaticMeshComponent* south;
	UPROPERTY(EditAnywhere, Instanced, Category = "General|Faces")
		UStaticMeshComponent* west;
	UPROPERTY(EditAnywhere, Instanced, Category = "General|Faces")
		UStaticMeshComponent* up;
	UPROPERTY(EditAnywhere, Instanced, Category = "General|Faces")
		UStaticMeshComponent* down;*/


	// Sets default values for this component's properties
	UBlockComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
	virtual void BlockUpdate();
};
