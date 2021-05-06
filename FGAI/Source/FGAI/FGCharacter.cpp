#include "FGCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/FGMovementComponent.h"
#include "FGMovementStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Math/Vector.h"
#include "SoundProjectile.h"
#include "Animation/AnimInstance.h"

AFGCharacter::AFGCharacter()
{


	PrimaryActorTick.bStartWithTickEnabled = true;

	bUseControllerRotationPitch = true;
	bUseControllerRotationYaw = true;

	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	RootComponent = Capsule;
	// Set size for collision capsule
	Capsule->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 2.5f;
	BaseLookUpRate = 2.5f;
	Speed = 700.0f;
	Gravity = 900.0f;
	touchedGround = true;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(Capsule);
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
	Mesh->SetOnlyOwnerSee(true);
	Mesh->SetupAttachment(FirstPersonCameraComponent);
	Mesh->bCastDynamicShadow = false;
	Mesh->CastShadow = false;
	Mesh->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	MovementComponent = CreateDefaultSubobject<UFGMovementComponent>(TEXT("MovementComponent"));
	MovementComponent->SetUpdatedComponent(Capsule);

}

void AFGCharacter::Tick(float DeltaTime)
{
	if (Gravity < 900) {Gravity += 30;}
	else {Gravity = 900;}


	deltaTimeNumber = DeltaTime;
	Super::Tick(DeltaTime);
		
	FFGFrameMovement FrameMovement = MovementComponent->CreateFrameMovement();
	
	FrameMovement.AddGravity(Gravity * DeltaTime);

	if (!InputVector.IsNearlyZero())
	{
		FVector Forward = FVector::VectorPlaneProject(FirstPersonCameraComponent->GetForwardVector(), FVector::UpVector);
		FVector ForwardMovement = Forward * InputVector.X;
		FVector Right = FirstPersonCameraComponent->GetRightVector() * InputVector.Y;
		FVector Velocity = (ForwardMovement + Right).GetSafeNormal() * Speed * DeltaTime;
		FrameMovement.AddDelta(Velocity);
	}
	
	MovementComponent->Move(FrameMovement);

}

void AFGCharacter::BeginPlay()
{
	Super::BeginPlay();
	//EnableInput(this);
	check(InputComponent);
	InputComponent->BindAction("Jump", IE_Released, this, &AFGCharacter::OnJump);

}

void AFGCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFGCharacter::OnFire);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AFGCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFGCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently

	PlayerInputComponent->BindAxis("Turn", this, &AFGCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &AFGCharacter::LookUpAtRate);
}

void AFGCharacter::OnFire()
{
	
	// try and fire a projectile
	if (ProjectileClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			GunOffset = FVector(65, 16, 45);
			const FRotator SpawnRotation = GetControlRotation();
			const FVector SpawnLocation = ((BulletSpawnLocation != nullptr) ? BulletSpawnLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

			World->SpawnActor<ASoundProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);

		}
	}

	
	if (FireSound != nullptr)
	{
		//UGameplayStatics::PlaySousndAtLocation(this, FireSound, GetActorLocation());
	}

	if (FireAnimation != nullptr)
	{
		//UAnimInstance* AnimInstance = Mesh->GetAnimInstance();
		//if (AnimInstance != nullptr) { AnimInstance->Montage_Play(FireAnimation, 1.f); }
	}
	

}


void AFGCharacter::OnJump()
{
	if (Gravity == 900 && touchedGround == true) 
	{
		Gravity = -900; 
		touchedGround = false;
	}
}

void AFGCharacter::OnTouchGround()
{
	touchedGround = true;
}

void AFGCharacter::MoveForward(float Value)
{
	InputVector.X = Value;
}

void AFGCharacter::MoveRight(float Value)
{
	InputVector.Y = Value;
}

void AFGCharacter::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * BaseTurnRate);
}

void AFGCharacter::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * BaseLookUpRate);
}

void AFGCharacter::MakeEnemieslisen()
{
	EnemiesLisen.Broadcast();
	
}
