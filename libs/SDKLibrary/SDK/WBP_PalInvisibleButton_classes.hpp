#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalInvisibleButton

#include "Basic.hpp"

#include "WBP_PalCommonButtonBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalInvisibleButton.WBP_PalInvisibleButton_C
// 0x0000 (0x1520 - 0x1520)
class UWBP_PalInvisibleButton_C final : public UWBP_PalCommonButtonBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalInvisibleButton_C">();
	}
	static class UWBP_PalInvisibleButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalInvisibleButton_C>();
	}
};
static_assert(alignof(UWBP_PalInvisibleButton_C) == 0x000010, "Wrong alignment on UWBP_PalInvisibleButton_C");
static_assert(sizeof(UWBP_PalInvisibleButton_C) == 0x001520, "Wrong size on UWBP_PalInvisibleButton_C");

}

