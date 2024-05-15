// Fill out your copyright notice in the Description page of Project Settings.


#include "nave_enemiga.h"

// Sets default values
Anave_enemiga::Anave_enemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	meshnave = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveMesh"));

	meshnave->SetStaticMesh(MeshNave1);

	vida = 100;
	velocidad = 5000;
	moviendo_derecha = true;
	distancia_maxima_derecha = 1000;
	distancia_maxima_izquierda = 0;


}

// Called when the game starts or when spawned
void Anave_enemiga::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Anave_enemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Super::Tick(DeltaTime);

	if (moviendo_derecha == true)
	{
		mover(DeltaTime);

	}
	else if (moviendo_derecha == false)
	{
		mover(-DeltaTime);
	}

	if (GetActorLocation().Y > distancia_maxima_derecha)
	{
		moviendo_derecha = false;
	}
	else if (GetActorLocation().Y < distancia_maxima_izquierda)
	{
		moviendo_derecha = true;
	}

}

void Anave_enemiga::mover(float DeltaTime)
{
	nuevaX = GetActorLocation().X;
	nuevaY = GetActorLocation().Y + velocidad * DeltaTime;
	nueva_ubicacion = FVector(nuevaX, nuevaY, GetActorLocation().Z);
	SetActorLocation(nueva_ubicacion);
}

