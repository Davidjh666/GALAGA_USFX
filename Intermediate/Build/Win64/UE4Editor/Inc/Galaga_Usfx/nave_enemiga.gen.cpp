// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_Usfx/nave_enemiga.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodenave_enemiga() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_Anave_enemiga_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_Anave_enemiga();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_Usfx();
// End Cross Module References
	void Anave_enemiga::StaticRegisterNativesAnave_enemiga()
	{
	}
	UClass* Z_Construct_UClass_Anave_enemiga_NoRegister()
	{
		return Anave_enemiga::StaticClass();
	}
	struct Z_Construct_UClass_Anave_enemiga_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Anave_enemiga_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_Usfx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Anave_enemiga_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "nave_enemiga.h" },
		{ "ModuleRelativePath", "nave_enemiga.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Anave_enemiga_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Anave_enemiga>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Anave_enemiga_Statics::ClassParams = {
		&Anave_enemiga::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Anave_enemiga_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Anave_enemiga_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Anave_enemiga()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Anave_enemiga_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Anave_enemiga, 8689128);
	template<> GALAGA_USFX_API UClass* StaticClass<Anave_enemiga>()
	{
		return Anave_enemiga::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Anave_enemiga(Z_Construct_UClass_Anave_enemiga, &Anave_enemiga::StaticClass, TEXT("/Script/Galaga_Usfx"), TEXT("Anave_enemiga"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Anave_enemiga);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
