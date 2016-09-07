// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "project_4_rolling.h"
#include "project_4_rollingGameMode.h"
#include "project_4_rollingBall.h"

Aproject_4_rollingGameMode::Aproject_4_rollingGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = Aproject_4_rollingBall::StaticClass();
}
