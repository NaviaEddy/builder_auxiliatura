// Fill out your copyright notice in the Description page of Project Settings.

#include "Nv1Concreto.h"
#include "Nv1.h"

// Sets default values
ANv1Concreto::ANv1Concreto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANv1Concreto::BeginPlay()
{
	Super::BeginPlay();
	nv1 = GetWorld()->SpawnActor<ANv1>(ANv1::StaticClass());
	nv1->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void ANv1Concreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANv1Concreto::ConstruirPlataformas(int32 _num)
{
	nv1->EstablecerPlataformas(_num);
}

void ANv1Concreto::ConstruirEscaleras(int32 _num)
{
	nv1->EstablecerEscaleras(_num);
}

void ANv1Concreto::ConstruirEscenario(FString _num)
{
	nv1->EstablecerEscenario(_num);
}

