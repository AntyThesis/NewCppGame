// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyStruct.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct NEWCPPGAME_API FMyHealthStruct
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "Health")
		float CurrentHealth;

	UPROPERTY(VisibleAnywhere, Category = "Health")
		float MaxHealth;

public:
	FMyHealthStruct();
	~FMyHealthStruct();
};
