// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MyGameInstanceSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class UE5LEARNING_API UMyGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public://���صĺ�����������һЩ��ʼ�����ͷŲ���
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override { return true; }
	//virtual void Initialize(FSubsystemCollectionBase& Collection)override;
	//virtual void Deinitialize()override;

};
