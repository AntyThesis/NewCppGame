// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Navigation/PathFollowingComponent.h"

AEnemyController::AEnemyController() {
	


}
void AEnemyController::BeginPlay() {

	Super::BeginPlay();


}

void AEnemyController::OnPossess(APawn* ControlledPawn) {

	Super::OnPossess(ControlledPawn);

	if (BehaviorTreeAsset) {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, TEXT("Hi, Im Possessed"));
			FString AssetName = BehaviorTreeAsset->GetName();
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Using Behavior Tree: %s"), *AssetName));
			if (UseBlackboard(BehaviorTreeAsset->BlackboardAsset, BlackBoardComponent)) {
				RunBehaviorTree(BehaviorTreeAsset);
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("No Asset Found")));

			}
		}
	}
}

