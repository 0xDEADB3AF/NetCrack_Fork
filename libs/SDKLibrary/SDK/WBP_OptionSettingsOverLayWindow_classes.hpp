#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionSettingsOverLayWindow

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C
// 0x00C8 (0x04F8 - 0x0430)
class UWBP_OptionSettingsOverLayWindow_C final : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x0438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_Command;                           // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_Title;                             // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    TitleMsgID;                                        // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    CommandMsgId;                                      // 0x0460(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ErrorMsgId;                                        // 0x0470(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                           ResetTextTimer;                                    // 0x0480(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_HUDDispatchParameter_KeyConfig_C*   KeyConfigParam;                                    // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           FilterActionKeys;                                  // 0x0490(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FPalKeyAction, class FName>       ReverseAxisMap;                                    // 0x04A0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   BackActionName;                                    // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetPadKeyA();
	void ResetCommandText();
	void OnSetup();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnKeySetting(const struct FKey& NewKey);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void ExecuteUbergraph_WBP_OptionSettingsOverLayWindow(int32 EntryPoint);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_OptionSettingsOverLayWindow_C">();
	}
	static class UWBP_OptionSettingsOverLayWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OptionSettingsOverLayWindow_C>();
	}
};
static_assert(alignof(UWBP_OptionSettingsOverLayWindow_C) == 0x000008, "Wrong alignment on UWBP_OptionSettingsOverLayWindow_C");
static_assert(sizeof(UWBP_OptionSettingsOverLayWindow_C) == 0x0004F8, "Wrong size on UWBP_OptionSettingsOverLayWindow_C");
static_assert(offsetof(UWBP_OptionSettingsOverLayWindow_C, UberGraphFrame) == 0x000430, "Member 'UWBP_OptionSettingsOverLayWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettingsOverLayWindow_C, Anm_Open) == 0x000438, "Member 'UWBP_OptionSettingsOverLayWindow_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettingsOverLayWindow_C, BP_PalTextBlock_Command) == 0x000440, "Member 'UWBP_OptionSettingsOverLayWindow_C::BP_PalTextBlock_Command' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettingsOverLayWindow_C, BP_PalTextBlock_Title) == 0x000448, "Member 'UWBP_OptionSettingsOverLayWindow_C::BP_PalTextBlock_Title' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettingsOverLayWindow_C, TitleMsgID) == 0x000450, "Member 'UWBP_OptionSettingsOverLayWindow_C::TitleMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettingsOverLayWindow_C, CommandMsgId) == 0x000460, "Member 'UWBP_OptionSettingsOverLayWindow_C::CommandMsgId' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettingsOverLayWindow_C, ErrorMsgId) == 0x000470, "Member 'UWBP_OptionSettingsOverLayWindow_C::ErrorMsgId' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettingsOverLayWindow_C, ResetTextTimer) == 0x000480, "Member 'UWBP_OptionSettingsOverLayWindow_C::ResetTextTimer' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettingsOverLayWindow_C, KeyConfigParam) == 0x000488, "Member 'UWBP_OptionSettingsOverLayWindow_C::KeyConfigParam' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettingsOverLayWindow_C, FilterActionKeys) == 0x000490, "Member 'UWBP_OptionSettingsOverLayWindow_C::FilterActionKeys' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettingsOverLayWindow_C, ReverseAxisMap) == 0x0004A0, "Member 'UWBP_OptionSettingsOverLayWindow_C::ReverseAxisMap' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettingsOverLayWindow_C, BackActionName) == 0x0004F0, "Member 'UWBP_OptionSettingsOverLayWindow_C::BackActionName' has a wrong offset!");

}
