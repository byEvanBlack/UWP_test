#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.EventHandler`1<Microsoft.AppCenter.Channel.EnqueuingLogEventArgs>
struct EventHandler_1_tF29922C6360FCC704EAAD878A7DC28D2A0CAD8BC;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<Microsoft.AppCenter.Utils.UnhandledExceptionOccurredEventArgs>
struct EventHandler_1_t14E2B499F020236E162EE0306702A755C0D37D75;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Int64,System.Boolean>
struct Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Guid>
struct IDictionary_2_t981AC36A12919E5898BB11B63963F04A5B0475C3;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IEnumerable`1<System.Int64>
struct IEnumerable_1_t8C657FE14F31902C20E001F3F10A922428229A2F;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Microsoft.AppCenter.Analytics.Analytics
struct Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2;
// Microsoft.AppCenter.AppCenterService
struct AppCenterService_t6A4106CA2A3A180A876806C00AFDFDD57FE79137;
// Microsoft.AppCenter.Utils.ApplicationLifecycleHelper
struct ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Microsoft.AppCenter.Channel.ChannelEventArgs
struct ChannelEventArgs_t12792A7CC155DE5D9AE5C889DA102415CC67BD8E;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.AppCenter.Ingestion.Models.Device
struct Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005;
// Microsoft.AppCenter.Channel.EnqueuingLogEventArgs
struct EnqueuingLogEventArgs_t204A67251AC6BE84CF27A59F33352E6D02A4D137;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// Microsoft.AppCenter.Analytics.Ingestion.Models.EventLog
struct EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39;
// Microsoft.AppCenter.Utils.IApplicationSettings
struct IApplicationSettings_t907395EDA37063EF30129766E7B9E6616C304269;
// Microsoft.AppCenter.Channel.IChannel
struct IChannel_tE7AA1740F5C216534C9C557095552D67D8AE4C3F;
// Microsoft.AppCenter.Channel.IChannelGroup
struct IChannelGroup_t0A25437CAE06251F3B657694A9792200B4DD4B5C;
// Microsoft.AppCenter.Channel.IChannelUnit
struct IChannelUnit_t1BE3B41F16F2FB309276710C471CF51CF0E674B9;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Microsoft.AppCenter.Analytics.Channel.ISessionTracker
struct ISessionTracker_t05B3D63291EE2738B595CFBA75A90AE783F29908;
// Microsoft.AppCenter.Analytics.Channel.ISessionTrackerFactory
struct ISessionTrackerFactory_t494FCA8892A6AC2504137E99483207B95306FE9B;
// Microsoft.AppCenter.Ingestion.Models.Log
struct Log_t716EF1A690F81BB19494869650F9161B1B60E74A;
// Microsoft.AppCenter.Ingestion.Models.LogWithProperties
struct LogWithProperties_t26F7CE0BED8320D2D8DA53E3E6F9DF267140CC53;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.AppCenter.Analytics.Ingestion.Models.PageLog
struct PageLog_tA74D27A866B3271DADE0F5B42BA98F453CBFC43A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.AppCenter.Analytics.Channel.SessionTracker
struct SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// Microsoft.AppCenter.Analytics.Ingestion.Models.StartSessionLog
struct StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// Microsoft.AppCenter.Ingestion.Models.ValidationException
struct ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Microsoft.AppCenter.Analytics.Channel.SessionTracker/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t48BF34A3CE8F2BC65EFEC6E92C0B9B22A5C31579;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF29922C6360FCC704EAAD878A7DC28D2A0CAD8BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IChannelUnit_t1BE3B41F16F2FB309276710C471CF51CF0E674B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IChannel_tE7AA1740F5C216534C9C557095552D67D8AE4C3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t981AC36A12919E5898BB11B63963F04A5B0475C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISessionTrackerFactory_t494FCA8892A6AC2504137E99483207B95306FE9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISessionTracker_t05B3D63291EE2738B595CFBA75A90AE783F29908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionContext_t3D364037AC5C6C3B13C778D15BFE9F8406F5C90E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StartServiceLog_t7395E5583F8EE57EB2FC14008CB24A990475234B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass20_0_t48BF34A3CE8F2BC65EFEC6E92C0B9B22A5C31579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0423A1E4CCF2C85325537A4FE676F6E10111CF99;
IL2CPP_EXTERN_C String_t* _stringLiteral0855A707F93F1778EB5A671AC9DF857FBBFF283C;
IL2CPP_EXTERN_C String_t* _stringLiteral12469C516B4444FE8FFE4F7ACEA42C51F0C8602E;
IL2CPP_EXTERN_C String_t* _stringLiteral180524E962B283718080185FC010B46ECA2B778C;
IL2CPP_EXTERN_C String_t* _stringLiteral2BDD8A0357584CE38C7583895787333584361FC6;
IL2CPP_EXTERN_C String_t* _stringLiteral34F3F8DEB29B796BA32EF067F291CB839F1E3BDF;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral4820E8CDC32B30E1D130C11A2BF25A3E31B6997F;
IL2CPP_EXTERN_C String_t* _stringLiteral4EC3E61A2FD95429167CE7AEF1EFA1C741E4424A;
IL2CPP_EXTERN_C String_t* _stringLiteral528A796806797EE9AF538967C7C033D1270C9CFD;
IL2CPP_EXTERN_C String_t* _stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B;
IL2CPP_EXTERN_C String_t* _stringLiteral652D9AA6CC49441B610628EC3688A62A9050AD58;
IL2CPP_EXTERN_C String_t* _stringLiteral85362CA2303616341209B7806B4318CE25710888;
IL2CPP_EXTERN_C String_t* _stringLiteral8DE0CBA7BF0AAAFA4927500E94B54EAA544A2E0C;
IL2CPP_EXTERN_C String_t* _stringLiteral95834A87D74B874FA2D0E60D439038ABD10BCBB5;
IL2CPP_EXTERN_C String_t* _stringLiteral99A9CAAB454612DB5E8D8EBE22477B5395A2545B;
IL2CPP_EXTERN_C String_t* _stringLiteralBDE08731140D4C1986B360DE6A40AC103CDEDCB4;
IL2CPP_EXTERN_C String_t* _stringLiteralCD1FEE85AF3D42CE246B5ED615799B3661692CFE;
IL2CPP_EXTERN_C String_t* _stringLiteralCFBA98E3C3E7FFB3ACEDF33C32C4731C3BDDC275;
IL2CPP_EXTERN_C String_t* _stringLiteralD2F2470ADA0BDE4DC60BA748A825FF866F23194A;
IL2CPP_EXTERN_C String_t* _stringLiteralE907F8059E36E88B1DDBEB30DC8A8A280F7553DF;
IL2CPP_EXTERN_C String_t* _stringLiteralEAA8D9C3445FEBFE3701DDB0406A86D63B80BB2F;
IL2CPP_EXTERN_C String_t* _stringLiteralF6137796E2B92382519FBB7AFCDAD9DB897D2F32;
IL2CPP_EXTERN_C String_t* _stringLiteralFBDCABB33F97A5A785D294C4BC3B1CE454B245C5;
IL2CPP_EXTERN_C String_t* _stringLiteralFD37195433025D7E7C24A5B5087D54F9AD7CA5F8;
IL2CPP_EXTERN_C const RuntimeMethod* Analytics_ApplicationResumingEventHandler_mECF78F150F260848156CF17B1E721817A413C680_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Analytics_ApplicationSuspendedEventHandler_m2D44034AB46AA8B0CA2152E0AEB6788008DCFCF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_DefaultIfEmpty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8C9446E419166141499217F459A7F3A52EC0195C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m30AEA03BEE9D8371FEC35A630C4EAE4C3456892E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventLog_Validate_m49D251F7F2ED12564F06F4753F0E878E094BC872_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mD2155EEC4DF44AF1AD75AEB77DA72D350854D0F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mA4048346752BF05849998E450987EB444BE2AD63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PageLog_Validate_m366080CED55E6258382E324B653677643B9744AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SessionTracker_HandleEnqueuingLog_mC0011D4922D0B24825C32EA2B2F077658296EEDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE25E66F88273049DD76B6FA6A5C3818D2A66DFDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass20_0_U3CSetExistingSessionIdU3Eb__0_m800F01026882E3312CF72062D643BD473F3FD090_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PageLog_tA74D27A866B3271DADE0F5B42BA98F453CBFC43A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41_0_0_0_var;
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
struct U3CModuleU3E_tD41EAA0707C25AAE20A56BEF30048A125709F143 
{
};

// Microsoft.AppCenter.AppCenterService
struct AppCenterService_t6A4106CA2A3A180A876806C00AFDFDD57FE79137  : public RuntimeObject
{
	// System.Object Microsoft.AppCenter.AppCenterService::_serviceLock
	RuntimeObject* ____serviceLock_2;
	// Microsoft.AppCenter.Channel.IChannelUnit Microsoft.AppCenter.AppCenterService::<Channel>k__BackingField
	RuntimeObject* ___U3CChannelU3Ek__BackingField_3;
	// Microsoft.AppCenter.Channel.IChannelGroup Microsoft.AppCenter.AppCenterService::<ChannelGroup>k__BackingField
	RuntimeObject* ___U3CChannelGroupU3Ek__BackingField_4;
};

// Microsoft.AppCenter.Utils.ApplicationLifecycleHelper
struct ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6  : public RuntimeObject
{
	// System.EventHandler Microsoft.AppCenter.Utils.ApplicationLifecycleHelper::ApplicationSuspended
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ApplicationSuspended_0;
	// System.EventHandler Microsoft.AppCenter.Utils.ApplicationLifecycleHelper::ApplicationResuming
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ApplicationResuming_1;
	// System.EventHandler`1<Microsoft.AppCenter.Utils.UnhandledExceptionOccurredEventArgs> Microsoft.AppCenter.Utils.ApplicationLifecycleHelper::UnhandledExceptionOccurred
	EventHandler_1_t14E2B499F020236E162EE0306702A755C0D37D75* ___UnhandledExceptionOccurred_2;
};

struct ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6_StaticFields
{
	// System.Boolean Microsoft.AppCenter.Utils.ApplicationLifecycleHelper::_started
	bool ____started_3;
	// System.Boolean Microsoft.AppCenter.Utils.ApplicationLifecycleHelper::_suspended
	bool ____suspended_4;
	// Microsoft.AppCenter.Utils.ApplicationLifecycleHelper Microsoft.AppCenter.Utils.ApplicationLifecycleHelper::_instance
	ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6* ____instance_5;
};
struct Il2CppArrayBounds;

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Microsoft.AppCenter.Analytics.Channel.SessionTracker
struct SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796  : public RuntimeObject
{
	// Microsoft.AppCenter.Analytics.Channel.SessionTracker/SessionState Microsoft.AppCenter.Analytics.Channel.SessionTracker::_currentSessionState
	int32_t ____currentSessionState_0;
	// System.Boolean Microsoft.AppCenter.Analytics.Channel.SessionTracker::_isManualSessionTrackerEnabled
	bool ____isManualSessionTrackerEnabled_1;
	// Microsoft.AppCenter.Channel.IChannelUnit Microsoft.AppCenter.Analytics.Channel.SessionTracker::_channel
	RuntimeObject* ____channel_3;
	// System.Int64 Microsoft.AppCenter.Analytics.Channel.SessionTracker::_lastQueuedLogTime
	int64_t ____lastQueuedLogTime_4;
	// System.Int64 Microsoft.AppCenter.Analytics.Channel.SessionTracker::_lastResumedTime
	int64_t ____lastResumedTime_5;
	// System.Int64 Microsoft.AppCenter.Analytics.Channel.SessionTracker::_lastPausedTime
	int64_t ____lastPausedTime_6;
	// System.Object Microsoft.AppCenter.Analytics.Channel.SessionTracker::_lockObject
	RuntimeObject* ____lockObject_7;
};

struct SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796_StaticFields
{
	// System.Int64 Microsoft.AppCenter.Analytics.Channel.SessionTracker::SessionTimeout
	int64_t ___SessionTimeout_2;
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
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

// Microsoft.AppCenter.Analytics.Channel.SessionTracker/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t48BF34A3CE8F2BC65EFEC6E92C0B9B22A5C31579  : public RuntimeObject
{
	// System.Int64 Microsoft.AppCenter.Analytics.Channel.SessionTracker/<>c__DisplayClass20_0::logTime
	int64_t ___logTime_0;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;
};

struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_23;
};

// Microsoft.AppCenter.Analytics.Analytics
struct Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2  : public AppCenterService_t6A4106CA2A3A180A876806C00AFDFDD57FE79137
{
	// System.Boolean Microsoft.AppCenter.Analytics.Analytics::_isManualSessionTrackerEnabled
	bool ____isManualSessionTrackerEnabled_8;
	// Microsoft.AppCenter.Analytics.Channel.ISessionTracker Microsoft.AppCenter.Analytics.Analytics::_sessionTracker
	RuntimeObject* ____sessionTracker_9;
	// Microsoft.AppCenter.Analytics.Channel.ISessionTrackerFactory Microsoft.AppCenter.Analytics.Analytics::_sessionTrackerFactory
	RuntimeObject* ____sessionTrackerFactory_10;
};

