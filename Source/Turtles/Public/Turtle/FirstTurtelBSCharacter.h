// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Turtle/TurtelBSCharacter.h"
#include "FirstTurtelBSCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TURTLES_API AFirstTurtelBSCharacter : public ATurtelBSCharacter
{
	GENERATED_BODY()


public:
	AFirstTurtelBSCharacter();
public:

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Movement")
		class Aactor* Target;

};
