// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "N_BaseWeapon.generated.h"

UCLASS()
class AN_BaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AN_BaseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UFUNCTION(BlueprintImplementableEvent,Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void PlayFireEffects();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	FTransform GetFireEffectSpawnTransform();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	bool HasFinishedFiring();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	bool IsFiring();

	UPROPERTY(EditAnyWhere,BlueprintReadWrite, Category = "BirdOfPrey")
	bool bRequiresAimForAI;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsAutomatic;
};
