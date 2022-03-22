#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_tF42287527472FA89789873F068A87C60A00EC7D3;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>
struct Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088;
// System.Func`2<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild,Microsoft.Toolkit.Uwp.Notifications.AdaptiveText>
struct Func_2_tDFE6EBCC622468031CFDD02E086C9810BC85D878;
// System.Func`2<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild,System.Boolean>
struct Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B;
// System.Collections.Generic.IEnumerable`1<Microsoft.Toolkit.Uwp.Notifications.AdaptiveText>
struct IEnumerable_1_tA362E46A98A1E911D09942CBEF8E87208F3B792A;
// System.Collections.Generic.IEnumerable`1<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild>
struct IEnumerable_1_t08FE2DC2837C973959EA85976B8FF7F2E50C2DB0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild>
struct IList_1_t2AAFC2527F8C885AAC5AC2225EDF80510CBEBF97;
// System.Collections.Generic.IList`1<Microsoft.Toolkit.Uwp.Notifications.IToastButton>
struct IList_1_tCDBD35EB4E72AEDD6B45B69320DA239D1915EE86;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<Microsoft.Toolkit.Uwp.Notifications.AdaptiveText>
struct List_1_tB1F7E5AB6F1098372EB386D2260DE883A90DB2C8;
// System.Collections.Generic.List`1<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild>
struct List_1_t0033D22AB8FF55085C964A6C3CAEA63C3B8D6F9B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// Microsoft.Toolkit.Uwp.Notifications.AdaptiveText[]
struct AdaptiveTextU5BU5D_tCE5DAC8329D78B27EDE14BECF019FEC9119B9F32;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild[]
struct IToastBindingGenericChildU5BU5D_tADFE869997E7D978F1D871AABAFC32E3C6C1DCEB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// Microsoft.Toolkit.Uwp.Notifications.AdaptiveText
struct AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// Microsoft.Toolkit.Uwp.Notifications.BindableString
struct BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.Toolkit.Uwp.Notifications.EnumStringAttribute
struct EnumStringAttribute_t62BF1AE7DE778E40A0204599F7F1DFD0C213F47A;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Microsoft.Toolkit.Uwp.Notifications.IToastActions
struct IToastActions_t3F4FAC0C4546ABF1E0CD02B1CACB6BEDBED54BE4;
// Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild
struct IToastBindingGenericChild_t62B142C61D032F12316ED93421AC3551B04C8594;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.Toolkit.Uwp.Notifications.NotificationXmlElementAttribute
struct NotificationXmlElementAttribute_tC96C539D61DFD204B2355378EB170956DE4AA17E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// Microsoft.Toolkit.Uwp.Notifications.ToastActionsCustom
struct ToastActionsCustom_t26A903FAB8D31CD75527932E638EE18D9259F356;
// Microsoft.Toolkit.Uwp.Notifications.ToastArguments
struct ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55;
// Microsoft.Toolkit.Uwp.Notifications.ToastBindingGeneric
struct ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7;
// Microsoft.Toolkit.Uwp.Notifications.ToastButton
struct ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF;
// Microsoft.Toolkit.Uwp.Notifications.ToastContent
struct ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5;
// Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder
struct ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773;
// Microsoft.Toolkit.Uwp.Notifications.ToastVisual
struct ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Microsoft.Toolkit.Uwp.Notifications.ToastArguments/<>c
struct U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185;
// Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder/<>c
struct U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7;

IL2CPP_EXTERN_C RuntimeClass* AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDFE6EBCC622468031CFDD02E086C9810BC85D878_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tB917FDAB5C0640685B75339A323CB206B9FF19E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t6FE1EE7E17C9AD997C277BD32B9C609FD277AE99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tC3CF9344978D93F06245E044340481581F98AF46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0033D22AB8FF55085C964A6C3CAEA63C3B8D6F9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToastActionsCustom_t26A903FAB8D31CD75527932E638EE18D9259F356_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral175BBF196C26BBFF494DD3E21D1E59E776730FDA;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
IL2CPP_EXTERN_C String_t* _stringLiteral29A52ED044D9801A4C9A0A3E20E79E2DB8B3F355;
IL2CPP_EXTERN_C String_t* _stringLiteral2E8F42FF17E1117CD87D1C2EE403639D6381FC8C;
IL2CPP_EXTERN_C String_t* _stringLiteral35FECFFF9CC241A89AB13A0D45EBC175B703DFE1;
IL2CPP_EXTERN_C String_t* _stringLiteral403DFD38F660ED0992488A2262C792CE8C795FE0;
IL2CPP_EXTERN_C String_t* _stringLiteral5E1A0CB5F417BE886D64525C8D3A6FDB7B353396;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral81AE05A653023836EC528F79BD6F4DB8A7EDB144;
IL2CPP_EXTERN_C String_t* _stringLiteral8307D66695919BB989CD91BE8CCE46CF46D37480;
IL2CPP_EXTERN_C String_t* _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral9CEB5F2D9A17003A7DFEAF08F7E66A2F9D525BC8;
IL2CPP_EXTERN_C String_t* _stringLiteralB88DBFF5E0EEAF2081A20EE167D8D063252978A9;
IL2CPP_EXTERN_C String_t* _stringLiteralCB76C8231C7AF42AAD9F3EF0729FE76AFD02E93A;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralFDC79D04FD56AB43DDE179A0F468A96BAF7E44CF;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Element_AdaptiveText_CheckMaxLinesValue_mC1CB9158D184FA785A59C9326A8C5BCB3432E6AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumStringAttribute__ctor_m2E0894FD7D3DF56F6BD1B488A6EF8201DDB3EA24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisIToastBindingGenericChild_t62B142C61D032F12316ED93421AC3551B04C8594_m34CF0C4D451A7FD8F57AD012BA6A932373078A31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisAdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_mED546FEC3A799AE05D036C93D47099790BFB426E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisIToastBindingGenericChild_t62B142C61D032F12316ED93421AC3551B04C8594_TisAdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_mF38CDDF389577C82716DABBEC40200579656E891_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_m92EFE2CC5B9152F9754C353D72BAF71C5372B420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisAdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_m21E2D9043C55C27DF4902F8E987E98DE56A3A2B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisIToastBindingGenericChild_t62B142C61D032F12316ED93421AC3551B04C8594_m70C2735BDA4025EE1DC4BC1DE274DC5B0FE4B363_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2F2C3BB3AB30788919F5405C6FD55E9FD1B6FA29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2DBFBBC136F2641A7772876D924D9DECCD16C2DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m90087D4E5A3F50EFB3BB0DD0CAD225561FF92A76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NotificationXmlElementAttribute__ctor_m9DF8745B9CDBFF2CFF79A47B930E4D7AF037B7BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ToastArguments_Add_m0A1494347E979BDBC9AF56903EF893748914D9F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ToastButton_AddArgumentHelper_mB7D0F8056E86B62ECB537E0D311F9C3B90F7E303_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ToastContentBuilder_AddArgumentHelper_m79B333240C52113B79CFEC47C6CBD742A549FB07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ToastContentBuilder_AddText_m419ADE9E4AC2C4886B69248E17AEB076A076E79A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetCurrentTextLineCountU3Eb__68_0_m0CD4E304C62ED1079492B14FBC508CB0E06A0514_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetCurrentTextLineCountU3Eb__68_1_m2E4A6BC71E408B38B4A3FD325EDA9ABD0166E0C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetCurrentTextLineCountU3Eb__68_2_m5D423AE4EB5CA3B85D302AEC2F0151058486CF3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToStringU3Eb__30_0_mBB5716C54EF72C13D4E0E5DE8130F14FC80E640F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF1BA3D90C0B88FFE4978DBAD25963B87BA676C01 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Microsoft.Toolkit.Uwp.Notifications.AdaptiveText>
struct List_1_tB1F7E5AB6F1098372EB386D2260DE883A90DB2C8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AdaptiveTextU5BU5D_tCE5DAC8329D78B27EDE14BECF019FEC9119B9F32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB1F7E5AB6F1098372EB386D2260DE883A90DB2C8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AdaptiveTextU5BU5D_tCE5DAC8329D78B27EDE14BECF019FEC9119B9F32* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild>
struct List_1_t0033D22AB8FF55085C964A6C3CAEA63C3B8D6F9B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IToastBindingGenericChildU5BU5D_tADFE869997E7D978F1D871AABAFC32E3C6C1DCEB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0033D22AB8FF55085C964A6C3CAEA63C3B8D6F9B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IToastBindingGenericChildU5BU5D_tADFE869997E7D978F1D871AABAFC32E3C6C1DCEB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Microsoft.Toolkit.Uwp.Notifications.BindableString
struct BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0  : public RuntimeObject
{
	// System.String Microsoft.Toolkit.Uwp.Notifications.BindableString::<RawValue>k__BackingField
	String_t* ___U3CRawValueU3Ek__BackingField_0;
};

// Microsoft.Toolkit.Uwp.Notifications.Adaptive.Elements.Element_AdaptiveText
struct Element_AdaptiveText_tAEE352C203BB649F7F91B0FDAAD5CABF5990B9EF  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Microsoft.Toolkit.Uwp.Notifications.ToastActionsCustom
struct ToastActionsCustom_t26A903FAB8D31CD75527932E638EE18D9259F356  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<Microsoft.Toolkit.Uwp.Notifications.IToastButton> Microsoft.Toolkit.Uwp.Notifications.ToastActionsCustom::<Buttons>k__BackingField
	RuntimeObject* ___U3CButtonsU3Ek__BackingField_0;
};

// Microsoft.Toolkit.Uwp.Notifications.ToastArguments
struct ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.Toolkit.Uwp.Notifications.ToastArguments::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
};

// Microsoft.Toolkit.Uwp.Notifications.ToastBindingGeneric
struct ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild> Microsoft.Toolkit.Uwp.Notifications.ToastBindingGeneric::<Children>k__BackingField
	RuntimeObject* ___U3CChildrenU3Ek__BackingField_0;
};

// Microsoft.Toolkit.Uwp.Notifications.ToastButton
struct ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.Toolkit.Uwp.Notifications.ToastButton::_arguments
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____arguments_0;
	// System.Boolean Microsoft.Toolkit.Uwp.Notifications.ToastButton::_usingCustomArguments
	bool ____usingCustomArguments_1;
	// System.Boolean Microsoft.Toolkit.Uwp.Notifications.ToastButton::_usingSnoozeActivation
	bool ____usingSnoozeActivation_2;
	// System.Boolean Microsoft.Toolkit.Uwp.Notifications.ToastButton::_usingDismissActivation
	bool ____usingDismissActivation_3;
	// System.String Microsoft.Toolkit.Uwp.Notifications.ToastButton::<Arguments>k__BackingField
	String_t* ___U3CArgumentsU3Ek__BackingField_4;
	// Microsoft.Toolkit.Uwp.Notifications.ToastActivationType Microsoft.Toolkit.Uwp.Notifications.ToastButton::<ActivationType>k__BackingField
	int32_t ___U3CActivationTypeU3Ek__BackingField_5;
};

