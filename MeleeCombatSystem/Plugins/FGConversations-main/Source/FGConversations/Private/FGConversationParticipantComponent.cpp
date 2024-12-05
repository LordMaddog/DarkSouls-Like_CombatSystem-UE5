#include "FGConversationParticipantComponent.h"


FPrimaryAssetId UFGConversationParticipantData::GetPrimaryAssetId() const
{
	return FPrimaryAssetId::FromString("ConversationParticipantData");
}


UFGConversationParticipantComponent::UFGConversationParticipantComponent()
{
}

const UFGConversationParticipantData* UFGConversationParticipantComponent::GetParticipantData()
{
	if (const UFGConversationParticipantData* Data = ConversationParticipantData.Get())
	{
		return Data;
	}
	return nullptr;
}

AActor* UFGConversationParticipantComponent::K2_GetParticipant(const FGameplayTag& ParticipantTag) const
{
	return GetParticipantActor(ParticipantTag);
}

FGameplayTag UFGConversationParticipantComponent::GetCurrentEntryPoint() const
{
	if (CurrentEntryPoint.IsValid())
		return CurrentEntryPoint;
	return DefaultConversationEntryPoint;
}

void UFGConversationParticipantComponent::SetCurrentEntryPoint(FGameplayTag NewEntryPointTag)
{
	CurrentEntryPoint = NewEntryPointTag;
}

