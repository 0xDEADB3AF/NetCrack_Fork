#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_RarePal

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Status_RarePal.BP_Status_RarePal_C
// 0x0008 (0x0050 - 0x0048)
class UBP_Status_RarePal_C final : public UPalStatusBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0048(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Status_RarePal(int32 EntryPoint);
	void OnBeginStatus();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Status_RarePal_C">();
	}
	static class UBP_Status_RarePal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Status_RarePal_C>();
	}
};
static_assert(alignof(UBP_Status_RarePal_C) == 0x000008, "Wrong alignment on UBP_Status_RarePal_C");
static_assert(sizeof(UBP_Status_RarePal_C) == 0x000050, "Wrong size on UBP_Status_RarePal_C");
static_assert(offsetof(UBP_Status_RarePal_C, UberGraphFrame) == 0x000048, "Member 'UBP_Status_RarePal_C::UberGraphFrame' has a wrong offset!");

}