struct Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_StaticFields
{
	// System.Object Microsoft.AppCenter.Analytics.Analytics::AnalyticsLock
	RuntimeObject* ___AnalyticsLock_6;
	// Microsoft.AppCenter.Analytics.Analytics modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.AppCenter.Analytics.Analytics::_instanceField
	Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* ____instanceField_7;
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

// Microsoft.AppCenter.Channel.ChannelEventArgs
struct ChannelEventArgs_t12792A7CC155DE5D9AE5C889DA102415CC67BD8E  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// Microsoft.AppCenter.Ingestion.Models.Log Microsoft.AppCenter.Channel.ChannelEventArgs::<Log>k__BackingField
	Log_t716EF1A690F81BB19494869650F9161B1B60E74A* ___U3CLogU3Ek__BackingField_1;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Nullable`1<System.DateTime>
struct Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value_1;
};

// System.Nullable`1<System.Guid>
struct Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Guid_t ___value_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___m_configuredTaskAwaiter_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_com
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com ___m_configuredTaskAwaiter_0;
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

// Microsoft.AppCenter.Ingestion.Models.Device
struct Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005  : public RuntimeObject
{
	// System.String Microsoft.AppCenter.Ingestion.Models.Device::<SdkName>k__BackingField
	String_t* ___U3CSdkNameU3Ek__BackingField_0;
	// System.String Microsoft.AppCenter.Ingestion.Models.Device::<SdkVersion>k__BackingField
	String_t* ___U3CSdkVersionU3Ek__BackingField_1;
	// System.String Microsoft.AppCenter.Ingestion.Models.Device::<WrapperSdkVersion>k__BackingField
	String_t* ___U3CWrapperSdkVersionU3Ek__BackingField_2;
	// System.String Microsoft.AppCenter.Ingestion.Models.Device::<WrapperSdkName>k__BackingField
	String_t* ___U3CWrapperSdkNameU3Ek__BackingField_3;
	// System.String Microsoft.AppCenter.Ingestion.Models.Device::<Model>k__BackingField
	String_t* ___U3CModelU3Ek__BackingField_4;
	// System.String Microsoft.AppCenter.Ingestion.Models.Device::<OemName>k__BackingField
	String_t* ___U3COemNameU3Ek__BackingField_5;
	// System.String Microsoft.AppCenter.Ingestion.Models.Device::<OsName>k__BackingField
	String_t* ___U3COsNameU3Ek__BackingField_6;
	// System.String Microsoft.AppCenter.Ingestion.Models.Device::<OsVersion>k__BackingField
	String_t* ___U3COsVersionU3Ek__BackingField_7;
	// System.String Microsoft.AppCenter.Ingestion.Models.Device::<OsBuild>k__BackingField
	String_t* ___U3COsBuildU3Ek__BackingField_8;
	// System.Nullable`1<System.Int32> Microsoft.AppCenter.Ingestion.Models.Device::<OsApiLevel>k__BackingField
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3COsApiLevelU3Ek__BackingField_9;
	// System.String Microsoft.AppCenter.Ingestion.Models.Device::<Locale>k__BackingField
	String_t* ___U3CLocaleU3Ek__BackingField_10;
	// System.Int32 Microsoft.AppCenter.Ingestion.Models.Device::<TimeZoneOffset>k__BackingField
	int32_t ___U3CTimeZoneOffsetU3Ek__BackingField_11;
	// System.String Microsoft.AppCenter.Ingestion.Models.Device::<ScreenSize>k__BackingField
	String_t* ___U3CScreenSizeU3Ek__BackingField_12;
	// System.String Microsoft.AppCenter.Ingestion.Models.Device::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_13;
	// System.String Microsoft.AppCenter.Ingestion.Models.Device::<CarrierName>k__BackingField
	String_t* ___U3CCarrierNameU3Ek__BackingField_14;
	// System.String Microsoft.AppCenter.Ingestion.Models.Device::<CarrierCountry>k__BackingField
	String_t* ___U3CCarrierCountryU3Ek__BackingField_15;
	// System.String Microsoft.AppCenter.Ingestion.Models.Device::<AppBuild>k__BackingField
	String_t* ___U3CAppBuildU3Ek__BackingField_16;
	// System.String Microsoft.AppCenter.Ingestion.Models.Device::<AppNamespace>k__BackingField
	String_t* ___U3CAppNamespaceU3Ek__BackingField_17;
	// System.String Microsoft.AppCenter.Ingestion.Models.Device::<LiveUpdateReleaseLabel>k__BackingField
	String_t* ___U3CLiveUpdateReleaseLabelU3Ek__BackingField_18;
	// System.String Microsoft.AppCenter.Ingestion.Models.Device::<LiveUpdateDeploymentKey>k__BackingField
	String_t* ___U3CLiveUpdateDeploymentKeyU3Ek__BackingField_19;
	// System.String Microsoft.AppCenter.Ingestion.Models.Device::<LiveUpdatePackageHash>k__BackingField
	String_t* ___U3CLiveUpdatePackageHashU3Ek__BackingField_20;
	// System.String Microsoft.AppCenter.Ingestion.Models.Device::<WrapperRuntimeVersion>k__BackingField
	String_t* ___U3CWrapperRuntimeVersionU3Ek__BackingField_21;
};

// Microsoft.AppCenter.Channel.EnqueuingLogEventArgs
struct EnqueuingLogEventArgs_t204A67251AC6BE84CF27A59F33352E6D02A4D137  : public ChannelEventArgs_t12792A7CC155DE5D9AE5C889DA102415CC67BD8E
{
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Microsoft.AppCenter.AppCenterException
struct AppCenterException_tB634D40CB28DEDD5DB0505D281398E1C085E5C6C  : public Exception_t
{
};

// Microsoft.AppCenter.Ingestion.Models.Log
struct Log_t716EF1A690F81BB19494869650F9161B1B60E74A  : public RuntimeObject
{
	// System.Nullable`1<System.DateTime> Microsoft.AppCenter.Ingestion.Models.Log::<Timestamp>k__BackingField
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___U3CTimestampU3Ek__BackingField_0;
	// System.Nullable`1<System.Guid> Microsoft.AppCenter.Ingestion.Models.Log::<Sid>k__BackingField
	Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___U3CSidU3Ek__BackingField_1;
	// System.String Microsoft.AppCenter.Ingestion.Models.Log::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_2;
	// Microsoft.AppCenter.Ingestion.Models.Device Microsoft.AppCenter.Ingestion.Models.Log::<Device>k__BackingField
	Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* ___U3CDeviceU3Ek__BackingField_3;
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

// Microsoft.AppCenter.Windows.Shared.Utils.SessionContext
struct SessionContext_t3D364037AC5C6C3B13C778D15BFE9F8406F5C90E  : public RuntimeObject
{
};

struct SessionContext_t3D364037AC5C6C3B13C778D15BFE9F8406F5C90E_StaticFields
{
	// System.Nullable`1<System.Guid> Microsoft.AppCenter.Windows.Shared.Utils.SessionContext::<SessionId>k__BackingField
	Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___U3CSessionIdU3Ek__BackingField_0;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.EventHandler`1<Microsoft.AppCenter.Channel.EnqueuingLogEventArgs>
struct EventHandler_1_tF29922C6360FCC704EAAD878A7DC28D2A0CAD8BC  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int64,System.Boolean>
struct Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710  : public MulticastDelegate_t
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// Microsoft.AppCenter.Ingestion.IngestionException
struct IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA  : public AppCenterException_tB634D40CB28DEDD5DB0505D281398E1C085E5C6C
{
};

// Microsoft.AppCenter.Ingestion.Models.LogWithProperties
struct LogWithProperties_t26F7CE0BED8320D2D8DA53E3E6F9DF267140CC53  : public Log_t716EF1A690F81BB19494869650F9161B1B60E74A
{
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Microsoft.AppCenter.Ingestion.Models.LogWithProperties::<Properties>k__BackingField
	RuntimeObject* ___U3CPropertiesU3Ek__BackingField_4;
};

// Microsoft.AppCenter.Ingestion.Models.StartServiceLog
struct StartServiceLog_t7395E5583F8EE57EB2FC14008CB24A990475234B  : public Log_t716EF1A690F81BB19494869650F9161B1B60E74A
{
	// System.Collections.Generic.IList`1<System.String> Microsoft.AppCenter.Ingestion.Models.StartServiceLog::<Services>k__BackingField
	RuntimeObject* ___U3CServicesU3Ek__BackingField_5;
};

// Microsoft.AppCenter.Analytics.Ingestion.Models.StartSessionLog
struct StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41  : public Log_t716EF1A690F81BB19494869650F9161B1B60E74A
{
};

struct StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41_StaticFields
{
	// Microsoft.AppCenter.Analytics.Ingestion.Models.StartSessionLog Microsoft.AppCenter.Analytics.Ingestion.Models.StartSessionLog::Empty
	StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41* ___Empty_4;
};

// Microsoft.AppCenter.Analytics.Ingestion.Models.EventLog
struct EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39  : public LogWithProperties_t26F7CE0BED8320D2D8DA53E3E6F9DF267140CC53
{
	// System.Guid Microsoft.AppCenter.Analytics.Ingestion.Models.EventLog::<Id>k__BackingField
	Guid_t ___U3CIdU3Ek__BackingField_6;
	// System.String Microsoft.AppCenter.Analytics.Ingestion.Models.EventLog::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
};

// Microsoft.AppCenter.Analytics.Ingestion.Models.PageLog
struct PageLog_tA74D27A866B3271DADE0F5B42BA98F453CBFC43A  : public LogWithProperties_t26F7CE0BED8320D2D8DA53E3E6F9DF267140CC53
{
	// System.String Microsoft.AppCenter.Analytics.Ingestion.Models.PageLog::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_6;
};

// Microsoft.AppCenter.Ingestion.Models.ValidationException
struct ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04  : public IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Boolean>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE25E66F88273049DD76B6FA6A5C3818D2A66DFDD_gshared (bool ___result0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Object>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_gshared (RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_gshared_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Guid>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mD2155EEC4DF44AF1AD75AEB77DA72D350854D0F2_gshared (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7* __this, Guid_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Guid>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mA4048346752BF05849998E450987EB444BE2AD63_gshared_inline (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.DateTime>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_gshared (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Int64,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m276D55CC96E6D1F90AE79C2CDA8D6AFBC6D52B07_gshared (Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Int64>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m30AEA03BEE9D8371FEC35A630C4EAE4C3456892E_gshared (RuntimeObject* ___source0, Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710* ___predicate1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DefaultIfEmpty<System.Int64>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_DefaultIfEmpty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8C9446E419166141499217F459A7F3A52EC0195C_gshared (RuntimeObject* ___source0, int64_t ___defaultValue1, const RuntimeMethod* method) ;

// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Analytics.Analytics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics__ctor_m1507744CCE19ADBDDD3E532ED1C06C43629C2920 (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Analytics.Analytics Microsoft.AppCenter.Analytics.Analytics::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791 (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Boolean>(TResult)
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE25E66F88273049DD76B6FA6A5C3818D2A66DFDD (bool ___result0, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (bool, const RuntimeMethod*))Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE25E66F88273049DD76B6FA6A5C3818D2A66DFDD_gshared)(___result0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Object>(TResult)
inline Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A (RuntimeObject* ___result0, const RuntimeMethod* method)
{
	return ((  Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* (*) (RuntimeObject*, const RuntimeMethod*))Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_gshared)(___result0, method);
}
// System.Void Microsoft.AppCenter.Analytics.Analytics::InstanceTrackEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_InstanceTrackEvent_mC18E2FA7E61CBAC51FB1CC9B059F1D12E6A0AD6B (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, String_t* ___name0, RuntimeObject* ___properties1, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Channel.IChannelUnit Microsoft.AppCenter.AppCenterService::get_Channel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AppCenterService_get_Channel_m358DB52C8BD527A727B0DFBA9B2770965A032460_inline (AppCenterService_t6A4106CA2A3A180A876806C00AFDFDD57FE79137* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.AppCenterLog::Error(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterLog_Error_m60340BFEB8373A6B92D26FF91D12ACF471A576BE (String_t* ___tag0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.AppCenterService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterService__ctor_mF1D31CCDB4A3A7FAA35EF697F1018515DCCB93D5 (AppCenterService_t6A4106CA2A3A180A876806C00AFDFDD57FE79137* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Serialization.LogSerializer::AddLogType(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogSerializer_AddLogType_m534C8EB59FFFCC67625424F9E654020D80C990AF (String_t* ___typeName0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.AppCenter.AppCenterService::get_InstanceEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppCenterService_get_InstanceEnabled_m2386ADBF92CCE600A86BBC5AE56435E81D2F5C61 (AppCenterService_t6A4106CA2A3A180A876806C00AFDFDD57FE79137* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.AppCenterService::set_InstanceEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterService_set_InstanceEnabled_mFFD9DF384D69EE6E43222B40E9B09DA8526E575B (AppCenterService_t6A4106CA2A3A180A876806C00AFDFDD57FE79137* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Analytics.Analytics::ApplyEnabledState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_ApplyEnabledState_m1BD9572F5EBFD8FEF0957D130D2E6A4AB2B27B22 (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, bool ___enabled0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.AppCenter.AppCenterService::get_IsInactive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppCenterService_get_IsInactive_mF5B899E1080E38974E1634A4A79C2F8E670C8959 (AppCenterService_t6A4106CA2A3A180A876806C00AFDFDD57FE79137* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.AppCenter.Analytics.Analytics::ValidateName(System.String&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Analytics_ValidateName_mE3600685B0B6F860CA7DC1962B4AB21DE377447C (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, String_t** ___name0, String_t* ___logType1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Microsoft.AppCenter.Windows.Shared.Utils.PropertyValidator::ValidateProperties(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyValidator_ValidateProperties_m354FB2E983C6FFBB7265FB2EDAD8BA4461ADDA5E (RuntimeObject* ___properties0, String_t* ___logName1, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Analytics.Ingestion.Models.EventLog::.ctor(Microsoft.AppCenter.Ingestion.Models.Device,System.Guid,System.String,System.Nullable`1<System.DateTime>,System.Nullable`1<System.Guid>,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventLog__ctor_mFB641A5C58E529537A9582EA9006A1A7332A8CB6 (EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39* __this, Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* ___device0, Guid_t ___id1, String_t* ___name2, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___timestamp3, Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___sid4, String_t* ___userId5, RuntimeObject* ___properties6, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.AppCenterService::OnChannelGroupReady(Microsoft.AppCenter.Channel.IChannelGroup,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterService_OnChannelGroupReady_mD9200E27F4A397823EE405CC9C4EF5620A8A5FE7 (AppCenterService_t6A4106CA2A3A180A876806C00AFDFDD57FE79137* __this, RuntimeObject* ___channelGroup0, String_t* ___appSecret1, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Channel.IChannelGroup Microsoft.AppCenter.AppCenterService::get_ChannelGroup()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AppCenterService_get_ChannelGroup_mA67F9241E38C70D331220F9D19EC6A339F583817_inline (AppCenterService_t6A4106CA2A3A180A876806C00AFDFDD57FE79137* __this, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Analytics.Channel.ISessionTracker Microsoft.AppCenter.Analytics.Analytics::CreateSessionTracker(Microsoft.AppCenter.Channel.IChannelGroup,Microsoft.AppCenter.Channel.IChannelUnit,Microsoft.AppCenter.Utils.IApplicationSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Analytics_CreateSessionTracker_m114A9DAE60095364F06D0B10A093FB1E657FC71C (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, RuntimeObject* ___channelGroup0, RuntimeObject* ___channel1, RuntimeObject* ___applicationSettings2, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Utils.ApplicationLifecycleHelper Microsoft.AppCenter.Utils.ApplicationLifecycleHelper::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6* ApplicationLifecycleHelper_get_Instance_m9B140A39867B1D9F81C70DD0B6F8E5D7D662A25C (const RuntimeMethod* method) ;
// System.Boolean Microsoft.AppCenter.Utils.ApplicationLifecycleHelper::get_IsSuspended()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ApplicationLifecycleHelper_get_IsSuspended_m117B92B2916006FA2BA28530FDF84C00E4D270B2_inline (ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Analytics.Analytics::SubscribeToApplicationLifecycleEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_SubscribeToApplicationLifecycleEvents_m2A04E54B5436F32228358562299734243D1680E2 (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Analytics.Analytics::UnsubscribeFromApplicationLifecycleEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_UnsubscribeFromApplicationLifecycleEvents_m148ACDFF875CDD3CF6F091B0F5130A4E0380A33B (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Analytics.Channel.SessionTracker::.ctor(Microsoft.AppCenter.Channel.IChannel,Microsoft.AppCenter.Channel.IChannelUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTracker__ctor_mFE2DDE2CCABD2E52F9038133BCF3053F223BB5AC (SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796* __this, RuntimeObject* ___channelGroup0, RuntimeObject* ___channel1, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.AppCenterLog::Warn(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterLog_Warn_m3FFB62B826353B1FDF29BE9769D5518B1AEA869C (String_t* ___tag0, String_t* ___message1, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Utils.ApplicationLifecycleHelper::add_ApplicationResuming(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationLifecycleHelper_add_ApplicationResuming_m3DB811B4CBAB3A4AE69015E5EBDD715B143E8051 (ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Utils.ApplicationLifecycleHelper::add_ApplicationSuspended(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationLifecycleHelper_add_ApplicationSuspended_m563BE45D61F98EB165CE5B22738D067BC32398EB (ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Utils.ApplicationLifecycleHelper::remove_ApplicationResuming(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationLifecycleHelper_remove_ApplicationResuming_m37A0503509FEB8A039BC1AE5DBF75941BB22DA49 (ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Utils.ApplicationLifecycleHelper::remove_ApplicationSuspended(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationLifecycleHelper_remove_ApplicationSuspended_mCE7245E7848E2B19B32EE2586E0B8A0A639B2D4D (ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.LogWithProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogWithProperties__ctor_m9B9132D00D83D2282F1E7A28FC94A83CF5AF14B9 (LogWithProperties_t26F7CE0BED8320D2D8DA53E3E6F9DF267140CC53* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.LogWithProperties::.ctor(Microsoft.AppCenter.Ingestion.Models.Device,System.Nullable`1<System.DateTime>,System.Nullable`1<System.Guid>,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogWithProperties__ctor_m3E5D45C556CE93F80AEA01ED7D6D1D20C3422892 (LogWithProperties_t26F7CE0BED8320D2D8DA53E3E6F9DF267140CC53* __this, Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* ___device0, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___timestamp1, Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___sid2, String_t* ___userId3, RuntimeObject* ___properties4, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Analytics.Ingestion.Models.EventLog::set_Id(System.Guid)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventLog_set_Id_m98A62A81B4E865F9CF22D13B36524EF1AD4DDD10_inline (EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39* __this, Guid_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Analytics.Ingestion.Models.EventLog::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventLog_set_Name_m91FBD5B5B04AE84F08AF6CAF9B525649E81B1C6F_inline (EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.LogWithProperties::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogWithProperties_Validate_mA739EC9EF3AFF0FD008027EA12F822D04AAA9AA7 (LogWithProperties_t26F7CE0BED8320D2D8DA53E3E6F9DF267140CC53* __this, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Analytics.Ingestion.Models.EventLog::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EventLog_get_Name_mB94DF05814A11B2C1B11535178B11FA7FDD01E94_inline (EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.ValidationException::.ctor(Microsoft.AppCenter.Ingestion.Models.ValidationException/Rule,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationException__ctor_m8044FBF3F2AA8CEC98A9337B4650778C806F3CA0 (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* __this, int32_t ___validationRule0, String_t* ___propertyName1, RuntimeObject* ___detail2, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Analytics.Ingestion.Models.PageLog::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PageLog_set_Name_mDC3F0EAF6308AEC3F1F5DCC9BC67D4E76CC5EB16_inline (PageLog_tA74D27A866B3271DADE0F5B42BA98F453CBFC43A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Analytics.Ingestion.Models.PageLog::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PageLog_get_Name_mA874FF7D3AA9D8A6B991AD068D1E2009B52B180D_inline (PageLog_tA74D27A866B3271DADE0F5B42BA98F453CBFC43A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Log::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__ctor_m16C3520A27BD6A7683E73E66EE461E81675E6491 (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Log::.ctor(Microsoft.AppCenter.Ingestion.Models.Device,System.Nullable`1<System.DateTime>,System.Nullable`1<System.Guid>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__ctor_m9D3FC8BB1D9E05127350E0CD33CE73C480C13BB6 (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* ___device0, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___timestamp1, Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___sid2, String_t* ___userId3, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Log::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Validate_m06947D5D6A4DEB54521430A714CCBB83C567BA31 (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Analytics.Ingestion.Models.StartSessionLog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSessionLog__ctor_mA084CC3D2C8C1BE9F51F571963E55345C28880A0 (StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Microsoft.AppCenter.Channel.EnqueuingLogEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m2A7F65CD736B36E74FE224686CD150DFA0FBB08B (EventHandler_1_tF29922C6360FCC704EAAD878A7DC28D2A0CAD8BC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF29922C6360FCC704EAAD878A7DC28D2A0CAD8BC*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.AppCenter.AppCenterLog::Debug(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterLog_Debug_m6A8FFE98A198F03A211EC3DB1C1F7ED3063E216D (String_t* ___tag0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Int64 Microsoft.AppCenter.Utils.TimeHelper::CurrentTimeInMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TimeHelper_CurrentTimeInMilliseconds_m501FBA154C248378BC7567F672F5156C75AC9245 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Analytics.Channel.SessionTracker::SendStartSessionIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTracker_SendStartSessionIfNeeded_m52A26E704DFEDADA97014BCE73592DDAD87B1438 (SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Windows.Shared.Utils.SessionContext::set_SessionId(System.Nullable`1<System.Guid>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionContext_set_SessionId_m5E7393F47DF1938F8E6A3AC00EFCAD1BF6E4AD6D_inline (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___value0, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Ingestion.Models.Log Microsoft.AppCenter.Channel.ChannelEventArgs::get_Log()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Log_t716EF1A690F81BB19494869650F9161B1B60E74A* ChannelEventArgs_get_Log_m3ED7BBB14A6FB9D99B8EF2E48FA22056FE7849DD_inline (ChannelEventArgs_t12792A7CC155DE5D9AE5C889DA102415CC67BD8E* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.DateTime> Microsoft.AppCenter.Ingestion.Models.Log::get_Timestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC Log_get_Timestamp_m9ED5E25A3D1F03D3DAFD039B76D7C333F1BCAB49_inline (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
inline bool Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC*, const RuntimeMethod*))Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_gshared_inline)(__this, method);
}
// System.Nullable`1<System.Guid> Microsoft.AppCenter.Windows.Shared.Utils.SessionContext::get_SessionId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 SessionContext_get_SessionId_m255DF493A86838D8658FAC9B943F49BDF1962990_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Log::set_Sid(System.Nullable`1<System.Guid>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Log_set_Sid_m84495D0B7FAFB7D41C3DD1AFF5DB8E9D8F553F80_inline (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Analytics.Channel.SessionTracker::SendStartSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTracker_SendStartSession_m648E05714E8FF4FEFB353F139EA71F402E03ACEF (SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Guid>::.ctor(T)
inline void Nullable_1__ctor_mD2155EEC4DF44AF1AD75AEB77DA72D350854D0F2 (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7* __this, Guid_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7*, Guid_t, const RuntimeMethod*))Nullable_1__ctor_mD2155EEC4DF44AF1AD75AEB77DA72D350854D0F2_gshared)(__this, ___value0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Guid>::get_HasValue()
inline bool Nullable_1_get_HasValue_mA4048346752BF05849998E450987EB444BE2AD63_inline (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7*, const RuntimeMethod*))Nullable_1_get_HasValue_mA4048346752BF05849998E450987EB444BE2AD63_gshared_inline)(__this, method);
}
// System.Boolean Microsoft.AppCenter.Analytics.Channel.SessionTracker::HasSessionTimedOut(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SessionTracker_HasSessionTimedOut_m3D8C540098DECAF42BCFFD913FB375929F7A5499 (SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796* __this, int64_t ___now0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.AppCenter.Analytics.Channel.SessionTracker::HasSessionTimedOut(System.Int64,System.Int64,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SessionTracker_HasSessionTimedOut_mC0BAEAB195D4B80E2BC79F44797E103C95E05919 (int64_t ___now0, int64_t ___lastQueuedLogTime1, int64_t ___lastResumedTime2, int64_t ___lastPausedTime3, const RuntimeMethod* method) ;
// System.Int64 System.Math::Max(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Math_Max_mA040C488C0D1F062F109992835E8498A7D24EFA5 (int64_t ___val10, int64_t ___val21, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Analytics.Channel.SessionTracker/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m67A2F6A4B6BDECF67D830643ABAAFC38AC0AA3FE (U3CU3Ec__DisplayClass20_0_t48BF34A3CE8F2BC65EFEC6E92C0B9B22A5C31579* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.DateTime>::get_Value()
inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991 (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method)
{
	return ((  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D (*) (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC*, const RuntimeMethod*))Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_gshared)(__this, method);
}
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Int64,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m276D55CC96E6D1F90AE79C2CDA8D6AFBC6D52B07 (Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m276D55CC96E6D1F90AE79C2CDA8D6AFBC6D52B07_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Int64>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m30AEA03BEE9D8371FEC35A630C4EAE4C3456892E (RuntimeObject* ___source0, Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710*, const RuntimeMethod*))Enumerable_Where_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m30AEA03BEE9D8371FEC35A630C4EAE4C3456892E_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DefaultIfEmpty<System.Int64>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline RuntimeObject* Enumerable_DefaultIfEmpty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8C9446E419166141499217F459A7F3A52EC0195C (RuntimeObject* ___source0, int64_t ___defaultValue1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int64_t, const RuntimeMethod*))Enumerable_DefaultIfEmpty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8C9446E419166141499217F459A7F3A52EC0195C_gshared)(___source0, ___defaultValue1, method);
}
// System.Int64 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Enumerable_Max_m154657ABEF9998CECD42D3489135364EA2C5843D (RuntimeObject* ___source0, const RuntimeMethod* method) ;
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
// Microsoft.AppCenter.Analytics.Analytics Microsoft.AppCenter.Analytics.Analytics::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* V_2 = NULL;
	Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* G_B5_0 = NULL;
	Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* G_B4_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_0 = ((Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var))->____instanceField_7;
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_1 = ((Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var))->____instanceField_7;
		il2cpp_codegen_memory_barrier();
		return L_1;
	}