// Microsoft.Toolkit.Uwp.Notifications.ToastContent
struct ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5  : public RuntimeObject
{
	// Microsoft.Toolkit.Uwp.Notifications.ToastVisual Microsoft.Toolkit.Uwp.Notifications.ToastContent::<Visual>k__BackingField
	ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* ___U3CVisualU3Ek__BackingField_0;
	// Microsoft.Toolkit.Uwp.Notifications.IToastActions Microsoft.Toolkit.Uwp.Notifications.ToastContent::<Actions>k__BackingField
	RuntimeObject* ___U3CActionsU3Ek__BackingField_1;
	// System.String Microsoft.Toolkit.Uwp.Notifications.ToastContent::<Launch>k__BackingField
	String_t* ___U3CLaunchU3Ek__BackingField_2;
	// Microsoft.Toolkit.Uwp.Notifications.ToastActivationType Microsoft.Toolkit.Uwp.Notifications.ToastContent::<ActivationType>k__BackingField
	int32_t ___U3CActivationTypeU3Ek__BackingField_3;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Microsoft.Toolkit.Uwp.Notifications.ToastContent::<AdditionalProperties>k__BackingField
	RuntimeObject* ___U3CAdditionalPropertiesU3Ek__BackingField_4;
};

// Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder
struct ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::_genericArguments
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____genericArguments_0;
	// System.Boolean Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::_customArgumentsUsedOnToastItself
	bool ____customArgumentsUsedOnToastItself_1;
	// Microsoft.Toolkit.Uwp.Notifications.ToastContent Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::<Content>k__BackingField
	ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* ___U3CContentU3Ek__BackingField_2;
};

