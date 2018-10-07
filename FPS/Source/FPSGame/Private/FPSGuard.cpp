// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSGuard.h"
#include "Perception/PawnSensingComponent.h"

// Sets default values
AFPSGuard::AFPSGuard()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));
}

// Called when the game starts or when spawned
void AFPSGuard::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFPSGuard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPSGuard::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

