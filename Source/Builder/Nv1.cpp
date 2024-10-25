// Fill out your copyright notice in the Description page of Project Settings.


#include "Nv1.h"
#include "Plataformas.h"
#include "Escalera.h"
#include "Escenario.h"

// Sets default values
ANv1::ANv1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANv1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANv1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANv1::EstablecerPlataformas(int32 _num)
{
	for (int i = 0; i < _num; i++) {
		GetWorld()->SpawnActor<APlataformas>(APlataformas::StaticClass());
	}
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan,
		FString::Printf(TEXT("Num de plataformas generadas: %d"), _num));
}

void ANv1::EstablecerEscaleras(int32 _num)
{
	for (int i = 0; i < _num; i++) {
		GetWorld()->SpawnActor<AEscalera>(AEscalera::StaticClass());
	}
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan,
		FString::Printf(TEXT("Num de escaleras generadas: %d"), _num));
}

void ANv1::EstablecerEscenario(FString _num)
{
	GetWorld()->SpawnActor<AEscenario>(AEscenario::StaticClass());
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan,
		FString::Printf(TEXT("Escenario generado: %s"), *_num));
}

