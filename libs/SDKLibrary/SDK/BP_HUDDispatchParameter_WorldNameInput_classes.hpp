#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HUDDispatchParameter_WorldNameInput

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HUDDispatchParameter_WorldNameInput.BP_HUDDispatchParameter_WorldNameInput_C
// 0x0020 (0x0058 - 0x0038)
class UBP_HUDDispatchParameter_WorldNameInput_C final : public UPalHUDDispatchParameterBase
{
public:
	class FString                                 DefaultInputName;                                  // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 OutString;                                         // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HUDDispatchParameter_WorldNameInput_C">();
	}
	static class UBP_HUDDispatchParameter_WorldNameInput_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_HUDDispatchParameter_WorldNameInput_C>();
	}
};
static_assert(alignof(UBP_HUDDispatchParameter_WorldNameInput_C) == 0x000008, "Wrong alignment on UBP_HUDDispatchParameter_WorldNameInput_C");
static_assert(sizeof(UBP_HUDDispatchParameter_WorldNameInput_C) == 0x000058, "Wrong size on UBP_HUDDispatchParameter_WorldNameInput_C");
static_assert(offsetof(UBP_HUDDispatchParameter_WorldNameInput_C, DefaultInputName) == 0x000038, "Member 'UBP_HUDDispatchParameter_WorldNameInput_C::DefaultInputName' has a wrong offset!");
static_assert(offsetof(UBP_HUDDispatchParameter_WorldNameInput_C, OutString) == 0x000048, "Member 'UBP_HUDDispatchParameter_WorldNameInput_C::OutString' has a wrong offset!");

}

