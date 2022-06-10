// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Under_Pressure/Under_PressureHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnder_PressureHUD() {}
// Cross Module References
	UNDER_PRESSURE_API UClass* Z_Construct_UClass_AUnder_PressureHUD_NoRegister();
	UNDER_PRESSURE_API UClass* Z_Construct_UClass_AUnder_PressureHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Under_Pressure();
// End Cross Module References
	void AUnder_PressureHUD::StaticRegisterNativesAUnder_PressureHUD()
	{
	}
	UClass* Z_Construct_UClass_AUnder_PressureHUD_NoRegister()
	{
		return AUnder_PressureHUD::StaticClass();
	}
	struct Z_Construct_UClass_AUnder_PressureHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnder_PressureHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Under_Pressure,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnder_PressureHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Under_PressureHUD.h" },
		{ "ModuleRelativePath", "Under_PressureHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnder_PressureHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnder_PressureHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnder_PressureHUD_Statics::ClassParams = {
		&AUnder_PressureHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnder_PressureHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnder_PressureHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnder_PressureHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnder_PressureHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnder_PressureHUD, 2245436862);
	template<> UNDER_PRESSURE_API UClass* StaticClass<AUnder_PressureHUD>()
	{
		return AUnder_PressureHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnder_PressureHUD(Z_Construct_UClass_AUnder_PressureHUD, &AUnder_PressureHUD::StaticClass, TEXT("/Script/Under_Pressure"), TEXT("AUnder_PressureHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnder_PressureHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
