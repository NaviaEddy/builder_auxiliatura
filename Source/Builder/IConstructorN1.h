// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IConstructorN1.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIConstructorN1 : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BUILDER_API IIConstructorN1
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void ConstruirPlataformas(int32 _num) = 0;
	virtual void ConstruirEscaleras(int32 _num) = 0;
	virtual void ConstruirEscenario(FString _num) = 0;
};
