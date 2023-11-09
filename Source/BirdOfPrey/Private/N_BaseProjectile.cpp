// Fill out your copyright notice in the Description page of Project Settings.


#include "N_BaseProjectile.h"

// Sets default values
AN_BaseProjectile::AN_BaseProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AN_BaseProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AN_BaseProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

