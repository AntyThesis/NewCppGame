// Fill out your copyright notice in the Description page of Project Settings.


#include "healthComponent.h"

// Sets default values for this component's properties
UhealthComponent::UhealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	MaxHealth = 100.f;
	CurrentHealth = 0.f;

}


// Called when the game starts
void UhealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

	CurrentHealth = MaxHealth;
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, FString::Printf(TEXT("%.2f"), MaxHealth));
	}
	
}


// Called every frame
void UhealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UhealthComponent::AffectHealth(float HealthChangeAmount) {
	CurrentHealth += HealthChangeAmount;
	FMath::Clamp(CurrentHealth, 0, MaxHealth);
	OnHealthChanged.Broadcast();

}

void UhealthComponent::RIP() {
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, FString::Printf(TEXT("Dead")));
	}
	OnDeath.Broadcast();
}
