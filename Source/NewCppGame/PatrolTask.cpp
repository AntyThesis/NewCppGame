// Fill out your copyright notice in the Description page of Project Settings.


#include "PatrolTask.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "EnemyController.h"


UPatrolTask::UPatrolTask() {

}

EBTNodeResult::Type UPatrolTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {
	APawn* ControlledPawn = OwnerComp.GetAIOwner()->GetPawn();
	FVector origin = ControlledPawn->GetActorLocation();
	float PatrolRadius = 1000.f;
	FNavLocation RandomPatrolPoint;

	if (UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld())) {
		bool bfound = NavSys->GetRandomReachablePointInRadius(origin, PatrolRadius, RandomPatrolPoint);

		if (bfound) {
			FVector PatrolLocation = RandomPatrolPoint.Location;
			AEnemyController* EnemyController = Cast<AEnemyController>(OwnerComp.GetAIOwner());
			if (EnemyController) {
				EnemyController->MoveToLocation(PatrolLocation);
				return EBTNodeResult::Succeeded;
			}
			else {
				return EBTNodeResult::Failed;
			}
		}
	} return EBTNodeResult::Failed;
}


