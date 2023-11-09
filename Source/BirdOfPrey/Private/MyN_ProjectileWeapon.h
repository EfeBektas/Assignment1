// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "N_BaseWeapon.h"
#include "N_BaseProjectile.h"
#include "MyN_ProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class AMyN_ProjectileWeapon : public AN_BaseWeapon
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	AN_BaseProjectile* SpawnProjectile(FTransform SpawnTransform);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	FTransform GetProjectileSpawnTransform(int ShotNumber);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	bool ReadyToFire();


	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	TSubclassOf<AN_BaseProjectile> ProjectileType;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float RefireTime;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float LastFireTime;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	int NumShots;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsFiring;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float DesiredZ;
};
