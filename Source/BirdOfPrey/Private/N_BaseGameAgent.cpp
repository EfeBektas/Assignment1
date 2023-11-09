// Fill out your copyright notice in the Description page of Project Settings.


#include "N_BaseGameAgent.h"

// Sets default values
AN_BaseGameAgent::AN_BaseGameAgent()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AN_BaseGameAgent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AN_BaseGameAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AN_BaseGameAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