IL_0011:
	{
		il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var))->___AnalyticsLock_6;
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_0045;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_4, NULL);
				}

IL_0045:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_5 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_5, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_6 = ((Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var))->____instanceField_7;
				il2cpp_codegen_memory_barrier();
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_7 = L_6;
				G_B4_0 = L_7;
				if (L_7)
				{
					G_B5_0 = L_7;
					goto IL_0039_1;
				}
			}
			{
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_8 = (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2*)il2cpp_codegen_object_new(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
				NullCheck(L_8);
				Analytics__ctor_m1507744CCE19ADBDDD3E532ED1C06C43629C2920(L_8, NULL);
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_9 = L_8;
				il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
				il2cpp_codegen_memory_barrier();
				((Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var))->____instanceField_7 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&((Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var))->____instanceField_7), (void*)L_9);
				G_B5_0 = L_9;
			}

IL_0039_1:
			{
				V_2 = G_B5_0;
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_10 = V_2;
		return L_10;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Analytics::set_Instance(Microsoft.AppCenter.Analytics.Analytics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_set_Instance_mDF2D47DEB53A59A550FF3A5643B8FC1F276D5228 (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var))->___AnalyticsLock_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0023;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0023:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_4 = ___value0;
			il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
			il2cpp_codegen_memory_barrier();
			((Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var))->____instanceField_7 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&((Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var))->____instanceField_7), (void*)L_4);
			goto IL_0024;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0024:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.AppCenter.Analytics.Analytics::IsEnabledAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Analytics_IsEnabledAsync_m7D62590CF72C8240C1500B392B3D11C044D4B149 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE25E66F88273049DD76B6FA6A5C3818D2A66DFDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var))->___AnalyticsLock_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0022:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002b;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_002b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
			Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_4;
			L_4 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
			NullCheck(L_4);
			bool L_5;
			L_5 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean Microsoft.AppCenter.AppCenterService::get_InstanceEnabled() */, L_4);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6;
			L_6 = Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE25E66F88273049DD76B6FA6A5C3818D2A66DFDD(L_5, Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE25E66F88273049DD76B6FA6A5C3818D2A66DFDD_RuntimeMethod_var);
			V_2 = L_6;
			goto IL_002c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002c:
	{
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_7 = V_2;
		return L_7;
	}
}
// System.Threading.Tasks.Task Microsoft.AppCenter.Analytics.Analytics::SetEnabledAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Analytics_SetEnabledAsync_m3B261BAB2A94CB53CEF71D2843D3A9B47946820E (bool ___enabled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var))->___AnalyticsLock_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
			Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_4;
			L_4 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
			bool L_5 = ___enabled0;
			NullCheck(L_4);
			VirtualActionInvoker1< bool >::Invoke(18 /* System.Void Microsoft.AppCenter.AppCenterService::set_InstanceEnabled(System.Boolean) */, L_4, L_5);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_6;
			L_6 = Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A(NULL, Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_RuntimeMethod_var);
			V_2 = L_6;
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7 = V_2;
		return L_7;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Analytics::TrackEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_TrackEvent_m4E8DDFD9E51898BD0DC7A2D7817BE40DB108F76D (String_t* ___name0, RuntimeObject* ___properties1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var))->___AnalyticsLock_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001e:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0027;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0027:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
			Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_4;
			L_4 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
			String_t* L_5 = ___name0;
			RuntimeObject* L_6 = ___properties1;
			NullCheck(L_4);
			Analytics_InstanceTrackEvent_mC18E2FA7E61CBAC51FB1CC9B059F1D12E6A0AD6B(L_4, L_5, L_6, NULL);
			goto IL_0028;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0028:
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Analytics::EnableManualSessionTracker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_EnableManualSessionTracker_m8A1C3448450FD95FA87EE106E604584A680CAC36 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISessionTracker_t05B3D63291EE2738B595CFBA75A90AE783F29908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBDCABB33F97A5A785D294C4BC3B1CE454B245C5);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var))->___AnalyticsLock_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005c:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0065;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0065:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_4;
				L_4 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = AppCenterService_get_Channel_m358DB52C8BD527A727B0DFBA9B2770965A032460_inline(L_4, NULL);
				if (!L_5)
				{
					goto IL_0032_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_6;
				L_6 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
				NullCheck(L_6);
				String_t* L_7;
				L_7 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String Microsoft.AppCenter.AppCenterService::get_LogTag() */, L_6);
				il2cpp_codegen_runtime_class_init_inline(AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
				AppCenterLog_Error_m60340BFEB8373A6B92D26FF91D12ACF471A576BE(L_7, _stringLiteralFBDCABB33F97A5A785D294C4BC3B1CE454B245C5, NULL);
				goto IL_0066;
			}