// Microsoft.Toolkit.Uwp.Notifications.ToastVisual
struct ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F  : public RuntimeObject
{
	// Microsoft.Toolkit.Uwp.Notifications.ToastBindingGeneric Microsoft.Toolkit.Uwp.Notifications.ToastVisual::<BindingGeneric>k__BackingField
	ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7* ___U3CBindingGenericU3Ek__BackingField_0;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Microsoft.Toolkit.Uwp.Notifications.ToastArguments/<>c
struct U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185  : public RuntimeObject
{
};

struct U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185_StaticFields
{
	// Microsoft.Toolkit.Uwp.Notifications.ToastArguments/<>c Microsoft.Toolkit.Uwp.Notifications.ToastArguments/<>c::<>9
	U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185* ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String> Microsoft.Toolkit.Uwp.Notifications.ToastArguments/<>c::<>9__30_0
	Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* ___U3CU3E9__30_0_1;
};

// Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder/<>c
struct U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7  : public RuntimeObject
{
};

struct U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_StaticFields
{
	// Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder/<>c Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder/<>c::<>9
	U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7* ___U3CU3E9_0;
	// System.Func`2<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild,System.Boolean> Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder/<>c::<>9__68_0
	Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D* ___U3CU3E9__68_0_1;
	// System.Func`2<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild,System.Boolean> Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder/<>c::<>9__68_1
	Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D* ___U3CU3E9__68_1_2;
	// System.Func`2<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild,Microsoft.Toolkit.Uwp.Notifications.AdaptiveText> Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder/<>c::<>9__68_2
	Func_2_tDFE6EBCC622468031CFDD02E086C9810BC85D878* ___U3CU3E9__68_2_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Nullable`1<Microsoft.Toolkit.Uwp.Notifications.AdaptiveTextAlign>
struct Nullable_1_t17B6B18A2CBCE422EE6E95D36DDF5D3423525B69 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Microsoft.Toolkit.Uwp.Notifications.AdaptiveTextStyle>
struct Nullable_1_t5F2D4E9D7ABD81B1DA754569B619BF9A6CC32A1A 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// Microsoft.Toolkit.Uwp.Notifications.EnumStringAttribute
struct EnumStringAttribute_t62BF1AE7DE778E40A0204599F7F1DFD0C213F47A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Microsoft.Toolkit.Uwp.Notifications.EnumStringAttribute::<String>k__BackingField
	String_t* ___U3CStringU3Ek__BackingField_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Microsoft.Toolkit.Uwp.Notifications.NotificationXmlElementAttribute
struct NotificationXmlElementAttribute_tC96C539D61DFD204B2355378EB170956DE4AA17E  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Microsoft.Toolkit.Uwp.Notifications.NotificationXmlElementAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// Microsoft.Toolkit.Uwp.Notifications.AdaptiveText
struct AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59  : public RuntimeObject
{
	// Microsoft.Toolkit.Uwp.Notifications.BindableString Microsoft.Toolkit.Uwp.Notifications.AdaptiveText::<Text>k__BackingField
	BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* ___U3CTextU3Ek__BackingField_0;
	// System.String Microsoft.Toolkit.Uwp.Notifications.AdaptiveText::<Language>k__BackingField
	String_t* ___U3CLanguageU3Ek__BackingField_1;
	// System.Nullable`1<System.Int32> Microsoft.Toolkit.Uwp.Notifications.AdaptiveText::_hintMaxLines
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____hintMaxLines_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>
struct Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088  : public MulticastDelegate_t
{
};

// System.Func`2<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild,Microsoft.Toolkit.Uwp.Notifications.AdaptiveText>
struct Func_2_tDFE6EBCC622468031CFDD02E086C9810BC85D878  : public MulticastDelegate_t
{
};

// System.Func`2<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild,System.Boolean>
struct Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_mDCE2755EF33EFD51A60E9238A1537E3B41351058_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_m1F10F0C7C29D1C2BE692C38BB8966EBD32326114_gshared (RuntimeObject* ___source0, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.Adaptive.Elements.Element_AdaptiveText::CheckMaxLinesValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Element_AdaptiveText_CheckMaxLinesValue_mC1CB9158D184FA785A59C9326A8C5BCB3432E6AF (int32_t ___value0, const RuntimeMethod* method) ;
// Microsoft.Toolkit.Uwp.Notifications.BindableString Microsoft.Toolkit.Uwp.Notifications.AdaptiveText::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* AdaptiveText_get_Text_mA05FD59657FC7DF5BC8E0CD929E1EC31CA5E9A1C_inline (AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* __this, const RuntimeMethod* method) ;
// System.String Microsoft.Toolkit.Uwp.Notifications.BindableString::op_Implicit(Microsoft.Toolkit.Uwp.Notifications.BindableString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BindableString_op_Implicit_mF33786FAED37AFB717F2F184C038510219695EBF (BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* ___b0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Toolkit.Uwp.Notifications.BindableString::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableString__ctor_m1AB7DFDD0133B6F9E2AF414769D81AF311E6976D (BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Toolkit.Uwp.Notifications.BindableString::set_RawValue(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BindableString_set_RawValue_m2B6B2AFD9FE7AE40476FA466AD679A092E362F1B_inline (BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Microsoft.Toolkit.Uwp.Notifications.BindableString::get_RawValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BindableString_get_RawValue_m17C0ACCBDC33BAEF1692DE3066A6F97D2C574AC0_inline (BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* __this, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.String Microsoft.Toolkit.Uwp.Notifications.EnumStringAttribute::get_String()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnumStringAttribute_get_String_m9F2563EF63047145DE43A53083F2FAF1B70FA3BD_inline (EnumStringAttribute_t62BF1AE7DE778E40A0204599F7F1DFD0C213F47A* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m360E06F52DEE3AD60832FAE8D32E499B6F9B386B (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.Toolkit.Uwp.Notifications.NotificationXmlElementAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotificationXmlElementAttribute_set_Name_mDBB104942306373564E2818B6DB88C78871C1F73_inline (NotificationXmlElementAttribute_tC96C539D61DFD204B2355378EB170956DE4AA17E* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastContent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastContent__ctor_mA7814D2ECD33410C43C88EA265C8F6637D065E8E (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::set_Content(Microsoft.Toolkit.Uwp.Notifications.ToastContent)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ToastContentBuilder_set_Content_mDC20F5C0714B6DB149D207CEF85B885E3FC7B845_inline (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* ___value0, const RuntimeMethod* method) ;
// Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::AddArgumentHelper(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* ToastContentBuilder_AddArgumentHelper_m79B333240C52113B79CFEC47C6CBD742A549FB07 (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// Microsoft.Toolkit.Uwp.Notifications.ToastContent Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::get_Content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* ToastContentBuilder_get_Content_m37A2B857E80DA03D79E042C38138601D1D4A14F0_inline (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, const RuntimeMethod* method) ;
// Microsoft.Toolkit.Uwp.Notifications.ToastActivationType Microsoft.Toolkit.Uwp.Notifications.ToastContent::get_ActivationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ToastContent_get_ActivationType_m1DE469921A8E9F4C67C97942B19F99F5363D2B5C_inline (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* __this, const RuntimeMethod* method) ;
// System.String Microsoft.Toolkit.Uwp.Notifications.ToastContent::get_Launch()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ToastContent_get_Launch_m906AD97651DB260DCE21D63A099B87F8D9439EEE_inline (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* __this, const RuntimeMethod* method) ;
// System.String Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::AddArgumentHelper(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToastContentBuilder_AddArgumentHelper_mC29CB228887F1375A2F9703CFBD2CA45EFB4FBE4 (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, String_t* ___existing0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method) ;
// System.String Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::SerializeArgumentsHelper(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToastContentBuilder_SerializeArgumentsHelper_m9AFDBA235377EADAB3816473FAF2511D0B74A04A (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, RuntimeObject* ___arguments0, const RuntimeMethod* method) ;
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastContent::set_Launch(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ToastContent_set_Launch_m442B8F464B769F3D91F2DCB2E608D683C322C7CF_inline (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Microsoft.Toolkit.Uwp.Notifications.IToastActions Microsoft.Toolkit.Uwp.Notifications.ToastContent::get_Actions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ToastContent_get_Actions_m1D4A37EE9DDCB673F0B4B35D11F31554FCFBF6F0_inline (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Microsoft.Toolkit.Uwp.Notifications.IToastButton> Microsoft.Toolkit.Uwp.Notifications.ToastActionsCustom::get_Buttons()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ToastActionsCustom_get_Buttons_m34ADCDE3496A39F680F91D736BD501AF20D9529B_inline (ToastActionsCustom_t26A903FAB8D31CD75527932E638EE18D9259F356* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Toolkit.Uwp.Notifications.ToastButton::CanAddArguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ToastButton_CanAddArguments_m5A4CA1526FB8F8A8BB3D39EF78175AA9DAD386BF (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Toolkit.Uwp.Notifications.ToastButton::ContainsArgument(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ToastButton_ContainsArgument_mE91802DB818190AA2CF06B92F974131AF3E25698 (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, String_t* ___key0, const RuntimeMethod* method) ;
// Microsoft.Toolkit.Uwp.Notifications.ToastButton Microsoft.Toolkit.Uwp.Notifications.ToastButton::AddArgument(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* ToastButton_AddArgument_m72A4C81594CFE0088940EFE291BF9C9785B29EED (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastArguments::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastArguments__ctor_m2A3317A8D4B6185E327250F3FD49FDDE00532116 (ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// Microsoft.Toolkit.Uwp.Notifications.ToastArguments Microsoft.Toolkit.Uwp.Notifications.ToastArguments::Add(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* ToastArguments_Add_m0A1494347E979BDBC9AF56903EF893748914D9F9 (ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.String Microsoft.Toolkit.Uwp.Notifications.ToastArguments::EncodePair(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToastArguments_EncodePair_m2F97A5F57F37311497E2C17FFEE7E84EE9007A19 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// Microsoft.Toolkit.Uwp.Notifications.ToastVisual Microsoft.Toolkit.Uwp.Notifications.ToastContent::get_Visual()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* ToastContent_get_Visual_m1F9860CC3AA0EA9272D1534ECEB4A4116E230811_inline (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastVisual__ctor_m9F043DA95BAE03E16D377177C1A03284F720A304 (ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastContent::set_Visual(Microsoft.Toolkit.Uwp.Notifications.ToastVisual)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ToastContent_set_Visual_mCF9AE1F1C6F0AC633A78366FA449301880978C71_inline (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* __this, ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastBindingGeneric::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastBindingGeneric__ctor_m8C8313EEFE0D5483814F2E88BD6F0C8E0F496881 (ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastVisual::set_BindingGeneric(Microsoft.Toolkit.Uwp.Notifications.ToastBindingGeneric)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ToastVisual_set_BindingGeneric_m9D1AB62C555CC6E8AA5B45B59C1E4484931D548D_inline (ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* __this, ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7* ___value0, const RuntimeMethod* method) ;
// Microsoft.Toolkit.Uwp.Notifications.ToastVisual Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::get_Visual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* ToastContentBuilder_get_Visual_m48BE22EBBC0916B2840BA5D036228E0FA511EBAE (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, const RuntimeMethod* method) ;
// Microsoft.Toolkit.Uwp.Notifications.ToastBindingGeneric Microsoft.Toolkit.Uwp.Notifications.ToastVisual::get_BindingGeneric()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7* ToastVisual_get_BindingGeneric_m128B04E58D4BDBD11A6032DABB64D7ECC201C7B3_inline (ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild> Microsoft.Toolkit.Uwp.Notifications.ToastBindingGeneric::get_Children()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ToastBindingGeneric_get_Children_mBE57C402CD217B0CB9853F6259E8D9902D7C5904_inline (ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7* __this, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::GetCurrentTextLineCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ToastContentBuilder_GetCurrentTextLineCount_m33DF77A589035032F1DB740444F32E538833CC9A (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.Toolkit.Uwp.Notifications.AdaptiveText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveText__ctor_m761C73E0474FC0DEBBEBC424F87772F0E1D75F8F (AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* __this, const RuntimeMethod* method) ;
// Microsoft.Toolkit.Uwp.Notifications.BindableString Microsoft.Toolkit.Uwp.Notifications.BindableString::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* BindableString_op_Implicit_m1C6707CB97389A023B5E9FC3621B4CE324E9FB0F (String_t* ___d0, const RuntimeMethod* method) ;
// System.Void Microsoft.Toolkit.Uwp.Notifications.AdaptiveText::set_Text(Microsoft.Toolkit.Uwp.Notifications.BindableString)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdaptiveText_set_Text_mBD7A5D11A91555126FB5CA8612EDC7B14190640A_inline (AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* __this, BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___value0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void Microsoft.Toolkit.Uwp.Notifications.AdaptiveText::set_HintMaxLines(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveText_set_HintMaxLines_mB22F1E9F5CD115AF6F676FE2153FEA4072B1D0A0 (AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.Toolkit.Uwp.Notifications.AdaptiveText::set_Language(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdaptiveText_set_Language_mBD0FC054D11D6377C13BA982678051ACF496CC81_inline (AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::AddVisualChild(Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* ToastContentBuilder_AddVisualChild_mD4B2552CEFA84E47B29E5D302B2E1D38D016B08A (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, RuntimeObject* ___child0, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild> Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::get_VisualChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ToastContentBuilder_get_VisualChildren_m6D29F50F9DC368C805BB4D91E142769875EC1F6A (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mFAA0BDDFD3BABF9D8C5316F6E74810C4B15F1BED (Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Linq.Enumerable::Any<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_Any_TisIToastBindingGenericChild_t62B142C61D032F12316ED93421AC3551B04C8594_m34CF0C4D451A7FD8F57AD012BA6A932373078A31 (RuntimeObject* ___source0, Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D* ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_mDCE2755EF33EFD51A60E9238A1537E3B41351058_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisIToastBindingGenericChild_t62B142C61D032F12316ED93421AC3551B04C8594_m70C2735BDA4025EE1DC4BC1DE274DC5B0FE4B363 (RuntimeObject* ___source0, Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Func`2<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild,Microsoft.Toolkit.Uwp.Notifications.AdaptiveText>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4999F2FB3AA981CB7B547BC61D6256E519CA050E (Func_2_tDFE6EBCC622468031CFDD02E086C9810BC85D878* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDFE6EBCC622468031CFDD02E086C9810BC85D878*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild,Microsoft.Toolkit.Uwp.Notifications.AdaptiveText>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisIToastBindingGenericChild_t62B142C61D032F12316ED93421AC3551B04C8594_TisAdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_mF38CDDF389577C82716DABBEC40200579656E891 (RuntimeObject* ___source0, Func_2_tDFE6EBCC622468031CFDD02E086C9810BC85D878* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tDFE6EBCC622468031CFDD02E086C9810BC85D878*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Microsoft.Toolkit.Uwp.Notifications.AdaptiveText>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tB1F7E5AB6F1098372EB386D2260DE883A90DB2C8* Enumerable_ToList_TisAdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_m21E2D9043C55C27DF4902F8E987E98DE56A3A2B5 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tB1F7E5AB6F1098372EB386D2260DE883A90DB2C8* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared)(___source0, method);
}
// TSource System.Linq.Enumerable::First<Microsoft.Toolkit.Uwp.Notifications.AdaptiveText>(System.Collections.Generic.IEnumerable`1<TSource>)
inline AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* Enumerable_First_TisAdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_mED546FEC3A799AE05D036C93D47099790BFB426E (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A_gshared)(___source0, method);
}
// System.Nullable`1<System.Int32> Microsoft.Toolkit.Uwp.Notifications.AdaptiveText::get_HintMaxLines()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 AdaptiveText_get_HintMaxLines_mC89FBAE51751A1497DF4EC147FD38B610E55CDF7_inline (AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Microsoft.Toolkit.Uwp.Notifications.AdaptiveText>::get_Item(System.Int32)
inline AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* List_1_get_Item_m90087D4E5A3F50EFB3BB0DD0CAD225561FF92A76 (List_1_tB1F7E5AB6F1098372EB386D2260DE883A90DB2C8* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* (*) (List_1_tB1F7E5AB6F1098372EB386D2260DE883A90DB2C8*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Microsoft.Toolkit.Uwp.Notifications.AdaptiveText>::get_Count()
inline int32_t List_1_get_Count_m2DBFBBC136F2641A7772876D924D9DECCD16C2DB_inline (List_1_tB1F7E5AB6F1098372EB386D2260DE883A90DB2C8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB1F7E5AB6F1098372EB386D2260DE883A90DB2C8*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mED62834B3F9F623ED283B1DCF46C0F77B8EE2E91 (U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m48BD5538630AB90CAACF2ADC165985AB743A6C30 (Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_m92EFE2CC5B9152F9754C353D72BAF71C5372B420 (RuntimeObject* ___source0, Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088*, const RuntimeMethod*))Enumerable_Select_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_m1F10F0C7C29D1C2BE692C38BB8966EBD32326114_gshared)(___source0, ___selector1, method);
}
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m675422BC1927F19F7135C5211B45EE7AC9F7D632 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method) ;
// System.String Microsoft.Toolkit.Uwp.Notifications.ToastArguments::Encode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToastArguments_Encode_m4B7B770826705239AD4589E516B4A0EF9A61D64A (String_t* ___str0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> Microsoft.Toolkit.Uwp.Notifications.ToastArguments::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ToastArguments_GetEnumerator_m22CB7529601E3E17B0C47D0D15256905CD065E8D (ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastArguments/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5E0E0F944FE328602E22E28BA75772C8D862434B (U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild>::.ctor()
inline void List_1__ctor_m2F2C3BB3AB30788919F5405C6FD55E9FD1B6FA29 (List_1_t0033D22AB8FF55085C964A6C3CAEA63C3B8D6F9B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0033D22AB8FF55085C964A6C3CAEA63C3B8D6F9B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Microsoft.Toolkit.Uwp.Notifications.ToastButton Microsoft.Toolkit.Uwp.Notifications.ToastButton::AddArgumentHelper(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* ToastButton_AddArgumentHelper_mB7D0F8056E86B62ECB537E0D311F9C3B90F7E303 (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// Microsoft.Toolkit.Uwp.Notifications.ToastActivationType Microsoft.Toolkit.Uwp.Notifications.ToastButton::get_ActivationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ToastButton_get_ActivationType_m41B8D821196C89E25593A39EA64F4B239ED22083_inline (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, const RuntimeMethod* method) ;
// System.String Microsoft.Toolkit.Uwp.Notifications.ToastButton::get_Arguments()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ToastButton_get_Arguments_m586AB05D0FF8C9A326FA346064EEDE98B168F4D6_inline (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, const RuntimeMethod* method) ;
// System.String Microsoft.Toolkit.Uwp.Notifications.ToastButton::AddArgumentHelper(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToastButton_AddArgumentHelper_mB88AFD17678A67503D4FD158E9F199CB86FA02FB (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, String_t* ___existing0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method) ;
// System.String Microsoft.Toolkit.Uwp.Notifications.ToastButton::SerializeArgumentsHelper(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToastButton_SerializeArgumentsHelper_m9E33F2426B9A1F76B83FCACE4B0B6AF47D17EA39 (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, RuntimeObject* ___arguments0, const RuntimeMethod* method) ;
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastButton::set_Arguments(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ToastButton_set_Arguments_mDA5F479C413D8B65A6647013D7A0C2C8A90CC2EF_inline (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Toolkit.Uwp.Notifications.BindableString Microsoft.Toolkit.Uwp.Notifications.AdaptiveText::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* AdaptiveText_get_Text_mA05FD59657FC7DF5BC8E0CD929E1EC31CA5E9A1C (AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* __this, const RuntimeMethod* method) 
{
	{
		BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* L_0 = __this->___U3CTextU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.AdaptiveText::set_Text(Microsoft.Toolkit.Uwp.Notifications.BindableString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveText_set_Text_mBD7A5D11A91555126FB5CA8612EDC7B14190640A (AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* __this, BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* ___value0, const RuntimeMethod* method) 
{
	{
		BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* L_0 = ___value0;
		__this->___U3CTextU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.AdaptiveText::set_Language(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveText_set_Language_mBD0FC054D11D6377C13BA982678051ACF496CC81 (AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CLanguageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLanguageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Nullable`1<System.Int32> Microsoft.Toolkit.Uwp.Notifications.AdaptiveText::get_HintMaxLines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 AdaptiveText_get_HintMaxLines_mC89FBAE51751A1497DF4EC147FD38B610E55CDF7 (AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->____hintMaxLines_2;
		return L_0;
	}
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.AdaptiveText::set_HintMaxLines(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveText_set_HintMaxLines_mB22F1E9F5CD115AF6F676FE2153FEA4072B1D0A0 (AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&___value0), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1;
		L_1 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&___value0), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		Element_AdaptiveText_CheckMaxLinesValue_mC1CB9158D184FA785A59C9326A8C5BCB3432E6AF(L_1, NULL);
	}

IL_0015:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_2 = ___value0;
		__this->____hintMaxLines_2 = L_2;
		return;
	}
}
// System.String Microsoft.Toolkit.Uwp.Notifications.AdaptiveText::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdaptiveText_ToString_m4F97E313428B78951673749D7B1EBA5AD8AFCC2B (AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* __this, const RuntimeMethod* method) 
{
	{
		BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* L_0;
		L_0 = AdaptiveText_get_Text_mA05FD59657FC7DF5BC8E0CD929E1EC31CA5E9A1C_inline(__this, NULL);
		String_t* L_1;
		L_1 = BindableString_op_Implicit_mF33786FAED37AFB717F2F184C038510219695EBF(L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.AdaptiveText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveText__ctor_m761C73E0474FC0DEBBEBC424F87772F0E1D75F8F (AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Microsoft.Toolkit.Uwp.Notifications.BindableString::get_RawValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BindableString_get_RawValue_m17C0ACCBDC33BAEF1692DE3066A6F97D2C574AC0 (BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CRawValueU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.BindableString::set_RawValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableString_set_RawValue_m2B6B2AFD9FE7AE40476FA466AD679A092E362F1B (BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CRawValueU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRawValueU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.BindableString::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableString__ctor_m1AB7DFDD0133B6F9E2AF414769D81AF311E6976D (BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.Toolkit.Uwp.Notifications.BindableString Microsoft.Toolkit.Uwp.Notifications.BindableString::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* BindableString_op_Implicit_m1C6707CB97389A023B5E9FC3621B4CE324E9FB0F (String_t* ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* L_0 = (BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0*)il2cpp_codegen_object_new(BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BindableString__ctor_m1AB7DFDD0133B6F9E2AF414769D81AF311E6976D(L_0, NULL);
		BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* L_1 = L_0;
		String_t* L_2 = ___d0;
		NullCheck(L_1);
		BindableString_set_RawValue_m2B6B2AFD9FE7AE40476FA466AD679A092E362F1B_inline(L_1, L_2, NULL);
		return L_1;
	}
}
// System.String Microsoft.Toolkit.Uwp.Notifications.BindableString::op_Implicit(Microsoft.Toolkit.Uwp.Notifications.BindableString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BindableString_op_Implicit_mF33786FAED37AFB717F2F184C038510219695EBF (BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* ___b0, const RuntimeMethod* method) 
{
	{
		BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* L_0 = ___b0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = BindableString_get_RawValue_m17C0ACCBDC33BAEF1692DE3066A6F97D2C574AC0_inline(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Microsoft.Toolkit.Uwp.Notifications.EnumStringAttribute::get_String()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnumStringAttribute_get_String_m9F2563EF63047145DE43A53083F2FAF1B70FA3BD (EnumStringAttribute_t62BF1AE7DE778E40A0204599F7F1DFD0C213F47A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CStringU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.EnumStringAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumStringAttribute__ctor_m2E0894FD7D3DF56F6BD1B488A6EF8201DDB3EA24 (EnumStringAttribute_t62BF1AE7DE778E40A0204599F7F1DFD0C213F47A* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EnumStringAttribute__ctor_m2E0894FD7D3DF56F6BD1B488A6EF8201DDB3EA24_RuntimeMethod_var)));
	}

IL_0014:
	{
		String_t* L_2 = ___s0;
		__this->___U3CStringU3Ek__BackingField_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStringU3Ek__BackingField_0), (void*)L_2);
		return;
	}
}
// System.String Microsoft.Toolkit.Uwp.Notifications.EnumStringAttribute::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnumStringAttribute_ToString_mC172D8C881FC28BB3A7276412A1121366B67CFCD (EnumStringAttribute_t62BF1AE7DE778E40A0204599F7F1DFD0C213F47A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = EnumStringAttribute_get_String_m9F2563EF63047145DE43A53083F2FAF1B70FA3BD_inline(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Toolkit.Uwp.Notifications.NotificationXmlElementAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationXmlElementAttribute_set_Name_mDBB104942306373564E2818B6DB88C78871C1F73 (NotificationXmlElementAttribute_tC96C539D61DFD204B2355378EB170956DE4AA17E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.NotificationXmlElementAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationXmlElementAttribute__ctor_m9DF8745B9CDBFF2CFF79A47B930E4D7AF037B7BA (NotificationXmlElementAttribute_tC96C539D61DFD204B2355378EB170956DE4AA17E* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = String_IsNullOrWhiteSpace_m360E06F52DEE3AD60832FAE8D32E499B6F9B386B(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral175BBF196C26BBFF494DD3E21D1E59E776730FDA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotificationXmlElementAttribute__ctor_m9DF8745B9CDBFF2CFF79A47B930E4D7AF037B7BA_RuntimeMethod_var)));
	}

IL_0019:
	{
		String_t* L_3 = ___name0;
		NotificationXmlElementAttribute_set_Name_mDBB104942306373564E2818B6DB88C78871C1F73_inline(__this, L_3, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Toolkit.Uwp.Notifications.ToastContent Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::get_Content()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* ToastContentBuilder_get_Content_m37A2B857E80DA03D79E042C38138601D1D4A14F0 (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, const RuntimeMethod* method) 
{
	{
		ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* L_0 = __this->___U3CContentU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::set_Content(Microsoft.Toolkit.Uwp.Notifications.ToastContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastContentBuilder_set_Content_mDC20F5C0714B6DB149D207CEF85B885E3FC7B845 (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* ___value0, const RuntimeMethod* method) 
{
	{
		ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* L_0 = ___value0;
		__this->___U3CContentU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContentU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastContentBuilder__ctor_m2DBF58D4E1BA1B8F29E1494F93C6310F0794FC3D (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->____genericArguments_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____genericArguments_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* L_1 = (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5*)il2cpp_codegen_object_new(ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ToastContent__ctor_mA7814D2ECD33410C43C88EA265C8F6637D065E8E(L_1, NULL);
		ToastContentBuilder_set_Content_mDC20F5C0714B6DB149D207CEF85B885E3FC7B845_inline(__this, L_1, NULL);
		return;
	}
}
// Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::AddArgument(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* ToastContentBuilder_AddArgument_mF73C1B492AD502B160704AB38A79C8FF5C27C118 (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___key0;
		String_t* L_1 = ___value1;
		ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* L_2;
		L_2 = ToastContentBuilder_AddArgumentHelper_m79B333240C52113B79CFEC47C6CBD742A549FB07(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::AddArgument(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* ToastContentBuilder_AddArgument_mB83D672723434B5D5B7FC2E1A6236EABEB048DD1 (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___key0;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___value1), NULL);
		ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* L_2;
		L_2 = ToastContentBuilder_AddArgumentHelper_m79B333240C52113B79CFEC47C6CBD742A549FB07(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::AddArgumentHelper(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* ToastContentBuilder_AddArgumentHelper_m79B333240C52113B79CFEC47C6CBD742A549FB07 (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6FE1EE7E17C9AD997C277BD32B9C609FD277AE99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tC3CF9344978D93F06245E044340481581F98AF46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToastActionsCustom_t26A903FAB8D31CD75527932E638EE18D9259F356_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ToastActionsCustom_t26A903FAB8D31CD75527932E638EE18D9259F356* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* V_3 = NULL;
	ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* G_B6_0 = NULL;
	ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* G_B7_1 = NULL;
	{
		String_t* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ToastContentBuilder_AddArgumentHelper_m79B333240C52113B79CFEC47C6CBD742A549FB07_RuntimeMethod_var)));
	}

IL_000e:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = __this->____genericArguments_0;
		String_t* L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_2, L_3, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		V_0 = L_4;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = __this->____genericArguments_0;
		String_t* L_6 = ___key0;
		String_t* L_7 = ___value1;
		NullCheck(L_5);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_5, L_6, L_7, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* L_8;
		L_8 = ToastContentBuilder_get_Content_m37A2B857E80DA03D79E042C38138601D1D4A14F0_inline(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ToastContent_get_ActivationType_m1DE469921A8E9F4C67C97942B19F99F5363D2B5C_inline(L_8, NULL);
		if ((((int32_t)L_9) == ((int32_t)2)))
		{
			goto IL_006d;
		}
	}
	{
		bool L_10 = __this->____customArgumentsUsedOnToastItself_1;
		if (L_10)
		{
			goto IL_006d;
		}
	}
	{
		ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* L_11;
		L_11 = ToastContentBuilder_get_Content_m37A2B857E80DA03D79E042C38138601D1D4A14F0_inline(__this, NULL);
		bool L_12 = V_0;
		G_B5_0 = L_11;
		if (L_12)
		{
			G_B6_0 = L_11;
			goto IL_005c;
		}
	}
	{
		ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* L_13;
		L_13 = ToastContentBuilder_get_Content_m37A2B857E80DA03D79E042C38138601D1D4A14F0_inline(__this, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = ToastContent_get_Launch_m906AD97651DB260DCE21D63A099B87F8D9439EEE_inline(L_13, NULL);
		String_t* L_15 = ___key0;
		String_t* L_16 = ___value1;
		String_t* L_17;
		L_17 = ToastContentBuilder_AddArgumentHelper_mC29CB228887F1375A2F9703CFBD2CA45EFB4FBE4(__this, L_14, L_15, L_16, NULL);
		G_B7_0 = L_17;
		G_B7_1 = G_B5_0;
		goto IL_0068;
	}

IL_005c:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_18 = __this->____genericArguments_0;
		String_t* L_19;
		L_19 = ToastContentBuilder_SerializeArgumentsHelper_m9AFDBA235377EADAB3816473FAF2511D0B74A04A(__this, L_18, NULL);
		G_B7_0 = L_19;
		G_B7_1 = G_B6_0;
	}

IL_0068:
	{
		NullCheck(G_B7_1);
		ToastContent_set_Launch_m442B8F464B769F3D91F2DCB2E608D683C322C7CF_inline(G_B7_1, G_B7_0, NULL);
	}

IL_006d:
	{
		ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* L_20;
		L_20 = ToastContentBuilder_get_Content_m37A2B857E80DA03D79E042C38138601D1D4A14F0_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = ToastContent_get_Actions_m1D4A37EE9DDCB673F0B4B35D11F31554FCFBF6F0_inline(L_20, NULL);
		V_1 = ((ToastActionsCustom_t26A903FAB8D31CD75527932E638EE18D9259F356*)IsInstSealed((RuntimeObject*)L_21, ToastActionsCustom_t26A903FAB8D31CD75527932E638EE18D9259F356_il2cpp_TypeInfo_var));
		ToastActionsCustom_t26A903FAB8D31CD75527932E638EE18D9259F356* L_22 = V_1;
		if (!L_22)
		{
			goto IL_00cc;
		}
	}
	{
		ToastActionsCustom_t26A903FAB8D31CD75527932E638EE18D9259F356* L_23 = V_1;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = ToastActionsCustom_get_Buttons_m34ADCDE3496A39F680F91D736BD501AF20D9529B_inline(L_23, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Microsoft.Toolkit.Uwp.Notifications.IToastButton>::GetEnumerator() */, IEnumerable_1_t6FE1EE7E17C9AD997C277BD32B9C609FD277AE99_il2cpp_TypeInfo_var, L_24);
		V_2 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c2:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_26 = V_2;
					if (!L_26)
					{
						goto IL_00cb;
					}
				}
				{
					RuntimeObject* L_27 = V_2;
					NullCheck(L_27);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
				}

IL_00cb:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b8_1;
			}

IL_008f_1:
			{
				RuntimeObject* L_28 = V_2;
				NullCheck(L_28);
				RuntimeObject* L_29;
				L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Microsoft.Toolkit.Uwp.Notifications.IToastButton>::get_Current() */, IEnumerator_1_tC3CF9344978D93F06245E044340481581F98AF46_il2cpp_TypeInfo_var, L_28);
				V_3 = ((ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF*)IsInstSealed((RuntimeObject*)L_29, ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF_il2cpp_TypeInfo_var));
				ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* L_30 = V_3;
				if (!L_30)
				{
					goto IL_00b8_1;
				}
			}
			{
				ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* L_31 = V_3;
				NullCheck(L_31);
				bool L_32;
				L_32 = ToastButton_CanAddArguments_m5A4CA1526FB8F8A8BB3D39EF78175AA9DAD386BF(L_31, NULL);
				if (!L_32)
				{
					goto IL_00b8_1;
				}
			}
			{
				ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* L_33 = V_3;
				String_t* L_34 = ___key0;
				NullCheck(L_33);
				bool L_35;
				L_35 = ToastButton_ContainsArgument_mE91802DB818190AA2CF06B92F974131AF3E25698(L_33, L_34, NULL);
				if (L_35)
				{
					goto IL_00b8_1;
				}
			}
			{
				ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* L_36 = V_3;
				String_t* L_37 = ___key0;
				String_t* L_38 = ___value1;
				NullCheck(L_36);
				ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* L_39;
				L_39 = ToastButton_AddArgument_m72A4C81594CFE0088940EFE291BF9C9785B29EED(L_36, L_37, L_38, NULL);
			}

IL_00b8_1:
			{
				RuntimeObject* L_40 = V_2;
				NullCheck(L_40);
				bool L_41;
				L_41 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_40);
				if (L_41)
				{
					goto IL_008f_1;
				}
			}
			{
				goto IL_00cc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cc:
	{
		return __this;
	}
}
// System.String Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::SerializeArgumentsHelper(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToastContentBuilder_SerializeArgumentsHelper_m9AFDBA235377EADAB3816473FAF2511D0B74A04A (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, RuntimeObject* ___arguments0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* L_0 = (ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55*)il2cpp_codegen_object_new(ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ToastArguments__ctor_m2A3317A8D4B6185E327250F3FD49FDDE00532116(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___arguments0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_003e;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_003e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002b_1;
			}

IL_000f_1:
			{
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_6;
				L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* L_7 = V_0;
				String_t* L_8;
				L_8 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_9;
				L_9 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_7);
				ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* L_10;
				L_10 = ToastArguments_Add_m0A1494347E979BDBC9AF56903EF893748914D9F9(L_7, L_8, L_9, NULL);
			}

IL_002b_1:
			{
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_003f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		return L_14;
	}
}
// System.String Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::AddArgumentHelper(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToastContentBuilder_AddArgumentHelper_mC29CB228887F1375A2F9703CFBD2CA45EFB4FBE4 (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, String_t* ___existing0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___key1;
		String_t* L_1 = ___value2;
		String_t* L_2;
		L_2 = ToastArguments_EncodePair_m2F97A5F57F37311497E2C17FFEE7E84EE9007A19(L_0, L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = ___existing0;
		if (L_3)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_4 = V_0;
		return L_4;
	}

IL_000d:
	{
		String_t* L_5 = ___existing0;
		String_t* L_6 = V_0;
		String_t* L_7;
		L_7 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_5, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, L_6, NULL);
		return L_7;
	}
}
// Microsoft.Toolkit.Uwp.Notifications.ToastVisual Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::get_Visual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* ToastContentBuilder_get_Visual_m48BE22EBBC0916B2840BA5D036228E0FA511EBAE (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* L_0;
		L_0 = ToastContentBuilder_get_Content_m37A2B857E80DA03D79E042C38138601D1D4A14F0_inline(__this, NULL);
		NullCheck(L_0);
		ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* L_1;
		L_1 = ToastContent_get_Visual_m1F9860CC3AA0EA9272D1534ECEB4A4116E230811_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0032;
		}
	}
	{
		ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* L_2;
		L_2 = ToastContentBuilder_get_Content_m37A2B857E80DA03D79E042C38138601D1D4A14F0_inline(__this, NULL);
		ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* L_3 = (ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F*)il2cpp_codegen_object_new(ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ToastVisual__ctor_m9F043DA95BAE03E16D377177C1A03284F720A304(L_3, NULL);
		NullCheck(L_2);
		ToastContent_set_Visual_mCF9AE1F1C6F0AC633A78366FA449301880978C71_inline(L_2, L_3, NULL);
		ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* L_4;
		L_4 = ToastContentBuilder_get_Content_m37A2B857E80DA03D79E042C38138601D1D4A14F0_inline(__this, NULL);
		NullCheck(L_4);
		ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* L_5;
		L_5 = ToastContent_get_Visual_m1F9860CC3AA0EA9272D1534ECEB4A4116E230811_inline(L_4, NULL);
		ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7* L_6 = (ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7*)il2cpp_codegen_object_new(ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ToastBindingGeneric__ctor_m8C8313EEFE0D5483814F2E88BD6F0C8E0F496881(L_6, NULL);
		NullCheck(L_5);
		ToastVisual_set_BindingGeneric_m9D1AB62C555CC6E8AA5B45B59C1E4484931D548D_inline(L_5, L_6, NULL);
	}

IL_0032:
	{
		ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* L_7;
		L_7 = ToastContentBuilder_get_Content_m37A2B857E80DA03D79E042C38138601D1D4A14F0_inline(__this, NULL);
		NullCheck(L_7);
		ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* L_8;
		L_8 = ToastContent_get_Visual_m1F9860CC3AA0EA9272D1534ECEB4A4116E230811_inline(L_7, NULL);
		return L_8;
	}
}
// System.Collections.Generic.IList`1<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild> Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::get_VisualChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ToastContentBuilder_get_VisualChildren_m6D29F50F9DC368C805BB4D91E142769875EC1F6A (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, const RuntimeMethod* method) 
{
	{
		ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* L_0;
		L_0 = ToastContentBuilder_get_Visual_m48BE22EBBC0916B2840BA5D036228E0FA511EBAE(__this, NULL);
		NullCheck(L_0);
		ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7* L_1;
		L_1 = ToastVisual_get_BindingGeneric_m128B04E58D4BDBD11A6032DABB64D7ECC201C7B3_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = ToastBindingGeneric_get_Children_mBE57C402CD217B0CB9853F6259E8D9902D7C5904_inline(L_1, NULL);
		return L_2;
	}
}
// Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::AddText(System.String,System.Nullable`1<Microsoft.Toolkit.Uwp.Notifications.AdaptiveTextStyle>,System.Nullable`1<System.Boolean>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Nullable`1<Microsoft.Toolkit.Uwp.Notifications.AdaptiveTextAlign>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* ToastContentBuilder_AddText_m419ADE9E4AC2C4886B69248E17AEB076A076E79A (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, String_t* ___text0, Nullable_1_t5F2D4E9D7ABD81B1DA754569B619BF9A6CC32A1A ___hintStyle1, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___hintWrap2, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___hintMaxLines3, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___hintMinLines4, Nullable_1_t17B6B18A2CBCE422EE6E95D36DDF5D3423525B69 ___hintAlign5, String_t* ___language6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* V_1 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	RuntimeObject* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	RuntimeObject* G_B12_1 = NULL;
	String_t* G_B12_2 = NULL;
	{
		int32_t L_0;
		L_0 = ToastContentBuilder_GetCurrentTextLineCount_m33DF77A589035032F1DB740444F32E538833CC9A(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = ToastContentBuilder_GetCurrentTextLineCount_m33DF77A589035032F1DB740444F32E538833CC9A(__this, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_001b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5E1A0CB5F417BE886D64525C8D3A6FDB7B353396)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ToastContentBuilder_AddText_m419ADE9E4AC2C4886B69248E17AEB076A076E79A_RuntimeMethod_var)));
	}

IL_001b:
	{
		AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* L_3 = (AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59*)il2cpp_codegen_object_new(AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AdaptiveText__ctor_m761C73E0474FC0DEBBEBC424F87772F0E1D75F8F(L_3, NULL);
		AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* L_4 = L_3;
		String_t* L_5 = ___text0;
		BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* L_6;
		L_6 = BindableString_op_Implicit_m1C6707CB97389A023B5E9FC3621B4CE324E9FB0F(L_5, NULL);
		NullCheck(L_4);
		AdaptiveText_set_Text_mBD7A5D11A91555126FB5CA8612EDC7B14190640A_inline(L_4, L_6, NULL);
		V_1 = L_4;
		bool L_7;
		L_7 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&___hintMaxLines3), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_00ef;
		}
	}
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_8 = ___hintMaxLines3;
		V_2 = L_8;
		V_3 = 2;
		int32_t L_9;
		L_9 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_2), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		int32_t L_10 = V_3;
		bool L_11;
		L_11 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_2), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!((int32_t)(((((int32_t)L_9) > ((int32_t)L_10))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0062;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8307D66695919BB989CD91BE8CCE46CF46D37480)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB88DBFF5E0EEAF2081A20EE167D8D063252978A9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ToastContentBuilder_AddText_m419ADE9E4AC2C4886B69248E17AEB076A076E79A_RuntimeMethod_var)));
	}

IL_0062:
	{
		int32_t L_13 = V_0;
		V_4 = L_13;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_14 = ___hintMaxLines3;
		V_5 = L_14;
		bool L_15;
		L_15 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_5), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_007e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_16 = V_6;
		G_B8_0 = L_16;
		goto IL_008d;
	}

IL_007e:
	{
		int32_t L_17 = V_4;
		int32_t L_18;
		L_18 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_5), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_19), ((int32_t)il2cpp_codegen_add(L_17, L_18)), /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		G_B8_0 = L_19;
	}

IL_008d:
	{
		V_2 = G_B8_0;
		V_3 = 4;
		int32_t L_20;
		L_20 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_2), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		int32_t L_21 = V_3;
		bool L_22;
		L_22 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_2), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!((int32_t)(((((int32_t)L_20) > ((int32_t)L_21))? 1 : 0)&(int32_t)L_22)))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_24);
		int32_t L_26 = V_0;
		V_3 = L_26;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_27 = ___hintMaxLines3;
		V_2 = L_27;
		bool L_28;
		L_28 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_2), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var)));
		G_B10_0 = L_25;
		G_B10_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E8F42FF17E1117CD87D1C2EE403639D6381FC8C));
		if (L_28)
		{
			G_B11_0 = L_25;
			G_B11_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E8F42FF17E1117CD87D1C2EE403639D6381FC8C));
			goto IL_00c9;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_29 = V_5;
		G_B12_0 = L_29;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_00d7;
	}

