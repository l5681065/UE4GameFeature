// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MyScoreSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class UE5LEARNING_API UMyScoreSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void AddScore(float delta);

public:
	 UPROPERTY(EditAnywhere, BlueprintReadWrite)
     float Score = 0;
	
	
};
