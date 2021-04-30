// Fill out your copyright notice in the Description page of Project Settings.

#include "FGNoiseSensingComponent.h"
#include "FGCharacter.h"
#include "Math/Vector.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Misc/OutputDeviceNull.h"
// Sets default values for this component's properties
UFGNoiseSensingComponent::UFGNoiseSensingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	heardSomething = false;
	// ...
}


void UFGNoiseSensingComponent::BeginPlay()
{
	Super::BeginPlay();
	Cast<AFGCharacter>(UGameplayStatics::GetPlayerPawn(this, 0))->EnemiesLisen.AddDynamic(this, &UFGNoiseSensingComponent::Lisen);

}

void UFGNoiseSensingComponent::Lisen()
{
	FVector positions = Cast<AFGCharacter>(UGameplayStatics::GetPlayerPawn(this, 0))->AllSoundPositions.Pop();
	FVector Origin = GetOwner()->ActorToWorld().GetLocation();
	float distance = FVector::Dist(Origin, positions);

	if (distance < 420 )
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow,TEXT("ouchie My ears! the sound is deadly!") );
		GetOwner()->Destroy();
		/*
		heardSoundPosition = positions;
		heardSomething = true;
		
		FVector toTarget = Origin - positions;
		UKismetMathLibrary::RInterpTo(Origin.ToOrientationRotator(), positions.ToOrientationRotator(), DeltaTime,1);
		*/
	}
}


void UFGNoiseSensingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	// ...
}