IL_00c9:
	{
		int32_t L_30 = V_3;
		int32_t L_31;
		L_31 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_2), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_32), ((int32_t)il2cpp_codegen_add(L_30, L_31)), /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var)));
		G_B12_0 = L_32;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_00d7:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_33 = G_B12_0;
		RuntimeObject* L_34 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var)), &L_33);
		String_t* L_35;
		L_35 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(G_B12_2, G_B12_1, L_34, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_36 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_36);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_36, L_35, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ToastContentBuilder_AddText_m419ADE9E4AC2C4886B69248E17AEB076A076E79A_RuntimeMethod_var)));
	}

IL_00e7:
	{
		AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* L_37 = V_1;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_38 = ___hintMaxLines3;
		NullCheck(L_37);
		AdaptiveText_set_HintMaxLines_mB22F1E9F5CD115AF6F676FE2153FEA4072B1D0A0(L_37, L_38, NULL);
	}

IL_00ef:
	{
		String_t* L_39 = ___language6;
		if (!L_39)
		{
			goto IL_00fb;
		}
	}
	{
		AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* L_40 = V_1;
		String_t* L_41 = ___language6;
		NullCheck(L_40);
		AdaptiveText_set_Language_mBD0FC054D11D6377C13BA982678051ACF496CC81_inline(L_40, L_41, NULL);
	}

