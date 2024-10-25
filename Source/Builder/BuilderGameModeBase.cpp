// Copyright Epic Games, Inc. All Rights Reserved.


#include "BuilderGameModeBase.h"
#include "Nv1Concreto.h"
#include "Director.h"

ABuilderGameModeBase::ABuilderGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABuilderGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	nv1 = GetWorld()->SpawnActor<ANv1Concreto>(ANv1Concreto::StaticClass());
	director = GetWorld()->SpawnActor<ADirector>(ADirector::StaticClass());
	
	director->EstablecerTipoConstructor(nv1);
	director->construir_nv1();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ABuilderGameModeBase::ConstruirNv2, 20.0f, false);
}

void ABuilderGameModeBase::ConstruirNv2()
{
	director->construir_nv2();
}

void ABuilderGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
