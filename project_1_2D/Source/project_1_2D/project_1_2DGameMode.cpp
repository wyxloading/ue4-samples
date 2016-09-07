// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "project_1_2D.h"
#include "project_1_2DGameMode.h"
#include "project_1_2DCharacter.h"

Aproject_1_2DGameMode::Aproject_1_2DGameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = Aproject_1_2DCharacter::StaticClass();	
}
