// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopGunDuBled/TopGunDuBledGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopGunDuBledGameMode() {}
// Cross Module References
	TOPGUNDUBLED_API UClass* Z_Construct_UClass_ATopGunDuBledGameMode_NoRegister();
	TOPGUNDUBLED_API UClass* Z_Construct_UClass_ATopGunDuBledGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TopGunDuBled();
// End Cross Module References
	void ATopGunDuBledGameMode::StaticRegisterNativesATopGunDuBledGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATopGunDuBledGameMode_NoRegister()
	{
		return ATopGunDuBledGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATopGunDuBledGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopGunDuBledGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TopGunDuBled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopGunDuBledGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TopGunDuBledGameMode.h" },
		{ "ModuleRelativePath", "TopGunDuBledGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopGunDuBledGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopGunDuBledGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATopGunDuBledGameMode_Statics::ClassParams = {
		&ATopGunDuBledGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATopGunDuBledGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopGunDuBledGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopGunDuBledGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATopGunDuBledGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATopGunDuBledGameMode, 637914488);
	template<> TOPGUNDUBLED_API UClass* StaticClass<ATopGunDuBledGameMode>()
	{
		return ATopGunDuBledGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATopGunDuBledGameMode(Z_Construct_UClass_ATopGunDuBledGameMode, &ATopGunDuBledGameMode::StaticClass, TEXT("/Script/TopGunDuBled"), TEXT("ATopGunDuBledGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopGunDuBledGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
