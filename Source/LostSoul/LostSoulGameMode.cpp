// Copyright Epic Games, Inc. All Rights Reserved.

#include "LostSoulGameMode.h"
#include "LostSoulCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALostSoulGameMode::ALostSoulGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
