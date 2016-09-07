// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "project_first_personHUD.generated.h"

UCLASS()
class Aproject_first_personHUD : public AHUD
{
	GENERATED_BODY()

public:
	Aproject_first_personHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

