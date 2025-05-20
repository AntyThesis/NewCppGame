// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyController.generated.h"

/**
 * 
 */
UCLASS()
class NEWCPPGAME_API AEnemyController : public AAIController
{
	GENERATED_BODY()
public:

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	UBehaviorTree* BehaviorTreeAsset;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	UBlackboardComponent* BlackBoardComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool MoveSuccessful;

protected:

	virtual void OnPossess(APawn* ControlledPawn) override;


public:

	AEnemyController();


	virtual void BeginPlay() override;


};
