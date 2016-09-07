// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "project_3_puzzle.h"
#include "project_3_puzzleGameMode.h"
#include "project_3_puzzlePlayerController.h"
#include "project_3_puzzlePawn.h"

Aproject_3_puzzleGameMode::Aproject_3_puzzleGameMode()
{
	// no pawn by default
	DefaultPawnClass = Aproject_3_puzzlePawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = Aproject_3_puzzlePlayerController::StaticClass();
}
