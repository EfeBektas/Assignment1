// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "N_BaseWeapon.h"
#include "N_BaseGameInstance.generated.h"


USTRUCT(BlueprintType)
struct FAgentInfo 
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FText Name;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdOfPrey")
	TSubclassOf<AN_BaseWeapon> WeaponType;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdOfPrey")
	USkeletalMesh* SkeletalMesh;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdOfPrey")
	TSubclassOf<UAnimInstance> AnimInstance;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UTexture2D* Image;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float Speed;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float Health;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float MeshScale;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FLinearColor Colour;
};
/**
 * 
 */
UCLASS()
class UN_BaseGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void SetPlayerAgentInfoFor(int PlayerControllerID, FAgentInfo AgentInfo);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	FAgentInfo GetPlayerAgentInfoFor(int PlayerControllerID, bool& Success);

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdOfPrey")
	TArray<FAgentInfo>PlayerAgentInfo;
};
