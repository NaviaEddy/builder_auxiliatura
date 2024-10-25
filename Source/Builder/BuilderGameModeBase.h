// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BuilderGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class BUILDER_API ABuilderGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABuilderGameModeBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FTimerHandle TimerHandle;
	class ADirector* director;
	class ANv1Concreto* nv1;
	void ConstruirNv2();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
