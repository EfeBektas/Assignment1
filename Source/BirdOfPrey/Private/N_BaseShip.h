// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "N_BaseGameAgent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "N_BaseShip.generated.h"

/**
 * 
 */
UCLASS()
class AN_BaseShip : public AN_BaseGameAgent
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UFloatingPawnMovement* FloatingPawnMovement;
};
