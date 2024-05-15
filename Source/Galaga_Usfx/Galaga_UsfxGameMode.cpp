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
	 
	//nave1 = GetWorld()->SpawnActor<Anave_enemiga>(FVector(1201.58, -1122, 214.727936), FRotator(0, 0, 0));


	FVector SpawNave = FVector(1201.58, -1122, 214.727936);

	for (int filas = 0; filas < 4; filas++)
	{

		for (int columnas = 0; columnas < 3; columnas++)
		{
			nave_enemiga = GetWorld()->SpawnActor<Anave_enemiga>(SpawNave, FRotator(0, 0, 0));

			SpawNave = SpawNave + FVector(0, 300, 0);

			contenedor_naves.Add(nave_enemiga);

			//contenedor_naves[0]->distancia_maxima_derecha = 500;
			//contenedor_naves[0]->distancia_maxima_izquierda = 500;

		}

		SpawNave = SpawNave + FVector(150, 0, 0);
		SpawNave.Y = -1122;
	}																

	//if (contenedor_naves.Num() > 5) {

		//for (int contador = 5; contador < contenedor_naves.Num(); contador++) {

//contenedor_naves[contador]->velocidad = 200;

		//}

	//}
}