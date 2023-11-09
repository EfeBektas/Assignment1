// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "N_PlayerShip.h"
#include "N_BasePowerUp.generated.h"

UCLASS()
class AN_BasePowerUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AN_BasePowerUp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void Apply(AN_PlayerShip* PlayerShip);
	
	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void PlayEffects();


};
