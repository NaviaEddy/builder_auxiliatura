// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IEstablecedorN1.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIEstablecedorN1 : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BUILDER_API IIEstablecedorN1
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void EstablecerPlataformas(int32 _num) = 0;
	virtual void EstablecerEscaleras(int32 _num) = 0;
	virtual void EstablecerEscenario(FString _num) = 0;

};
