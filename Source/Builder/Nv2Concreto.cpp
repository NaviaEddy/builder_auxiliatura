// Fill out your copyright notice in the Description page of Project Settings.

#include "Nv2Concreto.h"
#include "Nv1.h"

// Sets default values
ANv2Concreto::ANv2Concreto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANv2Concreto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANv2Concreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANv2Concreto::ConstruirPlataformas(int32 _num)
{
	nv1->EstablecerPlataformas(_num);
}

void ANv2Concreto::ConstruirEscaleras(int32 _num)
{
	nv1->EstablecerEscaleras(_num);
}

void ANv2Concreto::ConstruirEscenario(FString _num)
{
	nv1->EstablecerEscenario(_num);
}


