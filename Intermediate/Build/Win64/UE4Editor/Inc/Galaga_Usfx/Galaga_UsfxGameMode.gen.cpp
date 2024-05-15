// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_Usfx/Galaga_UsfxGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGalaga_UsfxGameMode() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AGalaga_UsfxGameMode_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AGalaga_UsfxGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Galaga_Usfx();
// End Cross Module References
	void AGalaga_UsfxGameMode::StaticRegisterNativesAGalaga_UsfxGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGalaga_UsfxGameMode_NoRegister()
	{
		return AGalaga_UsfxGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGalaga_UsfxGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGalaga_UsfxGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_Usfx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_UsfxGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Galaga_UsfxGameMode.h" },
		{ "ModuleRelativePath", "Galaga_UsfxGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGalaga_UsfxGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGalaga_UsfxGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGalaga_UsfxGameMode_Statics::ClassParams = {
		&AGalaga_UsfxGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGalaga_UsfxGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_UsfxGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGalaga_UsfxGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGalaga_UsfxGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGalaga_UsfxGameMode, 3387993848);
	template<> GALAGA_USFX_API UClass* StaticClass<AGalaga_UsfxGameMode>()
	{
		return AGalaga_UsfxGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGalaga_UsfxGameMode(Z_Construct_UClass_AGalaga_UsfxGameMode, &AGalaga_UsfxGameMode::StaticClass, TEXT("/Script/Galaga_Usfx"), TEXT("AGalaga_UsfxGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGalaga_UsfxGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
