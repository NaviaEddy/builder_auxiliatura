// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IConstructorN1.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Nv2Concreto.generated.h"

UCLASS()
class BUILDER_API ANv2Concreto : public AActor, public IIConstructorN1
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANv2Concreto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	class ANv1* nv1;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ConstruirPlataformas(int32 _num) override;
	void ConstruirEscaleras(int32 _num) override;
	void ConstruirEscenario(FString _num) override;

};
