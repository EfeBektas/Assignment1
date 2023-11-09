// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "N_BasePlayerState.generated.h"

/**
 * 
 */
UCLASS()
class AN_BasePlayerState : public APlayerState
{
	GENERATED_BODY()
	

public:

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void AddScore(float Amount);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void ConsumeLife();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	bool HasRemainingLives();

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float PlayerScore;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	int RemainingLives;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float TimeOfLastDeath;
};
