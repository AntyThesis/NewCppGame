// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

AEnemyController::AEnemyController() {
	
}

void AEnemyController::BeginPlay() {

	Super::BeginPlay();

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, TEXT("Hi, Im Possessed"));
	}
}

void AEnemyController::OnPossess(APawn* ControlledPawn) {
	if (BehaviorTreeAsset) {
		if (UseBlackboard(BehaviorTreeAsset->BlackboardAsset, BlackBoardComponent)){
			RunBehaviorTree(BehaviorTreeAsset);
		}
		
	}
}