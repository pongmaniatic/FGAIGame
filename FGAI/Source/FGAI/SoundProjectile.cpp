// Fill out your copyright notice in the Description page of Project Settings.


#include "SoundProjectile.h"

// Sets default values
ASoundProjectile::ASoundProjectile()
{


}

void ASoundProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{

	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())//hit dynamic object
	{

	}
	else//hit static object
	{

	}
}