IL_00fb:
	{
		AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* L_42 = V_1;
		ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* L_43;
		L_43 = ToastContentBuilder_AddVisualChild_mD4B2552CEFA84E47B29E5D302B2E1D38D016B08A(__this, L_42, NULL);
		return L_43;
	}
}
// Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::AddVisualChild(Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* ToastContentBuilder_AddVisualChild_mD4B2552CEFA84E47B29E5D302B2E1D38D016B08A (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, RuntimeObject* ___child0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tB917FDAB5C0640685B75339A323CB206B9FF19E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ToastContentBuilder_get_VisualChildren_m6D29F50F9DC368C805BB4D91E142769875EC1F6A(__this, NULL);
		RuntimeObject* L_1 = ___child0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild>::Add(T) */, ICollection_1_tB917FDAB5C0640685B75339A323CB206B9FF19E0_il2cpp_TypeInfo_var, L_0, L_1);
		return __this;
	}
}
// System.Int32 Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::GetCurrentTextLineCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ToastContentBuilder_GetCurrentTextLineCount_m33DF77A589035032F1DB740444F32E538833CC9A (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisIToastBindingGenericChild_t62B142C61D032F12316ED93421AC3551B04C8594_m34CF0C4D451A7FD8F57AD012BA6A932373078A31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisAdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_mED546FEC3A799AE05D036C93D47099790BFB426E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisIToastBindingGenericChild_t62B142C61D032F12316ED93421AC3551B04C8594_TisAdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_mF38CDDF389577C82716DABBEC40200579656E891_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisAdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_m21E2D9043C55C27DF4902F8E987E98DE56A3A2B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisIToastBindingGenericChild_t62B142C61D032F12316ED93421AC3551B04C8594_m70C2735BDA4025EE1DC4BC1DE274DC5B0FE4B363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDFE6EBCC622468031CFDD02E086C9810BC85D878_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2DBFBBC136F2641A7772876D924D9DECCD16C2DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m90087D4E5A3F50EFB3BB0DD0CAD225561FF92A76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetCurrentTextLineCountU3Eb__68_0_m0CD4E304C62ED1079492B14FBC508CB0E06A0514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetCurrentTextLineCountU3Eb__68_1_m2E4A6BC71E408B38B4A3FD325EDA9ABD0166E0C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetCurrentTextLineCountU3Eb__68_2_m5D423AE4EB5CA3B85D302AEC2F0151058486CF3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB1F7E5AB6F1098372EB386D2260DE883A90DB2C8* V_0 = NULL;
	AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* V_1 = NULL;
	int32_t V_2 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Func_2_tDFE6EBCC622468031CFDD02E086C9810BC85D878* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	Func_2_tDFE6EBCC622468031CFDD02E086C9810BC85D878* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	{
		RuntimeObject* L_0;
		L_0 = ToastContentBuilder_get_VisualChildren_m6D29F50F9DC368C805BB4D91E142769875EC1F6A(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var);
		Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D* L_1 = ((U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var))->___U3CU3E9__68_0_1;
		Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var);
		U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7* L_3 = ((U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D* L_4 = (Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D*)il2cpp_codegen_object_new(Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mFAA0BDDFD3BABF9D8C5316F6E74810C4B15F1BED(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CGetCurrentTextLineCountU3Eb__68_0_m0CD4E304C62ED1079492B14FBC508CB0E06A0514_RuntimeMethod_var), NULL);
		Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D* L_5 = L_4;
		((U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var))->___U3CU3E9__68_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var))->___U3CU3E9__68_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		bool L_6;
		L_6 = Enumerable_Any_TisIToastBindingGenericChild_t62B142C61D032F12316ED93421AC3551B04C8594_m34CF0C4D451A7FD8F57AD012BA6A932373078A31(G_B2_1, G_B2_0, Enumerable_Any_TisIToastBindingGenericChild_t62B142C61D032F12316ED93421AC3551B04C8594_m34CF0C4D451A7FD8F57AD012BA6A932373078A31_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_002e;
		}
	}
	{
		return 0;
	}

