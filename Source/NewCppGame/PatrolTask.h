// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "PatrolTask.generated.h"


class AEnemyController;
/**
 * 
 */
UCLASS()
class NEWCPPGAME_API UPatrolTask : public UBTTaskNode
{
	GENERATED_BODY()

public:
		UPatrolTask();


public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
	
};
