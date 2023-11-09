// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Controller.h"
#include "N_BasePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class AN_BasePlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void CalcScreenDimensions();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void OnPlayerDeath(AController* Killer);

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool bDiedWhileFiring;
};
