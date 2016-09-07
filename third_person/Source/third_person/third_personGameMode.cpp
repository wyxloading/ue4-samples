// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "third_person.h"
#include "third_personGameMode.h"
#include "third_personCharacter.h"

Athird_personGameMode::Athird_personGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
