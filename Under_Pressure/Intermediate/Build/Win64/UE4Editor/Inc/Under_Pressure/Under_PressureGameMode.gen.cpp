// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Under_Pressure/Under_PressureGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnder_PressureGameMode() {}
// Cross Module References
	UNDER_PRESSURE_API UClass* Z_Construct_UClass_AUnder_PressureGameMode_NoRegister();
	UNDER_PRESSURE_API UClass* Z_Construct_UClass_AUnder_PressureGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Under_Pressure();
// End Cross Module References
	void AUnder_PressureGameMode::StaticRegisterNativesAUnder_PressureGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUnder_PressureGameMode_NoRegister()
	{
		return AUnder_PressureGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnder_PressureGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnder_PressureGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Under_Pressure,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnder_PressureGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Under_PressureGameMode.h" },
		{ "ModuleRelativePath", "Under_PressureGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnder_PressureGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnder_PressureGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnder_PressureGameMode_Statics::ClassParams = {
		&AUnder_PressureGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUnder_PressureGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnder_PressureGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnder_PressureGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnder_PressureGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnder_PressureGameMode, 2449827631);
	template<> UNDER_PRESSURE_API UClass* StaticClass<AUnder_PressureGameMode>()
	{
		return AUnder_PressureGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnder_PressureGameMode(Z_Construct_UClass_AUnder_PressureGameMode, &AUnder_PressureGameMode::StaticClass, TEXT("/Script/Under_Pressure"), TEXT("AUnder_PressureGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnder_PressureGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
