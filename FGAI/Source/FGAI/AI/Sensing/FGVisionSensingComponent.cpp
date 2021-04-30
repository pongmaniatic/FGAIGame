#include "FGVisionSensingComponent.h"
#include "FGVisionSensingSettings.h"
#include "FGVisionSensingTargetComponent.h"
#include "GameFramework/Actor.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetSystemLibrary.h"

UFGVisionSensingComponent::UFGVisionSensingComponent()
{
	PrimaryComponentTick.bStartWithTickEnabled = true;
	PrimaryComponentTick.bCanEverTick = true;
}

void UFGVisionSensingComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (SensingSettings == nullptr)
		return;

	const FVector Direction = GetOwner()->GetActorForwardVector();
	const FVector Origin = GetOwner()->GetActorLocation();

	if (bDebugDrawVision)
	{
		FVector Right = Direction.RotateAngleAxis(SensingSettings->Angle, FVector::UpVector);
		FVector Left = Direction.RotateAngleAxis(-SensingSettings->Angle, FVector::UpVector);
		UKismetSystemLibrary::DrawDebugLine(GetWorld(), Origin, Origin + Right * SensingSettings->DistanceMinimum, FLinearColor::Red);
		UKismetSystemLibrary::DrawDebugLine(GetWorld(), Origin, Origin + Left * SensingSettings->DistanceMinimum, FLinearColor::Green);
	}

	for (int32 Index = SensedTargets.Num() - 1; Index >= 0; --Index)
	{
		UFGVisionSensingTargetComponent* Target = SensedTargets[Index];

		if (Target == nullptr || (Target != nullptr && Target->IsBeingDestroyed()))
		{
			SensedTargets.RemoveAt(Index);
			continue;
		}

		if (!IsPointVisible(Target->GetTargetOrigin(), Origin, Direction, SensingSettings->DistanceMinimum))
		{
			FFGVisionSensingResults Results;
			Results.SensedActor = Target->GetOwner();
			OnTargetLost.Broadcast(Results);
			SensedTargets.RemoveAt(Index);
		}
	}

	TArray<UFGVisionSensingTargetComponent*> ListOfTargets;
	
	UFGVisionSensingTargetComponent::GetSensingTargets(ListOfTargets, GetOwner()->GetActorLocation(), SensingSettings->DistanceMinimum);

	for (UFGVisionSensingTargetComponent* Target : ListOfTargets)
	{
		if (!SensedTargets.Contains(Target) &&
			IsPointVisible(Target->GetTargetOrigin(), Origin, Direction, SensingSettings->DistanceMinimum))
		{
			SensedTargets.Add(Target);
			FFGVisionSensingResults Results;
			Results.SensedActor = Target->GetOwner();
			OnTargetSensed.Broadcast(Results);
		}
	}
}

bool UFGVisionSensingComponent::IsPointVisible(const FVector& PointToTest, const FVector& Origin, const FVector& Direction, float DistanceMinimum) const
{
	if (SensingSettings == nullptr)
		return false;

	float DistanceMinimumSq = FMath::Square(DistanceMinimum);

	if (FVector::DistSquared(Origin, PointToTest) > DistanceMinimumSq)
	{
		return false;
	}

	const FVector DirectionToTarget = (PointToTest - Origin).GetSafeNormal();

	const float AsHalfRad = FMath::Cos(FMath::DegreesToRadians(SensingSettings->Angle));
	const float Dot = FVector::DotProduct(Direction, DirectionToTarget);

	const bool bIsValid = Dot > AsHalfRad;

	//if the player is inside the cone of vision, 3 line traces are thrown, one from eye level, one from the center and one on the feet
	if (bIsValid == true) 
	{
		FHitResult Hit;
		FCollisionQueryParams TraceParams;
		TraceParams.AddIgnoredActor(GetOwner());
		FVector eyeLevelAdjustment = FVector(0, 0, 80) + Origin;
		FVector eyeLevelAdjustmentTarget1 = FVector(0, 0, 0) + PointToTest;
		FVector eyeLevelAdjustmentTarget2 = FVector(0, 0, -60) + PointToTest;
		FVector eyeLevelAdjustmentTarget3 = FVector(0, 0, 60) + PointToTest;

		DrawDebugLine(GetWorld(), eyeLevelAdjustment, eyeLevelAdjustmentTarget1, FColor::Orange, false, 0.01f);
		DrawDebugLine(GetWorld(), eyeLevelAdjustment, eyeLevelAdjustmentTarget2, FColor::Orange, false, 0.01f);
		DrawDebugLine(GetWorld(), eyeLevelAdjustment, eyeLevelAdjustmentTarget3, FColor::Orange, false, 0.01f);

		GetWorld()->LineTraceSingleByProfile(Hit, eyeLevelAdjustment, eyeLevelAdjustmentTarget1, TEXT("BlockALLDynamic"), TraceParams);
		if (Hit.Actor->FindComponentByClass(UFGVisionSensingTargetComponent::StaticClass())) { return bIsValid; }

		GetWorld()->LineTraceSingleByProfile(Hit, eyeLevelAdjustment, eyeLevelAdjustmentTarget2, TEXT("BlockALLDynamic"), TraceParams);
		if (Hit.Actor->FindComponentByClass(UFGVisionSensingTargetComponent::StaticClass())) { return bIsValid; }

		GetWorld()->LineTraceSingleByProfile(Hit, eyeLevelAdjustment, eyeLevelAdjustmentTarget3, TEXT("BlockALLDynamic"), TraceParams);
		if (Hit.Actor->FindComponentByClass(UFGVisionSensingTargetComponent::StaticClass())) { return bIsValid; }
	}

	return false;
}

float UFGVisionSensingComponent::GetVisionInRadians() const
{
	if (SensingSettings == nullptr)
		return 0.0;
	return FMath::Cos(FMath::DegreesToRadians(SensingSettings->Angle));
}



