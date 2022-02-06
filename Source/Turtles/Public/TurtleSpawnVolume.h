// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TurtleSpawnVolume.generated.h"

class UBoxComponent;
class ATurtelBSCharacter;

UCLASS()
class TURTLES_API ATurtleSpawnVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATurtleSpawnVolume(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Spawn")
		void SpawnActor();

	UPROPERTY(EditAnywhere, BlueprintreadWrite, Category = "Spawn")
		UClass* Actor;

	UPROPERTY(EditAnywhere, BlueprintreadWrite, Category = "MoveTo")
		AActor* Target;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
