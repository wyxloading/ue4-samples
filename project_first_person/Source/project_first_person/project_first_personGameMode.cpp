// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "project_first_person.h"
#include "project_first_personGameMode.h"
#include "project_first_personHUD.h"
#include "project_first_personCharacter.h"

Aproject_first_personGameMode::Aproject_first_personGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Aproject_first_personHUD::StaticClass();
}
