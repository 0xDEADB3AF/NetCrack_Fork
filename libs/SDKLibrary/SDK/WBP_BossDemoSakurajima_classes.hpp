#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BossDemoSakurajima

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_BossDemoBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BossDemoSakurajima.WBP_BossDemoSakurajima_C
// 0x0030 (0x0438 - 0x0408)
class UWBP_BossDemoSakurajima_C final : public UWBP_BossDemoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Flash;                                             // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_81;                                          // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BossBattle_BossCut05_C*            WBP_BossBattle_BossCut05;                          // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BossBattle_BossCutBase05_C*        WBP_BossBattle_BossCutBase05;                      // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void AnmEvent_Open();
	void ExecuteUbergraph_WBP_BossDemoSakurajima(int32 EntryPoint);
	void Finished_9D45F97F4E8B37970CC27D80C19FF88A();
	void OnStartEvent();
	void SetupText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BossDemoSakurajima_C">();
	}
	static class UWBP_BossDemoSakurajima_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BossDemoSakurajima_C>();
	}
};
static_assert(alignof(UWBP_BossDemoSakurajima_C) == 0x000008, "Wrong alignment on UWBP_BossDemoSakurajima_C");
static_assert(sizeof(UWBP_BossDemoSakurajima_C) == 0x000438, "Wrong size on UWBP_BossDemoSakurajima_C");
static_assert(offsetof(UWBP_BossDemoSakurajima_C, UberGraphFrame) == 0x000408, "Member 'UWBP_BossDemoSakurajima_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_BossDemoSakurajima_C, Anm_Open) == 0x000410, "Member 'UWBP_BossDemoSakurajima_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_BossDemoSakurajima_C, Flash) == 0x000418, "Member 'UWBP_BossDemoSakurajima_C::Flash' has a wrong offset!");
static_assert(offsetof(UWBP_BossDemoSakurajima_C, Image_81) == 0x000420, "Member 'UWBP_BossDemoSakurajima_C::Image_81' has a wrong offset!");
static_assert(offsetof(UWBP_BossDemoSakurajima_C, WBP_BossBattle_BossCut05) == 0x000428, "Member 'UWBP_BossDemoSakurajima_C::WBP_BossBattle_BossCut05' has a wrong offset!");
static_assert(offsetof(UWBP_BossDemoSakurajima_C, WBP_BossBattle_BossCutBase05) == 0x000430, "Member 'UWBP_BossDemoSakurajima_C::WBP_BossBattle_BossCutBase05' has a wrong offset!");

}