IL_0032_1:
			{
				il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_8;
				L_8 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
				NullCheck(L_8);
				RuntimeObject* L_9 = L_8->____sessionTracker_9;
				if (L_9)
				{
					goto IL_004b_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_10;
				L_10 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
				NullCheck(L_10);
				L_10->____isManualSessionTrackerEnabled_8 = (bool)1;
				goto IL_0066;
			}

IL_004b_1:
			{
				il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_11;
				L_11 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
				NullCheck(L_11);
				RuntimeObject* L_12 = L_11->____sessionTracker_9;
				NullCheck(L_12);
				InterfaceActionInvoker0::Invoke(3 /* System.Void Microsoft.AppCenter.Analytics.Channel.ISessionTracker::EnableManualSessionTracker() */, ISessionTracker_t05B3D63291EE2738B595CFBA75A90AE783F29908_il2cpp_TypeInfo_var, L_12);
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Analytics::StartSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_StartSession_mD1634F4C9DBC5E571117CCA7854D0EE764FED7BC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISessionTracker_t05B3D63291EE2738B595CFBA75A90AE783F29908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6137796E2B92382519FBB7AFCDAD9DB897D2F32);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var))->___AnalyticsLock_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0043:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_004c;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_004c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_4;
				L_4 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
				NullCheck(L_4);
				RuntimeObject* L_5 = L_4->____sessionTracker_9;
				if (L_5)
				{
					goto IL_0032_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_6;
				L_6 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
				NullCheck(L_6);
				String_t* L_7;
				L_7 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String Microsoft.AppCenter.AppCenterService::get_LogTag() */, L_6);
				il2cpp_codegen_runtime_class_init_inline(AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
				AppCenterLog_Error_m60340BFEB8373A6B92D26FF91D12ACF471A576BE(L_7, _stringLiteralF6137796E2B92382519FBB7AFCDAD9DB897D2F32, NULL);
				goto IL_004d;
			}

IL_0032_1:
			{
				il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_8;
				L_8 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
				NullCheck(L_8);
				RuntimeObject* L_9 = L_8->____sessionTracker_9;
				NullCheck(L_9);
				InterfaceActionInvoker0::Invoke(4 /* System.Void Microsoft.AppCenter.Analytics.Channel.ISessionTracker::StartSession() */, ISessionTracker_t05B3D63291EE2738B595CFBA75A90AE783F29908_il2cpp_TypeInfo_var, L_9);
				goto IL_004d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Analytics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics__ctor_m1507744CCE19ADBDDD3E532ED1C06C43629C2920 (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageLog_tA74D27A866B3271DADE0F5B42BA98F453CBFC43A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4820E8CDC32B30E1D130C11A2BF25A3E31B6997F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95834A87D74B874FA2D0E60D439038ABD10BCBB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAA8D9C3445FEBFE3701DDB0406A86D63B80BB2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		AppCenterService__ctor_mF1D31CCDB4A3A7FAA35EF697F1018515DCCB93D5(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (PageLog_tA74D27A866B3271DADE0F5B42BA98F453CBFC43A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var);
		LogSerializer_AddLogType_m534C8EB59FFFCC67625424F9E654020D80C990AF(_stringLiteral95834A87D74B874FA2D0E60D439038ABD10BCBB5, L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		LogSerializer_AddLogType_m534C8EB59FFFCC67625424F9E654020D80C990AF(_stringLiteralEAA8D9C3445FEBFE3701DDB0406A86D63B80BB2F, L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41_0_0_0_var) };
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		LogSerializer_AddLogType_m534C8EB59FFFCC67625424F9E654020D80C990AF(_stringLiteral4820E8CDC32B30E1D130C11A2BF25A3E31B6997F, L_5, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Analytics::.ctor(Microsoft.AppCenter.Analytics.Channel.ISessionTrackerFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics__ctor_mE40D4D569FB39C3670ECE6DD791BE214F002408F (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, RuntimeObject* ___sessionTrackerFactory0, const RuntimeMethod* method) 
{
	{
		Analytics__ctor_m1507744CCE19ADBDDD3E532ED1C06C43629C2920(__this, NULL);
		RuntimeObject* L_0 = ___sessionTrackerFactory0;
		__this->____sessionTrackerFactory_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sessionTrackerFactory_10), (void*)L_0);
		return;
	}
}
// System.Boolean Microsoft.AppCenter.Analytics.Analytics::get_InstanceEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Analytics_get_InstanceEnabled_m7BCB666350EA6E0AC7C1A9E28B3280AF2DAFE304 (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = AppCenterService_get_InstanceEnabled_m2386ADBF92CCE600A86BBC5AE56435E81D2F5C61(__this, NULL);
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Analytics::set_InstanceEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_set_InstanceEnabled_m7B86BDC70B9F3FE447BB7D4B71ABCA7EC8D54E6D (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, bool ___value0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ((AppCenterService_t6A4106CA2A3A180A876806C00AFDFDD57FE79137*)__this)->____serviceLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0035;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0035:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				bool L_4;
				L_4 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean Microsoft.AppCenter.AppCenterService::get_InstanceEnabled() */, __this);
				V_2 = L_4;
				bool L_5 = ___value0;
				AppCenterService_set_InstanceEnabled_mFFD9DF384D69EE6E43222B40E9B09DA8526E575B(__this, L_5, NULL);
				bool L_6 = ___value0;
				bool L_7 = V_2;
				if ((((int32_t)L_6) == ((int32_t)L_7)))
				{
					goto IL_002a_1;
				}
			}
			{
				bool L_8 = ___value0;
				Analytics_ApplyEnabledState_m1BD9572F5EBFD8FEF0957D130D2E6A4AB2B27B22(__this, L_8, NULL);
			}

IL_002a_1:
			{
				goto IL_0036;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0036:
	{
		return;
	}
}
// System.String Microsoft.AppCenter.Analytics.Analytics::get_ChannelName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Analytics_get_ChannelName_m9C7D8D4316E33A8AA190B18C70971376421EE594 (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DE0CBA7BF0AAAFA4927500E94B54EAA544A2E0C);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral8DE0CBA7BF0AAAFA4927500E94B54EAA544A2E0C;
	}
}
// System.String Microsoft.AppCenter.Analytics.Analytics::get_ServiceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Analytics_get_ServiceName_mC20A61D3E0FFCCD278DD6A18284ACED4592065A6 (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD1FEE85AF3D42CE246B5ED615799B3661692CFE);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralCD1FEE85AF3D42CE246B5ED615799B3661692CFE;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Analytics::InstanceTrackEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_InstanceTrackEvent_mC18E2FA7E61CBAC51FB1CC9B059F1D12E6A0AD6B (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, String_t* ___name0, RuntimeObject* ___properties1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelUnit_t1BE3B41F16F2FB309276710C471CF51CF0E674B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral528A796806797EE9AF538967C7C033D1270C9CFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99A9CAAB454612DB5E8D8EBE22477B5395A2545B);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39* V_2 = NULL;
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		RuntimeObject* L_0 = ((AppCenterService_t6A4106CA2A3A180A876806C00AFDFDD57FE79137*)__this)->____serviceLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_007c;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_007c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				bool L_4;
				L_4 = AppCenterService_get_IsInactive_mF5B899E1080E38974E1634A4A79C2F8E670C8959(__this, NULL);
				if (!L_4)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_007d;
			}

IL_001b_1:
			{
				bool L_5;
				L_5 = Analytics_ValidateName_mE3600685B0B6F860CA7DC1962B4AB21DE377447C(__this, (&___name0), _stringLiteral99A9CAAB454612DB5E8D8EBE22477B5395A2545B, NULL);
				if (!L_5)
				{
					goto IL_0071_1;
				}
			}
			{
				RuntimeObject* L_6 = ___properties1;
				String_t* L_7 = ___name0;
				String_t* L_8;
				L_8 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral528A796806797EE9AF538967C7C033D1270C9CFD, L_7, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
				RuntimeObject* L_9;
				L_9 = PropertyValidator_ValidateProperties_m354FB2E983C6FFBB7265FB2EDAD8BA4461ADDA5E(L_6, L_8, NULL);
				___properties1 = L_9;
				Guid_t L_10;
				L_10 = Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903(NULL);
				String_t* L_11 = ___name0;
				il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC));
				Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_12 = V_3;
				il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7));
				Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_13 = V_4;
				RuntimeObject* L_14 = ___properties1;
				EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39* L_15 = (EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39*)il2cpp_codegen_object_new(EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39_il2cpp_TypeInfo_var);
				NullCheck(L_15);
				EventLog__ctor_mFB641A5C58E529537A9582EA9006A1A7332A8CB6(L_15, (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005*)NULL, L_10, L_11, L_12, L_13, (String_t*)NULL, L_14, NULL);
				V_2 = L_15;
				RuntimeObject* L_16;
				L_16 = AppCenterService_get_Channel_m358DB52C8BD527A727B0DFBA9B2770965A032460_inline(__this, NULL);
				EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39* L_17 = V_2;
				NullCheck(L_16);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_18;
				L_18 = InterfaceFuncInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Log_t716EF1A690F81BB19494869650F9161B1B60E74A* >::Invoke(0 /* System.Threading.Tasks.Task Microsoft.AppCenter.Channel.IChannelUnit::EnqueueAsync(Microsoft.AppCenter.Ingestion.Models.Log) */, IChannelUnit_t1BE3B41F16F2FB309276710C471CF51CF0E674B9_il2cpp_TypeInfo_var, L_16, L_17);
			}

