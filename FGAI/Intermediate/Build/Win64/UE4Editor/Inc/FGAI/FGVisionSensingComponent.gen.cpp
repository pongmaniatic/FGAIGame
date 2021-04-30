// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI/AI/Sensing/FGVisionSensingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGVisionSensingComponent() {}
// Cross Module References
	FGAI_API UFunction* Z_Construct_UDelegateFunction_FGAI_FGVisionSensingDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FGAI();
	FGAI_API UScriptStruct* Z_Construct_UScriptStruct_FFGVisionSensingResults();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGVisionSensingComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGVisionSensingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	FGAI_API UClass* Z_Construct_UClass_UFGVisionSensingTargetComponent_NoRegister();
	FGAI_API UClass* Z_Construct_UClass_UFGVisionSensingSettings_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FGAI_FGVisionSensingDelegate__DelegateSignature_Statics
	{
		struct _Script_FGAI_eventFGVisionSensingDelegate_Parms
		{
			FFGVisionSensingResults Results;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Results;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FGAI_FGVisionSensingDelegate__DelegateSignature_Statics::NewProp_Results_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FGAI_FGVisionSensingDelegate__DelegateSignature_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FGAI_eventFGVisionSensingDelegate_Parms, Results), Z_Construct_UScriptStruct_FFGVisionSensingResults, METADATA_PARAMS(Z_Construct_UDelegateFunction_FGAI_FGVisionSensingDelegate__DelegateSignature_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FGAI_FGVisionSensingDelegate__DelegateSignature_Statics::NewProp_Results_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FGAI_FGVisionSensingDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FGAI_FGVisionSensingDelegate__DelegateSignature_Statics::NewProp_Results,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FGAI_FGVisionSensingDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/Sensing/FGVisionSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FGAI_FGVisionSensingDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FGAI, nullptr, "FGVisionSensingDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_FGAI_eventFGVisionSensingDelegate_Parms), Z_Construct_UDelegateFunction_FGAI_FGVisionSensingDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FGAI_FGVisionSensingDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FGAI_FGVisionSensingDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FGAI_FGVisionSensingDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FGAI_FGVisionSensingDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FGAI_FGVisionSensingDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FFGVisionSensingResults::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FGAI_API uint32 Get_Z_Construct_UScriptStruct_FFGVisionSensingResults_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFGVisionSensingResults, Z_Construct_UPackage__Script_FGAI(), TEXT("FGVisionSensingResults"), sizeof(FFGVisionSensingResults), Get_Z_Construct_UScriptStruct_FFGVisionSensingResults_Hash());
	}
	return Singleton;
}
template<> FGAI_API UScriptStruct* StaticStruct<FFGVisionSensingResults>()
{
	return FFGVisionSensingResults::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFGVisionSensingResults(FFGVisionSensingResults::StaticStruct, TEXT("/Script/FGAI"), TEXT("FGVisionSensingResults"), false, nullptr, nullptr);
static struct FScriptStruct_FGAI_StaticRegisterNativesFFGVisionSensingResults
{
	FScriptStruct_FGAI_StaticRegisterNativesFFGVisionSensingResults()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FGVisionSensingResults")),new UScriptStruct::TCppStructOps<FFGVisionSensingResults>);
	}
} ScriptStruct_FGAI_StaticRegisterNativesFFGVisionSensingResults;
	struct Z_Construct_UScriptStruct_FFGVisionSensingResults_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SensedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGVisionSensingResults_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AI/Sensing/FGVisionSensingComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFGVisionSensingResults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFGVisionSensingResults>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGVisionSensingResults_Statics::NewProp_SensedActor_MetaData[] = {
		{ "Category", "FGVisionSensingResults" },
		{ "ModuleRelativePath", "AI/Sensing/FGVisionSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFGVisionSensingResults_Statics::NewProp_SensedActor = { "SensedActor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGVisionSensingResults, SensedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGVisionSensingResults_Statics::NewProp_SensedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGVisionSensingResults_Statics::NewProp_SensedActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFGVisionSensingResults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGVisionSensingResults_Statics::NewProp_SensedActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFGVisionSensingResults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
		nullptr,
		&NewStructOps,
		"FGVisionSensingResults",
		sizeof(FFGVisionSensingResults),
		alignof(FFGVisionSensingResults),
		Z_Construct_UScriptStruct_FFGVisionSensingResults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGVisionSensingResults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFGVisionSensingResults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGVisionSensingResults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFGVisionSensingResults()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFGVisionSensingResults_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FGAI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FGVisionSensingResults"), sizeof(FFGVisionSensingResults), Get_Z_Construct_UScriptStruct_FFGVisionSensingResults_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFGVisionSensingResults_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFGVisionSensingResults_Hash() { return 387940326U; }
	void UFGVisionSensingComponent::StaticRegisterNativesUFGVisionSensingComponent()
	{
	}
	UClass* Z_Construct_UClass_UFGVisionSensingComponent_NoRegister()
	{
		return UFGVisionSensingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGVisionSensingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SensedTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensedTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SensedTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTargetSensed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetSensed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTargetLost_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetLost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensingSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SensingSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawVision_MetaData[];
#endif
		static void NewProp_bDebugDrawVision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawVision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGVisionSensingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVisionSensingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "AI/Sensing/FGVisionSensingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AI/Sensing/FGVisionSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_SensedTargets_Inner = { "SensedTargets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGVisionSensingTargetComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_SensedTargets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/Sensing/FGVisionSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_SensedTargets = { "SensedTargets", nullptr, (EPropertyFlags)0x0010008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGVisionSensingComponent, SensedTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_SensedTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_SensedTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_OnTargetSensed_MetaData[] = {
		{ "ModuleRelativePath", "AI/Sensing/FGVisionSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_OnTargetSensed = { "OnTargetSensed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGVisionSensingComponent, OnTargetSensed), Z_Construct_UDelegateFunction_FGAI_FGVisionSensingDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_OnTargetSensed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_OnTargetSensed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_OnTargetLost_MetaData[] = {
		{ "ModuleRelativePath", "AI/Sensing/FGVisionSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_OnTargetLost = { "OnTargetLost", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGVisionSensingComponent, OnTargetLost), Z_Construct_UDelegateFunction_FGAI_FGVisionSensingDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_OnTargetLost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_OnTargetLost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_SensingSettings_MetaData[] = {
		{ "Category", "Sensing" },
		{ "ModuleRelativePath", "AI/Sensing/FGVisionSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_SensingSettings = { "SensingSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGVisionSensingComponent, SensingSettings), Z_Construct_UClass_UFGVisionSensingSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_SensingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_SensingSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_bDebugDrawVision_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "AI/Sensing/FGVisionSensingComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_bDebugDrawVision_SetBit(void* Obj)
	{
		((UFGVisionSensingComponent*)Obj)->bDebugDrawVision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_bDebugDrawVision = { "bDebugDrawVision", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGVisionSensingComponent), &Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_bDebugDrawVision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_bDebugDrawVision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_bDebugDrawVision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGVisionSensingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_SensedTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_SensedTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_OnTargetSensed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_OnTargetLost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_SensingSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGVisionSensingComponent_Statics::NewProp_bDebugDrawVision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGVisionSensingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGVisionSensingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGVisionSensingComponent_Statics::ClassParams = {
		&UFGVisionSensingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFGVisionSensingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFGVisionSensingComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGVisionSensingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFGVisionSensingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGVisionSensingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGVisionSensingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGVisionSensingComponent, 1486215761);
	template<> FGAI_API UClass* StaticClass<UFGVisionSensingComponent>()
	{
		return UFGVisionSensingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGVisionSensingComponent(Z_Construct_UClass_UFGVisionSensingComponent, &UFGVisionSensingComponent::StaticClass, TEXT("/Script/FGAI"), TEXT("UFGVisionSensingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGVisionSensingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
