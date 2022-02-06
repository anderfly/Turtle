// Fill out your copyright notice in the Description page of Project Settings.


#include "TurtleSpawnVolume.h"
#include "Components/BoxComponent.h"
#include "..\Public\TurtleSpawnVolume.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "GeneratedCodeHelpers.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ATurtleSpawnVolume::ATurtleSpawnVolume(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}
//Спаун Actor в том месте, где он находится
void ATurtleSpawnVolume::SpawnActor()
{
		
	const FVector Location = GetActorLocation();
	const FRotator Rotation = GetActorRotation();
	GetWorld()->SpawnActor<AActor>(Actor, Location, Rotation);
}

	// Called when the game starts or when spawned
void ATurtleSpawnVolume::BeginPlay()
{
	Super::BeginPlay();
	

}



