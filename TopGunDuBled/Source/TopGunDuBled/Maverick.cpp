// Fill out your copyright notice in the Description page of Project Settings.


#include "Maverick.h"
#include "Kismet/GameplayStatics.h"

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)

// Sets default values
AMaverick::AMaverick()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AMaverick::increaseLap()
{
	currentLap++;
	if (currentLap == 1)
	{
		FTimerHandle UnusedHandle;
		GetWorldTimerManager().SetTimer(UnusedHandle, this, &AMaverick::startTimer, 1, true);
	}
	if (currentLap == maxCurrentLap)
	{
		endGame();
	}
}

int AMaverick::getCurrentLap()
{
	return currentLap;
}

void AMaverick::endGame()
{
	print("ENDGAME");
	UGameplayStatics::OpenLevel(GetWorld(), FName("MainMenu"), true);
}

void AMaverick::startTimer()
{
	seconds++;
	// printf("seconds : %d", seconds);
}

void AMaverick::setRespawnLocation(FVector LocToSave)
{
	RespawnLocation = LocToSave;
}

FVector AMaverick::getRespawnLocation()
{
	return FVector(RespawnLocation);
}

void AMaverick::ProcessKeyPitch(float Rate)
{
	if (FMath::Abs(Rate) > .2f)
		ProcessPitch(Rate * 2.f);
}

void AMaverick::ProcessKeyRoll(float Rate)
{
	if (FMath::Abs(Rate) > .2f)
		ProcessRoll(Rate * 2.f);
}

void AMaverick::ProcessMouseYInput(float Value)
{
	ProcessPitch(Value);
}

void AMaverick::ProcessMouseXInput(float Value)
{
	ProcessRoll(Value);
}

void AMaverick::ProcessRoll(float Value)
{
	bIntentionalRoll = FMath::Abs(Value) > 0.f;

	if (bIntentionalPitch && !bIntentionalRoll) return;

	const float TargetRollSpeed = bIntentionalRoll ? (Value * RollRateMultiplier) : (GetActorRotation().Roll * -2.f);

	CurrentRollSpeed = FMath::FInterpTo(CurrentRollSpeed, TargetRollSpeed, GetWorld()->GetDeltaSeconds(), 2.f);
}

void AMaverick::ProcessPitch(float Value)
{
	bIntentionalPitch = FMath::Abs(Value) > 0.f;

	const float TargetPitchSpeed = Value * PitchRateMultiplier;

	CurrentPitchSpeed = FMath::FInterpTo(CurrentPitchSpeed, TargetPitchSpeed, GetWorld()->GetDeltaSeconds(), 2.f);
}

// Called when the game starts or when spawned
void AMaverick::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMaverick::Tick(float DeltaTime)
{
	//Calculate Thrust
	const float CurrentAcc = -GetActorRotation().Pitch * DeltaTime * Acceleration;
	const float NewForwardSpeed = CurrentForwardSpeed + CurrentAcc;
	CurrentForwardSpeed = FMath::Clamp(NewForwardSpeed, MinSpeed, MaxSpeed);

	const FVector LocalMove = FVector(CurrentForwardSpeed * DeltaTime, 0.f, 0.f);
	AddActorLocalOffset(LocalMove, true);

	FRotator DeltaRotation(0, 0, 0);
	DeltaRotation.Roll = CurrentRollSpeed * DeltaTime;
	DeltaRotation.Yaw = CurrentYawSpeed * DeltaTime;
	DeltaRotation.Pitch = CurrentPitchSpeed * DeltaTime;

	AddActorLocalRotation(DeltaRotation);

	GEngine->AddOnScreenDebugMessage(0, 0.f, FColor::Red, FString::Printf(TEXT("ForwardSpeed: %f"), CurrentForwardSpeed));
	Super::Tick(DeltaTime);

}

void AMaverick::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	//Deflect along Surface
	const FRotator CurrentRotation = GetActorRotation();
	SetActorRotation(FQuat::Slerp(CurrentRotation.Quaternion(), HitNormal.ToOrientationQuat(), 0.025f));

	//Slow Down
	CurrentForwardSpeed = FMath::FInterpTo(CurrentForwardSpeed, MinSpeed, GetWorld()->GetDeltaSeconds(), 5.f);
}

// Called to bind functionality to input
void AMaverick::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Turn", this, &AMaverick::ProcessMouseXInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMaverick::ProcessKeyRoll);
	PlayerInputComponent->BindAxis("LookUp", this, &AMaverick::ProcessMouseYInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMaverick::ProcessKeyPitch);
}

