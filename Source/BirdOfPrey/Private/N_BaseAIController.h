// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "N_BasePlayerController.h"
#include "N_BaseGameAgent.h"
#include "N_BaseAIController.generated.h"

/**
 * 
 */
UCLASS()
class AN_BaseAIController : public AAIController
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void SelectTarget();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void AimAt(FVector AimTarget);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void CheckFire();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void UpdateAim();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	bool ShouldStartFire();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	bool ShouldStopFire();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	bool ShouldUpdateAim();

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	AN_BasePlayerController* Target;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	AN_BaseGameAgent* ControlledAgent;
};