IL_0071_1:
			{
				goto IL_007d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007d:
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Analytics::OnChannelGroupReady(Microsoft.AppCenter.Channel.IChannelGroup,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_OnChannelGroupReady_m3770932FA022BC0F6AA167A7DF2D393708A5F34A (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, RuntimeObject* ___channelGroup0, String_t* ___appSecret1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ((AppCenterService_t6A4106CA2A3A180A876806C00AFDFDD57FE79137*)__this)->____serviceLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0030:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			RuntimeObject* L_4 = ___channelGroup0;
			String_t* L_5 = ___appSecret1;
			AppCenterService_OnChannelGroupReady_mD9200E27F4A397823EE405CC9C4EF5620A8A5FE7(__this, L_4, L_5, NULL);
			bool L_6;
			L_6 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean Microsoft.AppCenter.AppCenterService::get_InstanceEnabled() */, __this);
			Analytics_ApplyEnabledState_m1BD9572F5EBFD8FEF0957D130D2E6A4AB2B27B22(__this, L_6, NULL);
			goto IL_0031;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Analytics::ApplyEnabledState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_ApplyEnabledState_m1BD9572F5EBFD8FEF0957D130D2E6A4AB2B27B22 (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, bool ___enabled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISessionTracker_t05B3D63291EE2738B595CFBA75A90AE783F29908_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	{
		RuntimeObject* L_0 = ((AppCenterService_t6A4106CA2A3A180A876806C00AFDFDD57FE79137*)__this)->____serviceLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00a0;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_00a0:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				bool L_4 = ___enabled0;
				if (!L_4)
				{
					goto IL_0074_1;
				}
			}
			{
				RuntimeObject* L_5;
				L_5 = AppCenterService_get_ChannelGroup_mA67F9241E38C70D331220F9D19EC6A339F583817_inline(__this, NULL);
				if (!L_5)
				{
					goto IL_0074_1;
				}
			}
			{
				RuntimeObject* L_6 = __this->____sessionTracker_9;
				if (L_6)
				{
					goto IL_0074_1;
				}
			}
			{
				RuntimeObject* L_7;
				L_7 = AppCenterService_get_ChannelGroup_mA67F9241E38C70D331220F9D19EC6A339F583817_inline(__this, NULL);
				RuntimeObject* L_8;
				L_8 = AppCenterService_get_Channel_m358DB52C8BD527A727B0DFBA9B2770965A032460_inline(__this, NULL);
				RuntimeObject* L_9;
				L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* Microsoft.AppCenter.Utils.IApplicationSettings Microsoft.AppCenter.AppCenterService::get_ApplicationSettings() */, __this);
				RuntimeObject* L_10;
				L_10 = Analytics_CreateSessionTracker_m114A9DAE60095364F06D0B10A093FB1E657FC71C(__this, L_7, L_8, L_9, NULL);
				__this->____sessionTracker_9 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____sessionTracker_9), (void*)L_10);
				bool L_11 = __this->____isManualSessionTrackerEnabled_8;
				if (!L_11)
				{
					goto IL_0055_1;
				}
			}
			{
				RuntimeObject* L_12 = __this->____sessionTracker_9;
				NullCheck(L_12);
				InterfaceActionInvoker0::Invoke(3 /* System.Void Microsoft.AppCenter.Analytics.Channel.ISessionTracker::EnableManualSessionTracker() */, ISessionTracker_t05B3D63291EE2738B595CFBA75A90AE783F29908_il2cpp_TypeInfo_var, L_12);
			}

IL_0055_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6_il2cpp_TypeInfo_var);
				ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6* L_13;
				L_13 = ApplicationLifecycleHelper_get_Instance_m9B140A39867B1D9F81C70DD0B6F8E5D7D662A25C(NULL);
				NullCheck(L_13);
				bool L_14;
				L_14 = ApplicationLifecycleHelper_get_IsSuspended_m117B92B2916006FA2BA28530FDF84C00E4D270B2_inline(L_13, NULL);
				if (L_14)
				{
					goto IL_006c_1;
				}
			}
			{
				RuntimeObject* L_15 = __this->____sessionTracker_9;
				NullCheck(L_15);
				InterfaceActionInvoker0::Invoke(0 /* System.Void Microsoft.AppCenter.Analytics.Channel.ISessionTracker::Resume() */, ISessionTracker_t05B3D63291EE2738B595CFBA75A90AE783F29908_il2cpp_TypeInfo_var, L_15);
			}

IL_006c_1:
			{
				Analytics_SubscribeToApplicationLifecycleEvents_m2A04E54B5436F32228358562299734243D1680E2(__this, NULL);
				goto IL_00a1;
			}

IL_0074_1:
			{
				bool L_16 = ___enabled0;
				if (L_16)
				{
					goto IL_0095_1;
				}
			}
			{
				Analytics_UnsubscribeFromApplicationLifecycleEvents_m148ACDFF875CDD3CF6F091B0F5130A4E0380A33B(__this, NULL);
				RuntimeObject* L_17 = __this->____sessionTracker_9;
				RuntimeObject* L_18 = L_17;
				G_B11_0 = L_18;
				if (L_18)
				{
					G_B12_0 = L_18;
					goto IL_0089_1;
				}
			}
			{
				goto IL_008e_1;
			}

IL_0089_1:
			{
				NullCheck(G_B12_0);
				InterfaceActionInvoker0::Invoke(2 /* System.Void Microsoft.AppCenter.Analytics.Channel.ISessionTracker::Stop() */, ISessionTracker_t05B3D63291EE2738B595CFBA75A90AE783F29908_il2cpp_TypeInfo_var, G_B12_0);
			}

IL_008e_1:
			{
				__this->____sessionTracker_9 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____sessionTracker_9), (void*)(RuntimeObject*)NULL);
			}

IL_0095_1:
			{
				goto IL_00a1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a1:
	{
		return;
	}
}
// Microsoft.AppCenter.Analytics.Channel.ISessionTracker Microsoft.AppCenter.Analytics.Analytics::CreateSessionTracker(Microsoft.AppCenter.Channel.IChannelGroup,Microsoft.AppCenter.Channel.IChannelUnit,Microsoft.AppCenter.Utils.IApplicationSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Analytics_CreateSessionTracker_m114A9DAE60095364F06D0B10A093FB1E657FC71C (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, RuntimeObject* ___channelGroup0, RuntimeObject* ___channel1, RuntimeObject* ___applicationSettings2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISessionTrackerFactory_t494FCA8892A6AC2504137E99483207B95306FE9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____sessionTrackerFactory_10;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_0015;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___channelGroup0;
		RuntimeObject* L_3 = ___channel1;
		RuntimeObject* L_4 = ___applicationSettings2;
		NullCheck(G_B2_0);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(0 /* Microsoft.AppCenter.Analytics.Channel.ISessionTracker Microsoft.AppCenter.Analytics.Channel.ISessionTrackerFactory::CreateSessionTracker(Microsoft.AppCenter.Channel.IChannelGroup,Microsoft.AppCenter.Channel.IChannel,Microsoft.AppCenter.Utils.IApplicationSettings) */, ISessionTrackerFactory_t494FCA8892A6AC2504137E99483207B95306FE9B_il2cpp_TypeInfo_var, G_B2_0, L_2, L_3, L_4);
		G_B3_0 = L_5;
	}

IL_0015:
	{
		RuntimeObject* L_6 = G_B3_0;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_7 = ___channelGroup0;
		RuntimeObject* L_8 = ___channel1;
		SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796* L_9 = (SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796*)il2cpp_codegen_object_new(SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		SessionTracker__ctor_mFE2DDE2CCABD2E52F9038133BCF3053F223BB5AC(L_9, L_7, L_8, NULL);
		G_B5_0 = ((RuntimeObject*)(L_9));
	}

IL_0020:
	{
		return G_B5_0;
	}
}
// System.Boolean Microsoft.AppCenter.Analytics.Analytics::ValidateName(System.String&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Analytics_ValidateName_mE3600685B0B6F860CA7DC1962B4AB21DE377447C (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, String_t** ___name0, String_t* ___logType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0423A1E4CCF2C85325537A4FE676F6E10111CF99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EC3E61A2FD95429167CE7AEF1EFA1C741E4424A);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t** L_0 = ___name0;
		String_t* L_1 = *((String_t**)L_0);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String Microsoft.AppCenter.AppCenterService::get_LogTag() */, __this);
		String_t* L_4 = ___logType1;
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_4, _stringLiteral4EC3E61A2FD95429167CE7AEF1EFA1C741E4424A, NULL);
		il2cpp_codegen_runtime_class_init_inline(AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
		AppCenterLog_Error_m60340BFEB8373A6B92D26FF91D12ACF471A576BE(L_3, L_5, NULL);
		return (bool)0;
	}

IL_0021:
	{
		String_t** L_6 = ___name0;
		String_t* L_7 = *((String_t**)L_6);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)256))))
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String Microsoft.AppCenter.AppCenterService::get_LogTag() */, __this);
		String_t* L_10 = ___logType1;
		String_t** L_11 = ___name0;
		String_t* L_12 = *((String_t**)L_11);
		int32_t L_13 = ((int32_t)256);
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral0423A1E4CCF2C85325537A4FE676F6E10111CF99, L_10, L_12, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
		AppCenterLog_Warn_m3FFB62B826353B1FDF29BE9769D5518B1AEA869C(L_9, L_15, NULL);
		String_t** L_16 = ___name0;
		String_t** L_17 = ___name0;
		String_t* L_18 = *((String_t**)L_17);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_18, 0, ((int32_t)256), NULL);
		*((RuntimeObject**)L_16) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_19);
		return (bool)1;
	}

