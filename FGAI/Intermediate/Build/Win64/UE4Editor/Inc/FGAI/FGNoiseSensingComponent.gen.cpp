// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI/FGNoiseSensingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGNoiseSensingComponent() {}
// Cross Module References
	FGAI_API UClass* Z_Construct_UClass_UFGNoiseSensingComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGNoiseSensingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FGAI();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFGNoiseSensingComponent::execLisen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Lisen();
		P_NATIVE_END;
	}
	void UFGNoiseSensingComponent::StaticRegisterNativesUFGNoiseSensingComponent()
	{
		UClass* Class = UFGNoiseSensingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Lisen", &UFGNoiseSensingComponent::execLisen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGNoiseSensingComponent_Lisen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGNoiseSensingComponent_Lisen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "FGNoiseSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGNoiseSensingComponent_Lisen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGNoiseSensingComponent, nullptr, "Lisen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGNoiseSensingComponent_Lisen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGNoiseSensingComponent_Lisen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGNoiseSensingComponent_Lisen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGNoiseSensingComponent_Lisen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGNoiseSensingComponent_NoRegister()
	{
		return UFGNoiseSensingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGNoiseSensingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_heardSoundPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_heardSoundPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_heardSoundObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_heardSoundObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_heardSomething_MetaData[];
#endif
		static void NewProp_heardSomething_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_heardSomething;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGNoiseSensingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGNoiseSensingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGNoiseSensingComponent_Lisen, "Lisen" }, // 4208155980
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGNoiseSensingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FGNoiseSensingComponent.h" },
		{ "ModuleRelativePath", "FGNoiseSensingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_heardSoundPosition_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "FGNoiseSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_heardSoundPosition = { "heardSoundPosition", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGNoiseSensingComponent, heardSoundPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_heardSoundPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_heardSoundPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_heardSoundObject_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "FGNoiseSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_heardSoundObject = { "heardSoundObject", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGNoiseSensingComponent, heardSoundObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_heardSoundObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_heardSoundObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_heardSomething_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "FGNoiseSensingComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_heardSomething_SetBit(void* Obj)
	{
		((UFGNoiseSensingComponent*)Obj)->heardSomething = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_heardSomething = { "heardSomething", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGNoiseSensingComponent), &Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_heardSomething_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_heardSomething_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_heardSomething_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGNoiseSensingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_heardSoundPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_heardSoundObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGNoiseSensingComponent_Statics::NewProp_heardSomething,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGNoiseSensingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGNoiseSensingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGNoiseSensingComponent_Statics::ClassParams = {
		&UFGNoiseSensingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGNoiseSensingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFGNoiseSensingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGNoiseSensingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFGNoiseSensingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGNoiseSensingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGNoiseSensingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGNoiseSensingComponent, 2377139417);
	template<> FGAI_API UClass* StaticClass<UFGNoiseSensingComponent>()
	{
		return UFGNoiseSensingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGNoiseSensingComponent(Z_Construct_UClass_UFGNoiseSensingComponent, &UFGNoiseSensingComponent::StaticClass, TEXT("/Script/FGAI"), TEXT("UFGNoiseSensingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGNoiseSensingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
