// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGTimeSubsystem.h"

#if WITH_EDITOR
#endif 
#if WITH_EDITORONLY_DATA
#endif 
AFGTimeOfDaySubsystem::AFGTimeOfDaySubsystem() : Super() {
	this->mSyncronizeTimeOfDayInterval = 5;
	this->mDayLengthMinutes = 3;
	this->mNightLengthMinutes = 1.5;
	this->mDayStartTime = 6;
	this->mNightStartTime = 18;
	this->mSpeedMultiplier = 1;
	this->mNumberOfPassedDays = -1;
	this->mUpdateTime = true;
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = true; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bAlwaysRelevant = true;
	this->bReplicates = true;
}
void AFGTimeOfDaySubsystem::BeginPlay(){ }
void AFGTimeOfDaySubsystem::Tick(float dt){ }
void AFGTimeOfDaySubsystem::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGTimeOfDaySubsystem::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGTimeOfDaySubsystem::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGTimeOfDaySubsystem::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGTimeOfDaySubsystem::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGTimeOfDaySubsystem::NeedTransform_Implementation(){ return bool(); }
bool AFGTimeOfDaySubsystem::ShouldSave_Implementation() const{ return bool(); }
void AFGTimeOfDaySubsystem::GetLifetimeReplicatedProps( TArray<class FLifetimeProperty,  FDefaultAllocator> & OutReplicatedProps) const{ }
void AFGTimeOfDaySubsystem::SetDaySeconds(float daySeconds){ }
AFGTimeOfDaySubsystem* AFGTimeOfDaySubsystem::Get(UObject* worldContext){ return nullptr; }
AFGTimeOfDaySubsystem* AFGTimeOfDaySubsystem::Get(UWorld* world){ return nullptr; }
float AFGTimeOfDaySubsystem::GetNormalizedTimeOfDay() const{ return float(); }
float AFGTimeOfDaySubsystem::GetDayPct() const{ return float(); }
float AFGTimeOfDaySubsystem::GetNightPct() const{ return float(); }
float AFGTimeOfDaySubsystem::GetTimeOfDayHours() const{ return float(); }
float AFGTimeOfDaySubsystem::GetDaySeconds() const{ return float(); }
float AFGTimeOfDaySubsystem::GetSeconds() const{ return float(); }
int32 AFGTimeOfDaySubsystem::GetDayMinutes() const{ return int32(); }
int32 AFGTimeOfDaySubsystem::GetMinutes() const{ return int32(); }
int32 AFGTimeOfDaySubsystem::GetHours() const{ return int32(); }
int32 AFGTimeOfDaySubsystem::GetPassedDays() const{ return int32(); }
bool AFGTimeOfDaySubsystem::IsDay() const{ return bool(); }
bool AFGTimeOfDaySubsystem::IsNight() const{ return bool(); }
float AFGTimeOfDaySubsystem::GetDaytimeSeconds() const{ return float(); }
float AFGTimeOfDaySubsystem::GetNighttimeSeconds() const{ return float(); }
void AFGTimeOfDaySubsystem::ForceReplicateTimeToClients(){ }
void AFGTimeOfDaySubsystem::SetTimeSpeedMultiplier(float multiplier){ }
float AFGTimeOfDaySubsystem::GetDaytimeSpeed() const{ return float(); }
float AFGTimeOfDaySubsystem::GetNighttimeSpeed() const{ return float(); }
void AFGTimeOfDaySubsystem::OnRep_ReplicatedDaySeconds(){ }
void AFGTimeOfDaySubsystem::UpdateServerDaySeconds(){ }
float AFGTimeOfDaySubsystem::GetAdjustedDaySeconds() const{ return float(); }
float AFGTimeOfDaySubsystem::GetGameDeltaTime(float dt) const{ return float(); }
