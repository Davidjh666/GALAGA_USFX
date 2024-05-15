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
	velocidad = 1000;
	moviendo_derecha = true;
	distancia_maxima_derecha = 1201.58;
	distancia_maxima_izquierda =-1201.58;





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
	SetActorLocation(nueva_ubicacion, true);
}

void Anave_enemiga::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Anave_enemiga* nave = Cast<Anave_enemiga>(Other);

	if (Other != nullptr)
	{
		if (moviendo_derecha == true)
			moviendo_derecha = false;
		else if (moviendo_derecha == false)
			moviendo_derecha = true;

	}

	//GEngine->AddOnScreenDebugMessage

}

