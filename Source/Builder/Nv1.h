// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IEstablecedorN1.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Nv1.generated.h"

UCLASS()
class BUILDER_API ANv1 : public AActor, public IIEstablecedorN1
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANv1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void EstablecerPlataformas(int32 _num) override;
	void EstablecerEscaleras(int32 _num) override;
	void EstablecerEscenario(FString _num) override;
};
