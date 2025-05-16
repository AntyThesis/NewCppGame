// Copyright Epic Games, Inc. All Rights Reserved.

#include "NewCppGameGameMode.h"
#include "NewCppGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANewCppGameGameMode::ANewCppGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
