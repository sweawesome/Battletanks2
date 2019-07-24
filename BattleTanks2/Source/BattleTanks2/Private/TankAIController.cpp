// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/PlayerController.h"
#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto PlayerTank = GetPlayerTank();

	if (!GetPlayerTank())
	{
		UE_LOG(LogTemp, Warning, TEXT("AI cant find Player tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI found player: %s"), *(PlayerTank->GetName()));
	}

}

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());

}

ATank* ATankAIController::GetPlayerTank() const
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerPawn)
		return nullptr;
	return Cast<ATank>(PlayerPawn);


}