IL_002e:
	{
		RuntimeObject* L_7;
		L_7 = ToastContentBuilder_get_VisualChildren_m6D29F50F9DC368C805BB4D91E142769875EC1F6A(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var);
		Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D* L_8 = ((U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var))->___U3CU3E9__68_1_2;
		Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D* L_9 = L_8;
		G_B5_0 = L_9;
		G_B5_1 = L_7;
		if (L_9)
		{
			G_B6_0 = L_9;
			G_B6_1 = L_7;
			goto IL_0053;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var);
		U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7* L_10 = ((U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D* L_11 = (Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D*)il2cpp_codegen_object_new(Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Func_2__ctor_mFAA0BDDFD3BABF9D8C5316F6E74810C4B15F1BED(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CGetCurrentTextLineCountU3Eb__68_1_m2E4A6BC71E408B38B4A3FD325EDA9ABD0166E0C4_RuntimeMethod_var), NULL);
		Func_2_tFA359BF056EB037949D120EF1363A3B902010B1D* L_12 = L_11;
		((U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var))->___U3CU3E9__68_1_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var))->___U3CU3E9__68_1_2), (void*)L_12);
		G_B6_0 = L_12;
		G_B6_1 = G_B5_1;
	}

IL_0053:
	{
		RuntimeObject* L_13;
		L_13 = Enumerable_Where_TisIToastBindingGenericChild_t62B142C61D032F12316ED93421AC3551B04C8594_m70C2735BDA4025EE1DC4BC1DE274DC5B0FE4B363(G_B6_1, G_B6_0, Enumerable_Where_TisIToastBindingGenericChild_t62B142C61D032F12316ED93421AC3551B04C8594_m70C2735BDA4025EE1DC4BC1DE274DC5B0FE4B363_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var);
		Func_2_tDFE6EBCC622468031CFDD02E086C9810BC85D878* L_14 = ((U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var))->___U3CU3E9__68_2_3;
		Func_2_tDFE6EBCC622468031CFDD02E086C9810BC85D878* L_15 = L_14;
		G_B7_0 = L_15;
		G_B7_1 = L_13;
		if (L_15)
		{
			G_B8_0 = L_15;
			G_B8_1 = L_13;
			goto IL_0077;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var);
		U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7* L_16 = ((U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDFE6EBCC622468031CFDD02E086C9810BC85D878* L_17 = (Func_2_tDFE6EBCC622468031CFDD02E086C9810BC85D878*)il2cpp_codegen_object_new(Func_2_tDFE6EBCC622468031CFDD02E086C9810BC85D878_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Func_2__ctor_m4999F2FB3AA981CB7B547BC61D6256E519CA050E(L_17, L_16, (intptr_t)((void*)U3CU3Ec_U3CGetCurrentTextLineCountU3Eb__68_2_m5D423AE4EB5CA3B85D302AEC2F0151058486CF3F_RuntimeMethod_var), NULL);
		Func_2_tDFE6EBCC622468031CFDD02E086C9810BC85D878* L_18 = L_17;
		((U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var))->___U3CU3E9__68_2_3 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var))->___U3CU3E9__68_2_3), (void*)L_18);
		G_B8_0 = L_18;
		G_B8_1 = G_B7_1;
	}

IL_0077:
	{
		RuntimeObject* L_19;
		L_19 = Enumerable_Select_TisIToastBindingGenericChild_t62B142C61D032F12316ED93421AC3551B04C8594_TisAdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_mF38CDDF389577C82716DABBEC40200579656E891(G_B8_1, G_B8_0, Enumerable_Select_TisIToastBindingGenericChild_t62B142C61D032F12316ED93421AC3551B04C8594_TisAdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_mF38CDDF389577C82716DABBEC40200579656E891_RuntimeMethod_var);
		List_1_tB1F7E5AB6F1098372EB386D2260DE883A90DB2C8* L_20;
		L_20 = Enumerable_ToList_TisAdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_m21E2D9043C55C27DF4902F8E987E98DE56A3A2B5(L_19, Enumerable_ToList_TisAdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_m21E2D9043C55C27DF4902F8E987E98DE56A3A2B5_RuntimeMethod_var);
		V_0 = L_20;
		List_1_tB1F7E5AB6F1098372EB386D2260DE883A90DB2C8* L_21 = V_0;
		AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* L_22;
		L_22 = Enumerable_First_TisAdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_mED546FEC3A799AE05D036C93D47099790BFB426E(L_21, Enumerable_First_TisAdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_mED546FEC3A799AE05D036C93D47099790BFB426E_RuntimeMethod_var);
		V_1 = L_22;
		V_2 = 0;
		int32_t L_23 = V_2;
		AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* L_24 = V_1;
		NullCheck(L_24);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_25;
		L_25 = AdaptiveText_get_HintMaxLines_mC89FBAE51751A1497DF4EC147FD38B610E55CDF7_inline(L_24, NULL);
		V_3 = L_25;
		bool L_26;
		L_26 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_3), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B9_0 = L_23;
		if (L_26)
		{
			G_B10_0 = L_23;
			goto IL_009f;
		}
	}
	{
		G_B11_0 = 2;
		G_B11_1 = G_B9_0;
		goto IL_00a6;
	}

IL_009f:
	{
		int32_t L_27;
		L_27 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_3), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		G_B11_0 = L_27;
		G_B11_1 = G_B10_0;
	}

IL_00a6:
	{
		V_2 = ((int32_t)il2cpp_codegen_add(G_B11_1, G_B11_0));
		V_4 = 1;
		goto IL_00d9;
	}

IL_00ad:
	{
		List_1_tB1F7E5AB6F1098372EB386D2260DE883A90DB2C8* L_28 = V_0;
		int32_t L_29 = V_4;
		NullCheck(L_28);
		AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* L_30;
		L_30 = List_1_get_Item_m90087D4E5A3F50EFB3BB0DD0CAD225561FF92A76(L_28, L_29, List_1_get_Item_m90087D4E5A3F50EFB3BB0DD0CAD225561FF92A76_RuntimeMethod_var);
		V_1 = L_30;
		int32_t L_31 = V_2;
		AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* L_32 = V_1;
		NullCheck(L_32);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_33;
		L_33 = AdaptiveText_get_HintMaxLines_mC89FBAE51751A1497DF4EC147FD38B610E55CDF7_inline(L_32, NULL);
		V_3 = L_33;
		bool L_34;
		L_34 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_3), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B13_0 = L_31;
		if (L_34)
		{
			G_B14_0 = L_31;
			goto IL_00ca;
		}
	}
	{
		G_B15_0 = 1;
		G_B15_1 = G_B13_0;
		goto IL_00d1;
	}

IL_00ca:
	{
		int32_t L_35;
		L_35 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_3), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		G_B15_0 = L_35;
		G_B15_1 = G_B14_0;
	}

