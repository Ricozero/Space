// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "StarComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class SPACE_API UStarComponent : public USphereComponent
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "Custom Physics")
	float Mass;

	UPROPERTY(EditAnywhere, Category = "Custom Physics")
	FVector Velocity;

};
