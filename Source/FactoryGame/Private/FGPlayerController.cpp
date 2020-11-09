// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPlayerController.h"
#include "FGCheatManager.h"

AFGPlayerController::AFGPlayerController() : Super() {
	this->mCanAffectAudioVolumes = true;
	this->mMapAreaCheckInterval = 0.25;
	this->mMinPhotoModeFOV = 5;
	this->mMaxPhotoModeFOV = 175;
	this->CheatClass = UFGCheatManager::StaticClass();
}
bool AFGPlayerController::ProcessConsoleExec(const TCHAR* cmd, FOutputDevice& ar, UObject* executor){ return bool(); }
void AFGPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
bool AFGPlayerController::ReplicateSubobjects( UActorChannel* channel,  FOutBunch* bunch, FReplicationFlags* repFlags){ return bool(); }
void AFGPlayerController::PostInitializeComponents(){ Super::PostInitializeComponents(); }
void AFGPlayerController::BeginPlay(){ }
void AFGPlayerController::Destroyed(){ }
void AFGPlayerController::OnRep_PlayerState(){ }
void AFGPlayerController::SetPawn(APawn* inPawn){ }
void AFGPlayerController::PawnLeavingGame(){ }
void AFGPlayerController::PlayerTick(float DeltaTime){ }
void AFGPlayerController::PreClientTravel(const FString& pendingURL, ETravelType travelType, bool isSeamlessTravel){ }
void AFGPlayerController::NotifyLoadedWorld(FName worldPackageName, bool isFinalDest){ }
UFGRemoteCallObject* AFGPlayerController::GetRemoteCallObjectOfClass(TSubclassOf< UFGRemoteCallObject > inClass){ return nullptr; }
UFGRemoteCallObject* AFGPlayerController::RegisterRemoteCallObjectClass(TSubclassOf< UFGRemoteCallObject > inClass){ return nullptr; }
void AFGPlayerController::OnControlledCharacterDied( AFGCharacterBase* character){ }
void AFGPlayerController::StartRespawn(){ }
void AFGPlayerController::Server_Respawn_Implementation(){ }
bool AFGPlayerController::Server_Respawn_Validate(){ return bool(); }
void AFGPlayerController::Suicide(){ }
bool AFGPlayerController::NeedRespawn() const{ return bool(); }
void AFGPlayerController::SetRespawningFromDeath(bool respawningFromDeath){ }
bool AFGPlayerController::GetRespawningFromDeath(){ return bool(); }
void AFGPlayerController::ExecuteShortcut(int32 shortcutIndex){ }
void AFGPlayerController::GetCurrentShortcuts(TArray<  UFGHotbarShortcut* >& out_shortcuts){ }
void AFGPlayerController::GetPresetShortcuts(int32 presetHotbarIndex, TArray<  UFGHotbarShortcut* >& out_shortcuts){ }
void AFGPlayerController::GetAllPresetHotbars(TArray<FPresetHotbar>& out_presetHotbars){ }
void AFGPlayerController::GetPresetHotbar(int32 presetHotbarIndex, FPresetHotbar& out_presetHotbar){ }
bool AFGPlayerController::CreatePresetHotbarFromCurrentHotbar(const FText& presetName, int32 iconIndex){ return bool(); }
bool AFGPlayerController::CanCreateNewPresetHotbar() const{ return bool(); }
bool AFGPlayerController::CopyCurrentHotbarToPresetHotbar(int32 presetHotbarIndex){ return bool(); }
void AFGPlayerController::ChangeNameOfPresetHotbar(int32 presetHotbarIndex, const FText& newName){ }
void AFGPlayerController::ChangeIconIndexOfPresetHotbar(int32 presetHotbarIndex, int32 iconIndex){ }
bool AFGPlayerController::RemovePresetHotbar(int32 presetHotbarIndex){ return bool(); }
void AFGPlayerController::CopyPresetHotbarToCurrentHotbar(int32 presetHotbarIndex){ }
void AFGPlayerController::SetRecipeShortcutOnIndex(TSubclassOf<  UFGRecipe > recipe, int32 onIndex){ }
void AFGPlayerController::SetHotbarIndex(int32 newIndex){ }
int32 AFGPlayerController::GetCurrentHotbarIndex(){ return int32(); }
int32 AFGPlayerController::GetNumHotbars(){ return int32(); }
int32 AFGPlayerController::GetNumPresetHotbars() const{ return int32(); }
int32 AFGPlayerController::GetMaxNumPresetHotbars(){ return int32(); }
int32 AFGPlayerController::GetNumSlotsPerHotbar(){ return int32(); }
int32 AFGPlayerController::GetRecipeShortcutIndex(TSubclassOf<  UFGRecipe > recipe) const{ return int32(); }
int32 AFGPlayerController::GetShortcutIndexFromKey(const FKeyEvent& key){ return int32(); }
void AFGPlayerController::Server_RequestFogOfWarData_Implementation(){ }
bool AFGPlayerController::Server_RequestFogOfWarData_Validate(){ return bool(); }
void AFGPlayerController::Client_TransferFogOfWarData_Implementation(const TArray<uint8>& fogOfWarRawData, int32 index){ }
float AFGPlayerController::GetObjectScreenRadius(AActor* actor, float boundingRadius){ return float(); }
float AFGPlayerController::GetScreenBasedObjectRadius(AActor* actor, float screenRadius){ return float(); }
void AFGPlayerController::Client_AddMessage_Implementation(TSubclassOf<  UFGMessageBase > newMessage){ }
bool AFGPlayerController::GetPlayerHasMessage(TSubclassOf<  UFGMessageBase > newMessage){ return bool(); }
void AFGPlayerController::SetDisabledInputGate(FDisabledInputGate newDisabledInputGate){ }
void AFGPlayerController::Server_DealImpactDamage_Implementation(const FHitResult& impact, FVector forwardVector, float damage, TSubclassOf< UDamageType > damageType, AActor* inInstigator){ }
bool AFGPlayerController::Server_DealImpactDamage_Validate(const FHitResult& impact, FVector forwardVector, float damage, TSubclassOf< UDamageType > damageType, AActor* inInstigator){ return bool(); }
void AFGPlayerController::Server_DealRadialDamage_Implementation(const FHitResult& impact, float damage, float radius, TSubclassOf< UDamageType > damageType, AActor* inInstigator){ }
bool AFGPlayerController::Server_DealRadialDamage_Validate(const FHitResult& impact, float damage, float radius, TSubclassOf< UDamageType > damageType, AActor* inInstigator){ return bool(); }
FString AFGPlayerController::GetScreenshotPath(bool isHighRes){ return FString(); }
bool AFGPlayerController::DestroyNetworkActorHandled(){ return bool(); }
void AFGPlayerController::AcknowledgePossession( APawn* P){ }
void AFGPlayerController::CycleToNextHotbar(){ }
void AFGPlayerController::CycleToPreviousHotbar(){ }
bool AFGPlayerController::GetPresenceState(FPlayerPresenceState& outState) const{ return bool(); }
void AFGPlayerController::PonderRemoveDeadPawn(){ }
AFGCharacterBase* AFGPlayerController::GetControlledCharacter() const{ return nullptr; }
bool AFGPlayerController::ControlledCharacterIsAliveAndWell() const{ return bool(); }
void AFGPlayerController::OnPrimaryFire(){ }
void AFGPlayerController::SetupInputComponent(){ }
void AFGPlayerController::BuildInputStack(TArray< UInputComponent* >& inputStack){ }
void AFGPlayerController::OnAttentionPingPressed(){ }
void AFGPlayerController::OnDismantlePortableMiner_Implementation( AFGPortableMiner* PortableMiner){ }
void AFGPlayerController::OnDismantleGolfCart_Implementation( AFGWheeledVehicle* inGolfCart){ }
void AFGPlayerController::CheckPawnMapArea(){ }
bool AFGPlayerController::InitMapAreaCheckFunction(){ return bool(); }
TSubclassOf< UFGMapArea > AFGPlayerController::GetCurrentMapArea() const{ return TSubclassOf<UFGMapArea>(); }
void AFGPlayerController::EnterChatMessage(const FString& inMessage){ }
void AFGPlayerController::OnDisabledInputGateChanged_Implementation(){ }
void AFGPlayerController::EnablePhotoMode(bool isEnabled){ }
void AFGPlayerController::TogglePhotoMode(){ }
void AFGPlayerController::ToggleHiResPhotoMode(){ }
void AFGPlayerController::IncrementPhotoModeFOV(){ }
void AFGPlayerController::DecrementPhotoModeFOV(){ }
void AFGPlayerController::SetupTutorial(){ }
void AFGPlayerController::FinishRespawn(){ }
void AFGPlayerController::Server_SetRecipeShortcutOnIndex_Implementation(TSubclassOf<class UFGRecipe> recipe, int32 onIndex){ }
bool AFGPlayerController::Server_SetRecipeShortcutOnIndex_Validate(TSubclassOf<class UFGRecipe> recipe, int32 onIndex){ return bool(); }
void AFGPlayerController::Server_SetHotbarIndex_Implementation(int32 index){ }
bool AFGPlayerController::Server_SetHotbarIndex_Validate(int32 index){ return bool(); }
void AFGPlayerController::Server_CreatePresetHotbarFromCurrentHotbar_Implementation(const FText& presetName, int32 iconIndex){ }
bool AFGPlayerController::Server_CreatePresetHotbarFromCurrentHotbar_Validate(const FText& presetName, int32 iconIndex){ return bool(); }
void AFGPlayerController::Server_CopyCurrentHotbarToPresetHotbar_Implementation(int32 presetHotbarIndex){ }
bool AFGPlayerController::Server_CopyCurrentHotbarToPresetHotbar_Validate(int32 presetHotbarIndex){ return bool(); }
void AFGPlayerController::Server_CopyPresetHotbarToCurrentHotbar_Implementation(int32 presetHotbarIndex){ }
bool AFGPlayerController::Server_CopyPresetHotbarToCurrentHotbar_Validate(int32 presetHotbarIndex){ return bool(); }
void AFGPlayerController::Server_SendChatMessage_Implementation(const FChatMessageStruct& newMessage){ }
bool AFGPlayerController::Server_SendChatMessage_Validate(const FChatMessageStruct& newMessage){ return bool(); }
void AFGPlayerController::Server_SpawnAttentionPingActor_Implementation(FVector pingLocation, FVector pingNormal){ }
bool AFGPlayerController::Server_SpawnAttentionPingActor_Validate(FVector pingLocation, FVector pingNormal){ return bool(); }
void AFGPlayerController::Server_Suicide_Implementation(){ }
bool AFGPlayerController::Server_Suicide_Validate(){ return bool(); }
void AFGPlayerController::Server_StartRespawn_Implementation(){ }
bool AFGPlayerController::Server_StartRespawn_Validate(){ return bool(); }
void AFGPlayerController::Server_FinishRespawn_Implementation(){ }
bool AFGPlayerController::Server_FinishRespawn_Validate(){ return bool(); }
void AFGPlayerController::Server_WaitForLevelStreaming(){ }
void AFGPlayerController::Client_WaitForLevelStreaming_Implementation(){ }
void AFGPlayerController::OnRep_IsRespawning(){ }
void AFGPlayerController::DisablePawnMovement(bool isDisabled){ }
void AFGPlayerController::testAndProcesAdaMessages(AFGPlayerController* owner, const FString &inMessage, AFGPlayerState* playerState, float serverTimeSeconds,  APlayerState* PlayerState,  AFGGameState* fgGameState){ }