IL_00d1:
	{
		V_2 = ((int32_t)il2cpp_codegen_add(G_B15_1, G_B15_0));
		int32_t L_36 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00d9:
	{
		int32_t L_37 = V_4;
		List_1_tB1F7E5AB6F1098372EB386D2260DE883A90DB2C8* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = List_1_get_Count_m2DBFBBC136F2641A7772876D924D9DECCD16C2DB_inline(L_38, List_1_get_Count_m2DBFBBC136F2641A7772876D924D9DECCD16C2DB_RuntimeMethod_var);
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_40 = V_2;
		return L_40;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAA44D263F6FC0D986BEB9873E1EC1B63B2D2AE94 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7* L_0 = (U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7*)il2cpp_codegen_object_new(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mED62834B3F9F623ED283B1DCF46C0F77B8EE2E91(L_0, NULL);
		((U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mED62834B3F9F623ED283B1DCF46C0F77B8EE2E91 (U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder/<>c::<GetCurrentTextLineCount>b__68_0(Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetCurrentTextLineCountU3Eb__68_0_m0CD4E304C62ED1079492B14FBC508CB0E06A0514 (U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7* __this, RuntimeObject* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___c0;
		return (bool)((!(((RuntimeObject*)(AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59*)((AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59*)IsInstSealed((RuntimeObject*)L_0, AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder/<>c::<GetCurrentTextLineCount>b__68_1(Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetCurrentTextLineCountU3Eb__68_1_m2E4A6BC71E408B38B4A3FD325EDA9ABD0166E0C4 (U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7* __this, RuntimeObject* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___c0;
		return (bool)((!(((RuntimeObject*)(AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59*)((AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59*)IsInstSealed((RuntimeObject*)L_0, AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Microsoft.Toolkit.Uwp.Notifications.AdaptiveText Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder/<>c::<GetCurrentTextLineCount>b__68_2(Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* U3CU3Ec_U3CGetCurrentTextLineCountU3Eb__68_2_m5D423AE4EB5CA3B85D302AEC2F0151058486CF3F (U3CU3Ec_tD546EF041D506A6772CE1090765E8EA7595833C7* __this, RuntimeObject* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___c0;
		return ((AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59*)IsInstSealed((RuntimeObject*)L_0, AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59_il2cpp_TypeInfo_var));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IList`1<Microsoft.Toolkit.Uwp.Notifications.IToastButton> Microsoft.Toolkit.Uwp.Notifications.ToastActionsCustom::get_Buttons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ToastActionsCustom_get_Buttons_m34ADCDE3496A39F680F91D736BD501AF20D9529B (ToastActionsCustom_t26A903FAB8D31CD75527932E638EE18D9259F356* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CButtonsU3Ek__BackingField_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Toolkit.Uwp.Notifications.ToastArguments Microsoft.Toolkit.Uwp.Notifications.ToastArguments::Add(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* ToastArguments_Add_m0A1494347E979BDBC9AF56903EF893748914D9F9 (ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ToastArguments_Add_m0A1494347E979BDBC9AF56903EF893748914D9F9_RuntimeMethod_var)));
	}

IL_000e:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = __this->____dictionary_0;
		String_t* L_3 = ___key0;
		String_t* L_4 = ___value1;
		NullCheck(L_2);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_2, L_3, L_4, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		return __this;
	}
}
// System.String Microsoft.Toolkit.Uwp.Notifications.ToastArguments::Encode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToastArguments_Encode_m4B7B770826705239AD4589E516B4A0EF9A61D64A (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35FECFFF9CC241A89AB13A0D45EBC175B703DFE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral403DFD38F660ED0992488A2262C792CE8C795FE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDC79D04FD56AB43DDE179A0F468A96BAF7E44CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_0, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, _stringLiteral35FECFFF9CC241A89AB13A0D45EBC175B703DFE1, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_1, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, _stringLiteral403DFD38F660ED0992488A2262C792CE8C795FE0, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_2, _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E, _stringLiteralFDC79D04FD56AB43DDE179A0F468A96BAF7E44CF, NULL);
		return L_3;
	}
}
// System.String Microsoft.Toolkit.Uwp.Notifications.ToastArguments::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToastArguments_ToString_m7B7C99BFB36CDB22298A1AF73A52E20DDDE2CBCC (ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_m92EFE2CC5B9152F9754C353D72BAF71C5372B420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToStringU3Eb__30_0_mBB5716C54EF72C13D4E0E5DE8130F14FC80E640F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* G_B2_0 = NULL;
	ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* G_B1_0 = NULL;
	ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185_il2cpp_TypeInfo_var);
		Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* L_0 = ((U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185_il2cpp_TypeInfo_var))->___U3CU3E9__30_0_1;
		Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		G_B1_2 = _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			G_B2_2 = _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185_il2cpp_TypeInfo_var);
		U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185* L_2 = ((U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* L_3 = (Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088*)il2cpp_codegen_object_new(Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_2__ctor_m48BD5538630AB90CAACF2ADC165985AB743A6C30(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CToStringU3Eb__30_0_mBB5716C54EF72C13D4E0E5DE8130F14FC80E640F_RuntimeMethod_var), NULL);
		Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* L_4 = L_3;
		((U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185_il2cpp_TypeInfo_var))->___U3CU3E9__30_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185_il2cpp_TypeInfo_var))->___U3CU3E9__30_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0025:
	{
		RuntimeObject* L_5;
		L_5 = Enumerable_Select_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_m92EFE2CC5B9152F9754C353D72BAF71C5372B420(G_B2_1, G_B2_0, Enumerable_Select_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_m92EFE2CC5B9152F9754C353D72BAF71C5372B420_RuntimeMethod_var);
		String_t* L_6;
		L_6 = String_Join_m675422BC1927F19F7135C5211B45EE7AC9F7D632(G_B2_2, L_5, NULL);
		return L_6;
	}
}
// System.String Microsoft.Toolkit.Uwp.Notifications.ToastArguments::EncodePair(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToastArguments_EncodePair_m2F97A5F57F37311497E2C17FFEE7E84EE9007A19 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		String_t* L_0 = ___key0;
		String_t* L_1;
		L_1 = ToastArguments_Encode_m4B7B770826705239AD4589E516B4A0EF9A61D64A(L_0, NULL);
		String_t* L_2 = ___value1;
		G_B1_0 = L_1;
		if (!L_2)
		{
			G_B2_0 = L_1;
			goto IL_001b;
		}
	}
	{
		String_t* L_3 = ___value1;
		String_t* L_4;
		L_4 = ToastArguments_Encode_m4B7B770826705239AD4589E516B4A0EF9A61D64A(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E, L_4, NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_001b:
	{
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B3_1, G_B3_0, NULL);
		return L_7;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> Microsoft.Toolkit.Uwp.Notifications.ToastArguments::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ToastArguments_GetEnumerator_m22CB7529601E3E17B0C47D0D15256905CD065E8D (ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____dictionary_0;
		NullCheck(L_0);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_1;
		L_1 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_0, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator Microsoft.Toolkit.Uwp.Notifications.ToastArguments::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ToastArguments_System_Collections_IEnumerable_GetEnumerator_m0EA0797DBAEDD8BEE3211A8653C8EAB857A5B1F0 (ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ToastArguments_GetEnumerator_m22CB7529601E3E17B0C47D0D15256905CD065E8D(__this, NULL);
		return L_0;
	}
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastArguments::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastArguments__ctor_m2A3317A8D4B6185E327250F3FD49FDDE00532116 (ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->____dictionary_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dictionary_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastArguments/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFD4E95C2FFA377DC573FB41F19A6ABF733F2D451 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185* L_0 = (U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185*)il2cpp_codegen_object_new(U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m5E0E0F944FE328602E22E28BA75772C8D862434B(L_0, NULL);
		((U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastArguments/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5E0E0F944FE328602E22E28BA75772C8D862434B (U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Microsoft.Toolkit.Uwp.Notifications.ToastArguments/<>c::<ToString>b__30_0(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__30_0_mBB5716C54EF72C13D4E0E5DE8130F14FC80E640F (U3CU3Ec_t70104502619EFB1EE6CFB51432CD2DA97713C185* __this, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ___pair0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&___pair0), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		String_t* L_1;
		L_1 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&___pair0), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		String_t* L_2;
		L_2 = ToastArguments_EncodePair_m2F97A5F57F37311497E2C17FFEE7E84EE9007A19(L_0, L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IList`1<Microsoft.Toolkit.Uwp.Notifications.IToastBindingGenericChild> Microsoft.Toolkit.Uwp.Notifications.ToastBindingGeneric::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ToastBindingGeneric_get_Children_mBE57C402CD217B0CB9853F6259E8D9902D7C5904 (ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CChildrenU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastBindingGeneric::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastBindingGeneric__ctor_m8C8313EEFE0D5483814F2E88BD6F0C8E0F496881 (ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2F2C3BB3AB30788919F5405C6FD55E9FD1B6FA29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0033D22AB8FF55085C964A6C3CAEA63C3B8D6F9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t0033D22AB8FF55085C964A6C3CAEA63C3B8D6F9B* L_0 = (List_1_t0033D22AB8FF55085C964A6C3CAEA63C3B8D6F9B*)il2cpp_codegen_object_new(List_1_t0033D22AB8FF55085C964A6C3CAEA63C3B8D6F9B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m2F2C3BB3AB30788919F5405C6FD55E9FD1B6FA29(L_0, List_1__ctor_m2F2C3BB3AB30788919F5405C6FD55E9FD1B6FA29_RuntimeMethod_var);
		__this->___U3CChildrenU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CChildrenU3Ek__BackingField_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Microsoft.Toolkit.Uwp.Notifications.ToastButton::get_Arguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToastButton_get_Arguments_m586AB05D0FF8C9A326FA346064EEDE98B168F4D6 (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CArgumentsU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastButton::set_Arguments(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastButton_set_Arguments_mDA5F479C413D8B65A6647013D7A0C2C8A90CC2EF (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CArgumentsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CArgumentsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// Microsoft.Toolkit.Uwp.Notifications.ToastActivationType Microsoft.Toolkit.Uwp.Notifications.ToastButton::get_ActivationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ToastButton_get_ActivationType_m41B8D821196C89E25593A39EA64F4B239ED22083 (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CActivationTypeU3Ek__BackingField_5;
		return L_0;
	}
}
// Microsoft.Toolkit.Uwp.Notifications.ToastButton Microsoft.Toolkit.Uwp.Notifications.ToastButton::AddArgument(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* ToastButton_AddArgument_m72A4C81594CFE0088940EFE291BF9C9785B29EED (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___key0;
		String_t* L_1 = ___value1;
		ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* L_2;
		L_2 = ToastButton_AddArgumentHelper_mB7D0F8056E86B62ECB537E0D311F9C3B90F7E303(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// Microsoft.Toolkit.Uwp.Notifications.ToastButton Microsoft.Toolkit.Uwp.Notifications.ToastButton::AddArgumentHelper(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* ToastButton_AddArgumentHelper_mB7D0F8056E86B62ECB537E0D311F9C3B90F7E303 (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* G_B11_0 = NULL;
	ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* G_B10_0 = NULL;
	String_t* G_B12_0 = NULL;
	ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* G_B12_1 = NULL;
	{
		String_t* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ToastButton_AddArgumentHelper_mB7D0F8056E86B62ECB537E0D311F9C3B90F7E303_RuntimeMethod_var)));
	}

IL_000e:
	{
		bool L_2 = __this->____usingCustomArguments_1;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral81AE05A653023836EC528F79BD6F4DB8A7EDB144)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ToastButton_AddArgumentHelper_mB7D0F8056E86B62ECB537E0D311F9C3B90F7E303_RuntimeMethod_var)));
	}

IL_0021:
	{
		int32_t L_4;
		L_4 = ToastButton_get_ActivationType_m41B8D821196C89E25593A39EA64F4B239ED22083_inline(__this, NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0035;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9CEB5F2D9A17003A7DFEAF08F7E66A2F9D525BC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ToastButton_AddArgumentHelper_mB7D0F8056E86B62ECB537E0D311F9C3B90F7E303_RuntimeMethod_var)));
	}

IL_0035:
	{
		bool L_6 = __this->____usingDismissActivation_3;
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		bool L_7 = __this->____usingSnoozeActivation_2;
		if (!L_7)
		{
			goto IL_0050;
		}
	}

IL_0045:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB76C8231C7AF42AAD9F3EF0729FE76AFD02E93A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ToastButton_AddArgumentHelper_mB7D0F8056E86B62ECB537E0D311F9C3B90F7E303_RuntimeMethod_var)));
	}

IL_0050:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9 = __this->____arguments_0;
		String_t* L_10 = ___key0;
		NullCheck(L_9);
		bool L_11;
		L_11 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_9, L_10, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		V_0 = L_11;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12 = __this->____arguments_0;
		String_t* L_13 = ___key0;
		String_t* L_14 = ___value1;
		NullCheck(L_12);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_12, L_13, L_14, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		bool L_15 = V_0;
		G_B10_0 = __this;
		if (L_15)
		{
			G_B11_0 = __this;
			goto IL_007e;
		}
	}
	{
		String_t* L_16;
		L_16 = ToastButton_get_Arguments_m586AB05D0FF8C9A326FA346064EEDE98B168F4D6_inline(__this, NULL);
		String_t* L_17 = ___key0;
		String_t* L_18 = ___value1;
		String_t* L_19;
		L_19 = ToastButton_AddArgumentHelper_mB88AFD17678A67503D4FD158E9F199CB86FA02FB(__this, L_16, L_17, L_18, NULL);
		G_B12_0 = L_19;
		G_B12_1 = G_B10_0;
		goto IL_008a;
	}

IL_007e:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_20 = __this->____arguments_0;
		String_t* L_21;
		L_21 = ToastButton_SerializeArgumentsHelper_m9E33F2426B9A1F76B83FCACE4B0B6AF47D17EA39(__this, L_20, NULL);
		G_B12_0 = L_21;
		G_B12_1 = G_B11_0;
	}

IL_008a:
	{
		NullCheck(G_B12_1);
		ToastButton_set_Arguments_mDA5F479C413D8B65A6647013D7A0C2C8A90CC2EF_inline(G_B12_1, G_B12_0, NULL);
		return __this;
	}
}
// System.String Microsoft.Toolkit.Uwp.Notifications.ToastButton::SerializeArgumentsHelper(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToastButton_SerializeArgumentsHelper_m9E33F2426B9A1F76B83FCACE4B0B6AF47D17EA39 (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, RuntimeObject* ___arguments0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* L_0 = (ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55*)il2cpp_codegen_object_new(ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ToastArguments__ctor_m2A3317A8D4B6185E327250F3FD49FDDE00532116(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___arguments0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_003e;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_003e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002b_1;
			}

IL_000f_1:
			{
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_6;
				L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* L_7 = V_0;
				String_t* L_8;
				L_8 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_9;
				L_9 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_7);
				ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* L_10;
				L_10 = ToastArguments_Add_m0A1494347E979BDBC9AF56903EF893748914D9F9(L_7, L_8, L_9, NULL);
			}

IL_002b_1:
			{
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_003f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		ToastArguments_t3532537A94D02EDE28C40DEE0F9FA10863967F55* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		return L_14;
	}
}
// System.String Microsoft.Toolkit.Uwp.Notifications.ToastButton::AddArgumentHelper(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToastButton_AddArgumentHelper_mB88AFD17678A67503D4FD158E9F199CB86FA02FB (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, String_t* ___existing0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___key1;
		String_t* L_1 = ___value2;
		String_t* L_2;
		L_2 = ToastArguments_EncodePair_m2F97A5F57F37311497E2C17FFEE7E84EE9007A19(L_0, L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = ___existing0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_5 = V_0;
		return L_5;
	}

IL_0012:
	{
		String_t* L_6 = ___existing0;
		String_t* L_7 = V_0;
		String_t* L_8;
		L_8 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_6, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, L_7, NULL);
		return L_8;
	}
}
// System.Boolean Microsoft.Toolkit.Uwp.Notifications.ToastButton::CanAddArguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ToastButton_CanAddArguments_m5A4CA1526FB8F8A8BB3D39EF78175AA9DAD386BF (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = ToastButton_get_ActivationType_m41B8D821196C89E25593A39EA64F4B239ED22083_inline(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0023;
		}
	}
	{
		bool L_1 = __this->____usingCustomArguments_1;
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		bool L_2 = __this->____usingDismissActivation_3;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		bool L_3 = __this->____usingSnoozeActivation_2;
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
// System.Boolean Microsoft.Toolkit.Uwp.Notifications.ToastButton::ContainsArgument(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ToastButton_ContainsArgument_mE91802DB818190AA2CF06B92F974131AF3E25698 (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____arguments_0;
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_0, L_1, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Toolkit.Uwp.Notifications.ToastVisual Microsoft.Toolkit.Uwp.Notifications.ToastContent::get_Visual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* ToastContent_get_Visual_m1F9860CC3AA0EA9272D1534ECEB4A4116E230811 (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* __this, const RuntimeMethod* method) 
{
	{
		ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* L_0 = __this->___U3CVisualU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastContent::set_Visual(Microsoft.Toolkit.Uwp.Notifications.ToastVisual)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastContent_set_Visual_mCF9AE1F1C6F0AC633A78366FA449301880978C71 (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* __this, ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* ___value0, const RuntimeMethod* method) 
{
	{
		ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* L_0 = ___value0;
		__this->___U3CVisualU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVisualU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Microsoft.Toolkit.Uwp.Notifications.IToastActions Microsoft.Toolkit.Uwp.Notifications.ToastContent::get_Actions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ToastContent_get_Actions_m1D4A37EE9DDCB673F0B4B35D11F31554FCFBF6F0 (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CActionsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.String Microsoft.Toolkit.Uwp.Notifications.ToastContent::get_Launch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToastContent_get_Launch_m906AD97651DB260DCE21D63A099B87F8D9439EEE (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CLaunchU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastContent::set_Launch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastContent_set_Launch_m442B8F464B769F3D91F2DCB2E608D683C322C7CF (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CLaunchU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLaunchU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Microsoft.Toolkit.Uwp.Notifications.ToastActivationType Microsoft.Toolkit.Uwp.Notifications.ToastContent::get_ActivationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ToastContent_get_ActivationType_m1DE469921A8E9F4C67C97942B19F99F5363D2B5C (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CActivationTypeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastContent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastContent__ctor_mA7814D2ECD33410C43C88EA265C8F6637D065E8E (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___U3CAdditionalPropertiesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdditionalPropertiesU3Ek__BackingField_4), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Toolkit.Uwp.Notifications.ToastBindingGeneric Microsoft.Toolkit.Uwp.Notifications.ToastVisual::get_BindingGeneric()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7* ToastVisual_get_BindingGeneric_m128B04E58D4BDBD11A6032DABB64D7ECC201C7B3 (ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* __this, const RuntimeMethod* method) 
{
	{
		ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7* L_0 = __this->___U3CBindingGenericU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastVisual::set_BindingGeneric(Microsoft.Toolkit.Uwp.Notifications.ToastBindingGeneric)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastVisual_set_BindingGeneric_m9D1AB62C555CC6E8AA5B45B59C1E4484931D548D (ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* __this, ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7* ___value0, const RuntimeMethod* method) 
{
	{
		ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7* L_0 = ___value0;
		__this->___U3CBindingGenericU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBindingGenericU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastVisual__ctor_m9F043DA95BAE03E16D377177C1A03284F720A304 (ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Toolkit.Uwp.Notifications.Adaptive.Elements.Element_AdaptiveText::CheckMaxLinesValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Element_AdaptiveText_CheckMaxLinesValue_mC1CB9158D184FA785A59C9326A8C5BCB3432E6AF (int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29A52ED044D9801A4C9A0A3E20E79E2DB8B3F355)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Element_AdaptiveText_CheckMaxLinesValue_mC1CB9158D184FA785A59C9326A8C5BCB3432E6AF_RuntimeMethod_var)));
	}

IL_000f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* AdaptiveText_get_Text_mA05FD59657FC7DF5BC8E0CD929E1EC31CA5E9A1C_inline (AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* __this, const RuntimeMethod* method) 
{
	{
		BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* L_0 = __this->___U3CTextU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BindableString_set_RawValue_m2B6B2AFD9FE7AE40476FA466AD679A092E362F1B_inline (BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CRawValueU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRawValueU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BindableString_get_RawValue_m17C0ACCBDC33BAEF1692DE3066A6F97D2C574AC0_inline (BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CRawValueU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnumStringAttribute_get_String_m9F2563EF63047145DE43A53083F2FAF1B70FA3BD_inline (EnumStringAttribute_t62BF1AE7DE778E40A0204599F7F1DFD0C213F47A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CStringU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotificationXmlElementAttribute_set_Name_mDBB104942306373564E2818B6DB88C78871C1F73_inline (NotificationXmlElementAttribute_tC96C539D61DFD204B2355378EB170956DE4AA17E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ToastContentBuilder_set_Content_mDC20F5C0714B6DB149D207CEF85B885E3FC7B845_inline (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* ___value0, const RuntimeMethod* method) 
{
	{
		ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* L_0 = ___value0;
		__this->___U3CContentU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContentU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* ToastContentBuilder_get_Content_m37A2B857E80DA03D79E042C38138601D1D4A14F0_inline (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, const RuntimeMethod* method) 
{
	{
		ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* L_0 = __this->___U3CContentU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ToastContent_get_ActivationType_m1DE469921A8E9F4C67C97942B19F99F5363D2B5C_inline (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CActivationTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ToastContent_get_Launch_m906AD97651DB260DCE21D63A099B87F8D9439EEE_inline (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CLaunchU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ToastContent_set_Launch_m442B8F464B769F3D91F2DCB2E608D683C322C7CF_inline (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CLaunchU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLaunchU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ToastContent_get_Actions_m1D4A37EE9DDCB673F0B4B35D11F31554FCFBF6F0_inline (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CActionsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ToastActionsCustom_get_Buttons_m34ADCDE3496A39F680F91D736BD501AF20D9529B_inline (ToastActionsCustom_t26A903FAB8D31CD75527932E638EE18D9259F356* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CButtonsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* ToastContent_get_Visual_m1F9860CC3AA0EA9272D1534ECEB4A4116E230811_inline (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* __this, const RuntimeMethod* method) 
{
	{
		ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* L_0 = __this->___U3CVisualU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ToastContent_set_Visual_mCF9AE1F1C6F0AC633A78366FA449301880978C71_inline (ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5* __this, ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* ___value0, const RuntimeMethod* method) 
{
	{
		ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* L_0 = ___value0;
		__this->___U3CVisualU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVisualU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ToastVisual_set_BindingGeneric_m9D1AB62C555CC6E8AA5B45B59C1E4484931D548D_inline (ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* __this, ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7* ___value0, const RuntimeMethod* method) 
{
	{
		ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7* L_0 = ___value0;
		__this->___U3CBindingGenericU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBindingGenericU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7* ToastVisual_get_BindingGeneric_m128B04E58D4BDBD11A6032DABB64D7ECC201C7B3_inline (ToastVisual_t8F0884BBD4A61DBA70BE0F99B55FB5EC4665A85F* __this, const RuntimeMethod* method) 
{
	{
		ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7* L_0 = __this->___U3CBindingGenericU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ToastBindingGeneric_get_Children_mBE57C402CD217B0CB9853F6259E8D9902D7C5904_inline (ToastBindingGeneric_t5220BB8E7768BE492AE645EAF76052A3314AC5C7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CChildrenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdaptiveText_set_Text_mBD7A5D11A91555126FB5CA8612EDC7B14190640A_inline (AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* __this, BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* ___value0, const RuntimeMethod* method) 
{
	{
		BindableString_t959232D7148DD75EB01B3EBCE0652D2B8C260FE0* L_0 = ___value0;
		__this->___U3CTextU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdaptiveText_set_Language_mBD0FC054D11D6377C13BA982678051ACF496CC81_inline (AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CLanguageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLanguageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 AdaptiveText_get_HintMaxLines_mC89FBAE51751A1497DF4EC147FD38B610E55CDF7_inline (AdaptiveText_tFC1A00D348DD99BD23EB1295B99A3D3357E4DF59* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->____hintMaxLines_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ToastButton_get_ActivationType_m41B8D821196C89E25593A39EA64F4B239ED22083_inline (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CActivationTypeU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ToastButton_get_Arguments_m586AB05D0FF8C9A326FA346064EEDE98B168F4D6_inline (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CArgumentsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ToastButton_set_Arguments_mDA5F479C413D8B65A6647013D7A0C2C8A90CC2EF_inline (ToastButton_t3FBD7FFEE12FBA624FAC23C0C5FF80378EE2A9BF* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CArgumentsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CArgumentsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
