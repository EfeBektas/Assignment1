// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "N_BaseShip.h"
#include "N_BaseAIController.h"
#include "N_BaseEnemyShip.generated.h"

/**
 * 
 */
UCLASS()
class AN_BaseEnemyShip : public AN_BaseShip
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void Move();

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	AN_BaseAIController* ShipAIController;
};
