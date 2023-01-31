// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopGunDuBled/Maverick.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaverick() {}
// Cross Module References
	TOPGUNDUBLED_API UClass* Z_Construct_UClass_AMaverick_NoRegister();
	TOPGUNDUBLED_API UClass* Z_Construct_UClass_AMaverick();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TopGunDuBled();
// End Cross Module References
	void AMaverick::StaticRegisterNativesAMaverick()
	{
	}
	UClass* Z_Construct_UClass_AMaverick_NoRegister()
	{
		return AMaverick::StaticClass();
	}
	struct Z_Construct_UClass_AMaverick_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollRateMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollRateMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchRateMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchRateMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentForwardSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentForwardSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMaverick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TopGunDuBled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaverick_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Maverick.h" },
		{ "ModuleRelativePath", "Maverick.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaverick_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Maverick.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMaverick_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaverick, Acceleration), METADATA_PARAMS(Z_Construct_UClass_AMaverick_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaverick_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaverick_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Maverick.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMaverick_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaverick, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_AMaverick_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaverick_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaverick_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Maverick.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMaverick_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaverick, MinSpeed), METADATA_PARAMS(Z_Construct_UClass_AMaverick_Statics::NewProp_MinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaverick_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaverick_Statics::NewProp_RollRateMultiplier_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Maverick.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMaverick_Statics::NewProp_RollRateMultiplier = { "RollRateMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaverick, RollRateMultiplier), METADATA_PARAMS(Z_Construct_UClass_AMaverick_Statics::NewProp_RollRateMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaverick_Statics::NewProp_RollRateMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaverick_Statics::NewProp_PitchRateMultiplier_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Maverick.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMaverick_Statics::NewProp_PitchRateMultiplier = { "PitchRateMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaverick, PitchRateMultiplier), METADATA_PARAMS(Z_Construct_UClass_AMaverick_Statics::NewProp_PitchRateMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaverick_Statics::NewProp_PitchRateMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaverick_Statics::NewProp_CurrentForwardSpeed_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Maverick.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMaverick_Statics::NewProp_CurrentForwardSpeed = { "CurrentForwardSpeed", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaverick, CurrentForwardSpeed), METADATA_PARAMS(Z_Construct_UClass_AMaverick_Statics::NewProp_CurrentForwardSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaverick_Statics::NewProp_CurrentForwardSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMaverick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaverick_Statics::NewProp_Acceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaverick_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaverick_Statics::NewProp_MinSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaverick_Statics::NewProp_RollRateMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaverick_Statics::NewProp_PitchRateMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaverick_Statics::NewProp_CurrentForwardSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMaverick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaverick>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMaverick_Statics::ClassParams = {
		&AMaverick::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMaverick_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMaverick_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMaverick_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMaverick_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMaverick()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMaverick_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMaverick, 1832781901);
	template<> TOPGUNDUBLED_API UClass* StaticClass<AMaverick>()
	{
		return AMaverick::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMaverick(Z_Construct_UClass_AMaverick, &AMaverick::StaticClass, TEXT("/Script/TopGunDuBled"), TEXT("AMaverick"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMaverick);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
