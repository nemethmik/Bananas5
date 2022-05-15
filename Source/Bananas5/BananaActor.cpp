// Fill out your copyright notice in the Description page of Project Settings.


#include "BananaActor.h"

// Sets default values
ABananaActor::ABananaActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABananaActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Log, TEXT("Rotation speeds are %s for actor %s"), 
		*this->RotationSpeed.ToString(), *this->GetName());
}

// Called every frame
void ABananaActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	this->AddActorLocalRotation(this->RotationSpeed);
}

