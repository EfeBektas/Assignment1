// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "N_BaseShip.h"
#include "N_BasePlayerController.h"
#include "N_PlayerShip.generated.h"

/**
 * 
 */
UCLASS()
class AN_PlayerShip : public AN_BaseShip
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	FVector GetShipConstantVelocity(float& Speed);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void ClampToCameraBounds();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	float GetShipAxisAdjustment(float Dist, float Max);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	FVector CalcOutofBoundsAdjustment();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	APlayerController* GetPlayerAgentInfo();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void ShouldSpawnAIController();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void UpdateHoverPitch();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	bool HasDiedRecently();


	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	AN_BasePlayerController* BasePlayerController;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float InvulnerabilityTime;
};
