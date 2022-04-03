// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomInputHandler.h"
#include "GameFramework/PlayerInput.h"

void UCustomInputHandler::flushInputs(const APlayerController* PlayerController) {
    PlayerController->PlayerInput->FlushPressedKeys();
}
