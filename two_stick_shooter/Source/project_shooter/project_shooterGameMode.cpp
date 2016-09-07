// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "project_shooter.h"
#include "project_shooterGameMode.h"
#include "project_shooterPawn.h"

Aproject_shooterGameMode::Aproject_shooterGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = Aproject_shooterPawn::StaticClass();
}

