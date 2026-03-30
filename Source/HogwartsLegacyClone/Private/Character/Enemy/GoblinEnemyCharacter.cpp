// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Enemy/GoblinEnemyCharacter.h"

#include "Data/Enemy/DA_MeleeEnemyConfig.h"
#include "GameFramework/CharacterMovementComponent.h"

void AGoblinEnemyCharacter::OnHealthChanged(float OldValue, float NewValue)
{

}

UDA_EnemyConfigBase* AGoblinEnemyCharacter::GetEnemyConfig() const
{
	return GoblinConfig;
}

void AGoblinEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (auto Movement = GetCharacterMovement())
	{
		Movement->MaxWalkSpeed = FMath::RandRange(200.f, 240.f);
	}
}
