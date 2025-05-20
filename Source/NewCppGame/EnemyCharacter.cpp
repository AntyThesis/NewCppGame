// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "healthComponent.h"
#include "EnemyController.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AEnemyCharacter::AEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AIControllerClass = AEnemyController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	HealthComponent = CreateDefaultSubobject<UhealthComponent>(TEXT("Health Component"));
	HealthComponent->Health.MaxHealth = 50.f;
	HealthComponent->Health.CurrentHealth = 0;

	UCharacterMovementComponent* Movement = this->GetCharacterMovement();
	Movement->MaxWalkSpeed = 300.f;

}

// Called when the game starts or when spawned
void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	HealthComponent->Health.CurrentHealth = HealthComponent->Health.MaxHealth;
}

// Called every frame
void AEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

