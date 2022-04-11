// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Main.generated.h"

/**
 * 
 */
UCLASS()
class GOOGLEPLAYUTILS_API UMain : public UObject
{
	GENERATED_BODY()

	public:

		/*Returns the user's unique id if user is signed in, else returns empty*/
		UFUNCTION(BlueprintCallable, Category = "UserInfo")
			static FString GetGooglePlayUserUID(int32 PlayerControllerNum);

		/*Returns the user's unique nickname if user is signed in, else returns empty*/
		UFUNCTION(BlueprintCallable, Category = "UserInfo")
			static FString GetGooglePlayUserNickname(int32 PlayerControllerNum);

		/*Returns google play auth token*/
		UFUNCTION(BlueprintCallable, Category = "UserInfo")
			static FString GetGooglePlayAuthToken(int32 PlayerControllerNum);
	
};
