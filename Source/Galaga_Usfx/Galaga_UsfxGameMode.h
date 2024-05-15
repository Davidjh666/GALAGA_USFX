// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_UsfxGameMode.generated.h"

UCLASS(MinimalAPI)
class AGalaga_UsfxGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_UsfxGameMode();

	virtual void BeginPlay() override;

	class Anave_enemiga* nave1;

};



