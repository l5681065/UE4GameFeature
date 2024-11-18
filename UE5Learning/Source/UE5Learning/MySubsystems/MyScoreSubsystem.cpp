// Fill out your copyright notice in the Description page of Project Settings.


#include "UE5Learning/MySubsystems/MyScoreSubsystem.h"

void UMyScoreSubsystem::AddScore(float delta)
{
	Score = Score + delta;
}


