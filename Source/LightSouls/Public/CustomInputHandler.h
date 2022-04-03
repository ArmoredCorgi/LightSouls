// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomInputHandler.generated.h"

/**
 * 
 */
UCLASS()
class LIGHTSOULS_API UCustomInputHandler : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable)
	static void flushInputs(const APlayerController* PlayerController);
};
