// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "N_BaseWeapon.h"
#include "N_BaseGameInstance.h"
#include "Engine/EngineTypes.h"
#include "N_BaseGameAgent.generated.h"

UCLASS()
class AN_BaseGameAgent : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AN_BaseGameAgent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void ChangeWeaponType(TSubclassOf<AN_BaseWeapon> NewWeaponType);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	FTransform GetWeaponSpawnTransform();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void SpawnDefaultWeapon();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	float TakeDamage(float Damage);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	bool IsAlive();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void Died(AController* Killer);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void PlayHitEffects();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void CleanUp();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void ApplyAgentInfo(FAgentInfo NewAgentInfo);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void AimAt(FVector AimTarget);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void PlayDeathEffects();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void CheckForOutOfBounds();


	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float MoveSpeed;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	AN_BaseWeapon*  Weapon;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	TSubclassOf<AN_BaseWeapon>  DefaultWeaponType;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float Health;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FAgentInfo AgentInfo;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float Points;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bCheckForOutOfBounds;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float OutOfBoundsCheckTolerance;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FName WeaponSocketName;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	EAttachmentRule WeaponAttachRule;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FVector TargetLocation;

};
