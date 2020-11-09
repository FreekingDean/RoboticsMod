// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGParachute.h"

UFGParachuteCameraShake::UFGParachuteCameraShake() : Super() {
	this->bSingleInstance = true;
	this->OscillationDuration = 2.09999990463257;
	this->OscillationBlendInTime = 0.150000005960464;
	this->OscillationBlendOutTime = 1.79999995231628;
	this->RotOscillation.Pitch.Amplitude = 16; this->RotOscillation.Pitch.Frequency = 3; this->RotOscillation.Pitch.InitialOffset = EOO_OffsetRandom; this->RotOscillation.Pitch.Waveform = EOscillatorWaveform::SineWave; this->RotOscillation.Yaw.Amplitude = 5; this->RotOscillation.Yaw.Frequency = 5; this->RotOscillation.Yaw.InitialOffset = EOO_OffsetRandom; this->RotOscillation.Yaw.Waveform = EOscillatorWaveform::SineWave; this->RotOscillation.Roll.Amplitude = 5; this->RotOscillation.Roll.Frequency = 2; this->RotOscillation.Roll.InitialOffset = EOO_OffsetRandom; this->RotOscillation.Roll.Waveform = EOscillatorWaveform::SineWave;
	this->LocOscillation.X.Amplitude = 6; this->LocOscillation.X.Frequency = 7; this->LocOscillation.X.InitialOffset = EOO_OffsetRandom; this->LocOscillation.X.Waveform = EOscillatorWaveform::SineWave; this->LocOscillation.Y.Amplitude = 6; this->LocOscillation.Y.Frequency = 7; this->LocOscillation.Y.InitialOffset = EOO_OffsetRandom; this->LocOscillation.Y.Waveform = EOscillatorWaveform::SineWave; this->LocOscillation.Z.Amplitude = 9; this->LocOscillation.Z.Frequency = 4; this->LocOscillation.Z.InitialOffset = EOO_OffsetRandom; this->LocOscillation.Z.Waveform = EOscillatorWaveform::SineWave;
}
AFGParachute::AFGParachute() : Super() {
	this->mTerminalVelocityZ = 100;
	this->mEquipmentSlot = EEquipmentSlot::ES_BACK;
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = false; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bOnlyRelevantToOwner = true;
	this->bNetUseOwnerRelevancy = true;
	this->bReplicates = true;
}
void AFGParachute::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGParachute::Tick(float DeltaSeconds){ }
void AFGParachute::Equip( AFGCharacterPlayer* character){ }
void AFGParachute::UnEquip(){ }
void AFGParachute::Deploy(){ }
void AFGParachute::Server_Deploy_Implementation(){ }
bool AFGParachute::Server_Deploy_Validate(){ return bool(); }
FVector AFGParachute::ModifyVelocity_Implementation(float deltaTime, const FVector& oldVelocity){ return FVector(); }
void AFGParachute::AddEquipmentActionBindings(){ }
void AFGParachuteAttachment::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGParachuteAttachment::SetIsDeployed(bool newIsDeployed){ }
void AFGParachuteAttachment::OnRep_IsDeployed(){ }
