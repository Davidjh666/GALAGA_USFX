// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "nave_enemiga.generated.h"

UCLASS()
class GALAGA_USFX_API Anave_enemiga : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Anave_enemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



protected :
		int vida;
		void mover(float DeltaTime);

		UStaticMeshComponent* meshnave;
		//class UStaticMesh* MeshNavecaza = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));

public :

	class UStaticMesh* MeshNave1 = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

	float velocidad;
	float nuevaX;
	float nuevaY;
	FVector nueva_ubicacion;
	bool moviendo_derecha;
	float distancia_maxima_derecha;
	float distancia_maxima_izquierda;


	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
};
