// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GooglePlayUtils/Public/Main.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMain() {}
// Cross Module References
	GOOGLEPLAYUTILS_API UClass* Z_Construct_UClass_UMain_NoRegister();
	GOOGLEPLAYUTILS_API UClass* Z_Construct_UClass_UMain();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GooglePlayUtils();
// End Cross Module References
	DEFINE_FUNCTION(UMain::execGetGooglePlayAuthToken)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerControllerNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMain::GetGooglePlayAuthToken(Z_Param_PlayerControllerNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMain::execGetGooglePlayUserNickname)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerControllerNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMain::GetGooglePlayUserNickname(Z_Param_PlayerControllerNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMain::execGetGooglePlayUserUID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerControllerNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMain::GetGooglePlayUserUID(Z_Param_PlayerControllerNum);
		P_NATIVE_END;
	}
	void UMain::StaticRegisterNativesUMain()
	{
		UClass* Class = UMain::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGooglePlayAuthToken", &UMain::execGetGooglePlayAuthToken },
			{ "GetGooglePlayUserNickname", &UMain::execGetGooglePlayUserNickname },
			{ "GetGooglePlayUserUID", &UMain::execGetGooglePlayUserUID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMain_GetGooglePlayAuthToken_Statics
	{
		struct Main_eventGetGooglePlayAuthToken_Parms
		{
			int32 PlayerControllerNum;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerControllerNum;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMain_GetGooglePlayAuthToken_Statics::NewProp_PlayerControllerNum = { "PlayerControllerNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Main_eventGetGooglePlayAuthToken_Parms, PlayerControllerNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMain_GetGooglePlayAuthToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Main_eventGetGooglePlayAuthToken_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMain_GetGooglePlayAuthToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMain_GetGooglePlayAuthToken_Statics::NewProp_PlayerControllerNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMain_GetGooglePlayAuthToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMain_GetGooglePlayAuthToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInfo" },
		{ "Comment", "/*Returns google play auth token*/" },
		{ "ModuleRelativePath", "Public/Main.h" },
		{ "ToolTip", "Returns google play auth token" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMain_GetGooglePlayAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMain, nullptr, "GetGooglePlayAuthToken", nullptr, nullptr, sizeof(Main_eventGetGooglePlayAuthToken_Parms), Z_Construct_UFunction_UMain_GetGooglePlayAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GetGooglePlayAuthToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMain_GetGooglePlayAuthToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GetGooglePlayAuthToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMain_GetGooglePlayAuthToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMain_GetGooglePlayAuthToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMain_GetGooglePlayUserNickname_Statics
	{
		struct Main_eventGetGooglePlayUserNickname_Parms
		{
			int32 PlayerControllerNum;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerControllerNum;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMain_GetGooglePlayUserNickname_Statics::NewProp_PlayerControllerNum = { "PlayerControllerNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Main_eventGetGooglePlayUserNickname_Parms, PlayerControllerNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMain_GetGooglePlayUserNickname_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Main_eventGetGooglePlayUserNickname_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMain_GetGooglePlayUserNickname_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMain_GetGooglePlayUserNickname_Statics::NewProp_PlayerControllerNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMain_GetGooglePlayUserNickname_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMain_GetGooglePlayUserNickname_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInfo" },
		{ "Comment", "/*Returns the user's unique nickname if user is signed in, else returns empty*/" },
		{ "ModuleRelativePath", "Public/Main.h" },
		{ "ToolTip", "Returns the user's unique nickname if user is signed in, else returns empty" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMain_GetGooglePlayUserNickname_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMain, nullptr, "GetGooglePlayUserNickname", nullptr, nullptr, sizeof(Main_eventGetGooglePlayUserNickname_Parms), Z_Construct_UFunction_UMain_GetGooglePlayUserNickname_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GetGooglePlayUserNickname_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMain_GetGooglePlayUserNickname_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GetGooglePlayUserNickname_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMain_GetGooglePlayUserNickname()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMain_GetGooglePlayUserNickname_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMain_GetGooglePlayUserUID_Statics
	{
		struct Main_eventGetGooglePlayUserUID_Parms
		{
			int32 PlayerControllerNum;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerControllerNum;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMain_GetGooglePlayUserUID_Statics::NewProp_PlayerControllerNum = { "PlayerControllerNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Main_eventGetGooglePlayUserUID_Parms, PlayerControllerNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMain_GetGooglePlayUserUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Main_eventGetGooglePlayUserUID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMain_GetGooglePlayUserUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMain_GetGooglePlayUserUID_Statics::NewProp_PlayerControllerNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMain_GetGooglePlayUserUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMain_GetGooglePlayUserUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInfo" },
		{ "Comment", "/*Returns the user's unique id if user is signed in, else returns empty*/" },
		{ "ModuleRelativePath", "Public/Main.h" },
		{ "ToolTip", "Returns the user's unique id if user is signed in, else returns empty" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMain_GetGooglePlayUserUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMain, nullptr, "GetGooglePlayUserUID", nullptr, nullptr, sizeof(Main_eventGetGooglePlayUserUID_Parms), Z_Construct_UFunction_UMain_GetGooglePlayUserUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GetGooglePlayUserUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMain_GetGooglePlayUserUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GetGooglePlayUserUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMain_GetGooglePlayUserUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMain_GetGooglePlayUserUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMain_NoRegister()
	{
		return UMain::StaticClass();
	}
	struct Z_Construct_UClass_UMain_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GooglePlayUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMain_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMain_GetGooglePlayAuthToken, "GetGooglePlayAuthToken" }, // 154586884
		{ &Z_Construct_UFunction_UMain_GetGooglePlayUserNickname, "GetGooglePlayUserNickname" }, // 3419346254
		{ &Z_Construct_UFunction_UMain_GetGooglePlayUserUID, "GetGooglePlayUserUID" }, // 3661645818
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMain_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Main.h" },
		{ "ModuleRelativePath", "Public/Main.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMain_Statics::ClassParams = {
		&UMain::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMain, 3552315395);
	template<> GOOGLEPLAYUTILS_API UClass* StaticClass<UMain>()
	{
		return UMain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMain(Z_Construct_UClass_UMain, &UMain::StaticClass, TEXT("/Script/GooglePlayUtils"), TEXT("UMain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
