// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TurtelBSCharacter.generated.h"

UCLASS()
class TURTLES_API ATurtelBSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATurtelBSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	

	//UPROPERTY(EditAnywhere, BlueprintreadWrite, Category = "Finish")
	//	AActor* Point;

	//UPROPERTY(EditAnywhere, BlueprintreadWrite, Category = "Finish")
	//FVector CurrentLocation;

	UPROPERTY(EditAnywhere, BlueprintreadWrite, Category = "MoveTo")
		AActor* Location;
	UPROPERTY(EditAnywhere, BlueprintreadWrite, Category = "Finish")
	float speed = 150.0f;
};
