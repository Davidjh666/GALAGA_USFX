// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_UsfxGameMode.h"
#include "Galaga_UsfxPawn.h"
#include "nave_enemiga.h"

AGalaga_UsfxGameMode::AGalaga_UsfxGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_UsfxPawn::StaticClass();
}

void AGalaga_UsfxGameMode::BeginPlay()
{
	Super::BeginPlay();
	 
	nave1 = GetWorld()->SpawnActor<Anave_enemiga>(FVector(1201.58, -1122, 214.727936), FRotator(0, 0, 0));


}