// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once

#include "project_3_puzzlePawn.generated.h"

UCLASS(config=Game)
class Aproject_3_puzzlePawn : public APawn
{
	GENERATED_UCLASS_BODY()

public:

	virtual void Tick(float DeltaSeconds) override;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	virtual void CalcCamera(float DeltaTime, struct FMinimalViewInfo& OutResult) override;

protected:
	void OnResetVR();
	void TriggerClick();
	void TraceForBlock(const FVector& Start, const FVector& End, bool bDrawDebugHelpers);

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	class Aproject_3_puzzleBlock* CurrentBlockFocus;
};
