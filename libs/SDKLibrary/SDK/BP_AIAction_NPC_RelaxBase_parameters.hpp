#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_NPC_RelaxBase

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionAbort
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPC_RelaxBase_C_ActionAbort final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_RelaxBase_C_ActionAbort) == 0x000008, "Wrong alignment on BP_AIAction_NPC_RelaxBase_C_ActionAbort");
static_assert(sizeof(BP_AIAction_NPC_RelaxBase_C_ActionAbort) == 0x000008, "Wrong size on BP_AIAction_NPC_RelaxBase_C_ActionAbort");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ActionAbort, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_RelaxBase_C_ActionAbort::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPC_RelaxBase_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_RelaxBase_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_NPC_RelaxBase_C_ActionFinished");
static_assert(sizeof(BP_AIAction_NPC_RelaxBase_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_NPC_RelaxBase_C_ActionFinished");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_RelaxBase_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_NPC_RelaxBase_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionPause
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPC_RelaxBase_C_ActionPause final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_RelaxBase_C_ActionPause) == 0x000008, "Wrong alignment on BP_AIAction_NPC_RelaxBase_C_ActionPause");
static_assert(sizeof(BP_AIAction_NPC_RelaxBase_C_ActionPause) == 0x000008, "Wrong size on BP_AIAction_NPC_RelaxBase_C_ActionPause");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ActionPause, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_RelaxBase_C_ActionPause::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionPostTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPC_RelaxBase_C_ActionPostTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_RelaxBase_C_ActionPostTick) == 0x000008, "Wrong alignment on BP_AIAction_NPC_RelaxBase_C_ActionPostTick");
static_assert(sizeof(BP_AIAction_NPC_RelaxBase_C_ActionPostTick) == 0x000010, "Wrong size on BP_AIAction_NPC_RelaxBase_C_ActionPostTick");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ActionPostTick, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_RelaxBase_C_ActionPostTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ActionPostTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_NPC_RelaxBase_C_ActionPostTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionResume
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPC_RelaxBase_C_ActionResume final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_RelaxBase_C_ActionResume) == 0x000008, "Wrong alignment on BP_AIAction_NPC_RelaxBase_C_ActionResume");
static_assert(sizeof(BP_AIAction_NPC_RelaxBase_C_ActionResume) == 0x000008, "Wrong size on BP_AIAction_NPC_RelaxBase_C_ActionResume");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ActionResume, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_RelaxBase_C_ActionResume::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPC_RelaxBase_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_RelaxBase_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_NPC_RelaxBase_C_ActionStart");
static_assert(sizeof(BP_AIAction_NPC_RelaxBase_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_NPC_RelaxBase_C_ActionStart");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_RelaxBase_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionTickAnyThread
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPC_RelaxBase_C_ActionTickAnyThread final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_RelaxBase_C_ActionTickAnyThread) == 0x000008, "Wrong alignment on BP_AIAction_NPC_RelaxBase_C_ActionTickAnyThread");
static_assert(sizeof(BP_AIAction_NPC_RelaxBase_C_ActionTickAnyThread) == 0x000010, "Wrong size on BP_AIAction_NPC_RelaxBase_C_ActionTickAnyThread");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ActionTickAnyThread, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_RelaxBase_C_ActionTickAnyThread::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ActionTickAnyThread, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_NPC_RelaxBase_C_ActionTickAnyThread::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.CancelDefaultAction
// 0x0020 (0x0020 - 0x0000)
struct BP_AIAction_NPC_RelaxBase_C_CancelDefaultAction final
{
public:
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue_1;         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_RelaxBase_C_CancelDefaultAction) == 0x000008, "Wrong alignment on BP_AIAction_NPC_RelaxBase_C_CancelDefaultAction");
static_assert(sizeof(BP_AIAction_NPC_RelaxBase_C_CancelDefaultAction) == 0x000020, "Wrong size on BP_AIAction_NPC_RelaxBase_C_CancelDefaultAction");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_CancelDefaultAction, CallFunc_GetActionComponent_ReturnValue) == 0x000000, "Member 'BP_AIAction_NPC_RelaxBase_C_CancelDefaultAction::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_CancelDefaultAction, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_AIAction_NPC_RelaxBase_C_CancelDefaultAction::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_CancelDefaultAction, CallFunc_GetActionComponent_ReturnValue_1) == 0x000010, "Member 'BP_AIAction_NPC_RelaxBase_C_CancelDefaultAction::CallFunc_GetActionComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_CancelDefaultAction, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'BP_AIAction_NPC_RelaxBase_C_CancelDefaultAction::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ExecuteUbergraph_BP_AIAction_NPC_RelaxBase
// 0x01B0 (0x01B0 - 0x0000)
struct BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_6;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_5;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_4;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAISensorComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCAIController_C*                  K2Node_DynamicCast_AsBP_NPCAIController;           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalNPCAIWeaponHandle*                  CallFunc_GetWeaponHandle_WeaponHandle;             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_3;                     // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoPoint_ReturnValue;               // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AA[0x6];                                       // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00E0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_AngleBetweenVector_ReturnValue;           // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00F8(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_2;              // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue_1;        // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_RandomFloat_ReturnValue;                  // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds_1;                       // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14C[0x4];                                      // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0150(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_SightCheck_Target;                        // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalAIResponseType                            CallFunc_SightCheck_ResponseType;                  // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SightResponse_ChangeNextAction;           // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18D[0x3];                                      // 0x018D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GeneralTurn_DeltaTime_ImplicitCast;       // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast; // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A4[0x4];                                      // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_tempDeltaTime_ImplicitCast;     // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase) == 0x000008, "Wrong alignment on BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase");
static_assert(sizeof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase) == 0x0001B0, "Wrong size on BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, EntryPoint) == 0x000000, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, K2Node_Event_ControlledPawn_6) == 0x000008, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::K2Node_Event_ControlledPawn_6' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, K2Node_Event_ControlledPawn_5) == 0x000020, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::K2Node_Event_ControlledPawn_5' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, K2Node_Event_WithResult) == 0x000028, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, K2Node_Event_ControlledPawn_4) == 0x000030, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::K2Node_Event_ControlledPawn_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_GetController_ReturnValue) == 0x000038, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_GetComponentByClass_ReturnValue) == 0x000040, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_GetController_ReturnValue_1) == 0x000048, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, K2Node_DynamicCast_AsBP_NPCAIController) == 0x000050, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::K2Node_DynamicCast_AsBP_NPCAIController' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_GetWeaponHandle_WeaponHandle) == 0x000060, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_GetWeaponHandle_WeaponHandle' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_GetActorForwardVector_ReturnValue) == 0x000068, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, K2Node_Event_ControlledPawn_3) == 0x000080, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::K2Node_Event_ControlledPawn_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000088, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, K2Node_DynamicCast_AsPal_Character) == 0x0000A0, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, K2Node_DynamicCast_bSuccess_1) == 0x0000A8, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_IsNearTwoPoint_ReturnValue) == 0x0000A9, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_IsNearTwoPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0000B0, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x0000C8, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000E0, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_AngleBetweenVector_ReturnValue) == 0x0000F0, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_AngleBetweenVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000F8, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000100, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_GetController_ReturnValue_2) == 0x000108, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_GetController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_RandomFloatInRange_ReturnValue) == 0x000110, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, K2Node_Event_ControlledPawn_2) == 0x000118, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_K2_GetActorRotation_ReturnValue_1) == 0x000120, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_K2_GetActorRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_RandomFloat_ReturnValue) == 0x000138, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, K2Node_Event_ControlledPawn_1) == 0x000140, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, K2Node_Event_DeltaSeconds_1) == 0x000148, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::K2Node_Event_DeltaSeconds_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000150, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_SightCheck_Target) == 0x000158, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_SightCheck_Target' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_SightCheck_ResponseType) == 0x000160, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_SightCheck_ResponseType' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000168, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, K2Node_Event_ControlledPawn) == 0x000180, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, K2Node_Event_DeltaSeconds) == 0x000188, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_SightResponse_ChangeNextAction) == 0x00018C, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_SightResponse_ChangeNextAction' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000190, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_GeneralTurn_DeltaTime_ImplicitCast) == 0x000198, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_GeneralTurn_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_Delay_Duration_ImplicitCast) == 0x00019C, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast) == 0x0001A0, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase, K2Node_VariableSet_tempDeltaTime_ImplicitCast) == 0x0001A8, "Member 'BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase::K2Node_VariableSet_tempDeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.PlayDefaultAction
// 0x0100 (0x0100 - 0x0000)
struct BP_AIAction_NPC_RelaxBase_C_PlayDefaultAction final
{
public:
	struct FHitResult                             CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x0000(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayActionByType_ReturnValue;             // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_RelaxBase_C_PlayDefaultAction) == 0x000008, "Wrong alignment on BP_AIAction_NPC_RelaxBase_C_PlayDefaultAction");
static_assert(sizeof(BP_AIAction_NPC_RelaxBase_C_PlayDefaultAction) == 0x000100, "Wrong size on BP_AIAction_NPC_RelaxBase_C_PlayDefaultAction");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_PlayDefaultAction, CallFunc_K2_SetActorLocationAndRotation_SweepHitResult) == 0x000000, "Member 'BP_AIAction_NPC_RelaxBase_C_PlayDefaultAction::CallFunc_K2_SetActorLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_PlayDefaultAction, CallFunc_K2_SetActorLocationAndRotation_ReturnValue) == 0x0000E8, "Member 'BP_AIAction_NPC_RelaxBase_C_PlayDefaultAction::CallFunc_K2_SetActorLocationAndRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_PlayDefaultAction, CallFunc_GetActionComponent_ReturnValue) == 0x0000F0, "Member 'BP_AIAction_NPC_RelaxBase_C_PlayDefaultAction::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_PlayDefaultAction, CallFunc_PlayActionByType_ReturnValue) == 0x0000F8, "Member 'BP_AIAction_NPC_RelaxBase_C_PlayDefaultAction::CallFunc_PlayActionByType_ReturnValue' has a wrong offset!");

// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.SelfIsLeader
// 0x0018 (0x0018 - 0x0000)
struct BP_AIAction_NPC_RelaxBase_C_SelfIsLeader final
{
public:
	bool                                          Param_IsLeader;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetLeader_Leader;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_RelaxBase_C_SelfIsLeader) == 0x000008, "Wrong alignment on BP_AIAction_NPC_RelaxBase_C_SelfIsLeader");
static_assert(sizeof(BP_AIAction_NPC_RelaxBase_C_SelfIsLeader) == 0x000018, "Wrong size on BP_AIAction_NPC_RelaxBase_C_SelfIsLeader");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_SelfIsLeader, Param_IsLeader) == 0x000000, "Member 'BP_AIAction_NPC_RelaxBase_C_SelfIsLeader::Param_IsLeader' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_SelfIsLeader, CallFunc_GetLeader_Leader) == 0x000008, "Member 'BP_AIAction_NPC_RelaxBase_C_SelfIsLeader::CallFunc_GetLeader_Leader' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_SelfIsLeader, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'BP_AIAction_NPC_RelaxBase_C_SelfIsLeader::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.SoundEvent
// 0x0018 (0x0018 - 0x0000)
struct BP_AIAction_NPC_RelaxBase_C_SoundEvent final
{
public:
	struct FVector                                EmitLocation;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_RelaxBase_C_SoundEvent) == 0x000008, "Wrong alignment on BP_AIAction_NPC_RelaxBase_C_SoundEvent");
static_assert(sizeof(BP_AIAction_NPC_RelaxBase_C_SoundEvent) == 0x000018, "Wrong size on BP_AIAction_NPC_RelaxBase_C_SoundEvent");
static_assert(offsetof(BP_AIAction_NPC_RelaxBase_C_SoundEvent, EmitLocation) == 0x000000, "Member 'BP_AIAction_NPC_RelaxBase_C_SoundEvent::EmitLocation' has a wrong offset!");

}