IL_0062:
	{
		return (bool)1;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Analytics::SubscribeToApplicationLifecycleEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_SubscribeToApplicationLifecycleEvents_m2A04E54B5436F32228358562299734243D1680E2 (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_ApplicationResumingEventHandler_mECF78F150F260848156CF17B1E721817A413C680_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_ApplicationSuspendedEventHandler_m2D44034AB46AA8B0CA2152E0AEB6788008DCFCF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6_il2cpp_TypeInfo_var);
		ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6* L_0;
		L_0 = ApplicationLifecycleHelper_get_Instance_m9B140A39867B1D9F81C70DD0B6F8E5D7D662A25C(NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_1, __this, (intptr_t)((void*)Analytics_ApplicationResumingEventHandler_mECF78F150F260848156CF17B1E721817A413C680_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ApplicationLifecycleHelper_add_ApplicationResuming_m3DB811B4CBAB3A4AE69015E5EBDD715B143E8051(L_0, L_1, NULL);
		ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6* L_2;
		L_2 = ApplicationLifecycleHelper_get_Instance_m9B140A39867B1D9F81C70DD0B6F8E5D7D662A25C(NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_3, __this, (intptr_t)((void*)Analytics_ApplicationSuspendedEventHandler_m2D44034AB46AA8B0CA2152E0AEB6788008DCFCF7_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		ApplicationLifecycleHelper_add_ApplicationSuspended_m563BE45D61F98EB165CE5B22738D067BC32398EB(L_2, L_3, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Analytics::UnsubscribeFromApplicationLifecycleEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_UnsubscribeFromApplicationLifecycleEvents_m148ACDFF875CDD3CF6F091B0F5130A4E0380A33B (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_ApplicationResumingEventHandler_mECF78F150F260848156CF17B1E721817A413C680_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_ApplicationSuspendedEventHandler_m2D44034AB46AA8B0CA2152E0AEB6788008DCFCF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6_il2cpp_TypeInfo_var);
		ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6* L_0;
		L_0 = ApplicationLifecycleHelper_get_Instance_m9B140A39867B1D9F81C70DD0B6F8E5D7D662A25C(NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_1, __this, (intptr_t)((void*)Analytics_ApplicationResumingEventHandler_mECF78F150F260848156CF17B1E721817A413C680_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ApplicationLifecycleHelper_remove_ApplicationResuming_m37A0503509FEB8A039BC1AE5DBF75941BB22DA49(L_0, L_1, NULL);
		ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6* L_2;
		L_2 = ApplicationLifecycleHelper_get_Instance_m9B140A39867B1D9F81C70DD0B6F8E5D7D662A25C(NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_3, __this, (intptr_t)((void*)Analytics_ApplicationSuspendedEventHandler_m2D44034AB46AA8B0CA2152E0AEB6788008DCFCF7_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		ApplicationLifecycleHelper_remove_ApplicationSuspended_mCE7245E7848E2B19B32EE2586E0B8A0A639B2D4D(L_2, L_3, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Analytics::ApplicationResumingEventHandler(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_ApplicationResumingEventHandler_mECF78F150F260848156CF17B1E721817A413C680 (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISessionTracker_t05B3D63291EE2738B595CFBA75A90AE783F29908_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____sessionTracker_9;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Microsoft.AppCenter.Analytics.Channel.ISessionTracker::Resume() */, ISessionTracker_t05B3D63291EE2738B595CFBA75A90AE783F29908_il2cpp_TypeInfo_var, G_B2_0);
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Analytics::ApplicationSuspendedEventHandler(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_ApplicationSuspendedEventHandler_m2D44034AB46AA8B0CA2152E0AEB6788008DCFCF7 (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISessionTracker_t05B3D63291EE2738B595CFBA75A90AE783F29908_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____sessionTracker_9;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Microsoft.AppCenter.Analytics.Channel.ISessionTracker::Pause() */, ISessionTracker_t05B3D63291EE2738B595CFBA75A90AE783F29908_il2cpp_TypeInfo_var, G_B2_0);
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Analytics::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics__cctor_mF5964814C2716EA5B96F61B005F336BC472E7971 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var))->___AnalyticsLock_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var))->___AnalyticsLock_6), (void*)L_0);
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
// System.Void Microsoft.AppCenter.Analytics.Ingestion.Models.EventLog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventLog__ctor_mA88FD278AEC1E3BF99819341FFA911F9864A5505 (EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39* __this, const RuntimeMethod* method) 
{
	{
		LogWithProperties__ctor_m9B9132D00D83D2282F1E7A28FC94A83CF5AF14B9(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Ingestion.Models.EventLog::.ctor(Microsoft.AppCenter.Ingestion.Models.Device,System.Guid,System.String,System.Nullable`1<System.DateTime>,System.Nullable`1<System.Guid>,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventLog__ctor_mFB641A5C58E529537A9582EA9006A1A7332A8CB6 (EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39* __this, Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* ___device0, Guid_t ___id1, String_t* ___name2, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___timestamp3, Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___sid4, String_t* ___userId5, RuntimeObject* ___properties6, const RuntimeMethod* method) 
{
	{
		Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* L_0 = ___device0;
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_1 = ___timestamp3;
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_2 = ___sid4;
		String_t* L_3 = ___userId5;
		RuntimeObject* L_4 = ___properties6;
		LogWithProperties__ctor_m3E5D45C556CE93F80AEA01ED7D6D1D20C3422892(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		Guid_t L_5 = ___id1;
		EventLog_set_Id_m98A62A81B4E865F9CF22D13B36524EF1AD4DDD10_inline(__this, L_5, NULL);
		String_t* L_6 = ___name2;
		EventLog_set_Name_m91FBD5B5B04AE84F08AF6CAF9B525649E81B1C6F_inline(__this, L_6, NULL);
		return;
	}
}
// System.Guid Microsoft.AppCenter.Analytics.Ingestion.Models.EventLog::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t EventLog_get_Id_m485EAA6288B7E844C0A9CCA70DB51C73891A7BA5 (EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___U3CIdU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Ingestion.Models.EventLog::set_Id(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventLog_set_Id_m98A62A81B4E865F9CF22D13B36524EF1AD4DDD10 (EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39* __this, Guid_t ___value0, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String Microsoft.AppCenter.Analytics.Ingestion.Models.EventLog::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EventLog_get_Name_mB94DF05814A11B2C1B11535178B11FA7FDD01E94 (EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Ingestion.Models.EventLog::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventLog_set_Name_m91FBD5B5B04AE84F08AF6CAF9B525649E81B1C6F (EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Ingestion.Models.EventLog::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventLog_Validate_m49D251F7F2ED12564F06F4753F0E878E094BC872 (EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39* __this, const RuntimeMethod* method) 
{
	{
		LogWithProperties_Validate_mA739EC9EF3AFF0FD008027EA12F822D04AAA9AA7(__this, NULL);
		String_t* L_0;
		L_0 = EventLog_get_Name_mB94DF05814A11B2C1B11535178B11FA7FDD01E94_inline(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* L_1 = (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ValidationException__ctor_m8044FBF3F2AA8CEC98A9337B4650778C806F3CA0(L_1, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B)), NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EventLog_Validate_m49D251F7F2ED12564F06F4753F0E878E094BC872_RuntimeMethod_var)));
	}

IL_001b:
	{
		String_t* L_2;
		L_2 = EventLog_get_Name_mB94DF05814A11B2C1B11535178B11FA7FDD01E94_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		String_t* L_3;
		L_3 = EventLog_get_Name_mB94DF05814A11B2C1B11535178B11FA7FDD01E94_inline(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)256))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_5 = ((int32_t)256);
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_5);
		ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* L_7 = (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ValidationException__ctor_m8044FBF3F2AA8CEC98A9337B4650778C806F3CA0(L_7, 4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B)), L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EventLog_Validate_m49D251F7F2ED12564F06F4753F0E878E094BC872_RuntimeMethod_var)));
	}

IL_004b:
	{
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
// System.Void Microsoft.AppCenter.Analytics.Ingestion.Models.PageLog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageLog__ctor_mDADD8690C33D375D8B342E9011EFD4C3F6F29C52 (PageLog_tA74D27A866B3271DADE0F5B42BA98F453CBFC43A* __this, const RuntimeMethod* method) 
{
	{
		LogWithProperties__ctor_m9B9132D00D83D2282F1E7A28FC94A83CF5AF14B9(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Ingestion.Models.PageLog::.ctor(Microsoft.AppCenter.Ingestion.Models.Device,System.String,System.Nullable`1<System.DateTime>,System.Nullable`1<System.Guid>,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageLog__ctor_m77202117B41F44DADBDE987FDC92BF0587B12303 (PageLog_tA74D27A866B3271DADE0F5B42BA98F453CBFC43A* __this, Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* ___device0, String_t* ___name1, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___timestamp2, Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___sid3, String_t* ___userId4, RuntimeObject* ___properties5, const RuntimeMethod* method) 
{
	{
		Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* L_0 = ___device0;
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_1 = ___timestamp2;
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_2 = ___sid3;
		String_t* L_3 = ___userId4;
		RuntimeObject* L_4 = ___properties5;
		LogWithProperties__ctor_m3E5D45C556CE93F80AEA01ED7D6D1D20C3422892(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		String_t* L_5 = ___name1;
		PageLog_set_Name_mDC3F0EAF6308AEC3F1F5DCC9BC67D4E76CC5EB16_inline(__this, L_5, NULL);
		return;
	}
}
// System.String Microsoft.AppCenter.Analytics.Ingestion.Models.PageLog::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PageLog_get_Name_mA874FF7D3AA9D8A6B991AD068D1E2009B52B180D (PageLog_tA74D27A866B3271DADE0F5B42BA98F453CBFC43A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Ingestion.Models.PageLog::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageLog_set_Name_mDC3F0EAF6308AEC3F1F5DCC9BC67D4E76CC5EB16 (PageLog_tA74D27A866B3271DADE0F5B42BA98F453CBFC43A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Ingestion.Models.PageLog::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageLog_Validate_m366080CED55E6258382E324B653677643B9744AE (PageLog_tA74D27A866B3271DADE0F5B42BA98F453CBFC43A* __this, const RuntimeMethod* method) 
{
	{
		LogWithProperties_Validate_mA739EC9EF3AFF0FD008027EA12F822D04AAA9AA7(__this, NULL);
		String_t* L_0;
		L_0 = PageLog_get_Name_mA874FF7D3AA9D8A6B991AD068D1E2009B52B180D_inline(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* L_1 = (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ValidationException__ctor_m8044FBF3F2AA8CEC98A9337B4650778C806F3CA0(L_1, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B)), NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PageLog_Validate_m366080CED55E6258382E324B653677643B9744AE_RuntimeMethod_var)));
	}

IL_001b:
	{
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
// System.Void Microsoft.AppCenter.Analytics.Ingestion.Models.StartSessionLog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSessionLog__ctor_mA084CC3D2C8C1BE9F51F571963E55345C28880A0 (StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41* __this, const RuntimeMethod* method) 
{
	{
		Log__ctor_m16C3520A27BD6A7683E73E66EE461E81675E6491(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Ingestion.Models.StartSessionLog::.ctor(Microsoft.AppCenter.Ingestion.Models.Device,System.Nullable`1<System.DateTime>,System.Nullable`1<System.Guid>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSessionLog__ctor_m2496904FB1E221511032B6BEC261E97A6653AC8D (StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41* __this, Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* ___device0, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___timestamp1, Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___sid2, const RuntimeMethod* method) 
{
	{
		Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* L_0 = ___device0;
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_1 = ___timestamp1;
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_2 = ___sid2;
		Log__ctor_m9D3FC8BB1D9E05127350E0CD33CE73C480C13BB6(__this, L_0, L_1, L_2, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Ingestion.Models.StartSessionLog::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSessionLog_Validate_m79CB26A94B8789B74D643F22F4EE62F4345E5BF0 (StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41* __this, const RuntimeMethod* method) 
{
	{
		Log_Validate_m06947D5D6A4DEB54521430A714CCBB83C567BA31(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Ingestion.Models.StartSessionLog::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSessionLog__cctor_m99C5041CB6715BC043688E1804D7DEB098C889DB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41* L_0 = (StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41*)il2cpp_codegen_object_new(StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StartSessionLog__ctor_mA084CC3D2C8C1BE9F51F571963E55345C28880A0(L_0, NULL);
		((StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41_StaticFields*)il2cpp_codegen_static_fields_for(StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41_il2cpp_TypeInfo_var))->___Empty_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41_StaticFields*)il2cpp_codegen_static_fields_for(StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41_il2cpp_TypeInfo_var))->___Empty_4), (void*)L_0);
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
// System.Void Microsoft.AppCenter.Analytics.Channel.SessionTracker::.ctor(Microsoft.AppCenter.Channel.IChannel,Microsoft.AppCenter.Channel.IChannelUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTracker__ctor_mFE2DDE2CCABD2E52F9038133BCF3053F223BB5AC (SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796* __this, RuntimeObject* ___channelGroup0, RuntimeObject* ___channel1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF29922C6360FCC704EAAD878A7DC28D2A0CAD8BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannel_tE7AA1740F5C216534C9C557095552D67D8AE4C3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionTracker_HandleEnqueuingLog_mC0011D4922D0B24825C32EA2B2F077658296EEDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		__this->____currentSessionState_0 = 2;
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->____lockObject_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lockObject_7), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_1 = __this->____lockObject_7;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_4, (&V_1), NULL);
			RuntimeObject* L_5 = ___channel1;
			__this->____channel_3 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____channel_3), (void*)L_5);
			RuntimeObject* L_6 = ___channelGroup0;
			EventHandler_1_tF29922C6360FCC704EAAD878A7DC28D2A0CAD8BC* L_7 = (EventHandler_1_tF29922C6360FCC704EAAD878A7DC28D2A0CAD8BC*)il2cpp_codegen_object_new(EventHandler_1_tF29922C6360FCC704EAAD878A7DC28D2A0CAD8BC_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			EventHandler_1__ctor_m2A7F65CD736B36E74FE224686CD150DFA0FBB08B(L_7, __this, (intptr_t)((void*)SessionTracker_HandleEnqueuingLog_mC0011D4922D0B24825C32EA2B2F077658296EEDA_RuntimeMethod_var), NULL);
			NullCheck(L_6);
			InterfaceActionInvoker1< EventHandler_1_tF29922C6360FCC704EAAD878A7DC28D2A0CAD8BC* >::Invoke(0 /* System.Void Microsoft.AppCenter.Channel.IChannel::add_EnqueuingLog(System.EventHandler`1<Microsoft.AppCenter.Channel.EnqueuingLogEventArgs>) */, IChannel_tE7AA1740F5C216534C9C557095552D67D8AE4C3F_il2cpp_TypeInfo_var, L_6, L_7);
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Channel.SessionTracker::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTracker_Pause_mFBB87082836E3FD7ED7B87CDCA3CEA11F83D3062 (SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2F2470ADA0BDE4DC60BA748A825FF866F23194A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE907F8059E36E88B1DDBEB30DC8A8A280F7553DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD37195433025D7E7C24A5B5087D54F9AD7CA5F8);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->____lockObject_7;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0075:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_007e;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_007e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				bool L_4 = __this->____isManualSessionTrackerEnabled_1;
				if (!L_4)
				{
					goto IL_002f_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_5;
				L_5 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
				NullCheck(L_5);
				String_t* L_6;
				L_6 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String Microsoft.AppCenter.AppCenterService::get_LogTag() */, L_5);
				il2cpp_codegen_runtime_class_init_inline(AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
				AppCenterLog_Debug_m6A8FFE98A198F03A211EC3DB1C1F7ED3063E216D(L_6, _stringLiteralE907F8059E36E88B1DDBEB30DC8A8A280F7553DF, NULL);
				goto IL_007f;
			}

IL_002f_1:
			{
				int32_t L_7 = __this->____currentSessionState_0;
				if (L_7)
				{
					goto IL_004d_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_8;
				L_8 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
				NullCheck(L_8);
				String_t* L_9;
				L_9 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String Microsoft.AppCenter.AppCenterService::get_LogTag() */, L_8);
				il2cpp_codegen_runtime_class_init_inline(AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
				AppCenterLog_Warn_m3FFB62B826353B1FDF29BE9769D5518B1AEA869C(L_9, _stringLiteralFD37195433025D7E7C24A5B5087D54F9AD7CA5F8, NULL);
				goto IL_007f;
			}

IL_004d_1:
			{
				il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_10;
				L_10 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
				NullCheck(L_10);
				String_t* L_11;
				L_11 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String Microsoft.AppCenter.AppCenterService::get_LogTag() */, L_10);
				il2cpp_codegen_runtime_class_init_inline(AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
				AppCenterLog_Debug_m6A8FFE98A198F03A211EC3DB1C1F7ED3063E216D(L_11, _stringLiteralD2F2470ADA0BDE4DC60BA748A825FF866F23194A, NULL);
				int64_t L_12;
				L_12 = TimeHelper_CurrentTimeInMilliseconds_m501FBA154C248378BC7567F672F5156C75AC9245(NULL);
				__this->____lastPausedTime_6 = L_12;
				__this->____currentSessionState_0 = 0;
				goto IL_007f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007f:
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Channel.SessionTracker::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTracker_Resume_m3FDD0BBD6EEA9B25A846FBFECB74B5A63967C77D (SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34F3F8DEB29B796BA32EF067F291CB839F1E3BDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85362CA2303616341209B7806B4318CE25710888);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDE08731140D4C1986B360DE6A40AC103CDEDCB4);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->____lockObject_7;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007c:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0085;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0085:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				bool L_4 = __this->____isManualSessionTrackerEnabled_1;
				if (!L_4)
				{
					goto IL_002f_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_5;
				L_5 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
				NullCheck(L_5);
				String_t* L_6;
				L_6 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String Microsoft.AppCenter.AppCenterService::get_LogTag() */, L_5);
				il2cpp_codegen_runtime_class_init_inline(AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
				AppCenterLog_Debug_m6A8FFE98A198F03A211EC3DB1C1F7ED3063E216D(L_6, _stringLiteral34F3F8DEB29B796BA32EF067F291CB839F1E3BDF, NULL);
				goto IL_0086;
			}

IL_002f_1:
			{
				int32_t L_7 = __this->____currentSessionState_0;
				if ((!(((uint32_t)L_7) == ((uint32_t)1))))
				{
					goto IL_004e_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_8;
				L_8 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
				NullCheck(L_8);
				String_t* L_9;
				L_9 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String Microsoft.AppCenter.AppCenterService::get_LogTag() */, L_8);
				il2cpp_codegen_runtime_class_init_inline(AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
				AppCenterLog_Warn_m3FFB62B826353B1FDF29BE9769D5518B1AEA869C(L_9, _stringLiteralBDE08731140D4C1986B360DE6A40AC103CDEDCB4, NULL);
				goto IL_0086;
			}

IL_004e_1:
			{
				il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_10;
				L_10 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
				NullCheck(L_10);
				String_t* L_11;
				L_11 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String Microsoft.AppCenter.AppCenterService::get_LogTag() */, L_10);
				il2cpp_codegen_runtime_class_init_inline(AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
				AppCenterLog_Debug_m6A8FFE98A198F03A211EC3DB1C1F7ED3063E216D(L_11, _stringLiteral85362CA2303616341209B7806B4318CE25710888, NULL);
				int64_t L_12;
				L_12 = TimeHelper_CurrentTimeInMilliseconds_m501FBA154C248378BC7567F672F5156C75AC9245(NULL);
				__this->____lastResumedTime_5 = L_12;
				__this->____currentSessionState_0 = 1;
				SessionTracker_SendStartSessionIfNeeded_m52A26E704DFEDADA97014BCE73592DDAD87B1438(__this, NULL);
				goto IL_0086;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0086:
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Channel.SessionTracker::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTracker_Stop_m531B9B4F43CD3300745D1EC5D92F884443978D62 (SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral180524E962B283718080185FC010B46ECA2B778C);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = __this->____lockObject_7;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0048;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0048:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				bool L_4 = __this->____isManualSessionTrackerEnabled_1;
				if (!L_4)
				{
					goto IL_002f_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_5;
				L_5 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
				NullCheck(L_5);
				String_t* L_6;
				L_6 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String Microsoft.AppCenter.AppCenterService::get_LogTag() */, L_5);
				il2cpp_codegen_runtime_class_init_inline(AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
				AppCenterLog_Debug_m6A8FFE98A198F03A211EC3DB1C1F7ED3063E216D(L_6, _stringLiteral180524E962B283718080185FC010B46ECA2B778C, NULL);
				goto IL_0049;
			}

IL_002f_1:
			{
				il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7));
				Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_7 = V_2;
				SessionContext_set_SessionId_m5E7393F47DF1938F8E6A3AC00EFCAD1BF6E4AD6D_inline(L_7, NULL);
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Channel.SessionTracker::HandleEnqueuingLog(System.Object,Microsoft.AppCenter.Channel.EnqueuingLogEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTracker_HandleEnqueuingLog_mC0011D4922D0B24825C32EA2B2F077658296EEDA (SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796* __this, RuntimeObject* ___sender0, EnqueuingLogEventArgs_t204A67251AC6BE84CF27A59F33352E6D02A4D137* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartServiceLog_t7395E5583F8EE57EB2FC14008CB24A990475234B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = __this->____lockObject_7;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0068;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0068:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				EnqueuingLogEventArgs_t204A67251AC6BE84CF27A59F33352E6D02A4D137* L_4 = ___e1;
				NullCheck(L_4);
				Log_t716EF1A690F81BB19494869650F9161B1B60E74A* L_5;
				L_5 = ChannelEventArgs_get_Log_m3ED7BBB14A6FB9D99B8EF2E48FA22056FE7849DD_inline(L_4, NULL);
				if (((StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41*)IsInstClass((RuntimeObject*)L_5, StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41_il2cpp_TypeInfo_var)))
				{
					goto IL_002b_1;
				}
			}
			{
				EnqueuingLogEventArgs_t204A67251AC6BE84CF27A59F33352E6D02A4D137* L_6 = ___e1;
				NullCheck(L_6);
				Log_t716EF1A690F81BB19494869650F9161B1B60E74A* L_7;
				L_7 = ChannelEventArgs_get_Log_m3ED7BBB14A6FB9D99B8EF2E48FA22056FE7849DD_inline(L_6, NULL);
				if (!((StartServiceLog_t7395E5583F8EE57EB2FC14008CB24A990475234B*)IsInstClass((RuntimeObject*)L_7, StartServiceLog_t7395E5583F8EE57EB2FC14008CB24A990475234B_il2cpp_TypeInfo_var)))
				{
					goto IL_002d_1;
				}
			}

IL_002b_1:
			{
				goto IL_0069;
			}

IL_002d_1:
			{
				EnqueuingLogEventArgs_t204A67251AC6BE84CF27A59F33352E6D02A4D137* L_8 = ___e1;
				NullCheck(L_8);
				Log_t716EF1A690F81BB19494869650F9161B1B60E74A* L_9;
				L_9 = ChannelEventArgs_get_Log_m3ED7BBB14A6FB9D99B8EF2E48FA22056FE7849DD_inline(L_8, NULL);
				NullCheck(L_9);
				Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_10;
				L_10 = Log_get_Timestamp_m9ED5E25A3D1F03D3DAFD039B76D7C333F1BCAB49_inline(L_9, NULL);
				V_2 = L_10;
				bool L_11;
				L_11 = Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline((&V_2), Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0052_1;
				}
			}
			{
				EnqueuingLogEventArgs_t204A67251AC6BE84CF27A59F33352E6D02A4D137* L_12 = ___e1;
				NullCheck(L_12);
				Log_t716EF1A690F81BB19494869650F9161B1B60E74A* L_13;
				L_13 = ChannelEventArgs_get_Log_m3ED7BBB14A6FB9D99B8EF2E48FA22056FE7849DD_inline(L_12, NULL);
				Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_14;
				L_14 = SessionContext_get_SessionId_m255DF493A86838D8658FAC9B943F49BDF1962990_inline(NULL);
				NullCheck(L_13);
				Log_set_Sid_m84495D0B7FAFB7D41C3DD1AFF5DB8E9D8F553F80_inline(L_13, L_14, NULL);
			}

IL_0052_1:
			{
				int64_t L_15;
				L_15 = TimeHelper_CurrentTimeInMilliseconds_m501FBA154C248378BC7567F672F5156C75AC9245(NULL);
				__this->____lastQueuedLogTime_4 = L_15;
				goto IL_0069;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Channel.SessionTracker::EnableManualSessionTracker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTracker_EnableManualSessionTracker_mAB1C41ACC644AD02684B56C71B501BA2B4BC3C6D (SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12469C516B4444FE8FFE4F7ACEA42C51F0C8602E);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->____lockObject_7;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0037;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0037:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			__this->____isManualSessionTrackerEnabled_1 = (bool)1;
			il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
			Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_4;
			L_4 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
			NullCheck(L_4);
			String_t* L_5;
			L_5 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String Microsoft.AppCenter.AppCenterService::get_LogTag() */, L_4);
			il2cpp_codegen_runtime_class_init_inline(AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
			AppCenterLog_Debug_m6A8FFE98A198F03A211EC3DB1C1F7ED3063E216D(L_5, _stringLiteral12469C516B4444FE8FFE4F7ACEA42C51F0C8602E, NULL);
			goto IL_0038;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Channel.SessionTracker::StartSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTracker_StartSession_m826C99F9A9FDBE87C751BB5F7D9141EFAD87C41C (SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0855A707F93F1778EB5A671AC9DF857FBBFF283C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral652D9AA6CC49441B610628EC3688A62A9050AD58);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->____lockObject_7;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0063;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0063:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				bool L_4 = __this->____isManualSessionTrackerEnabled_1;
				if (L_4)
				{
					goto IL_002f_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_5;
				L_5 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
				NullCheck(L_5);
				String_t* L_6;
				L_6 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String Microsoft.AppCenter.AppCenterService::get_LogTag() */, L_5);
				il2cpp_codegen_runtime_class_init_inline(AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
				AppCenterLog_Debug_m6A8FFE98A198F03A211EC3DB1C1F7ED3063E216D(L_6, _stringLiteral652D9AA6CC49441B610628EC3688A62A9050AD58, NULL);
				goto IL_0064;
			}

IL_002f_1:
			{
				SessionTracker_SendStartSession_m648E05714E8FF4FEFB353F139EA71F402E03ACEF(__this, NULL);
				il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
				Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_7;
				L_7 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
				NullCheck(L_7);
				String_t* L_8;
				L_8 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String Microsoft.AppCenter.AppCenterService::get_LogTag() */, L_7);
				Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_9;
				L_9 = SessionContext_get_SessionId_m255DF493A86838D8658FAC9B943F49BDF1962990_inline(NULL);
				Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_10 = L_9;
				RuntimeObject* L_11 = Box(Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_il2cpp_TypeInfo_var, &L_10);
				String_t* L_12;
				L_12 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral0855A707F93F1778EB5A671AC9DF857FBBFF283C, L_11, NULL);
				il2cpp_codegen_runtime_class_init_inline(AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
				AppCenterLog_Debug_m6A8FFE98A198F03A211EC3DB1C1F7ED3063E216D(L_8, L_12, NULL);
				goto IL_0064;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Channel.SessionTracker::SendStartSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTracker_SendStartSession_m648E05714E8FF4FEFB353F139EA71F402E03ACEF (SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelUnit_t1BE3B41F16F2FB309276710C471CF51CF0E674B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mD2155EEC4DF44AF1AD75AEB77DA72D350854D0F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41* V_0 = NULL;
	{
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903(NULL);
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_mD2155EEC4DF44AF1AD75AEB77DA72D350854D0F2((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_mD2155EEC4DF44AF1AD75AEB77DA72D350854D0F2_RuntimeMethod_var);
		SessionContext_set_SessionId_m5E7393F47DF1938F8E6A3AC00EFCAD1BF6E4AD6D_inline(L_1, NULL);
		int64_t L_2;
		L_2 = TimeHelper_CurrentTimeInMilliseconds_m501FBA154C248378BC7567F672F5156C75AC9245(NULL);
		__this->____lastQueuedLogTime_4 = L_2;
		StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41* L_3 = (StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41*)il2cpp_codegen_object_new(StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StartSessionLog__ctor_mA084CC3D2C8C1BE9F51F571963E55345C28880A0(L_3, NULL);
		StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41* L_4 = L_3;
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_5;
		L_5 = SessionContext_get_SessionId_m255DF493A86838D8658FAC9B943F49BDF1962990_inline(NULL);
		NullCheck(L_4);
		Log_set_Sid_m84495D0B7FAFB7D41C3DD1AFF5DB8E9D8F553F80_inline(L_4, L_5, NULL);
		V_0 = L_4;
		RuntimeObject* L_6 = __this->____channel_3;
		StartSessionLog_t3D9FEF60DDA761859CC301BC41826EBAF50C1C41* L_7 = V_0;
		NullCheck(L_6);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
		L_8 = InterfaceFuncInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Log_t716EF1A690F81BB19494869650F9161B1B60E74A* >::Invoke(0 /* System.Threading.Tasks.Task Microsoft.AppCenter.Channel.IChannelUnit::EnqueueAsync(Microsoft.AppCenter.Ingestion.Models.Log) */, IChannelUnit_t1BE3B41F16F2FB309276710C471CF51CF0E674B9_il2cpp_TypeInfo_var, L_6, L_7);
		NullCheck(L_8);
		ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_9;
		L_9 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_8, (bool)0, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Channel.SessionTracker::SendStartSessionIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTracker_SendStartSessionIfNeeded_m52A26E704DFEDADA97014BCE73592DDAD87B1438 (SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mA4048346752BF05849998E450987EB444BE2AD63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int64_t L_0;
		L_0 = TimeHelper_CurrentTimeInMilliseconds_m501FBA154C248378BC7567F672F5156C75AC9245(NULL);
		V_0 = L_0;
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_1;
		L_1 = SessionContext_get_SessionId_m255DF493A86838D8658FAC9B943F49BDF1962990_inline(NULL);
		V_1 = L_1;
		bool L_2;
		L_2 = Nullable_1_get_HasValue_mA4048346752BF05849998E450987EB444BE2AD63_inline((&V_1), Nullable_1_get_HasValue_mA4048346752BF05849998E450987EB444BE2AD63_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		int64_t L_3 = V_0;
		bool L_4;
		L_4 = SessionTracker_HasSessionTimedOut_m3D8C540098DECAF42BCFFD913FB375929F7A5499(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		SessionTracker_SendStartSession_m648E05714E8FF4FEFB353F139EA71F402E03ACEF(__this, NULL);
		return;
	}
}
// System.Boolean Microsoft.AppCenter.Analytics.Channel.SessionTracker::HasSessionTimedOut(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SessionTracker_HasSessionTimedOut_m3D8C540098DECAF42BCFFD913FB375929F7A5499 (SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796* __this, int64_t ___now0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___now0;
		int64_t L_1 = __this->____lastQueuedLogTime_4;
		int64_t L_2 = __this->____lastResumedTime_5;
		int64_t L_3 = __this->____lastPausedTime_6;
		il2cpp_codegen_runtime_class_init_inline(SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SessionTracker_HasSessionTimedOut_mC0BAEAB195D4B80E2BC79F44797E103C95E05919(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Microsoft.AppCenter.Analytics.Channel.SessionTracker::HasSessionTimedOut(System.Int64,System.Int64,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SessionTracker_HasSessionTimedOut_mC0BAEAB195D4B80E2BC79F44797E103C95E05919 (int64_t ___now0, int64_t ___lastQueuedLogTime1, int64_t ___lastResumedTime2, int64_t ___lastPausedTime3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BDD8A0357584CE38C7583895787333584361FC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFBA98E3C3E7FFB3ACEDF33C32C4731C3BDDC275);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		int64_t L_0 = ___lastPausedTime3;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		int64_t L_1 = ___lastQueuedLogTime1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		int64_t L_2 = ___now0;
		int64_t L_3 = ___lastQueuedLogTime1;
		il2cpp_codegen_runtime_class_init_inline(SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796_il2cpp_TypeInfo_var);
		int64_t L_4 = ((SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796_StaticFields*)il2cpp_codegen_static_fields_for(SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796_il2cpp_TypeInfo_var))->___SessionTimeout_2;
		G_B5_0 = ((((int32_t)((((int64_t)((int64_t)il2cpp_codegen_subtract(L_2, L_3))) < ((int64_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B5_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B5_0;
		int64_t L_5 = ___lastResumedTime2;
		int64_t L_6 = ___lastPausedTime3;
		int64_t L_7 = ___lastQueuedLogTime1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int64_t L_8;
		L_8 = Math_Max_mA040C488C0D1F062F109992835E8498A7D24EFA5(L_6, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796_il2cpp_TypeInfo_var);
		int64_t L_9 = ((SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796_StaticFields*)il2cpp_codegen_static_fields_for(SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796_il2cpp_TypeInfo_var))->___SessionTimeout_2;
		V_1 = (bool)((((int32_t)((((int64_t)((int64_t)il2cpp_codegen_subtract(L_5, L_8))) < ((int64_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2* L_10;
		L_10 = Analytics_get_Instance_m9A3AD62958AAA94DD075EFD704DF96C3B9299791(NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String Microsoft.AppCenter.AppCenterService::get_LogTag() */, L_10);
		bool L_12 = V_0;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral2BDD8A0357584CE38C7583895787333584361FC6, L_14, NULL);
		bool L_16 = V_1;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19;
		L_19 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralCFBA98E3C3E7FFB3ACEDF33C32C4731C3BDDC275, L_18, NULL);
		String_t* L_20;
		L_20 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_15, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
		AppCenterLog_Debug_m6A8FFE98A198F03A211EC3DB1C1F7ED3063E216D(L_11, L_20, NULL);
		bool L_21 = V_0;
		bool L_22 = V_1;
		return (bool)((int32_t)((int32_t)L_21&(int32_t)L_22));
	}
}
// System.Boolean Microsoft.AppCenter.Analytics.Channel.SessionTracker::SetExistingSessionId(Microsoft.AppCenter.Ingestion.Models.Log,System.Collections.Generic.IDictionary`2<System.Int64,System.Guid>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SessionTracker_SetExistingSessionId_m410A45492CB89DFDE04A058C643B08EBD36EEFC2 (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* ___log0, RuntimeObject* ___sessions1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_DefaultIfEmpty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8C9446E419166141499217F459A7F3A52EC0195C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m30AEA03BEE9D8371FEC35A630C4EAE4C3456892E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t981AC36A12919E5898BB11B63963F04A5B0475C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mD2155EEC4DF44AF1AD75AEB77DA72D350854D0F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_U3CSetExistingSessionIdU3Eb__0_m800F01026882E3312CF72062D643BD473F3FD090_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_t48BF34A3CE8F2BC65EFEC6E92C0B9B22A5C31579_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass20_0_t48BF34A3CE8F2BC65EFEC6E92C0B9B22A5C31579* V_0 = NULL;
	int64_t V_1 = 0;
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_2;
	memset((&V_2), 0, sizeof(V_2));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		U3CU3Ec__DisplayClass20_0_t48BF34A3CE8F2BC65EFEC6E92C0B9B22A5C31579* L_0 = (U3CU3Ec__DisplayClass20_0_t48BF34A3CE8F2BC65EFEC6E92C0B9B22A5C31579*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass20_0_t48BF34A3CE8F2BC65EFEC6E92C0B9B22A5C31579_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass20_0__ctor_m67A2F6A4B6BDECF67D830643ABAAFC38AC0AA3FE(L_0, NULL);
		V_0 = L_0;
		Log_t716EF1A690F81BB19494869650F9161B1B60E74A* L_1 = ___log0;
		NullCheck(L_1);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_2;
		L_2 = Log_get_Timestamp_m9ED5E25A3D1F03D3DAFD039B76D7C333F1BCAB49_inline(L_1, NULL);
		V_2 = L_2;
		bool L_3;
		L_3 = Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline((&V_2), Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		U3CU3Ec__DisplayClass20_0_t48BF34A3CE8F2BC65EFEC6E92C0B9B22A5C31579* L_4 = V_0;
		Log_t716EF1A690F81BB19494869650F9161B1B60E74A* L_5 = ___log0;
		NullCheck(L_5);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_6;
		L_6 = Log_get_Timestamp_m9ED5E25A3D1F03D3DAFD039B76D7C333F1BCAB49_inline(L_5, NULL);
		V_2 = L_6;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7;
		L_7 = Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991((&V_2), Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
		V_3 = L_7;
		int64_t L_8;
		L_8 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&V_3), NULL);
		NullCheck(L_4);
		L_4->___logTime_0 = ((int64_t)(L_8/((int64_t)((int32_t)10000))));
		RuntimeObject* L_9 = ___sessions1;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Int64,System.Guid>::get_Keys() */, IDictionary_2_t981AC36A12919E5898BB11B63963F04A5B0475C3_il2cpp_TypeInfo_var, L_9);
		U3CU3Ec__DisplayClass20_0_t48BF34A3CE8F2BC65EFEC6E92C0B9B22A5C31579* L_11 = V_0;
		Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710* L_12 = (Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710*)il2cpp_codegen_object_new(Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Func_2__ctor_m276D55CC96E6D1F90AE79C2CDA8D6AFBC6D52B07(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass20_0_U3CSetExistingSessionIdU3Eb__0_m800F01026882E3312CF72062D643BD473F3FD090_RuntimeMethod_var), NULL);
		RuntimeObject* L_13;
		L_13 = Enumerable_Where_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m30AEA03BEE9D8371FEC35A630C4EAE4C3456892E(L_10, L_12, Enumerable_Where_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m30AEA03BEE9D8371FEC35A630C4EAE4C3456892E_RuntimeMethod_var);
		RuntimeObject* L_14;
		L_14 = Enumerable_DefaultIfEmpty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8C9446E419166141499217F459A7F3A52EC0195C(L_13, ((int64_t)(-1)), Enumerable_DefaultIfEmpty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8C9446E419166141499217F459A7F3A52EC0195C_RuntimeMethod_var);
		int64_t L_15;
		L_15 = Enumerable_Max_m154657ABEF9998CECD42D3489135364EA2C5843D(L_14, NULL);
		V_1 = L_15;
		int64_t L_16 = V_1;
		if ((!(((uint64_t)L_16) == ((uint64_t)((int64_t)(-1))))))
		{
			goto IL_0066;
		}
	}
	{
		return (bool)0;
	}

IL_0066:
	{
		Log_t716EF1A690F81BB19494869650F9161B1B60E74A* L_17 = ___log0;
		RuntimeObject* L_18 = ___sessions1;
		int64_t L_19 = V_1;
		NullCheck(L_18);
		Guid_t L_20;
		L_20 = InterfaceFuncInvoker1< Guid_t, int64_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Int64,System.Guid>::get_Item(TKey) */, IDictionary_2_t981AC36A12919E5898BB11B63963F04A5B0475C3_il2cpp_TypeInfo_var, L_18, L_19);
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Nullable_1__ctor_mD2155EEC4DF44AF1AD75AEB77DA72D350854D0F2((&L_21), L_20, /*hidden argument*/Nullable_1__ctor_mD2155EEC4DF44AF1AD75AEB77DA72D350854D0F2_RuntimeMethod_var);
		NullCheck(L_17);
		Log_set_Sid_m84495D0B7FAFB7D41C3DD1AFF5DB8E9D8F553F80_inline(L_17, L_21, NULL);
		return (bool)1;
	}
}
// System.Void Microsoft.AppCenter.Analytics.Channel.SessionTracker::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTracker__cctor_m4B9CD6CC7DE9CBA04AD2002970EE1F792609218D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796_StaticFields*)il2cpp_codegen_static_fields_for(SessionTracker_tF583A709BEC5D2A9908A0983B90395746E143796_il2cpp_TypeInfo_var))->___SessionTimeout_2 = ((int64_t)((int32_t)20000));
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
// System.Void Microsoft.AppCenter.Analytics.Channel.SessionTracker/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m67A2F6A4B6BDECF67D830643ABAAFC38AC0AA3FE (U3CU3Ec__DisplayClass20_0_t48BF34A3CE8F2BC65EFEC6E92C0B9B22A5C31579* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Microsoft.AppCenter.Analytics.Channel.SessionTracker/<>c__DisplayClass20_0::<SetExistingSessionId>b__0(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass20_0_U3CSetExistingSessionIdU3Eb__0_m800F01026882E3312CF72062D643BD473F3FD090 (U3CU3Ec__DisplayClass20_0_t48BF34A3CE8F2BC65EFEC6E92C0B9B22A5C31579* __this, int64_t ___num0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___num0;
		int64_t L_1 = __this->___logTime_0;
		return (bool)((((int32_t)((((int64_t)L_0) > ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AppCenterService_get_Channel_m358DB52C8BD527A727B0DFBA9B2770965A032460_inline (AppCenterService_t6A4106CA2A3A180A876806C00AFDFDD57FE79137* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CChannelU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AppCenterService_get_ChannelGroup_mA67F9241E38C70D331220F9D19EC6A339F583817_inline (AppCenterService_t6A4106CA2A3A180A876806C00AFDFDD57FE79137* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CChannelGroupU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ApplicationLifecycleHelper_get_IsSuspended_m117B92B2916006FA2BA28530FDF84C00E4D270B2_inline (ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6_il2cpp_TypeInfo_var);
		bool L_0 = ((ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationLifecycleHelper_tE00A9443F6E3C37998D92F0CDA508051C82A95B6_il2cpp_TypeInfo_var))->____suspended_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventLog_set_Id_m98A62A81B4E865F9CF22D13B36524EF1AD4DDD10_inline (EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39* __this, Guid_t ___value0, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventLog_set_Name_m91FBD5B5B04AE84F08AF6CAF9B525649E81B1C6F_inline (EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EventLog_get_Name_mB94DF05814A11B2C1B11535178B11FA7FDD01E94_inline (EventLog_t6BBD663B2FBF39889DA079C915486EF7D3341A39* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PageLog_set_Name_mDC3F0EAF6308AEC3F1F5DCC9BC67D4E76CC5EB16_inline (PageLog_tA74D27A866B3271DADE0F5B42BA98F453CBFC43A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PageLog_get_Name_mA874FF7D3AA9D8A6B991AD068D1E2009B52B180D_inline (PageLog_tA74D27A866B3271DADE0F5B42BA98F453CBFC43A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionContext_set_SessionId_m5E7393F47DF1938F8E6A3AC00EFCAD1BF6E4AD6D_inline (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionContext_t3D364037AC5C6C3B13C778D15BFE9F8406F5C90E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_0 = ___value0;
		((SessionContext_t3D364037AC5C6C3B13C778D15BFE9F8406F5C90E_StaticFields*)il2cpp_codegen_static_fields_for(SessionContext_t3D364037AC5C6C3B13C778D15BFE9F8406F5C90E_il2cpp_TypeInfo_var))->___U3CSessionIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Log_t716EF1A690F81BB19494869650F9161B1B60E74A* ChannelEventArgs_get_Log_m3ED7BBB14A6FB9D99B8EF2E48FA22056FE7849DD_inline (ChannelEventArgs_t12792A7CC155DE5D9AE5C889DA102415CC67BD8E* __this, const RuntimeMethod* method) 
{
	{
		Log_t716EF1A690F81BB19494869650F9161B1B60E74A* L_0 = __this->___U3CLogU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC Log_get_Timestamp_m9ED5E25A3D1F03D3DAFD039B76D7C333F1BCAB49_inline (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = __this->___U3CTimestampU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 SessionContext_get_SessionId_m255DF493A86838D8658FAC9B943F49BDF1962990_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionContext_t3D364037AC5C6C3B13C778D15BFE9F8406F5C90E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_0 = ((SessionContext_t3D364037AC5C6C3B13C778D15BFE9F8406F5C90E_StaticFields*)il2cpp_codegen_static_fields_for(SessionContext_t3D364037AC5C6C3B13C778D15BFE9F8406F5C90E_il2cpp_TypeInfo_var))->___U3CSessionIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Log_set_Sid_m84495D0B7FAFB7D41C3DD1AFF5DB8E9D8F553F80_inline (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_0 = ___value0;
		__this->___U3CSidU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_gshared_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mA4048346752BF05849998E450987EB444BE2AD63_gshared_inline (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
