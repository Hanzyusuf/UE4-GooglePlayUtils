// Fill out your copyright notice in the Description page of Project Settings.


#include "Main.h"
#include "OnlineSubsystem.h"
#include "OnlineSubsystemUtils\Public\OnlineSubsystemUtils.h"

FString UMain::GetGooglePlayUserUID(int32 PlayerControllerNum) {
	IOnlineSubsystem* OnlineSubsystem = IOnlineSubsystem::Get("GooglePlay");
	FString UserUID = "";
	if (OnlineSubsystem) {
		TSharedPtr<const FUniqueNetId> ID = OnlineSubsystem->GetIdentityInterface()->GetUniquePlayerId(PlayerControllerNum);
		UserUID = ID->ToString();
	}
	return UserUID;
}

FString UMain::GetGooglePlayUserNickname(int32 PlayerControllerNum) {
	IOnlineSubsystem* OnlineSubsystem = IOnlineSubsystem::Get("GooglePlay");
	FString Nickname = "";
	if (OnlineSubsystem)
		Nickname = OnlineSubsystem->GetIdentityInterface()->GetPlayerNickname(PlayerControllerNum);
	return Nickname;
}

FString UMain::GetGooglePlayAuthToken(int32 PlayerControllerNum) {
	IOnlineSubsystem* OnlineSubsystem = IOnlineSubsystem::Get("GooglePlay");
	FString AuthToken = "";
	if (OnlineSubsystem)
		AuthToken = OnlineSubsystem->GetIdentityInterface()->GetAuthToken(PlayerControllerNum);
	return AuthToken;
}