#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CaptureWire

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CaptureWire.BP_CaptureWire_C
// 0x00A0 (0x0330 - 0x0290)
class ABP_CaptureWire_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh_Wire3;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh_Wire2;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh_Wire1;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh_Wire0;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          TargetMonster;                                     // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        MovableRange;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        AnchorGoalPoint;                                   // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<EObjectTypeQuery>                      LayHitObjectTypes;                                 // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>           WireMesh;                                          // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IsFixMode;                                         // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAnchorReach;                                     // 0x0301(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_302[0x6];                                      // 0x0302(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                AnchorCenterPos;                                   // 0x0308(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSpringable;                                      // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_321[0x7];                                      // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AIAction_SimpleLeave_C*             SimpleLeaveAIAction;                               // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void CaptureEffect(const struct FPalDeadInfo& DeadInfo);
	void ExecuteUbergraph_BP_CaptureWire(int32 EntryPoint);
	void FixMonsterInSphere();
	void RagDollStart();
	void ReceiveTick(float DeltaSeconds);
	void SetAnchorGoal();
	void Setup(class APalCharacter* TargetPal);
	void UpdateWireMesh();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CaptureWire_C">();
	}
	static class ABP_CaptureWire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CaptureWire_C>();
	}
};
static_assert(alignof(ABP_CaptureWire_C) == 0x000008, "Wrong alignment on ABP_CaptureWire_C");
static_assert(sizeof(ABP_CaptureWire_C) == 0x000330, "Wrong size on ABP_CaptureWire_C");
static_assert(offsetof(ABP_CaptureWire_C, UberGraphFrame) == 0x000290, "Member 'ABP_CaptureWire_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CaptureWire_C, StaticMesh_Wire3) == 0x000298, "Member 'ABP_CaptureWire_C::StaticMesh_Wire3' has a wrong offset!");
static_assert(offsetof(ABP_CaptureWire_C, StaticMesh_Wire2) == 0x0002A0, "Member 'ABP_CaptureWire_C::StaticMesh_Wire2' has a wrong offset!");
static_assert(offsetof(ABP_CaptureWire_C, StaticMesh_Wire1) == 0x0002A8, "Member 'ABP_CaptureWire_C::StaticMesh_Wire1' has a wrong offset!");
static_assert(offsetof(ABP_CaptureWire_C, StaticMesh_Wire0) == 0x0002B0, "Member 'ABP_CaptureWire_C::StaticMesh_Wire0' has a wrong offset!");
static_assert(offsetof(ABP_CaptureWire_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_CaptureWire_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CaptureWire_C, TargetMonster) == 0x0002C0, "Member 'ABP_CaptureWire_C::TargetMonster' has a wrong offset!");
static_assert(offsetof(ABP_CaptureWire_C, MovableRange) == 0x0002C8, "Member 'ABP_CaptureWire_C::MovableRange' has a wrong offset!");
static_assert(offsetof(ABP_CaptureWire_C, AnchorGoalPoint) == 0x0002D0, "Member 'ABP_CaptureWire_C::AnchorGoalPoint' has a wrong offset!");
static_assert(offsetof(ABP_CaptureWire_C, LayHitObjectTypes) == 0x0002E0, "Member 'ABP_CaptureWire_C::LayHitObjectTypes' has a wrong offset!");
static_assert(offsetof(ABP_CaptureWire_C, WireMesh) == 0x0002F0, "Member 'ABP_CaptureWire_C::WireMesh' has a wrong offset!");
static_assert(offsetof(ABP_CaptureWire_C, IsFixMode) == 0x000300, "Member 'ABP_CaptureWire_C::IsFixMode' has a wrong offset!");
static_assert(offsetof(ABP_CaptureWire_C, IsAnchorReach) == 0x000301, "Member 'ABP_CaptureWire_C::IsAnchorReach' has a wrong offset!");
static_assert(offsetof(ABP_CaptureWire_C, AnchorCenterPos) == 0x000308, "Member 'ABP_CaptureWire_C::AnchorCenterPos' has a wrong offset!");
static_assert(offsetof(ABP_CaptureWire_C, IsSpringable) == 0x000320, "Member 'ABP_CaptureWire_C::IsSpringable' has a wrong offset!");
static_assert(offsetof(ABP_CaptureWire_C, SimpleLeaveAIAction) == 0x000328, "Member 'ABP_CaptureWire_C::SimpleLeaveAIAction' has a wrong offset!");

}
