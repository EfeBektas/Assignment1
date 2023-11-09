// Fill out your copyright notice in the Description page of Project Settings.


#include "N_BaseWeapon.h"

// Sets default values
AN_BaseWeapon::AN_BaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AN_BaseWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AN_BaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

