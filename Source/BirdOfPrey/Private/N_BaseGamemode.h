// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "Camera/CameraActor.h"
#include "N_BasePlayerController.h"
#include "N_BaseGameAgent.h"
#include "Engine/DataTable.h"
#include "N_BasePowerUp.h"
#include "N_BaseGamemode.generated.h"

/**
 * 
 */
UCLASS()
class AN_BaseGamemode : public AGameMode
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	FVector GetWorldScrollVelocity();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	ACameraActor* GetWorldCameraActor();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void OnPlayerDied (AN_BasePlayerController* Player);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void OnEnemyDied(AN_BaseGameAgent* Enemy, AController* Killer);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void StartGame();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void EndGame(bool Success);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void SpawnEnemyFrom(TArray<TSubclassOf<AN_BaseGameAgent>>& Classlist);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void ResetGame();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void RespawnPlayer();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void TrySpawnPowerUp(FVector Location);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	float GetDistanceTravelled();


	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float WorldScrollSpeed;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FVector2D MaxRelativePlayerOffset;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ACameraActor* WorldCameraActor;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UDataTable* PlayerAgentInfoTable;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float RespawnDelay;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float SpawnOffset;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FTimerHandle StationarySpawnTimer;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FTimerHandle ShipSpawnTimer;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	TArray<TSubclassOf<AN_BasePowerUp>> PowerUpList;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float PickUpSpawnPercent;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool IsGameOverScreen;
};
