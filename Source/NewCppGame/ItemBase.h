// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyStruct.h"
#include "InteractInterface.h"
#include "ItemBase.generated.h"


UCLASS()
class NEWCPPGAME_API AItemBase : public AActor, public IInteractInterface
{
	GENERATED_BODY()

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ItemVariables")
	FItemStruct ItemVariables;

	
public:	
	// Sets default values for this actor's properties
	AItemBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	virtual void Interact_Implementation() override;

	

};
