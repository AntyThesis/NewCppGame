// Fill out your copyright notice in the Description page of Project Settings.


#include "enemySplosion.h"

AenemySplosion::AenemySplosion() {

	static ConstructorHelpers::FClassFinder<APawn>playerBPDefault(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	
	if (playerBPDefault.Class != NULL) {

		DefaultPawnClass = playerBPDefault.Class;

	}
}