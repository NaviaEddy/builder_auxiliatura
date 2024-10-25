// Fill out your copyright notice in the Description page of Project Settings.
#include "Director.h"
#include "IConstructorN1.h"

// Sets default values
ADirector::ADirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirector::EstablecerTipoConstructor(AActor* _type)
{
	constructor = Cast<IIConstructorN1>(_type);
}

void ADirector::construir_nv1()
{
	constructor->ConstruirPlataformas(5);
	constructor->ConstruirEscaleras(3);
	constructor->ConstruirEscenario("Fuego Amigo");
}

void ADirector::construir_nv2()
{
	constructor->ConstruirPlataformas(10);
	constructor->ConstruirEscaleras(7);
	constructor->ConstruirEscenario("Camino iluminado");
}

