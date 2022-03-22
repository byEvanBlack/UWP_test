#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask`1<System.Object>>
struct Action_1_t720A9124847C07CE9782B527B42078EA48D0E970;
// System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask`1<System.String>>
struct Action_1_t22FBED9363A7A4047B1A9C292A172186B28A0B3C;
// System.Action`1<System.Threading.Tasks.Task`1<System.Nullable`1<System.Guid>>>
struct Action_1_t3D17A7F3B03B425D57654BAC0A572CCC94552120;
// System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask>
struct Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A;
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Nullable`1<System.Guid>>
struct AppCenterTask_1_t607F63C41BAB43BC4941DD60780C582E59050A07;
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean>
struct AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848;
// Microsoft.AppCenter.Unity.AppCenterTask`1<Microsoft.AppCenter.Unity.Crashes.ErrorReport>
struct AppCenterTask_1_t65EBB54C3C45E0625BF46EE257B85A5C0D40B89F;
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Int64>
struct AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F;
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Object>
struct AppCenterTask_1_tB96CB66F929CE022DC03C5E0091152A8D205641F;
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.String>
struct AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`1<System.Collections.IEnumerator>
struct Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_tF42287527472FA89789873F068A87C60A00EC7D3;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>
struct Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>
struct Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask>>
struct List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14;
// System.Threading.Tasks.TaskFactory`1<System.Nullable`1<System.Guid>>
struct TaskFactory_1_tD3290AF0E57AD151839632A7FE15F5AB18C42D20;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.Task`1<System.Nullable`1<System.Guid>>
struct Task_1_tF538A43CA1B31CD07E6A7AB3C10B4A8CF70228D6;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<Microsoft.AppCenter.Unity.Crashes.ErrorReport>
struct Task_1_t0DF36297AE51B35D21D08BD5137CDDACE341BC2C;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask>[]
struct Action_1U5BU5D_t6F1A6500B0C33D24C6B651E1193600C81B78D9C0;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog[]
struct ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Microsoft.AppCenter.Unity.Analytics.Analytics
struct Analytics_tD265BE413E2757DBA3F7A08B38A5A77063F111F1;
// Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal
struct AnalyticsInternal_t1A69E38757773806A1766F9CE3FD0749638BC94F;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// Assets.AppCenter.Plugins.Android.Utility.AndroidUtility
struct AndroidUtility_t8F62C5CBE69814E53A43E446312D05095E339F0B;
// UnityEngine.WSA.AppCallbackItem
struct AppCallbackItem_t8F547FBF833801E6B146C645D74B8BCAAFD6B9AB;
// Microsoft.AppCenter.Unity.AppCenter
struct AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9;
// AppCenterBehavior
struct AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F;
// AppCenterBehaviorAdvanced
struct AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0;
// Microsoft.AppCenter.Unity.Internal.AppCenterInternal
struct AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF;
// AppCenterSettings
struct AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0;
// AppCenterSettingsAdvanced
struct AppCenterSettingsAdvanced_t3C77BB839D0D7E010225EB4724C0A8677608452D;
// Microsoft.AppCenter.Unity.AppCenterTask
struct AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A;
// AppSecretAttribute
struct AppSecretAttribute_tA27B00D919104E7C568F0EA592C8483FC3F73438;
// System.Reflection.Assembly
struct Assembly_t;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Microsoft.AppCenter.Unity.Crashes.Crashes
struct Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50;
// Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate
struct CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B;
// Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal
struct CrashesInternal_t0D85F6C469ED354E5321EC2556D05C644E9D4E36;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// CustomDropDownPropertyAttribute
struct CustomDropDownPropertyAttribute_tBB81AB17FD57948F6CDE254CDF0CC56668AF2B15;
// CustomUrlProperty
struct CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.AppCenter.Unity.Device
struct Device_t755299AB5F78614858DD1FFB0744D96517966BF9;
// Microsoft.AppCenter.Unity.Distribute.Distribute
struct Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400;
// Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal
struct DistributeInternal_tE6C58E65586E99CC3B598D4B4E616EDF411EE41B;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog
struct ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F;
// Microsoft.AppCenter.Unity.Crashes.ErrorReport
struct ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// Microsoft.AppCenter.Unity.Analytics.EventProperties
struct EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF;
// Microsoft.AppCenter.Unity.Analytics.Internal.EventPropertiesInternal
struct EventPropertiesInternal_t0491918ACBCF73EAFDC7F002DE18FBA5640F2290;
// Microsoft.AppCenter.Unity.Crashes.Models.Exception
struct Exception_t4102CE9657F42B955941C1DB3682212AAE071596;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// Microsoft.AppCenter.Utils.IApplicationSettings
struct IApplicationSettings_t907395EDA37063EF30129766E7B9E6616C304269;
// Microsoft.AppCenter.Utils.IApplicationSettingsFactory
struct IApplicationSettingsFactory_t73395775CEA2633A58794F389FADC333412995AC;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Microsoft.AppCenter.Utils.IScreenSizeProvider
struct IScreenSizeProvider_tC7592A87867958C83C4AB751170BD8929EAE8D94;
// Microsoft.AppCenter.Utils.IScreenSizeProviderFactory
struct IScreenSizeProviderFactory_tDDED5C50CF59AA1E3651D5693870EA23AAA90FD8;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// MaxStorageSizeProperty
struct MaxStorageSizeProperty_tFD96186C17180DD384577CBF433AB9CF0AE1B846;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Microsoft.AppCenter.Unity.Distribute.NoReleaseAvailableCallback
struct NoReleaseAvailableCallback_t2EA6E66890C8D2094ECA6FF52AFFBD2542802704;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// Microsoft.AppCenter.Unity.Analytics.PropertyConfigurator
struct PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91;
// Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal
struct PropertyConfiguratorInternal_t6C451FBD973EB49AAE7E63A0961C83631D7989A4;
// Microsoft.AppCenter.Unity.Distribute.ReleaseAvailableCallback
struct ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A;
// Microsoft.AppCenter.Unity.Distribute.ReleaseDetails
struct ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.AppCenter.Utils.ScreenSizeProviderBase
struct ScreenSizeProviderBase_t59E62DFA6613A02E514B86A66025BD6199D80180;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// Test
struct Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// Microsoft.Toolkit.Uwp.Notifications.ToastContent
struct ToastContent_tD09A29307A964802B9EC91EDF2D425EAD7D0ACF5;
// Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder
struct ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773;
// Microsoft.AppCenter.Unity.Analytics.TransmissionTarget
struct TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3;
// Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal
struct TransmissionTargetInternal_tF7CA4859D77A5305C4003B4A8372FF8D0F3E9BC7;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
// Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings
struct UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A;
// Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettingsFactory
struct UnityApplicationSettingsFactory_t08F1EC52F5EFAB3E39543A2E3FD9926E44BCF314;
// Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettingsHelper
struct UnityApplicationSettingsHelper_t612F24E1389046370CB9FC6B4A01A631B3A798F0;
// Microsoft.AppCenter.Unity.Internal.Utils.UnityCoroutineHelper
struct UnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118;
// Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProvider
struct UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9;
// Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProviderFactory
struct UnityScreenSizeProviderFactory_tB85C15DE74D726E03FD34EF2B6CD2CD08CD854F9;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Microsoft.AppCenter.Unity.Distribute.WillExitAppCallback
struct WillExitAppCallback_tD0F683F8A55A233230DECD10BB6E77824BADE550;
// Microsoft.AppCenter.Unity.Crashes.WrapperException
struct WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92;
// Microsoft.AppCenter.Unity.Crashes.Internal.WrapperExceptionInternal
struct WrapperExceptionInternal_t34533181969DEAE7E5383A07C31147FA2DFAA234;
// Microsoft.AppCenter.WrapperSdk
struct WrapperSdk_tECB9236A440301E3EE2E2B3C8A3EBE48DCC28B31;
// Microsoft.AppCenter.Unity.AppCenter/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t307C4B9794205410B456848306C318671EC906D9;
// Microsoft.AppCenter.Unity.AppCenter/SetMaxStorageSizeCompletionHandler
struct SetMaxStorageSizeCompletionHandler_t7C2D2C9543FEAF55C31123A331F4388E97DE1F36;
// Microsoft.AppCenter.Unity.Internal.AppCenterInternal/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t7B6288E3315E7FBD6CC04CDAD0867E254751558A;
// AppCenterSettings/<>c
struct U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6;
// Microsoft.AppCenter.Unity.AppCenterTask/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t09A38423D58B8050C75EC07995384839DBF88523;
// Microsoft.AppCenter.Unity.Crashes.Crashes/FailedToSendErrorReportHandler
struct FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47;
// Microsoft.AppCenter.Unity.Crashes.Crashes/GetErrorAttachmentsHandler
struct GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0;
// Microsoft.AppCenter.Unity.Crashes.Crashes/SendingErrorReportHandler
struct SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC;
// Microsoft.AppCenter.Unity.Crashes.Crashes/SentErrorReportHandler
struct SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09;
// Microsoft.AppCenter.Unity.Crashes.Crashes/ShouldProcessErrorReportHandler
struct ShouldProcessErrorReportHandler_t4E12F40F03B893649A44881F0272F6738801A619;
// Microsoft.AppCenter.Unity.Crashes.Crashes/UserConfirmationHandler
struct UserConfirmationHandler_tBDA7834B3F9801EC3F58014178039A6DCBB1D0E3;
// Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal/Crashes
struct Crashes_t732D17C72C32A314421B946D4B8F760B4E7CA6F2;
// Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal/Distribute
struct Distribute_t84FF430EF26AEEB554DC8DA656A19DFF0772C827;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings/<MainThreadCoroutine>d__10
struct U3CMainThreadCoroutineU3Ed__10_t0AA9E98CB6DD6FC8382CE0D587A7F304EB2D4431;
// Microsoft.AppCenter.Unity.Internal.Utils.UnityCoroutineHelper/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tD61BD08ED3DE5B400CF1A9F2AC443555AD943384;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t22FBED9363A7A4047B1A9C292A172186B28A0B3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3D17A7F3B03B425D57654BAC0A572CCC94552120_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsInternal_t1A69E38757773806A1766F9CE3FD0749638BC94F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidUtility_t8F62C5CBE69814E53A43E446312D05095E339F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppCallbackItem_t8F547FBF833801E6B146C645D74B8BCAAFD6B9AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppCenterTask_1_t607F63C41BAB43BC4941DD60780C582E59050A07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeviceInformationHelper_t5E1CED181AF763E4029CA7220F41B8777A7DD155_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaxStorageSizeProperty_tFD96186C17180DD384577CBF433AB9CF0AE1B846_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMainThreadCoroutineU3Ed__10_t0AA9E98CB6DD6FC8382CE0D587A7F304EB2D4431_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_t09A38423D58B8050C75EC07995384839DBF88523_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass17_0_t7B6288E3315E7FBD6CC04CDAD0867E254751558A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tD61BD08ED3DE5B400CF1A9F2AC443555AD943384_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t307C4B9794205410B456848306C318671EC906D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityApplicationSettingsFactory_t08F1EC52F5EFAB3E39543A2E3FD9926E44BCF314_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityScreenSizeProviderFactory_tB85C15DE74D726E03FD34EF2B6CD2CD08CD854F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WrapperSdk_t0B116AC5E53CC4151FE763ED5C93185BA9350ED0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WrapperSdk_tECB9236A440301E3EE2E2B3C8A3EBE48DCC28B31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0A97B4E158E9A7A0D9B4D90D9B6105A680F12788;
IL2CPP_EXTERN_C String_t* _stringLiteral0B56062D03299854F7DBA8B79B7FD27BACD9BAD2;
IL2CPP_EXTERN_C String_t* _stringLiteral0E1D4E6BAF275B76FE3C8E35B29BA62E98FD82A1;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral27CE5FBFC180E846C7FA300C4B9FB1A5A5D2FEAA;
IL2CPP_EXTERN_C String_t* _stringLiteral2BCD6469CBFAD87F852FA17274E38C0FF810B8F1;
IL2CPP_EXTERN_C String_t* _stringLiteral2DE10CB9863FBD79A26BDD1E6581EC58F503024E;
IL2CPP_EXTERN_C String_t* _stringLiteral3310E40EB2DE619658A5FE8C5761980DD156B745;
IL2CPP_EXTERN_C String_t* _stringLiteral35CC70012F059CB8275866C9A7512CDEB6B5C503;
IL2CPP_EXTERN_C String_t* _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9;
IL2CPP_EXTERN_C String_t* _stringLiteral3C55356E644F8F48930D301E46AB2B273303818E;
IL2CPP_EXTERN_C String_t* _stringLiteral47641359241938A271986FDB45287C9F5F9EF71A;
IL2CPP_EXTERN_C String_t* _stringLiteral4A885A89832F4E62C8E259AA47DF0907BB0C1ED3;
IL2CPP_EXTERN_C String_t* _stringLiteral4C5383CC70EC2B2F2264A3B6047CCE0F83B5B723;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral5065513D9101AA14628E1B49A28A2D9F6FF4B32D;
IL2CPP_EXTERN_C String_t* _stringLiteral52357DD8902986C44A08FF6FDBBD46CA5CEA0331;
IL2CPP_EXTERN_C String_t* _stringLiteral5A4D640CF9D59A4F71FD24C9CD2278A4D71D503E;
IL2CPP_EXTERN_C String_t* _stringLiteral5C05BB4EEA109136D3437B18A775C920D9DB0853;
IL2CPP_EXTERN_C String_t* _stringLiteral67ED1B76D5518E000407B5E4A120E61725C91968;
IL2CPP_EXTERN_C String_t* _stringLiteral78213F6858633125288256D108BC17D96595ACE1;
IL2CPP_EXTERN_C String_t* _stringLiteral83E5DECC987E8858B24A7178014E854EE2A9F663;
IL2CPP_EXTERN_C String_t* _stringLiteral8A5A594451EBCA834C28B0A6993647185ECF2D16;
IL2CPP_EXTERN_C String_t* _stringLiteral8AA961E914CD1D587EB94CC5E82EFA76731DF41B;
IL2CPP_EXTERN_C String_t* _stringLiteral8AEF20CB652FB8962A6ED65B796910FF9FD7EE35;
IL2CPP_EXTERN_C String_t* _stringLiteral8D9CB688EB52F6892891546051D7091018D5885A;
IL2CPP_EXTERN_C String_t* _stringLiteral92454A15C89C9980DD827D48776A457805E649E0;
IL2CPP_EXTERN_C String_t* _stringLiteral940FB4B43F1DB758BF6397ADAF6422591EFA018D;
IL2CPP_EXTERN_C String_t* _stringLiteral960F467686B419FB4E398CEBCF39AF7A4A7C488E;
IL2CPP_EXTERN_C String_t* _stringLiteral9CD71117A245265BF318F4E9FBBD3D0D9C8B53FF;
IL2CPP_EXTERN_C String_t* _stringLiteral9EC438EC45167313D62C8D0D3D2FD52F72313009;
IL2CPP_EXTERN_C String_t* _stringLiteralA18A4AE569C5BE88A9C406093C040EFEBFF78C5E;
IL2CPP_EXTERN_C String_t* _stringLiteralA3B7DC9C565FD7E648DBD2C97A54803A3B1A6925;
IL2CPP_EXTERN_C String_t* _stringLiteralB2230E71BB2A4058F4E1979D5887615085B84A60;
IL2CPP_EXTERN_C String_t* _stringLiteralBFA90AE2C53115375F9EE68D02C9F024EEEFE8F0;
IL2CPP_EXTERN_C String_t* _stringLiteralC7B03CF8C5272BDEFBF0A12AE37C1D117DEA4EF7;
IL2CPP_EXTERN_C String_t* _stringLiteralCE5FDA99FD0DA652091B477D5413646FF68054DE;
IL2CPP_EXTERN_C String_t* _stringLiteralD2185E2B320102DBAC16E15976BE9935D7508BC0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAA4544CDE34CEB868CCD792040C2BC24558C158;
IL2CPP_EXTERN_C String_t* _stringLiteralDBBFEF8286CDBE879B1CF60BBB869EA58D9C57FE;
IL2CPP_EXTERN_C String_t* _stringLiteralEFF2771310A145A828512B133B8055C8D0344B67;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppCenterTask_1_ContinueWith_mF2E0761A5B505A6782DC315B4C74EA7EAF1BD977_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppCenterTask_1_FromCompleted_m2E8070E027ACE944E6D8383CD98A29612E648AD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppCenterTask_1_FromCompleted_mBE828ABFBB7DC9BE11223EA6790E96F6D1926A03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppCenterTask_1_FromCompleted_mD4A54800F7407EBE1F847CD866DF4CC169D36F0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppCenterTask_1_SetResult_m3E3609EB4BB3170A7200F0E1DF34B7F47619473B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppCenterTask_1_SetResult_mDCC3C8BB562D7857B003F5C88956D7C3C41FDCF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppCenterTask_1_SetResult_mE7004CD9C33E553C310DB1C116E237E6230CC1F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppCenterTask_1__ctor_m0E19D19E40737B5E9363CD68F6321579AF2A22C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppCenterTask_1__ctor_m2DE912DF90D32913EC3C63702DDF7FEB2A959A61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppCenterTask_1__ctor_m927A935214D6DFDB79C849B954C668BEF3334868_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppCenterTask_1__ctor_mF80BD0ADCE48A340567D5B1A044CFE903B6001F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppCenterTask_1_get_Result_mF34BE561D065C102FB30222D3BEFBC354E33E66A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppCenterTask_ThrowIfCompleted_m6DBBCF1CA10870989F8BB39CD249602A973C2BD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppCenterTask_U3C_ctorU3Eb__15_0_mEF8B4D95C265FD3CE04CE34BB60F9FD3B5039BC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0_mE226822001911363684FFE9F5322ED99DFA1B97F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Crashes_HandleAppCenterInitialized_m5462C318A07C9606C2AAE936DA8104617B13BFB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Crashes_Initialize_m897C9327162D675E5708EFFC2CCF9A6F2740FDEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_m92EFE2CC5B9152F9754C353D72BAF71C5372B420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisType_t_m28C7A2C8A923EDB686746CE65C1C0BD2BCF93A00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_mEF0494673E3DDABC8B20F35D322B13B06740F477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisType_t_mBDD356C957E8D2FEE45299F34F461B519451D745_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m75D841D3D6C1099DC7CEA2728300005614603CA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m08528CAB78BA01626958C79ED1EB6247C3D6D8D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m17C9E6391509BD97E223AA75D7DF361525F84D5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118_mE325A615D9682C02060763EF7C2A24C3C0DEBDFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_mFF5B542CA4BEEC20923D0F3273AEFA493CFE071F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m4E6CF81A3D2231FFE97362398E4A8E43CFE9E8BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9A280BF1FC5498FEC38CF4D3A9D0069191B6C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m7EB6D122B376D641464D9C7455DBD6EE27350F08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m545481921B687960D51772877ACC772E96EF1C41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mAF39173491C493DC9C643F76BC50C311070BEE56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFBDB4A17BCF131E67BBA80B546CC944D4FFFB3A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mC6EDE8162AB388B6482F745FF996B594ACC373AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mD2155EEC4DF44AF1AD75AEB77DA72D350854D0F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mA4048346752BF05849998E450987EB444BE2AD63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisUnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118_m274204CBBE40669EDDC0D91E7C45D3378F879CC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_mD999084597085FBDB73C538D8D5A74EBE54B1CD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_mBBDAAE00353EA3E045503F629D77F8A7B0C43D32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMainThreadCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_m6B38DCFE25D3AE922B53182649FA1846780C9661_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_AppSecretU3Eb__17_0_mE4D0DDD7037CED3C3CD3B371763412E28C688819_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_AppSecretU3Eb__17_1_mE33C4069483513013A957E2BDA5FD6C04AEC1348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_ServicesU3Eb__19_0_mB1634A6F4049D1E10D7E5AA607D554DCE17DA607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CGetAwaiterU3Eb__0_mE81B337BD41520523D3FF90A39F4E5940550A0CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3CGetInstallIdAsyncU3Eb__0_m531818B791314B962EF85AC42D00DE2D6CC6976A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CStartCoroutineU3Eb__0_m96FD6E2DE2902064DBA740E143A1FDC82006B60E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CGetInstallIdAsyncU3Eb__0_mBCD4BBC1DD769E047C3FF8C697A56E213AF2E41C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityApplicationSettings_MainThreadCoroutine_m574687C1E28855F34AED1E0268A16EA77C0F83A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WrapperSdk_GetWrapperRuntimeVersion_m4BF63A0770E75E58B2AFDDCB231A3E89FC2522CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AppCenterSettingsAdvanced_t3C77BB839D0D7E010225EB4724C0A8677608452D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask>>
struct List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Action_1U5BU5D_t6F1A6500B0C33D24C6B651E1193600C81B78D9C0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Action_1U5BU5D_t6F1A6500B0C33D24C6B651E1193600C81B78D9C0* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_emptyArray_5;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ____task_0;
};

// Microsoft.AppCenter.Unity.Analytics.Analytics
struct Analytics_tD265BE413E2757DBA3F7A08B38A5A77063F111F1  : public RuntimeObject
{
};

// Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal
struct AnalyticsInternal_t1A69E38757773806A1766F9CE3FD0749638BC94F  : public RuntimeObject
{
};

struct AnalyticsInternal_t1A69E38757773806A1766F9CE3FD0749638BC94F_StaticFields
{
	// System.Boolean Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::_warningLogged
	bool ____warningLogged_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// Assets.AppCenter.Plugins.Android.Utility.AndroidUtility
struct AndroidUtility_t8F62C5CBE69814E53A43E446312D05095E339F0B  : public RuntimeObject
{
};

struct AndroidUtility_t8F62C5CBE69814E53A43E446312D05095E339F0B_StaticFields
{
	// UnityEngine.AndroidJavaObject Assets.AppCenter.Plugins.Android.Utility.AndroidUtility::_context
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____context_0;
};

// Microsoft.AppCenter.Unity.AppCenter
struct AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9  : public RuntimeObject
{
};

struct AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields
{
	// Microsoft.AppCenter.Unity.AppCenterTask`1<System.String> Microsoft.AppCenter.Unity.AppCenter::_secretTask
	AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* ____secretTask_0;
	// Microsoft.AppCenter.Unity.AppCenterTask`1<System.String> Microsoft.AppCenter.Unity.AppCenter::_logUrlTask
	AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* ____logUrlTask_1;
	// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Int64> Microsoft.AppCenter.Unity.AppCenter::_storageSizeTask
	AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F* ____storageSizeTask_2;
};

// Microsoft.AppCenter.Unity.Internal.AppCenterInternal
struct AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF  : public RuntimeObject
{
};

struct AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_StaticFields
{
	// System.Boolean Microsoft.AppCenter.Unity.Internal.AppCenterInternal::_prepared
	bool ____prepared_0;
	// System.Object Microsoft.AppCenter.Unity.Internal.AppCenterInternal::_lockObject
	RuntimeObject* ____lockObject_1;
};
struct Il2CppArrayBounds;

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Microsoft.AppCenter.Unity.Crashes.Crashes
struct Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50  : public RuntimeObject
{
};

struct Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_StaticFields
{
	// System.Boolean Microsoft.AppCenter.Unity.Crashes.Crashes::_reportUnhandledExceptions
	bool ____reportUnhandledExceptions_1;
	// System.Boolean Microsoft.AppCenter.Unity.Crashes.Crashes::_enableErrorAttachmentsCallbacks
	bool ____enableErrorAttachmentsCallbacks_2;
	// System.Object Microsoft.AppCenter.Unity.Crashes.Crashes::_objectLock
	RuntimeObject* ____objectLock_3;
};

// Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate
struct CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B  : public RuntimeObject
{
};

struct CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_StaticFields
{
	// Microsoft.AppCenter.Unity.Crashes.Crashes/SendingErrorReportHandler Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::SendingErrorReport
	SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* ___SendingErrorReport_0;
	// Microsoft.AppCenter.Unity.Crashes.Crashes/SentErrorReportHandler Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::SentErrorReport
	SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* ___SentErrorReport_1;
	// Microsoft.AppCenter.Unity.Crashes.Crashes/FailedToSendErrorReportHandler Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::FailedToSendErrorReport
	FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* ___FailedToSendErrorReport_2;
	// Microsoft.AppCenter.Unity.Crashes.Crashes/GetErrorAttachmentsHandler Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::GetErrorAttachmentsHandler
	GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* ___GetErrorAttachmentsHandler_3;
};

// Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal
struct CrashesInternal_t0D85F6C469ED354E5321EC2556D05C644E9D4E36  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// CustomUrlProperty
struct CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E  : public RuntimeObject
{
	// System.String CustomUrlProperty::UrlName
	String_t* ___UrlName_0;
	// System.Boolean CustomUrlProperty::UseCustomUrl
	bool ___UseCustomUrl_1;
	// System.String CustomUrlProperty::Url
	String_t* ___Url_2;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// Microsoft.AppCenter.Unity.Device
struct Device_t755299AB5F78614858DD1FFB0744D96517966BF9  : public RuntimeObject
{
	// System.String Microsoft.AppCenter.Unity.Device::<SdkName>k__BackingField
	String_t* ___U3CSdkNameU3Ek__BackingField_0;
	// System.String Microsoft.AppCenter.Unity.Device::<SdkVersion>k__BackingField
	String_t* ___U3CSdkVersionU3Ek__BackingField_1;
	// System.String Microsoft.AppCenter.Unity.Device::<Model>k__BackingField
	String_t* ___U3CModelU3Ek__BackingField_2;
	// System.String Microsoft.AppCenter.Unity.Device::<OemName>k__BackingField
	String_t* ___U3COemNameU3Ek__BackingField_3;
	// System.String Microsoft.AppCenter.Unity.Device::<OsName>k__BackingField
	String_t* ___U3COsNameU3Ek__BackingField_4;
	// System.String Microsoft.AppCenter.Unity.Device::<OsVersion>k__BackingField
	String_t* ___U3COsVersionU3Ek__BackingField_5;
	// System.String Microsoft.AppCenter.Unity.Device::<OsBuild>k__BackingField
	String_t* ___U3COsBuildU3Ek__BackingField_6;
	// System.Int32 Microsoft.AppCenter.Unity.Device::<OsApiLevel>k__BackingField
	int32_t ___U3COsApiLevelU3Ek__BackingField_7;
	// System.String Microsoft.AppCenter.Unity.Device::<Locale>k__BackingField
	String_t* ___U3CLocaleU3Ek__BackingField_8;
	// System.Int32 Microsoft.AppCenter.Unity.Device::<TimeZoneOffset>k__BackingField
	int32_t ___U3CTimeZoneOffsetU3Ek__BackingField_9;
	// System.String Microsoft.AppCenter.Unity.Device::<ScreenSize>k__BackingField
	String_t* ___U3CScreenSizeU3Ek__BackingField_10;
	// System.String Microsoft.AppCenter.Unity.Device::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_11;
	// System.String Microsoft.AppCenter.Unity.Device::<CarrierName>k__BackingField
	String_t* ___U3CCarrierNameU3Ek__BackingField_12;
	// System.String Microsoft.AppCenter.Unity.Device::<CarrierCountry>k__BackingField
	String_t* ___U3CCarrierCountryU3Ek__BackingField_13;
	// System.String Microsoft.AppCenter.Unity.Device::<AppBuild>k__BackingField
	String_t* ___U3CAppBuildU3Ek__BackingField_14;
	// System.String Microsoft.AppCenter.Unity.Device::<AppNamespace>k__BackingField
	String_t* ___U3CAppNamespaceU3Ek__BackingField_15;
};

// Microsoft.AppCenter.Unity.Distribute.Distribute
struct Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400  : public RuntimeObject
{
};

struct Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_StaticFields
{
	// Microsoft.AppCenter.Unity.Distribute.ReleaseAvailableCallback Microsoft.AppCenter.Unity.Distribute.Distribute::<ReleaseAvailable>k__BackingField
	ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A* ___U3CReleaseAvailableU3Ek__BackingField_1;
	// Microsoft.AppCenter.Unity.Distribute.WillExitAppCallback Microsoft.AppCenter.Unity.Distribute.Distribute::<WillExitApp>k__BackingField
	WillExitAppCallback_tD0F683F8A55A233230DECD10BB6E77824BADE550* ___U3CWillExitAppU3Ek__BackingField_2;
	// Microsoft.AppCenter.Unity.Distribute.NoReleaseAvailableCallback Microsoft.AppCenter.Unity.Distribute.Distribute::<NoReleaseAvailable>k__BackingField
	NoReleaseAvailableCallback_t2EA6E66890C8D2094ECA6FF52AFFBD2542802704* ___U3CNoReleaseAvailableU3Ek__BackingField_3;
};

// Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal
struct DistributeInternal_tE6C58E65586E99CC3B598D4B4E616EDF411EE41B  : public RuntimeObject
{
};

// Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog
struct ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F  : public RuntimeObject
{
	// System.String Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_0;
	// System.Byte[] Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::<Data>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CDataU3Ek__BackingField_1;
	// System.String Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::<FileName>k__BackingField
	String_t* ___U3CFileNameU3Ek__BackingField_2;
	// System.String Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::<ContentType>k__BackingField
	String_t* ___U3CContentTypeU3Ek__BackingField_3;
	// Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog/AttachmentType Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_4;
};

// Microsoft.AppCenter.Unity.Analytics.EventProperties
struct EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.AppCenter.Unity.Analytics.EventProperties::_rawObject
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____rawObject_0;
};

// Microsoft.AppCenter.Unity.Analytics.Internal.EventPropertiesInternal
struct EventPropertiesInternal_t0491918ACBCF73EAFDC7F002DE18FBA5640F2290  : public RuntimeObject
{
};

// Microsoft.AppCenter.Unity.Crashes.Models.Exception
struct Exception_t4102CE9657F42B955941C1DB3682212AAE071596  : public RuntimeObject
{
	// System.String Microsoft.AppCenter.Unity.Crashes.Models.Exception::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_0;
	// System.String Microsoft.AppCenter.Unity.Crashes.Models.Exception::<StackTrace>k__BackingField
	String_t* ___U3CStackTraceU3Ek__BackingField_1;
};

// MaxStorageSizeProperty
struct MaxStorageSizeProperty_tFD96186C17180DD384577CBF433AB9CF0AE1B846  : public RuntimeObject
{
	// System.Boolean MaxStorageSizeProperty::UseCustomMaxStorageSize
	bool ___UseCustomMaxStorageSize_0;
	// System.Int64 MaxStorageSizeProperty::Size
	int64_t ___Size_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Microsoft.AppCenter.Unity.Analytics.PropertyConfigurator
struct PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91  : public RuntimeObject
{
	// System.Object Microsoft.AppCenter.Unity.Analytics.PropertyConfigurator::_rawObject
	RuntimeObject* ____rawObject_0;
};

// Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal
struct PropertyConfiguratorInternal_t6C451FBD973EB49AAE7E63A0961C83631D7989A4  : public RuntimeObject
{
};

// Microsoft.AppCenter.Unity.Distribute.ReleaseDetails
struct ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B  : public RuntimeObject
{
	// System.Int32 Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.String Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_1;
	// System.String Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::<ShortVersion>k__BackingField
	String_t* ___U3CShortVersionU3Ek__BackingField_2;
	// System.String Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::<ReleaseNotes>k__BackingField
	String_t* ___U3CReleaseNotesU3Ek__BackingField_3;
	// System.Uri Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::<ReleaseNotesUrl>k__BackingField
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___U3CReleaseNotesUrlU3Ek__BackingField_4;
	// System.Boolean Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::<MandatoryUpdate>k__BackingField
	bool ___U3CMandatoryUpdateU3Ek__BackingField_5;
};

// Microsoft.AppCenter.Utils.ScreenSizeProviderBase
struct ScreenSizeProviderBase_t59E62DFA6613A02E514B86A66025BD6199D80180  : public RuntimeObject
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

// Microsoft.AppCenter.Unity.Analytics.TransmissionTarget
struct TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3  : public RuntimeObject
{
	// System.Object Microsoft.AppCenter.Unity.Analytics.TransmissionTarget::_rawObject
	RuntimeObject* ____rawObject_0;
};

// Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal
struct TransmissionTargetInternal_tF7CA4859D77A5305C4003B4A8372FF8D0F3E9BC7  : public RuntimeObject
{
};

// Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings
struct UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A  : public RuntimeObject
{
};

struct UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_StaticFields
{
	// System.Object Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings::_lockObject
	RuntimeObject* ____lockObject_1;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings::_current
	RuntimeObject* ____current_2;
	// System.Boolean Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings::_dirty
	bool ____dirty_3;
};

// Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettingsFactory
struct UnityApplicationSettingsFactory_t08F1EC52F5EFAB3E39543A2E3FD9926E44BCF314  : public RuntimeObject
{
};

// Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProviderFactory
struct UnityScreenSizeProviderFactory_tB85C15DE74D726E03FD34EF2B6CD2CD08CD854F9  : public RuntimeObject
{
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
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

// Microsoft.AppCenter.Unity.Crashes.WrapperException
struct WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92  : public RuntimeObject
{
	// System.Object Microsoft.AppCenter.Unity.Crashes.WrapperException::_rawObject
	RuntimeObject* ____rawObject_0;
};

// Microsoft.AppCenter.Unity.Crashes.Internal.WrapperExceptionInternal
struct WrapperExceptionInternal_t34533181969DEAE7E5383A07C31147FA2DFAA234  : public RuntimeObject
{
};

// Microsoft.AppCenter.WrapperSdk
struct WrapperSdk_tECB9236A440301E3EE2E2B3C8A3EBE48DCC28B31  : public RuntimeObject
{
	// System.String Microsoft.AppCenter.WrapperSdk::<WrapperSdkVersion>k__BackingField
	String_t* ___U3CWrapperSdkVersionU3Ek__BackingField_0;
	// System.String Microsoft.AppCenter.WrapperSdk::<WrapperSdkName>k__BackingField
	String_t* ___U3CWrapperSdkNameU3Ek__BackingField_1;
	// System.String Microsoft.AppCenter.WrapperSdk::<WrapperRuntimeVersion>k__BackingField
	String_t* ___U3CWrapperRuntimeVersionU3Ek__BackingField_2;
	// System.String Microsoft.AppCenter.WrapperSdk::<LiveUpdateReleaseLabel>k__BackingField
	String_t* ___U3CLiveUpdateReleaseLabelU3Ek__BackingField_3;
	// System.String Microsoft.AppCenter.WrapperSdk::<LiveUpdateDeploymentKey>k__BackingField
	String_t* ___U3CLiveUpdateDeploymentKeyU3Ek__BackingField_4;
	// System.String Microsoft.AppCenter.WrapperSdk::<LiveUpdatePackageHash>k__BackingField
	String_t* ___U3CLiveUpdatePackageHashU3Ek__BackingField_5;
};

// Microsoft.AppCenter.Unity.WrapperSdk
struct WrapperSdk_t0B116AC5E53CC4151FE763ED5C93185BA9350ED0  : public RuntimeObject
{
};

struct WrapperSdk_t0B116AC5E53CC4151FE763ED5C93185BA9350ED0_StaticFields
{
	// System.String Microsoft.AppCenter.Unity.WrapperSdk::_wrapperRuntimeVersion
	String_t* ____wrapperRuntimeVersion_0;
	// System.Boolean Microsoft.AppCenter.Unity.WrapperSdk::_hasAttemptedToGetRuntimeVersion
	bool ____hasAttemptedToGetRuntimeVersion_1;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Microsoft.AppCenter.Unity.AppCenter/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t307C4B9794205410B456848306C318671EC906D9  : public RuntimeObject
{
	// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Nullable`1<System.Guid>> Microsoft.AppCenter.Unity.AppCenter/<>c__DisplayClass9_0::guidTask
	AppCenterTask_1_t607F63C41BAB43BC4941DD60780C582E59050A07* ___guidTask_0;
};

// Microsoft.AppCenter.Unity.Internal.AppCenterInternal/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t7B6288E3315E7FBD6CC04CDAD0867E254751558A  : public RuntimeObject
{
	// Microsoft.AppCenter.Unity.AppCenterTask`1<System.String> Microsoft.AppCenter.Unity.Internal.AppCenterInternal/<>c__DisplayClass17_0::stringTask
	AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* ___stringTask_0;
};

// AppCenterSettings/<>c
struct U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6  : public RuntimeObject
{
};

struct U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_StaticFields
{
	// AppCenterSettings/<>c AppCenterSettings/<>c::<>9
	U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6* ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean> AppCenterSettings/<>c::<>9__17_0
	Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* ___U3CU3E9__17_0_1;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String> AppCenterSettings/<>c::<>9__17_1
	Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* ___U3CU3E9__17_1_2;
	// System.Func`2<System.Type,System.Boolean> AppCenterSettings/<>c::<>9__19_0
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___U3CU3E9__19_0_3;
};

// Microsoft.AppCenter.Unity.AppCenterTask/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t09A38423D58B8050C75EC07995384839DBF88523  : public RuntimeObject
{
	// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> Microsoft.AppCenter.Unity.AppCenterTask/<>c__DisplayClass12_0::taskCompletionSource
	TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* ___taskCompletionSource_0;
};

// Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal/Crashes
struct Crashes_t732D17C72C32A314421B946D4B8F760B4E7CA6F2  : public RuntimeObject
{
};

// Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal/Distribute
struct Distribute_t84FF430EF26AEEB554DC8DA656A19DFF0772C827  : public RuntimeObject
{
};

// Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings/<MainThreadCoroutine>d__10
struct U3CMainThreadCoroutineU3Ed__10_t0AA9E98CB6DD6FC8382CE0D587A7F304EB2D4431  : public RuntimeObject
{
	// System.Int32 Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings/<MainThreadCoroutine>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings/<MainThreadCoroutine>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// Microsoft.AppCenter.Unity.Internal.Utils.UnityCoroutineHelper/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tD61BD08ED3DE5B400CF1A9F2AC443555AD943384  : public RuntimeObject
{
	// System.Func`1<System.Collections.IEnumerator> Microsoft.AppCenter.Unity.Internal.Utils.UnityCoroutineHelper/<>c__DisplayClass2_0::coroutine
	Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* ___coroutine_0;
};

// System.Collections.Generic.List`1/Enumerator<System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask>>
struct Enumerator_t67E125105D3F8ECD4E90BC8D26D7F3BD19BEB99E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
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

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// Microsoft.AppCenter.Unity.AppCenterTask
struct AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Collections.Generic.List`1<System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask>> Microsoft.AppCenter.Unity.AppCenterTask::_continuationActions
	List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099* ____continuationActions_0;
	// System.Object Microsoft.AppCenter.Unity.AppCenterTask::_lockObject
	RuntimeObject* ____lockObject_1;
	// System.Boolean Microsoft.AppCenter.Unity.AppCenterTask::<IsComplete>k__BackingField
	bool ___U3CIsCompleteU3Ek__BackingField_2;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.Resolution
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 
{
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProvider
struct UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9  : public ScreenSizeProviderBase_t59E62DFA6613A02E514B86A66025BD6199D80180
{
	// System.EventHandler Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProvider::ScreenSizeChanged
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ScreenSizeChanged_3;
};

struct UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_StaticFields
{
	// System.Int32 Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProvider::_height
	int32_t ____height_0;
	// System.Int32 Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProvider::_width
	int32_t ____width_1;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProvider::_initializationTaskSource
	TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* ____initializationTaskSource_2;
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

// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean>
struct AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848  : public AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A
{
	// System.Threading.Tasks.Task`1<TResult> Microsoft.AppCenter.Unity.AppCenterTask`1::_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ____task_3;
	// System.Threading.ManualResetEvent Microsoft.AppCenter.Unity.AppCenterTask`1::_completionEvent
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____completionEvent_4;
	// TResult Microsoft.AppCenter.Unity.AppCenterTask`1::_result
	bool ____result_5;
	// System.Exception Microsoft.AppCenter.Unity.AppCenterTask`1::_exception
	Exception_t* ____exception_6;
};

// Microsoft.AppCenter.Unity.AppCenterTask`1<Microsoft.AppCenter.Unity.Crashes.ErrorReport>
struct AppCenterTask_1_t65EBB54C3C45E0625BF46EE257B85A5C0D40B89F  : public AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A
{
	// System.Threading.Tasks.Task`1<TResult> Microsoft.AppCenter.Unity.AppCenterTask`1::_task
	Task_1_t0DF36297AE51B35D21D08BD5137CDDACE341BC2C* ____task_3;
	// System.Threading.ManualResetEvent Microsoft.AppCenter.Unity.AppCenterTask`1::_completionEvent
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____completionEvent_4;
	// TResult Microsoft.AppCenter.Unity.AppCenterTask`1::_result
	ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ____result_5;
	// System.Exception Microsoft.AppCenter.Unity.AppCenterTask`1::_exception
	Exception_t* ____exception_6;
};

// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Int64>
struct AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F  : public AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A
{
	// System.Threading.Tasks.Task`1<TResult> Microsoft.AppCenter.Unity.AppCenterTask`1::_task
	Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* ____task_3;
	// System.Threading.ManualResetEvent Microsoft.AppCenter.Unity.AppCenterTask`1::_completionEvent
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____completionEvent_4;
	// TResult Microsoft.AppCenter.Unity.AppCenterTask`1::_result
	int64_t ____result_5;
	// System.Exception Microsoft.AppCenter.Unity.AppCenterTask`1::_exception
	Exception_t* ____exception_6;
};

// Microsoft.AppCenter.Unity.AppCenterTask`1<System.String>
struct AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94  : public AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A
{
	// System.Threading.Tasks.Task`1<TResult> Microsoft.AppCenter.Unity.AppCenterTask`1::_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ____task_3;
	// System.Threading.ManualResetEvent Microsoft.AppCenter.Unity.AppCenterTask`1::_completionEvent
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____completionEvent_4;
	// TResult Microsoft.AppCenter.Unity.AppCenterTask`1::_result
	String_t* ____result_5;
	// System.Exception Microsoft.AppCenter.Unity.AppCenterTask`1::_exception
	Exception_t* ____exception_6;
};

// System.Nullable`1<System.Guid>
struct Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Guid_t ___value_1;
};

// AppSecretAttribute
struct AppSecretAttribute_tA27B00D919104E7C568F0EA592C8483FC3F73438  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String AppSecretAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// CustomDropDownPropertyAttribute
struct CustomDropDownPropertyAttribute_tBB81AB17FD57948F6CDE254CDF0CC56668AF2B15  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String CustomDropDownPropertyAttribute::<SelectedKey>k__BackingField
	String_t* ___U3CSelectedKeyU3Ek__BackingField_0;
	// System.Int32 CustomDropDownPropertyAttribute::<SelectedValue>k__BackingField
	int32_t ___U3CSelectedValueU3Ek__BackingField_1;
};

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_3;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_4;
};

struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_1;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_2;
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Nullable`1<System.Guid>>
struct AppCenterTask_1_t607F63C41BAB43BC4941DD60780C582E59050A07  : public AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A
{
	// System.Threading.Tasks.Task`1<TResult> Microsoft.AppCenter.Unity.AppCenterTask`1::_task
	Task_1_tF538A43CA1B31CD07E6A7AB3C10B4A8CF70228D6* ____task_3;
	// System.Threading.ManualResetEvent Microsoft.AppCenter.Unity.AppCenterTask`1::_completionEvent
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____completionEvent_4;
	// TResult Microsoft.AppCenter.Unity.AppCenterTask`1::_result
	Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ____result_5;
	// System.Exception Microsoft.AppCenter.Unity.AppCenterTask`1::_exception
	Exception_t* ____exception_6;
};

// System.Threading.Tasks.Task`1<System.Nullable`1<System.Guid>>
struct Task_1_tF538A43CA1B31CD07E6A7AB3C10B4A8CF70228D6  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___m_result_22;
};

struct Task_1_tF538A43CA1B31CD07E6A7AB3C10B4A8CF70228D6_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tD3290AF0E57AD151839632A7FE15F5AB18C42D20* ___s_defaultFactory_23;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.AppCenter.Unity.Crashes.ErrorReport
struct ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A  : public RuntimeObject
{
	// System.String Microsoft.AppCenter.Unity.Crashes.ErrorReport::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.DateTimeOffset Microsoft.AppCenter.Unity.Crashes.ErrorReport::<AppStartTime>k__BackingField
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___U3CAppStartTimeU3Ek__BackingField_1;
	// System.DateTimeOffset Microsoft.AppCenter.Unity.Crashes.ErrorReport::<AppErrorTime>k__BackingField
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___U3CAppErrorTimeU3Ek__BackingField_2;
	// Microsoft.AppCenter.Unity.Device Microsoft.AppCenter.Unity.Crashes.ErrorReport::<Device>k__BackingField
	Device_t755299AB5F78614858DD1FFB0744D96517966BF9* ___U3CDeviceU3Ek__BackingField_3;
	// Microsoft.AppCenter.Unity.Crashes.Models.Exception Microsoft.AppCenter.Unity.Crashes.ErrorReport::<Exception>k__BackingField
	Exception_t4102CE9657F42B955941C1DB3682212AAE071596* ___U3CExceptionU3Ek__BackingField_4;
	// System.String Microsoft.AppCenter.Unity.Crashes.ErrorReport::<ThreadName>k__BackingField
	String_t* ___U3CThreadNameU3Ek__BackingField_5;
	// System.Int32 Microsoft.AppCenter.Unity.Crashes.ErrorReport::<ProcessId>k__BackingField
	int32_t ___U3CProcessIdU3Ek__BackingField_6;
	// System.String Microsoft.AppCenter.Unity.Crashes.ErrorReport::<ReporterKey>k__BackingField
	String_t* ___U3CReporterKeyU3Ek__BackingField_7;
	// System.String Microsoft.AppCenter.Unity.Crashes.ErrorReport::<ReporterSignal>k__BackingField
	String_t* ___U3CReporterSignalU3Ek__BackingField_8;
	// System.Boolean Microsoft.AppCenter.Unity.Crashes.ErrorReport::<IsAppKill>k__BackingField
	bool ___U3CIsAppKillU3Ek__BackingField_9;
	// System.Boolean Microsoft.AppCenter.Unity.Crashes.ErrorReport::<IsCrash>k__BackingField
	bool ___U3CIsCrashU3Ek__BackingField_10;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask`1<System.String>>
struct Action_1_t22FBED9363A7A4047B1A9C292A172186B28A0B3C  : public MulticastDelegate_t
{
};

// System.Action`1<System.Threading.Tasks.Task`1<System.Nullable`1<System.Guid>>>
struct Action_1_t3D17A7F3B03B425D57654BAC0A572CCC94552120  : public MulticastDelegate_t
{
};

// System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask>
struct Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A  : public MulticastDelegate_t
{
};

// System.Func`1<System.Collections.IEnumerator>
struct Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>
struct Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>
struct Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088  : public MulticastDelegate_t
{
};

// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.WSA.AppCallbackItem
struct AppCallbackItem_t8F547FBF833801E6B146C645D74B8BCAAFD6B9AB  : public MulticastDelegate_t
{
};

// AppCenterSettings
struct AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String AppCenterSettings::iOSAppSecret
	String_t* ___iOSAppSecret_4;
	// System.String AppCenterSettings::AndroidAppSecret
	String_t* ___AndroidAppSecret_5;
	// System.String AppCenterSettings::UWPAppSecret
	String_t* ___UWPAppSecret_6;
	// System.Boolean AppCenterSettings::UseAnalytics
	bool ___UseAnalytics_7;
	// System.Boolean AppCenterSettings::UseCrashes
	bool ___UseCrashes_8;
	// System.Boolean AppCenterSettings::UseDistribute
	bool ___UseDistribute_9;
	// CustomUrlProperty AppCenterSettings::CustomApiUrl
	CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E* ___CustomApiUrl_10;
	// CustomUrlProperty AppCenterSettings::CustomInstallUrl
	CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E* ___CustomInstallUrl_11;
	// System.Boolean AppCenterSettings::EnableDistributeForDebuggableBuild
	bool ___EnableDistributeForDebuggableBuild_12;
	// System.Boolean AppCenterSettings::AutomaticCheckForUpdate
	bool ___AutomaticCheckForUpdate_13;
	// Microsoft.AppCenter.Unity.LogLevel AppCenterSettings::InitialLogLevel
	int32_t ___InitialLogLevel_14;
	// System.Boolean AppCenterSettings::AllowNetworkRequests
	bool ___AllowNetworkRequests_15;
	// System.Boolean AppCenterSettings::EnableManualSessionTracker
	bool ___EnableManualSessionTracker_16;
	// System.Int32 AppCenterSettings::UpdateTrack
	int32_t ___UpdateTrack_17;
	// CustomUrlProperty AppCenterSettings::CustomLogUrl
	CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E* ___CustomLogUrl_18;
	// MaxStorageSizeProperty AppCenterSettings::MaxStorageSize
	MaxStorageSizeProperty_tFD96186C17180DD384577CBF433AB9CF0AE1B846* ___MaxStorageSize_19;
};

// AppCenterSettingsAdvanced
struct AppCenterSettingsAdvanced_t3C77BB839D0D7E010225EB4724C0A8677608452D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String AppCenterSettingsAdvanced::TransmissionTargetToken
	String_t* ___TransmissionTargetToken_4;
	// Microsoft.AppCenter.Unity.StartupType AppCenterSettingsAdvanced::AppCenterStartupType
	int32_t ___AppCenterStartupType_5;
	// System.Boolean AppCenterSettingsAdvanced::StartAndroidNativeSDKFromAppCenterBehavior
	bool ___StartAndroidNativeSDKFromAppCenterBehavior_6;
	// System.Boolean AppCenterSettingsAdvanced::StartIOSNativeSDKFromAppCenterBehavior
	bool ___StartIOSNativeSDKFromAppCenterBehavior_7;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Microsoft.AppCenter.Unity.Distribute.NoReleaseAvailableCallback
struct NoReleaseAvailableCallback_t2EA6E66890C8D2094ECA6FF52AFFBD2542802704  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Microsoft.AppCenter.Unity.Distribute.ReleaseAvailableCallback
struct ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A  : public MulticastDelegate_t
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// Microsoft.AppCenter.Unity.Distribute.WillExitAppCallback
struct WillExitAppCallback_tD0F683F8A55A233230DECD10BB6E77824BADE550  : public MulticastDelegate_t
{
};

// Microsoft.AppCenter.Unity.AppCenter/SetMaxStorageSizeCompletionHandler
struct SetMaxStorageSizeCompletionHandler_t7C2D2C9543FEAF55C31123A331F4388E97DE1F36  : public MulticastDelegate_t
{
};

// Microsoft.AppCenter.Unity.Crashes.Crashes/FailedToSendErrorReportHandler
struct FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47  : public MulticastDelegate_t
{
};

// Microsoft.AppCenter.Unity.Crashes.Crashes/GetErrorAttachmentsHandler
struct GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0  : public MulticastDelegate_t
{
};

// Microsoft.AppCenter.Unity.Crashes.Crashes/SendingErrorReportHandler
struct SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC  : public MulticastDelegate_t
{
};

// Microsoft.AppCenter.Unity.Crashes.Crashes/SentErrorReportHandler
struct SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09  : public MulticastDelegate_t
{
};

// Microsoft.AppCenter.Unity.Crashes.Crashes/ShouldProcessErrorReportHandler
struct ShouldProcessErrorReportHandler_t4E12F40F03B893649A44881F0272F6738801A619  : public MulticastDelegate_t
{
};

// Microsoft.AppCenter.Unity.Crashes.Crashes/UserConfirmationHandler
struct UserConfirmationHandler_tBDA7834B3F9801EC3F58014178039A6DCBB1D0E3  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AppCenterBehavior
struct AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// AppCenterSettings AppCenterBehavior::Settings
	AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0* ___Settings_8;
};

struct AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields
{
	// System.Action AppCenterBehavior::InitializingServices
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InitializingServices_4;
	// System.Action AppCenterBehavior::InitializedAppCenterAndServices
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InitializedAppCenterAndServices_5;
	// System.Action AppCenterBehavior::Started
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Started_6;
	// AppCenterBehavior AppCenterBehavior::_instance
	AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F* ____instance_7;
};

// AppCenterBehaviorAdvanced
struct AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// AppCenterSettingsAdvanced AppCenterBehaviorAdvanced::SettingsAdvanced
	AppCenterSettingsAdvanced_t3C77BB839D0D7E010225EB4724C0A8677608452D* ___SettingsAdvanced_4;
};

// Test
struct Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettingsHelper
struct UnityApplicationSettingsHelper_t612F24E1389046370CB9FC6B4A01A631B3A798F0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Microsoft.AppCenter.Unity.Internal.Utils.UnityCoroutineHelper
struct UnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog[]
struct ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4  : public RuntimeArray
{
	ALIGN_FIELD (8) ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* m_Items[1];

	inline ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m999A10C26DDF74143AD155662D58037B37AB83F7_gshared (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mB0DE37F992A224BD3B6FCB4EEF30FDDEA7540412_gshared (RuntimeObject* ___source0, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_m1F10F0C7C29D1C2BE692C38BB8966EBD32326114_gshared (RuntimeObject* ___source0, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenterTask`1<System.Nullable`1<System.Guid>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterTask_1__ctor_m0E19D19E40737B5E9363CD68F6321579AF2A22C8_gshared (AppCenterTask_1_t607F63C41BAB43BC4941DD60780C582E59050A07* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenterTask`1<System.Object>::ContinueWith(System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterTask_1_ContinueWith_mEFC821713698A6FF4F8992D5E68CF2D91629A0C2_gshared (AppCenterTask_1_tB96CB66F929CE022DC03C5E0091152A8D205641F* __this, Action_1_t720A9124847C07CE9782B527B42078EA48D0E970* ___continuationAction0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenterTask`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterTask_1__ctor_m8D10B98113D19E280E437D158D6E48813CB831D7_gshared (AppCenterTask_1_tB96CB66F929CE022DC03C5E0091152A8D205641F* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenterTask`1<System.Int64>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterTask_1__ctor_m927A935214D6DFDB79C849B954C668BEF3334868_gshared (AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenterTask`1<System.Int64>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterTask_1_SetResult_m3E3609EB4BB3170A7200F0E1DF34B7F47619473B_gshared (AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F* __this, int64_t ___result0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenterTask`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterTask_1_SetResult_m9104BD6EC558082C98E6893224F3412CA3085E17_gshared (AppCenterTask_1_tB96CB66F929CE022DC03C5E0091152A8D205641F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// TResult Microsoft.AppCenter.Unity.AppCenterTask`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppCenterTask_1_get_Result_mD8EFEAD4D0CBFC60753448C90AC29D781E1D96F1_gshared (AppCenterTask_1_tB96CB66F929CE022DC03C5E0091152A8D205641F* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Guid>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mD2155EEC4DF44AF1AD75AEB77DA72D350854D0F2_gshared (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7* __this, Guid_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenterTask`1<System.Nullable`1<System.Guid>>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterTask_1_SetResult_mE7004CD9C33E553C310DB1C116E237E6230CC1F7_gshared (AppCenterTask_1_t607F63C41BAB43BC4941DD60780C582E59050A07* __this, Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___result0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_gshared (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_gshared (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, bool ___result0, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.AppCenterTask`1<TResult> Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean>::FromCompleted(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* AppCenterTask_1_FromCompleted_mBE828ABFBB7DC9BE11223EA6790E96F6D1926A03_gshared (bool ___result0, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.AppCenterTask`1<TResult> Microsoft.AppCenter.Unity.AppCenterTask`1<System.Object>::FromCompleted(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_tB96CB66F929CE022DC03C5E0091152A8D205641F* AppCenterTask_1_FromCompleted_mAB997BE9E77602170A8E4B770F91E768D64AA264_gshared (RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean>::.ctor(System.Threading.Tasks.Task`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterTask_1__ctor_mF80BD0ADCE48A340567D5B1A044CFE903B6001F1_gshared (AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* __this, Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___task0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Nullable`1<System.Guid>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_mD999084597085FBDB73C538D8D5A74EBE54B1CD5_gshared (Task_1_tF538A43CA1B31CD07E6A7AB3C10B4A8CF70228D6* __this, Action_1_t3D17A7F3B03B425D57654BAC0A572CCC94552120* ___continuationAction0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Nullable`1<System.Guid>>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 Task_1_get_Result_mBBDAAE00353EA3E045503F629D77F8A7B0C43D32_gshared (Task_1_tF538A43CA1B31CD07E6A7AB3C10B4A8CF70228D6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Guid>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mA4048346752BF05849998E450987EB444BE2AD63_gshared_inline (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Guid>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t Nullable_1_GetValueOrDefault_mC6EDE8162AB388B6482F745FF996B594ACC373AC_gshared_inline (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Object>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConvert_DeserializeObject_TisRuntimeObject_mC0B6F251342CF48343577DCDF87B0B1B4D43AC50_gshared (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void AppCenterBehavior::StartAppCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehavior_StartAppCenter_m15155E58DB78AE027DC584160511D7FDA206AA3D (AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Type[] AppCenterSettings::get_Services()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* AppCenterSettings_get_Services_m516A5A9323680216DD092A1CA62A5EDEC254E190 (AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0* __this, const RuntimeMethod* method) ;
// System.Void AppCenterBehavior::PrepareEventHandlers(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehavior_PrepareEventHandlers_mB8152C6538FD063F9C6970AE7A16D2A819DB1F63 (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___services0, const RuntimeMethod* method) ;
// System.Void AppCenterBehavior::InvokeInitializingServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehavior_InvokeInitializingServices_mF5B3B0FED454FA9DCF386E0984331DEE899AB5C6 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenter::SetWrapperSdk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_SetWrapperSdk_mC1FEF221ED9E17BFAF3D9E0087BEDF36F1185F44 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenter::CacheStorageSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_CacheStorageSize_mE5AE33878628CDA78E19B11B49D191BE2660CE1F (int64_t ___storageSize0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenter::CacheLogUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_CacheLogUrl_m62D5F9202B5D83555B91ABB2456836D3BC1C8976 (String_t* ___logUrl0, const RuntimeMethod* method) ;
// System.String AppCenterSettings::get_AppSecret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppCenterSettings_get_AppSecret_m1FDB74A2D8D75DBDEA76C9F35395709CE3F9BF9B (AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0* __this, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Unity.AppCenter::ParseAndSaveSecretForPlatform(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppCenter_ParseAndSaveSecretForPlatform_mB52EAD020A4205F2CF76B5F316E0BDA28080D235 (String_t* ___secrets0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<AppCenterBehaviorAdvanced>()
inline AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* Component_GetComponent_TisAppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0_mE226822001911363684FFE9F5322ED99DFA1B97F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Microsoft.AppCenter.Unity.AppCenter::set_NetworkRequestsAllowed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_set_NetworkRequestsAllowed_mA4F3280DC8D8AC3310DEF71A4EB882151FF4300F (bool ___value0, const RuntimeMethod* method) ;
// System.Boolean AppCenterBehavior::IsStartFromAppCenterBehavior(AppCenterBehaviorAdvanced)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppCenterBehavior_IsStartFromAppCenterBehavior_mB60007382F599245C185009F61D6FC38626CD714 (AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F* __this, AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* ___advancedSettings0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenter::set_LogLevel(Microsoft.AppCenter.Unity.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_set_LogLevel_mE8E84377D5D92725FC244EC73751B3719C308ACE (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.Analytics::EnableManualSessionTracker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_EnableManualSessionTracker_m7B72F4FA40FB8DB645FFEB9AF2732F01F71A9603 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenter::SetLogUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_SetLogUrl_m03EB92A786E3845811A10AB7753FD7C6DBA3916B (String_t* ___logUrl0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::SetMaxStorageSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_SetMaxStorageSize_mA959575D65A120E096CB1EFBE6B956F305083DBE (int64_t ___size0, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.StartupType AppCenterBehavior::GetStartupType(AppCenterBehaviorAdvanced)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppCenterBehavior_GetStartupType_m4970FDDE454C16465733166C07421352C878D3EE (AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F* __this, AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* ___advancedSettings0, const RuntimeMethod* method) ;
// System.String AppCenterBehavior::GetTransmissionTargetToken(AppCenterBehaviorAdvanced)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppCenterBehavior_GetTransmissionTargetToken_m5B43E993B8986735472F3B9BBC13D96F3D126748 (AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F* __this, AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* ___advancedSettings0, const RuntimeMethod* method) ;
// System.String AppCenterBehavior::GetAppSecretString(System.String,System.String,Microsoft.AppCenter.Unity.StartupType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppCenterBehavior_GetAppSecretString_mA6E0E2F6AF26A74DACC80F68B684C836A2FD5999 (AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F* __this, String_t* ___appSecret0, String_t* ___transmissionTargetToken1, int32_t ___startupType2, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::Start(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_Start_mB7DBEDCB8B6889FE024CFED65FE6D72B6B0F0109 (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___services0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::Start(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_Start_m9D7353850990EDE27B7A414343CC5A3506E81C0C (String_t* ___appSecret0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___services1, const RuntimeMethod* method) ;
// System.Void AppCenterBehavior::InvokeInitializedServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehavior_InvokeInitializedServices_mC59E72B4B353D743D21AE6152A4F2FA4A5220D53 (const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.StartupType AppCenterSettingsAdvanced::GetStartupType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppCenterSettingsAdvanced_GetStartupType_mF60F93CC13581F129554B1F353CA280DC03166A7 (AppCenterSettingsAdvanced_t3C77BB839D0D7E010225EB4724C0A8677608452D* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<AppCenterBehavior>()
inline AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F* GameObject_GetComponent_TisAppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_mFF5B542CA4BEEC20923D0F3273AEFA493CFE071F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m612313685E65C8F88E36E0730D48C7BA57EB3D9A (Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m999A10C26DDF74143AD155662D58037B37AB83F7_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_mEF0494673E3DDABC8B20F35D322B13B06740F477 (RuntimeObject* ___source0, Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1*, const RuntimeMethod*))Enumerable_Where_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mB0DE37F992A224BD3B6FCB4EEF30FDDEA7540412_gshared)(___source0, ___predicate1, method);
}
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
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
inline void List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69 (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Type Microsoft.AppCenter.Unity.AppCenter::get_Analytics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AppCenter_get_Analytics_m2283A291222598C7AACF89FF834719F721CF3744 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
inline void List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, Type_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, Type_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Type Microsoft.AppCenter.Unity.AppCenter::get_Crashes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AppCenter_get_Crashes_m51C5FA0ACAC68BB663005F50487C94211380E565 (const RuntimeMethod* method) ;
// System.Type Microsoft.AppCenter.Unity.AppCenter::get_Distribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AppCenter_get_Distribute_mF8ECC42DC2EA6C69FCEFB0E7C18C7AC71A1B9AA9 (const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Type,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74 (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisType_t_mBDD356C957E8D2FEE45299F34F461B519451D745 (RuntimeObject* ___source0, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared)(___source0, ___predicate1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>)
inline TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* Enumerable_ToArray_TisType_t_m28C7A2C8A923EDB686746CE65C1C0BD2BCF93A00 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.Void CustomUrlProperty::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUrlProperty__ctor_m8EC5E9D4A202301F210CE6F79E4CA3B28725FCAC (CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E* __this, String_t* ___urlName0, const RuntimeMethod* method) ;
// System.Void MaxStorageSizeProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaxStorageSizeProperty__ctor_mA8AFF46DC2FFCDB775681F8321A5FFE7FF7F81AB (MaxStorageSizeProperty_tFD96186C17180DD384577CBF433AB9CF0AE1B846* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void AppCenterSettings/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF894DA0D4B00E498DE531531B16CF5089319CB46 (U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Void AppSecretAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppSecretAttribute_set_Name_mE6CED04CDBC65893FEBC0D993E011FB58C6EDEA3_inline (AppSecretAttribute_tA27B00D919104E7C568F0EA592C8483FC3F73438* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void CustomDropDownPropertyAttribute::set_SelectedKey(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomDropDownPropertyAttribute_set_SelectedKey_m132F21C982DEAA99E16E614EFD346750048C09B4_inline (CustomDropDownPropertyAttribute_tBB81AB17FD57948F6CDE254CDF0CC56668AF2B15* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void CustomDropDownPropertyAttribute::set_SelectedValue(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomDropDownPropertyAttribute_set_SelectedValue_mEA7F2C2604B307C7F7321833380356CF8D52D8DE_inline (CustomDropDownPropertyAttribute_tBB81AB17FD57948F6CDE254CDF0CC56668AF2B15* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastContentBuilder__ctor_m2DBF58D4E1BA1B8F29E1494F93C6310F0794FC3D (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, const RuntimeMethod* method) ;
// Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::AddArgument(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* ToastContentBuilder_AddArgument_mF73C1B492AD502B160704AB38A79C8FF5C27C118 (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::AddArgument(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* ToastContentBuilder_AddArgument_mB83D672723434B5D5B7FC2E1A6236EABEB048DD1 (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder Microsoft.Toolkit.Uwp.Notifications.ToastContentBuilder::AddText(System.String,System.Nullable`1<Microsoft.Toolkit.Uwp.Notifications.AdaptiveTextStyle>,System.Nullable`1<System.Boolean>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Nullable`1<Microsoft.Toolkit.Uwp.Notifications.AdaptiveTextAlign>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* ToastContentBuilder_AddText_m419ADE9E4AC2C4886B69248E17AEB076A076E79A (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* __this, String_t* ___text0, Nullable_1_t5F2D4E9D7ABD81B1DA754569B619BF9A6CC32A1A ___hintStyle1, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___hintWrap2, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___hintMaxLines3, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___hintMinLines4, Nullable_1_t17B6B18A2CBCE422EE6E95D36DDF5D3423525B69 ___hintAlign5, String_t* ___language6, const RuntimeMethod* method) ;
// System.Int32 Microsoft.AppCenter.Unity.Internal.AppCenterInternal::GetLogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppCenterInternal_GetLogLevel_m9D2209624F41E8D7DA7441583D28D87BA40855A1 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::SetLogLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_SetLogLevel_m368844DC03755627D4CCAAB58A72DB7D809B69CD (int32_t ___logLevel0, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.AppCenterTask Microsoft.AppCenter.Unity.Internal.AppCenterInternal::SetEnabledAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* AppCenterInternal_SetEnabledAsync_mA37C37429A758F5412BA3E8811D540697ABC8A89 (bool ___isEnabled0, const RuntimeMethod* method) ;
// System.Type[] Microsoft.AppCenter.Unity.Internal.AppCenterInternal::ServicesToNativeTypes(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* AppCenterInternal_ServicesToNativeTypes_m322BAE569A0BA5B663CC8BD32DEDFE4BBBF51035 (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___services0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::StartFromLibrary(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_StartFromLibrary_m261F19418F4FDC01986128280FF6FE2BAD21E59C (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___services0, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.Internal.AppCenterInternal::IsEnabledAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* AppCenterInternal_IsEnabledAsync_m820C6BA7B6BFE481F01295A514186C4B1D071495 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenter/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m4EDF80AAA4B02C51CF005AC7E436761BE962D087 (U3CU3Ec__DisplayClass9_0_t307C4B9794205410B456848306C318671EC906D9* __this, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.String> Microsoft.AppCenter.Unity.Internal.AppCenterInternal::GetInstallIdAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* AppCenterInternal_GetInstallIdAsync_mBCB89D9A14A658ADAC763EC395DECA6F2536F235 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenterTask`1<System.Nullable`1<System.Guid>>::.ctor()
inline void AppCenterTask_1__ctor_m0E19D19E40737B5E9363CD68F6321579AF2A22C8 (AppCenterTask_1_t607F63C41BAB43BC4941DD60780C582E59050A07* __this, const RuntimeMethod* method)
{
	((  void (*) (AppCenterTask_1_t607F63C41BAB43BC4941DD60780C582E59050A07*, const RuntimeMethod*))AppCenterTask_1__ctor_m0E19D19E40737B5E9363CD68F6321579AF2A22C8_gshared)(__this, method);
}
// System.Void System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask`1<System.String>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mCD5227B5AC901BB0B395B79D6B2B0F84546C5C16 (Action_1_t22FBED9363A7A4047B1A9C292A172186B28A0B3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t22FBED9363A7A4047B1A9C292A172186B28A0B3C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.AppCenter.Unity.AppCenterTask`1<System.String>::ContinueWith(System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask`1<TResult>>)
inline void AppCenterTask_1_ContinueWith_mF2E0761A5B505A6782DC315B4C74EA7EAF1BD977 (AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* __this, Action_1_t22FBED9363A7A4047B1A9C292A172186B28A0B3C* ___continuationAction0, const RuntimeMethod* method)
{
	((  void (*) (AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94*, Action_1_t22FBED9363A7A4047B1A9C292A172186B28A0B3C*, const RuntimeMethod*))AppCenterTask_1_ContinueWith_mEFC821713698A6FF4F8992D5E68CF2D91629A0C2_gshared)(__this, ___continuationAction0, method);
}
// System.String Microsoft.AppCenter.Unity.Internal.AppCenterInternal::GetSdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppCenterInternal_GetSdkVersion_m9778FF04F5F13F49D1A5707EA44A1BE44A520E9B (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenterTask`1<System.String>::.ctor()
inline void AppCenterTask_1__ctor_m2DE912DF90D32913EC3C63702DDF7FEB2A959A61 (AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* __this, const RuntimeMethod* method)
{
	((  void (*) (AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94*, const RuntimeMethod*))AppCenterTask_1__ctor_m8D10B98113D19E280E437D158D6E48813CB831D7_gshared)(__this, method);
}
// System.Void Microsoft.AppCenter.Unity.AppCenterTask`1<System.Int64>::.ctor()
inline void AppCenterTask_1__ctor_m927A935214D6DFDB79C849B954C668BEF3334868 (AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F* __this, const RuntimeMethod* method)
{
	((  void (*) (AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F*, const RuntimeMethod*))AppCenterTask_1__ctor_m927A935214D6DFDB79C849B954C668BEF3334868_gshared)(__this, method);
}
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::SetLogUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_SetLogUrl_m133A42674D7169FD311063D38FA9620D80F23675 (String_t* ___logUrl0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.AppCenter.Unity.Internal.AppCenterInternal::IsNetworkRequestsAllowed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppCenterInternal_IsNetworkRequestsAllowed_m4E973E5918287EB118A78CA8104C5A58AF89D1D5 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::SetNetworkRequestsAllowed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_SetNetworkRequestsAllowed_m1B5B69367C8C37341654A807BFBEEAD310A2F556 (bool ___isAllowed0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenterTask`1<System.Int64>::SetResult(TResult)
inline void AppCenterTask_1_SetResult_m3E3609EB4BB3170A7200F0E1DF34B7F47619473B (AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F* __this, int64_t ___result0, const RuntimeMethod* method)
{
	((  void (*) (AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F*, int64_t, const RuntimeMethod*))AppCenterTask_1_SetResult_m3E3609EB4BB3170A7200F0E1DF34B7F47619473B_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.AppCenter.Unity.AppCenterTask`1<System.String>::SetResult(TResult)
inline void AppCenterTask_1_SetResult_mDCC3C8BB562D7857B003F5C88956D7C3C41FDCF7 (AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94*, String_t*, const RuntimeMethod*))AppCenterTask_1_SetResult_m9104BD6EC558082C98E6893224F3412CA3085E17_gshared)(__this, ___result0, method);
}
// System.Boolean Microsoft.AppCenter.Unity.Internal.AppCenterInternal::IsConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppCenterInternal_IsConfigured_m95E29F75B7CC13B32125402EB1F452E6E476BE7E (const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Unity.WrapperSdk::get_WrapperRuntimeVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WrapperSdk_get_WrapperRuntimeVersion_mC75E5B85579E39A97811546DB9287438FC32265D (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::SetWrapperSdk(System.String,System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_SetWrapperSdk_mDE3A46D242FD823664A2FBEC6D1F9198ACC642B7 (String_t* ___wrapperSdkVersion0, String_t* ___wrapperSdkName1, String_t* ___wrapperRuntimeVersion2, String_t* ___liveUpdateReleaseLabel3, String_t* ___liveUpdateDeploymentKey4, String_t* ___liveUpdatePackageHash5, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Unity.AppCenter::GetPlatformIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppCenter_GetPlatformIdentifier_m5B9CECC543B96F58D8F2ECEE4B9D6CE8D3C753FE (const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m490810CB7ADA9230AC0F8D78E213A8EFED129F55 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::SetUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_SetUserId_m40CD0D4A2D63F35DC56156C3DB50EAB1C044C635 (String_t* ___userId0, const RuntimeMethod* method) ;
// System.Reflection.Assembly Microsoft.AppCenter.Unity.AppCenter::get_AppCenterAssembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* AppCenter_get_AppCenterAssembly_mEE7E23C47C5A754628FA5DD215BCE13D90BC15EA (const RuntimeMethod* method) ;
// TResult Microsoft.AppCenter.Unity.AppCenterTask`1<System.String>::get_Result()
inline String_t* AppCenterTask_1_get_Result_mF34BE561D065C102FB30222D3BEFBC354E33E66A (AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94*, const RuntimeMethod*))AppCenterTask_1_get_Result_mD8EFEAD4D0CBFC60753448C90AC29D781E1D96F1_gshared)(__this, method);
}
// System.Void System.Guid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830 (Guid_t* __this, String_t* ___g0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Guid>::.ctor(T)
inline void Nullable_1__ctor_mD2155EEC4DF44AF1AD75AEB77DA72D350854D0F2 (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7* __this, Guid_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7*, Guid_t, const RuntimeMethod*))Nullable_1__ctor_mD2155EEC4DF44AF1AD75AEB77DA72D350854D0F2_gshared)(__this, ___value0, method);
}
// System.Void Microsoft.AppCenter.Unity.AppCenterTask`1<System.Nullable`1<System.Guid>>::SetResult(TResult)
inline void AppCenterTask_1_SetResult_mE7004CD9C33E553C310DB1C116E237E6230CC1F7 (AppCenterTask_1_t607F63C41BAB43BC4941DD60780C582E59050A07* __this, Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___result0, const RuntimeMethod* method)
{
	((  void (*) (AppCenterTask_1_t607F63C41BAB43BC4941DD60780C582E59050A07*, Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7, const RuntimeMethod*))AppCenterTask_1_SetResult_mE7004CD9C33E553C310DB1C116E237E6230CC1F7_gshared)(__this, ___result0, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask>>::.ctor()
inline void List_1__ctor_mFBDB4A17BCF131E67BBA80B546CC944D4FFFB3A6 (List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50 (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask>>::Add(T)
inline void List_1_Add_m9A280BF1FC5498FEC38CF4D3A9D0069191B6C278_inline (List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099* __this, Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099*, Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Microsoft.AppCenter.Unity.AppCenterTask::InvokeContinuationActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterTask_InvokeContinuationActions_mE63953CE7ED5A9A21133EE7C63A247AEA374FAE1 (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenterTask::set_IsComplete(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppCenterTask_set_IsComplete_m122C9F8AB583A5C44D16BCBAA8A20E5659749E65_inline (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.AppCenter.Unity.AppCenterTask::get_IsComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AppCenterTask_get_IsComplete_m4D9202D5B58660A24952515B6AA38FEA0E786656_inline (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenterTask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterTask__ctor_mF38E2D0B73442B5E11B6FE85A9A1CD99D0C0A691 (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask>>::GetEnumerator()
inline Enumerator_t67E125105D3F8ECD4E90BC8D26D7F3BD19BEB99E List_1_GetEnumerator_m545481921B687960D51772877ACC772E96EF1C41 (List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t67E125105D3F8ECD4E90BC8D26D7F3BD19BEB99E (*) (List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask>>::Dispose()
inline void Enumerator_Dispose_m75D841D3D6C1099DC7CEA2728300005614603CA0 (Enumerator_t67E125105D3F8ECD4E90BC8D26D7F3BD19BEB99E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t67E125105D3F8ECD4E90BC8D26D7F3BD19BEB99E*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask>>::get_Current()
inline Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9* Enumerator_get_Current_m17C9E6391509BD97E223AA75D7DF361525F84D5E_inline (Enumerator_t67E125105D3F8ECD4E90BC8D26D7F3BD19BEB99E* __this, const RuntimeMethod* method)
{
	return ((  Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9* (*) (Enumerator_t67E125105D3F8ECD4E90BC8D26D7F3BD19BEB99E*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask>>::MoveNext()
inline bool Enumerator_MoveNext_m08528CAB78BA01626958C79ED1EB6247C3D6D8D3 (Enumerator_t67E125105D3F8ECD4E90BC8D26D7F3BD19BEB99E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t67E125105D3F8ECD4E90BC8D26D7F3BD19BEB99E*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask>>::Clear()
inline void List_1_Clear_m7EB6D122B376D641464D9C7455DBD6EE27350F08_inline (List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask>::Invoke(T)
inline void Action_1_Invoke_mDFBEB39A9A23DB6A3A3CEC5B47277FFE1F01182C_inline (Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9* __this, AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9*, AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void Microsoft.AppCenter.Unity.AppCenterTask/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m6415A6EE02214F936FA51292374281EA975E81C8 (U3CU3Ec__DisplayClass12_0_t09A38423D58B8050C75EC07995384839DBF88523* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
inline void TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646 (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_gshared)(__this, method);
}
// System.Void System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5DD7A330133E08D714DBB1E9D200B903E2EB363F (Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.AppCenter.Unity.AppCenterTask::ContinueWith(System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterTask_ContinueWith_mD071F1510A3239937D372EA9B79639F86DF407F1 (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* __this, Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9* ___continuationAction0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0 (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_ContinueWith_m4150CBD0F7AC870F40F5E8D84E265B47A642C06C (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* ___continuationAction0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448 (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, bool, const RuntimeMethod*))TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.AppCenter.Unity.Device::set_SdkName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_SdkName_m26D5F51AC6FC80E75FAEEFAA5B833E615C2E2FA5_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Device::set_SdkVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_SdkVersion_m5AA1E819EAB16BA4272C16E283500BB1EE385B60_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Device::set_Model(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_Model_mF2C6D5A55D89A1A8861E3C348971B9BD47091E01_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Device::set_OemName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_OemName_m8CD7A571302B50E68B0E614155F8438EAD69CB04_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Device::set_OsName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_OsName_mDA691D3E2FE0BD5460095C47D36EFDDB7EE47D2E_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Device::set_OsVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_OsVersion_m677A5A507278AA927BEDE2EC58D43F3EA08FCC1E_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Device::set_OsBuild(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_OsBuild_m3249E8F1557BE8AE97EF3048F2ACDD2BBE64DAC9_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Device::set_OsApiLevel(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_OsApiLevel_m5581F886572336FF5A258590A6DEC37BF1BAFC72_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Device::set_Locale(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_Locale_m034271B4ABAAEBCEDF4BAB5E0B4F46532530509A_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Device::set_TimeZoneOffset(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_TimeZoneOffset_m8B9D5482188CD77CD79BADEDE3332581668A6382_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Device::set_ScreenSize(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_ScreenSize_m2C878766AC0AEB156971E29AEE89040C80F0B6BD_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Device::set_AppVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_AppVersion_m5CAED222D389F7502E83995B19A20437B15085F3_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Device::set_CarrierName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_CarrierName_m340B4694B0F2E1F8BB83309FC269FD4D5F325CDC_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Device::set_CarrierCountry(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_CarrierCountry_m08F0B99D19BBE3477A2D5B2557D7BCA212CD1541_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Device::set_AppBuild(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_AppBuild_m771B89576752DE520157928D728F5E04B7997E9B_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Device::set_AppNamespace(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_AppNamespace_m9C76A6C89F2A9DCC0BFDB8E05C4DB2009F0A6DE7_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Unity.WrapperSdk::GetWrapperRuntimeVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WrapperSdk_GetWrapperRuntimeVersion_m4BF63A0770E75E58B2AFDDCB231A3E89FC2522CF (const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D (Type_t* __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal::PrepareEventHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistributeInternal_PrepareEventHandlers_m264A1AFDB06318D76A39478049EDF5434DD857B4 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal::AddNativeType(System.Collections.Generic.List`1<System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistributeInternal_AddNativeType_mD071E59775F01DD5336DE31F1D821D1A489689FD (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___nativeTypes0, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal::IsEnabledAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* DistributeInternal_IsEnabledAsync_mFADC90581B84A53657CD5A27CFDAA1BCDE7E1F99 (const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.AppCenterTask Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal::SetEnabledAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* DistributeInternal_SetEnabledAsync_m1C8934E4B3B9081EACCCD5ED0835B13F58C9BF5C (bool ___isEnabled0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal::CheckForUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistributeInternal_CheckForUpdate_mE2CD5C6A7EFDD294EBAEF04038A965381E19602A (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal::SetInstallUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistributeInternal_SetInstallUrl_m067228C78426A3156E46950486183230FEDCB273 (String_t* ___installUrl0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal::SetApiUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistributeInternal_SetApiUrl_m9825AADAE77B874FEC418390CA13B50A9E720ABD (String_t* ___apiUrl0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal::StartDistribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistributeInternal_StartDistribute_m92B785708F53CAA328BB639D6E9023660737B8AD (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal::NotifyUpdateAction(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistributeInternal_NotifyUpdateAction_m61FE6F60679D059CB5044AD4308A6A9450C4F15D (int32_t ___updateAction0, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.AppCenterTask Microsoft.AppCenter.Unity.AppCenterTask::FromCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* AppCenterTask_FromCompleted_m1F770CCFC33031B8D66BFE11AC2BE8D750C124F3 (const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.AppCenterTask`1<TResult> Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean>::FromCompleted(TResult)
inline AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* AppCenterTask_1_FromCompleted_mBE828ABFBB7DC9BE11223EA6790E96F6D1926A03 (bool ___result0, const RuntimeMethod* method)
{
	return ((  AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* (*) (bool, const RuntimeMethod*))AppCenterTask_1_FromCompleted_mBE828ABFBB7DC9BE11223EA6790E96F6D1926A03_gshared)(___result0, method);
}
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorAttachmentLog__ctor_mFAC3EF36E7E2CEF2B904278CD00EE680ACE7BE51 (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::set_Text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorAttachmentLog_set_Text_mD80155A9D321EF9EF8C96D0ABAF9C9A53D40C9A7_inline (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::set_FileName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorAttachmentLog_set_FileName_m6302491DF50852F010E1F5B2007B6CBDED6D0E1C_inline (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::set_Type(Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog/AttachmentType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorAttachmentLog_set_Type_mCC44B878516D36419DD2289DCA759779FEDCB227_inline (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::set_Data(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorAttachmentLog_set_Data_m7505FBFD46C01D88B3EE01152AA9DD3C61EECF0B_inline (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::set_ContentType(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorAttachmentLog_set_ContentType_m3D6861A5E2B0EBF09515CB513446D79271E0170F_inline (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_Id_m788C9AA1293FA3D7EC11DB232E3C186B288DD988_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_AppStartTime(System.DateTimeOffset)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_AppStartTime_m5E893C816CF5162C0CCEE5C134E196E91EC6CACB_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_AppErrorTime(System.DateTimeOffset)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_AppErrorTime_mC9AC6AE118B5EC58542227EAEB53CAD0ED876C97_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_Exception(Microsoft.AppCenter.Unity.Crashes.Models.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_Exception_mE86964E3691560036DE9DAD92A8BD73F0D17CCBD_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, Exception_t4102CE9657F42B955941C1DB3682212AAE071596* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_Device(Microsoft.AppCenter.Unity.Device)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_Device_m1F92894D70BF83C96858A11D76BEDDF63F69478C_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, Device_t755299AB5F78614858DD1FFB0744D96517966BF9* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_ThreadName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_ThreadName_m9E11501D5B5A3942ED585F130A4B4769D5AAC120_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_IsCrash(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_IsCrash_m659CBA6BD682CB3B397AB3AED7C0627B91399A7F_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_ProcessId(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_ProcessId_m9AEB1927DC649688C5A6F935529993BFCAF92C9C_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_ReporterKey(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_ReporterKey_m4257DC70E4FBDDC160D7F82FD233C31CA84D4533_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_ReporterSignal(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_ReporterSignal_mF5FE47BEAD9CBE6BCDA02203B81F078C892BD906_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_IsAppKill(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_IsAppKill_mC511FD594F64611F6540F1F74B229D73E03905C9_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void AppCenterBehavior::add_InitializingServices(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehavior_add_InitializingServices_mB63D1BEAFF3BE9E001A4EAB859445656897DDB20 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void AppCenterBehavior::add_InitializedAppCenterAndServices(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehavior_add_InitializedAppCenterAndServices_m6CADDEEF7FC8BA40A0B807B6C616140DBD1AE13A (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::SetDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate_SetDelegate_m443F4793051ACE258552C50242E16463575ECD20 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::AddNativeType(System.Collections.Generic.List`1<System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesInternal_AddNativeType_m5454CBA0DEBE41A8960FF7118E2F991BD531B9AE (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___nativeTypes0, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.Crashes.WrapperException Microsoft.AppCenter.Unity.Crashes.Crashes::CreateWrapperException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* Crashes_CreateWrapperException_m59A3076E3425B2362C5B99E694F78E781F2FBE84 (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Object Microsoft.AppCenter.Unity.Crashes.WrapperException::GetRawObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WrapperException_GetRawObject_mABD7354FC52EC410FFFB1E6DE4209DDFA0988AAF_inline (WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* __this, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::TrackException(System.Object,System.Collections.Generic.IDictionary`2<System.String,System.String>,Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CrashesInternal_TrackException_m183007839D194AABCD938416D165D2AEAC52BE7B (RuntimeObject* ___exception0, RuntimeObject* ___properties1, ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* ___attachments2, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.Crashes.WrapperException Microsoft.AppCenter.Unity.Crashes.Crashes::CreateWrapperException(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* Crashes_CreateWrapperException_m0BF198E75EF1135105411A113149F46E799F5602 (String_t* ___logString0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::SendErrorAttachments(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_SendErrorAttachments_m1543261C22016CB7A8CFFF2897D02923DC18BEFF (String_t* ___errorReportId0, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.String> Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::GetMinidumpDirectoryAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* CrashesInternal_GetMinidumpDirectoryAsync_mB367B80E514598F7DD6B503B4E5A9F08358E4AD6 (const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::HasReceivedMemoryWarningInLastSessionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* CrashesInternal_HasReceivedMemoryWarningInLastSessionAsync_m9579217D30D0AC746BF77B2362E8D6DF6A89C5DF (const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::IsEnabledAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* CrashesInternal_IsEnabledAsync_mD999A575F3E7BECCF64F9A35E152183447505D6C (const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.AppCenterTask Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::SetEnabledAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* CrashesInternal_SetEnabledAsync_mD92C76DAC158E8613C9412E8E28D5E7C81ACC960 (bool ___enabled0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::GenerateTestCrash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesInternal_GenerateTestCrash_mEE483D947961BD3886A539CAA669BD65614E2D75 (const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::HasCrashedInLastSessionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* CrashesInternal_HasCrashedInLastSessionAsync_m347F87960CAE5CAD3D39E9E10133F8E17259389D (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::DisableMachExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesInternal_DisableMachExceptionHandler_mBDA6FE1537E561678CB46580DC8910048D3739D2 (const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.AppCenterTask`1<Microsoft.AppCenter.Unity.Crashes.ErrorReport> Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::GetLastSessionCrashReportAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t65EBB54C3C45E0625BF46EE257B85A5C0D40B89F* CrashesInternal_GetLastSessionCrashReportAsync_m2747B64FFE845751FCE4367A0D0A6ABB70F03C76 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::SubscribeToUnhandledExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_SubscribeToUnhandledExceptions_m03CB80CACC6AB5792B14704D42745A2FF6D294A9 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::UnsubscribeFromUnhandledExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_UnsubscribeFromUnhandledExceptions_m4D36486447344FA9914C4B5F9B528DB7476B81D4 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::SetUserConfirmationHandler(Microsoft.AppCenter.Unity.Crashes.Crashes/UserConfirmationHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesInternal_SetUserConfirmationHandler_m43062E5AD861D89B67C7CFFEBA4B00757F4DD7DE (UserConfirmationHandler_tBDA7834B3F9801EC3F58014178039A6DCBB1D0E3* ___handler0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::NotifyWithUserConfirmation(Microsoft.AppCenter.Unity.Crashes.Crashes/ConfirmationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesInternal_NotifyWithUserConfirmation_m410541DB8BA921BD2B3D0127A3CDBF6603CDDE71 (int32_t ___answer0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::SetShouldProcessErrorReportHandler(Microsoft.AppCenter.Unity.Crashes.Crashes/ShouldProcessErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate_SetShouldProcessErrorReportHandler_m95BE7E47176912E0F02B44E51A5246AF84A7412E (ShouldProcessErrorReportHandler_t4E12F40F03B893649A44881F0272F6738801A619* ___handler0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::SetGetErrorAttachmentsHandler(Microsoft.AppCenter.Unity.Crashes.Crashes/GetErrorAttachmentsHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate_SetGetErrorAttachmentsHandler_mC93EEB9E02D7EF41B6BD5E7FAAC3462936A86659 (GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* ___handler0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::add_SendingErrorReport(Microsoft.AppCenter.Unity.Crashes.Crashes/SendingErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate_add_SendingErrorReport_m9C7D4BF914C36C68A9F0B161139C88A9A62ECF55 (SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::remove_SendingErrorReport(Microsoft.AppCenter.Unity.Crashes.Crashes/SendingErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate_remove_SendingErrorReport_m5F23FBEF5275687C6A013FE2961D99D0527D00D6 (SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::add_SentErrorReport(Microsoft.AppCenter.Unity.Crashes.Crashes/SentErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate_add_SentErrorReport_m497C3AD51679AC3D17155944FB68663914074594 (SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::remove_SentErrorReport(Microsoft.AppCenter.Unity.Crashes.Crashes/SentErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate_remove_SentErrorReport_m12CC633C68BDCB4B25E2A7A441A7CCA7C7630862 (SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::add_FailedToSendErrorReport(Microsoft.AppCenter.Unity.Crashes.Crashes/FailedToSendErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate_add_FailedToSendErrorReport_m712769F2F65E5C00EEA09D4FEA18E49913B3FA3D (FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::remove_FailedToSendErrorReport(Microsoft.AppCenter.Unity.Crashes.Crashes/FailedToSendErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate_remove_FailedToSendErrorReport_mC5A0ACA37E21CDB6093C292CCE050A519E193D6D (FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::StartCrashes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesInternal_StartCrashes_m48102FDD033E93D0DD8E57B1BDF36BC0E5B54EFD (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.WrapperException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperException__ctor_m9A34492BDBE45E1C7CB5734B81BAABC9F8979BD2 (WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* __this, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Unity.Crashes.Crashes::GetExceptionWrapperSdkName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Crashes_GetExceptionWrapperSdkName_mAE48AC191D0145A199A0D3490FA509F4A3B81322 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.WrapperException::SetWrapperSdkName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperException_SetWrapperSdkName_m83753C13D2BB11F44EF0E9B226962183288FC802 (WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* __this, String_t* ___sdkName0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.WrapperException::SetStacktrace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperException_SetStacktrace_m179F048E722DBD38EAB80303C3DD335C01E42AA0 (WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* __this, String_t* ___stacktrace0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.WrapperException::SetMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperException_SetMessage_m282D3CCAF0467062DA1B9A52BDA7277652453859 (WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Type System.Exception::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09 (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.WrapperException::SetType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperException_SetType_m2C5DBFCDFA5DCDE729C4F0DB623BA8CC15D7CD13 (WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* __this, String_t* ___type0, const RuntimeMethod* method) ;
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.WrapperException::SetInnerException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperException_SetInnerException_m517D4792A87100A161DC91D32F04849E04444AB6 (WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* __this, RuntimeObject* ___innerException0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.Crashes.ErrorReport Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::BuildHandledErrorReport(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* CrashesInternal_BuildHandledErrorReport_m6B380997012F07016194C91FD356BE9A4CE4B961 (String_t* ___errorReportId0, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog[] Microsoft.AppCenter.Unity.Crashes.Crashes/GetErrorAttachmentsHandler::Invoke(Microsoft.AppCenter.Unity.Crashes.ErrorReport)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51_inline (GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::SendErrorAttachments(System.String,Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesInternal_SendErrorAttachments_mCE0CAB8226F16A77E7B035231E7AC9576C19F1B1 (String_t* ___errorReportId0, ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* ___attachments1, const RuntimeMethod* method) ;
// System.Object Microsoft.AppCenter.Unity.Crashes.Internal.WrapperExceptionInternal::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperExceptionInternal_Create_mDBADA29F176D094831AE8D3B462C048009C674A5 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.WrapperExceptionInternal::SetType(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperExceptionInternal_SetType_mDF574A3AD89452387E204F2E7D5414528983F464 (RuntimeObject* ___exception0, String_t* ___type1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.WrapperExceptionInternal::SetMessage(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperExceptionInternal_SetMessage_mB1794D48A2F116E57ED301CA3631AB88F2B14764 (RuntimeObject* ___exception0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.WrapperExceptionInternal::SetStacktrace(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperExceptionInternal_SetStacktrace_m817204DDD71B391A9914F2AC53EF3C7447D02C10 (RuntimeObject* ___exception0, String_t* ___stacktrace1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.WrapperExceptionInternal::SetInnerException(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperExceptionInternal_SetInnerException_m55BCAD9DE322AFF053959C621DAB0655F2F2E1A9 (RuntimeObject* ___exception0, RuntimeObject* ___innerException1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.WrapperExceptionInternal::SetWrapperSdkName(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperExceptionInternal_SetWrapperSdkName_m615EF05E290A0B2C02B51D241870F5FDF7E5481E (RuntimeObject* ___exception0, String_t* ___sdkName1, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.AppCenterTask`1<TResult> Microsoft.AppCenter.Unity.AppCenterTask`1<Microsoft.AppCenter.Unity.Crashes.ErrorReport>::FromCompleted(TResult)
inline AppCenterTask_1_t65EBB54C3C45E0625BF46EE257B85A5C0D40B89F* AppCenterTask_1_FromCompleted_m2E8070E027ACE944E6D8383CD98A29612E648AD0 (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___result0, const RuntimeMethod* method)
{
	return ((  AppCenterTask_1_t65EBB54C3C45E0625BF46EE257B85A5C0D40B89F* (*) (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*, const RuntimeMethod*))AppCenterTask_1_FromCompleted_mAB997BE9E77602170A8E4B770F91E768D64AA264_gshared)(___result0, method);
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<TResult> Microsoft.AppCenter.Unity.AppCenterTask`1<System.String>::FromCompleted(TResult)
inline AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* AppCenterTask_1_FromCompleted_mD4A54800F7407EBE1F847CD866DF4CC169D36F0D (String_t* ___result0, const RuntimeMethod* method)
{
	return ((  AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* (*) (String_t*, const RuntimeMethod*))AppCenterTask_1_FromCompleted_mAB997BE9E77602170A8E4B770F91E768D64AA264_gshared)(___result0, method);
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Models.Exception::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exception_set_Message_m90797BB93D37DE9E89CEC971463C8FDFF1F84CEA_inline (Exception_t4102CE9657F42B955941C1DB3682212AAE071596* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Crashes.Models.Exception::set_StackTrace(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exception_set_StackTrace_mF498152DF845DB88A159F8A3D3EFDA51CE5B39C1_inline (Exception_t4102CE9657F42B955941C1DB3682212AAE071596* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_Prepare_mDF4F0A78C59489005EDD98C7F2C7E7AC9D39AF6D (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.AppCenter::Configure(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_Configure_m88C4025C1B7FFFD0AE115B61AC738CA9BCE89ABA (String_t* ___appSecret0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.AppCenter::Start(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_Start_m85586BCDDC4EC7033F88F3449DB5D058EE6F9457 (String_t* ___appSecret0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___services1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.AppCenter::Start(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_Start_m0F40F7A1EAEEFD6E59A5EAFE69868777FFFB004A (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___services0, const RuntimeMethod* method) ;
// Microsoft.AppCenter.LogLevel Microsoft.AppCenter.Unity.Internal.AppCenterInternal::LogLevelFromUnity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppCenterInternal_LogLevelFromUnity_m49E5D455A83742CCF6DFE521955ED7F3C17635D0 (int32_t ___logLevel0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.AppCenter::set_LogLevel(Microsoft.AppCenter.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_set_LogLevel_m0F027B14B9B2E40CFD3900B1EBA7D5E1776FAAAD (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.AppCenter::SetUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_SetUserId_m1858879DD1D921FB5BC210F4EE072EF0642E17E8 (String_t* ___userId0, const RuntimeMethod* method) ;
// Microsoft.AppCenter.LogLevel Microsoft.AppCenter.AppCenter::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppCenter_get_LogLevel_mF8CB2E903744A40CEBAF895B6B18868F97177A32 (const RuntimeMethod* method) ;
// System.Boolean Microsoft.AppCenter.AppCenter::get_Configured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppCenter_get_Configured_m33CDAF9772559C0B1B0D5015CA72D78D518E5A02 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.AppCenter::SetLogUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_SetLogUrl_m312E1763FB9A3A4BFE0D7C95D88E6472F42F3729 (String_t* ___logUrl0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.AppCenter::set_IsNetworkRequestsAllowed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_set_IsNetworkRequestsAllowed_m3B09C8C972ABC414F5598C187F34A578F70D23BA (bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.AppCenter.AppCenter::get_IsNetworkRequestsAllowed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppCenter_get_IsNetworkRequestsAllowed_m4ED30A6B1240794648AB085E816507197BC50501 (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Microsoft.AppCenter.AppCenter::SetEnabledAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AppCenter_SetEnabledAsync_m34C4D583B49F0AC09418FEDB4C83553BBA7077A0 (bool ___enabled0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenterTask::.ctor(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterTask__ctor_mFFE1CE5E93795397047624E84D34518FCCBC0C90 (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.AppCenter.AppCenter::IsEnabledAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AppCenter_IsEnabledAsync_m67EE03F480A444780850F954C078B750176E8D5C (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean>::.ctor(System.Threading.Tasks.Task`1<TResult>)
inline void AppCenterTask_1__ctor_mF80BD0ADCE48A340567D5B1A044CFE903B6001F1 (AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* __this, Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___task0, const RuntimeMethod* method)
{
	((  void (*) (AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848*, Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, const RuntimeMethod*))AppCenterTask_1__ctor_mF80BD0ADCE48A340567D5B1A044CFE903B6001F1_gshared)(__this, ___task0, method);
}
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m856B1384E16F131442AC565B73BA748764165E0E (U3CU3Ec__DisplayClass17_0_t7B6288E3315E7FBD6CC04CDAD0867E254751558A* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Nullable`1<System.Guid>> Microsoft.AppCenter.AppCenter::GetInstallIdAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF538A43CA1B31CD07E6A7AB3C10B4A8CF70228D6* AppCenter_GetInstallIdAsync_m241352B1E7DC0A5361098D4A834F17D9592CAFE1 (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Nullable`1<System.Guid>>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m31871A4A384D1DA4C34C6706F2E91F393BBA0F8D (Action_1_t3D17A7F3B03B425D57654BAC0A572CCC94552120* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3D17A7F3B03B425D57654BAC0A572CCC94552120*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Nullable`1<System.Guid>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_mD999084597085FBDB73C538D8D5A74EBE54B1CD5 (Task_1_tF538A43CA1B31CD07E6A7AB3C10B4A8CF70228D6* __this, Action_1_t3D17A7F3B03B425D57654BAC0A572CCC94552120* ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_tF538A43CA1B31CD07E6A7AB3C10B4A8CF70228D6*, Action_1_t3D17A7F3B03B425D57654BAC0A572CCC94552120*, const RuntimeMethod*))Task_1_ContinueWith_mD999084597085FBDB73C538D8D5A74EBE54B1CD5_gshared)(__this, ___continuationAction0, method);
}
// System.Void Microsoft.AppCenter.WrapperSdk::.ctor(System.String,System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperSdk__ctor_mC742F8F6089461EBA19F2BA3CF0727BECFF06921 (WrapperSdk_tECB9236A440301E3EE2E2B3C8A3EBE48DCC28B31* __this, String_t* ___wrapperSdkName0, String_t* ___wrapperSdkVersion1, String_t* ___wrapperRuntimeVersion2, String_t* ___liveUpdateReleaseLabel3, String_t* ___liveUpdateDeploymentKey4, String_t* ___liveUpdatePackageHash5, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.AppCenter::SetWrapperSdk(Microsoft.AppCenter.WrapperSdk)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_SetWrapperSdk_m95F638F0F52661CE86AD0FC2D36B76B0E787F05E (WrapperSdk_tECB9236A440301E3EE2E2B3C8A3EBE48DCC28B31* ___wrapperSdk0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
inline TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* List_1_ToArray_mAF39173491C493DC9C643F76BC50C311070BEE56 (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.AppCenter.AppCenter::SetMaxStorageSizeAsync(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AppCenter_SetMaxStorageSizeAsync_mB263A22BE72E30B85310CED6E4276388DF3ABD7E (int64_t ___sizeInBytes0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProvider::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityScreenSizeProvider_Initialize_m7B263E8738DF0A9DE52B75F423D0074A22541D42 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProviderFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityScreenSizeProviderFactory__ctor_m14DE88813A9F0EEE6CC1A8DE73A086A534D9BAD6 (UnityScreenSizeProviderFactory_tB85C15DE74D726E03FD34EF2B6CD2CD08CD854F9* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Utils.DeviceInformationHelper::SetScreenSizeProviderFactory(Microsoft.AppCenter.Utils.IScreenSizeProviderFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceInformationHelper_SetScreenSizeProviderFactory_m7BA3D4C034661C5016D8FE3C3D64B5293452FC8E (RuntimeObject* ___factory0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityApplicationSettings_Initialize_mE440CB936EB4EC29557B73DF1632F37D3D453260 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettingsFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityApplicationSettingsFactory__ctor_m125CBC8AD6518D503BB8076E05CA8AAA2D7BB09E (UnityApplicationSettingsFactory_t08F1EC52F5EFAB3E39543A2E3FD9926E44BCF314* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.AppCenter::SetApplicationSettingsFactory(Microsoft.AppCenter.Utils.IApplicationSettingsFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_SetApplicationSettingsFactory_m40D0E075E32FE2CADE6BB2F09E02A690F53D245D (RuntimeObject* ___factory0, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Nullable`1<System.Guid>>::get_Result()
inline Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 Task_1_get_Result_mBBDAAE00353EA3E045503F629D77F8A7B0C43D32 (Task_1_tF538A43CA1B31CD07E6A7AB3C10B4A8CF70228D6* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 (*) (Task_1_tF538A43CA1B31CD07E6A7AB3C10B4A8CF70228D6*, const RuntimeMethod*))Task_1_get_Result_mBBDAAE00353EA3E045503F629D77F8A7B0C43D32_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Guid>::get_HasValue()
inline bool Nullable_1_get_HasValue_mA4048346752BF05849998E450987EB444BE2AD63_inline (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7*, const RuntimeMethod*))Nullable_1_get_HasValue_mA4048346752BF05849998E450987EB444BE2AD63_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Guid>::GetValueOrDefault()
inline Guid_t Nullable_1_GetValueOrDefault_mC6EDE8162AB388B6482F745FF996B594ACC373AC_inline (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mC6EDE8162AB388B6482F745FF996B594ACC373AC_gshared_inline)(__this, method);
}
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Microsoft.AppCenter.Unity.Internal.Utils.UnityCoroutineHelper>()
inline UnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118* Object_FindObjectOfType_TisUnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118_m274204CBBE40669EDDC0D91E7C45D3378F879CC9 (const RuntimeMethod* method)
{
	return ((  UnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Microsoft.AppCenter.Unity.Internal.Utils.UnityCoroutineHelper>()
inline UnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118* GameObject_AddComponent_TisUnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118_mE325A615D9682C02060763EF7C2A24C3C0DEBDFA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityCoroutineHelper/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m17568411E7FBE42B56D452F8DBB508D7160126CA (U3CU3Ec__DisplayClass2_0_tD61BD08ED3DE5B400CF1A9F2AC443555AD943384* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.WSA.Application::RunningOnAppThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_RunningOnAppThread_mCFBD810100F24F07A00B6F37221609D111AE8DE8 (const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.Internal.Utils.UnityCoroutineHelper Microsoft.AppCenter.Unity.Internal.Utils.UnityCoroutineHelper::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118* UnityCoroutineHelper_get_Instance_mCFCE30AEDC2C7971D55733D8DB995CCD5F0289B3 (const RuntimeMethod* method) ;
// TResult System.Func`1<System.Collections.IEnumerator>::Invoke()
inline RuntimeObject* Func_1_Invoke_mC8C2E075F688B1F6C0700B6DD0147A02A7AC1672_inline (Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WSA.AppCallbackItem::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCallbackItem__ctor_m80B06333902B113393593934CAF0B6BAC3294CDA (AppCallbackItem_t8F547FBF833801E6B146C645D74B8BCAAFD6B9AB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WSA.Application::InvokeOnAppThread(UnityEngine.WSA.AppCallbackItem,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_InvokeOnAppThread_m3753BD615455BB7B199994834AA2640286674B41 (AppCallbackItem_t8F547FBF833801E6B146C645D74B8BCAAFD6B9AB* ___item0, bool ___waitUntilDone1, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63 (String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Collections.Generic.Dictionary`2<System.String,System.Object>>(System.String)
inline Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m4E6CF81A3D2231FFE97362398E4A8E43CFE9E8BA (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_mC0B6F251342CF48343577DCDF87B0B1B4D43AC50_gshared)(___value0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings::ReadAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityApplicationSettings_ReadAll_m06FF35711208428EB72828E4C8420C033F7253E7 (const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Collections.IEnumerator>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m46EE8C5F7DAECC4CF1353D682ABEC3A55D0AFAAC (Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityCoroutineHelper::StartCoroutine(System.Func`1<System.Collections.IEnumerator>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityCoroutineHelper_StartCoroutine_m58CF612097F020F1B5EE3A0A098F9F4FA1C98B81 (Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* ___coroutine0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings/<MainThreadCoroutine>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMainThreadCoroutineU3Ed__10__ctor_m86C909E45236E7BFEB7E6389EC67A629C43233AA (U3CMainThreadCoroutineU3Ed__10_t0AA9E98CB6DD6FC8382CE0D587A7F304EB2D4431* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_mEF78C5DAFDB944E8E19657EB92F5394370B27CAF (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityApplicationSettings__ctor_mD57C9FBAA61F0E9B7D78B3BC53386B281E5CC7A4 (UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A* __this, const RuntimeMethod* method) ;
// UnityEngine.Resolution UnityEngine.Screen::get_currentResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 Screen_get_currentResolution_mDA9FEB72E2C16BD66D709E94CD9504BF7CAC899E (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Resolution::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_height_mD46754FA3634CA816BE91D1610D1FEBDECCEBE5B (Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Resolution::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_width_mC55423852D453EEC0B66E692AA3E7F5DE772FB24 (Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Utils.ScreenSizeProviderBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSizeProviderBase__ctor_mBF631AD794FC3247CBE4B5AFA372D27C2D498B43 (ScreenSizeProviderBase_t59E62DFA6613A02E514B86A66025BD6199D80180* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityScreenSizeProvider__ctor_m54E1B8A72B53DA038D1E347341660624D72154FF (UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::PrepareEventHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_PrepareEventHandlers_mF9392F1E0177EE2A61CADBD5665E158BE9E71474 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::AddNativeType(System.Collections.Generic.List`1<System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_AddNativeType_m0DE0BF0CA61373D251CA124CFFA6385E6AC262C9 (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___nativeTypes0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::TrackEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_TrackEvent_mAAEF640122152A8DE8B158FEA21F9956CFBB36B4 (String_t* ___eventName0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::TrackEvent(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_TrackEvent_m6E6FD7BF8F55E9377016A4C4CEB8BE7FC3D2382B (String_t* ___eventName0, int32_t ___flags1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.Analytics::TrackEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_TrackEvent_mFC9453A22DEB7BEE922B5F439280CE4F3EACA0EA (String_t* ___eventName0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::TrackEventWithProperties(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_TrackEventWithProperties_m3A521BC88D31D108F86AE290C74C19806027656F (String_t* ___eventName0, RuntimeObject* ___properties1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.Analytics::TrackEvent(System.String,Microsoft.AppCenter.Unity.Analytics.Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_TrackEvent_mBE445D0DA215CC815BA6B34392F9BF97910969EC (String_t* ___eventName0, int32_t ___flags1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::TrackEventWithProperties(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_TrackEventWithProperties_m81AC9AA7E3C6B64910CF59280309143033CAFDD4 (String_t* ___eventName0, RuntimeObject* ___properties1, int32_t ___flags2, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::TrackEventWithProperties(System.String,Microsoft.AppCenter.Unity.Analytics.EventProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_TrackEventWithProperties_m28AE31247C9B500A5C08BED07884A9CFE8E5AB6C (String_t* ___eventName0, EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* ___properties1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::TrackEventWithProperties(System.String,Microsoft.AppCenter.Unity.Analytics.EventProperties,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_TrackEventWithProperties_m56AB45DD408C66E58208924EEC7687F91DC13245 (String_t* ___eventName0, EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* ___properties1, int32_t ___flags2, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::IsEnabledAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* AnalyticsInternal_IsEnabledAsync_m2C840BA5DADA7AEEA977FB8133EEF8C1DFC20D36 (const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.AppCenterTask Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::SetEnabledAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* AnalyticsInternal_SetEnabledAsync_mC1D761BBA65808E2855B51A8921644522AB53C03 (bool ___isEnabled0, const RuntimeMethod* method) ;
// System.Type Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::GetTransmissionTarget(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AnalyticsInternal_GetTransmissionTarget_m97ADABA862EEE168B230BA3CED24F940CB8507D9 (String_t* ___transmissionTargetToken0, bool* ___success1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTarget::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTarget__ctor_m51B8B2F0F5ECCB77841A1A47BF277610F5C79434 (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* __this, RuntimeObject* ___rawObject0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_Pause_m2A2FC4CA433C9F0A926455C8A6B45D4D7527953F (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_Resume_m6C71581DC6702813943B169ADF0FF33587F0AEC9 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::EnableManualSessionTracker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_EnableManualSessionTracker_mF75F47B1732756C81D280EA2A321F26997D5915D (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::StartSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_StartSession_mC76A12257B7ED3105254F03C3BCCCA39CFC61865 (const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.AppCenter.Unity.Analytics.Internal.EventPropertiesInternal::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* EventPropertiesInternal_Create_m3885816BE0A5B4501C8D3F1A4DB33E4A6FB2CE0D (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.EventPropertiesInternal::SetString(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventPropertiesInternal_SetString_mC4067EEA3E329D248A9C47F7713E406A3857FD1C (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___properties0, String_t* ___key1, String_t* ___val2, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.EventPropertiesInternal::SetDate(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventPropertiesInternal_SetDate_m827458E62AFE4E1FA427DD40BF2D39D17951A3C6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___properties0, String_t* ___key1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___val2, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.EventPropertiesInternal::SetNumber(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventPropertiesInternal_SetNumber_mFA6EFB6B44BE1749E4A6980385BD21B982EA6009 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___properties0, String_t* ___key1, int64_t ___val2, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.EventPropertiesInternal::SetNumber(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventPropertiesInternal_SetNumber_mA4FE9048CE236F1443477412E5A18E4FB20F00B6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___properties0, String_t* ___key1, double ___val2, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.EventPropertiesInternal::SetBool(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventPropertiesInternal_SetBool_mE854F20974F62AF9869B0EDA11175C8077AF144B (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___properties0, String_t* ___key1, bool ___val2, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::SetAppName(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_SetAppName_m90A0380275EE483C44C6271881D45E85BC69D5D2 (RuntimeObject* ___propertyConfigurator0, String_t* ___appName1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::SetAppVersion(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_SetAppVersion_m2E7D531E19764AC7C1CD07D6B6D22C75697FBC69 (RuntimeObject* ___propertyConfigurator0, String_t* ___appVersion1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::SetAppLocale(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_SetAppLocale_mE3BFDB0DD4DD2D7CDDD8DD80027B2A84CEA3FBF6 (RuntimeObject* ___propertyConfigurator0, String_t* ___appLocale1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::SetEventProperty(System.Object,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_SetEventProperty_mF5B11F158F9AD8598F1F9C5DA0503D8DA67B3D2F (RuntimeObject* ___propertyConfigurator0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::SetEventProperty(System.Object,System.String,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_SetEventProperty_m92374BC9F683952D2082B582092004DC3A8C2F7C (RuntimeObject* ___propertyConfigurator0, String_t* ___key1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value2, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::SetEventProperty(System.Object,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_SetEventProperty_mC4392BAFFAC4F49F7D3587F0407A07070875B02B (RuntimeObject* ___propertyConfigurator0, String_t* ___key1, int64_t ___value2, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::SetEventProperty(System.Object,System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_SetEventProperty_mDD1404A5D93FA60751DB9B85793CA420CD3E40F0 (RuntimeObject* ___propertyConfigurator0, String_t* ___key1, double ___value2, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::SetEventProperty(System.Object,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_SetEventProperty_m638F6ECC4A2B6A58493AAF0F01188843384F1639 (RuntimeObject* ___propertyConfigurator0, String_t* ___key1, bool ___value2, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::SetUserId(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_SetUserId_mEA369FC07403CAF31F260A97E382C3A52E6EFE00 (RuntimeObject* ___propertyConfigurator0, String_t* ___userId1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::RemoveEventProperty(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_RemoveEventProperty_mBC9A625CC51FD7D1FF722A644FE17ADE0C6C1DFD (RuntimeObject* ___propertyConfigurator0, String_t* ___key1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::CollectDeviceId(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_CollectDeviceId_m8F7E5A5A5CACA34AC3663E1B2FBC1921C3FFE7C4 (RuntimeObject* ___propertyConfigurator0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::TrackEvent(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTargetInternal_TrackEvent_m11C1137AEAD65689CA05E3AB2C147B190BC428A4 (RuntimeObject* ___transmissionTarget0, String_t* ___eventName1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::TrackEvent(System.Object,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTargetInternal_TrackEvent_mA4DA02EDC6515EB643CA42F785C9B7810FEE6384 (RuntimeObject* ___transmissionTarget0, String_t* ___eventName1, int32_t ___flags2, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTarget::TrackEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTarget_TrackEvent_m6CD6E663A74756AF656C4376AA2323B86CD1A7CC (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* __this, String_t* ___eventName0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::TrackEventWithProperties(System.Object,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTargetInternal_TrackEventWithProperties_mE1F917FB42A09A61B994407F4E758C3F3C319967 (RuntimeObject* ___transmissionTarget0, String_t* ___eventName1, RuntimeObject* ___properties2, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTarget::TrackEvent(System.String,Microsoft.AppCenter.Unity.Analytics.Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTarget_TrackEvent_m6C308A3963DC9286FA78BC4E68D355CA2F4BABA1 (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* __this, String_t* ___eventName0, int32_t ___flags1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::TrackEventWithProperties(System.Object,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTargetInternal_TrackEventWithProperties_m6491DEADAC7DEB0972F67C1313D2E97B46D87E4F (RuntimeObject* ___transmissionTarget0, String_t* ___eventName1, RuntimeObject* ___properties2, int32_t ___flags3, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::TrackEventWithProperties(System.Object,System.String,Microsoft.AppCenter.Unity.Analytics.EventProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTargetInternal_TrackEventWithProperties_m6C30B755F48DC734627409BC588B33133C53F8EF (RuntimeObject* ___transmissionTarget0, String_t* ___eventName1, EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* ___properties2, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::TrackEventWithProperties(System.Object,System.String,Microsoft.AppCenter.Unity.Analytics.EventProperties,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTargetInternal_TrackEventWithProperties_m1425895D42011E290776AB6843763EC8112675EC (RuntimeObject* ___transmissionTarget0, String_t* ___eventName1, EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* ___properties2, int32_t ___flags3, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::IsEnabledAsync(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* TransmissionTargetInternal_IsEnabledAsync_m59AF016AA04F3B9112D7FBF723908C442C02E31A (RuntimeObject* ___transmissionTarget0, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.AppCenterTask Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::SetEnabledAsync(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* TransmissionTargetInternal_SetEnabledAsync_m97608DB06DD5C638968C5D4C7C686532A942D932 (RuntimeObject* ___transmissionTarget0, bool ___enabled1, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::GetTransmissionTarget(System.Object,System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransmissionTargetInternal_tF7CA4859D77A5305C4003B4A8372FF8D0F3E9BC7* TransmissionTargetInternal_GetTransmissionTarget_mF8BE520966F5FAFD71C532A03E16C61425338891 (RuntimeObject* ___transmissionTargetParent0, String_t* ___transmissionTargetToken1, bool* ___success2, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::GetPropertyConfigurator(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyConfiguratorInternal_t6C451FBD973EB49AAE7E63A0961C83631D7989A4* TransmissionTargetInternal_GetPropertyConfigurator_mBAD2D6047EC6778C5EFD970B9A80AF5EC3888355 (RuntimeObject* ___transmissionTargetParent0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfigurator::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfigurator__ctor_m1C63AF25910E61B21361E1F81AB297A98AE3F8A9 (PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91* __this, RuntimeObject* ___rawObject0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::Pause(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTargetInternal_Pause_mB0821B1AB15A1841EBF0047658B4103719D6A52B (RuntimeObject* ___transmissionTarget0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::Resume(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTargetInternal_Resume_mECC4FF3FC248684D533AD5B57E03A6E9FA670FB1 (RuntimeObject* ___transmissionTarget0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Analytics.Analytics::TrackEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_TrackEvent_m4E8DDFD9E51898BD0DC7A2D7817BE40DB108F76D (String_t* ___name0, RuntimeObject* ___properties1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.AppCenter.Unity.Analytics.EventProperties::GetRawObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* EventProperties_GetRawObject_mACB25CE577F07CA6C1A87639D93B1110EFE375E1_inline (EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Microsoft.AppCenter.Analytics.Analytics::SetEnabledAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Analytics_SetEnabledAsync_m3B261BAB2A94CB53CEF71D2843D3A9B47946820E (bool ___enabled0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.AppCenter.Analytics.Analytics::IsEnabledAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Analytics_IsEnabledAsync_m7D62590CF72C8240C1500B392B3D11C044D4B149 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Analytics.Analytics::EnableManualSessionTracker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_EnableManualSessionTracker_m8A1C3448450FD95FA87EE106E604584A680CAC36 (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Analytics.Analytics::StartSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_StartSession_mD1634F4C9DBC5E571117CCA7854D0EE764FED7BC (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.String System.Int64::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m5250B67D3E89B8EB829FB26136E744F1F141B7FD (int64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357 (double* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m27637E1131A10BED8A95639D64339023D5EBBF00 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// UnityEngine.AndroidJavaObject Assets.AppCenter.Plugins.Android.Utility.AndroidUtility::GetAndroidContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidUtility_GetAndroidContext_m42685E8CFF87B44E6E1F6EFB1FFD71793D2C0FF6 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void AppCenterBehavior::add_InitializingServices(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehavior_add_InitializingServices_mB63D1BEAFF3BE9E001A4EAB859445656897DDB20 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->___InitializingServices_4;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->___InitializingServices_4), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppCenterBehavior::remove_InitializingServices(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehavior_remove_InitializingServices_mCE5E1FA1BA5552D31DB0F0631C9599314C82AF52 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->___InitializingServices_4;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->___InitializingServices_4), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppCenterBehavior::add_InitializedAppCenterAndServices(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehavior_add_InitializedAppCenterAndServices_m6CADDEEF7FC8BA40A0B807B6C616140DBD1AE13A (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->___InitializedAppCenterAndServices_5;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->___InitializedAppCenterAndServices_5), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppCenterBehavior::remove_InitializedAppCenterAndServices(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehavior_remove_InitializedAppCenterAndServices_m01CB14B854AF4DE5D8C2F9A8845801BCEF4AB2BF (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->___InitializedAppCenterAndServices_5;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->___InitializedAppCenterAndServices_5), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppCenterBehavior::add_Started(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehavior_add_Started_mA8E72538581905A80859640FCA007CC85EEB1840 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->___Started_6;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->___Started_6), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppCenterBehavior::remove_Started(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehavior_remove_Started_m4D08771420537E86779899B711C1A003C236F048 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->___Started_6;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->___Started_6), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AppCenterBehavior::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehavior_Awake_mC9669DDD0CB097106B612B890FBFB71CCD01D439 (AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBBFEF8286CDBE879B1CF60BBB869EA58D9C57FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance != null)
		AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F* L_0 = ((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->____instance_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// Debug.LogError("App Center Behavior should have only one instance!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralDBBFEF8286CDBE879B1CF60BBB869EA58D9C57FE, NULL);
		// DestroyImmediate(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_2, NULL);
		// return;
		return;
	}

IL_0023:
	{
		// _instance = this;
		((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->____instance_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->____instance_7), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_3, NULL);
		// StartAppCenter();
		AppCenterBehavior_StartAppCenter_m15155E58DB78AE027DC584160511D7FDA206AA3D(__this, NULL);
		// }
		return;
	}
}
// System.Void AppCenterBehavior::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehavior_Start_mDC10589798892C77D53767B8DD79FD966AFADFA6 (AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AppCenterBehavior::StartAppCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehavior_StartAppCenter_m15155E58DB78AE027DC584160511D7FDA206AA3D (AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0_mE226822001911363684FFE9F5322ED99DFA1B97F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAA4544CDE34CEB868CCD792040C2BC24558C158);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	String_t* V_1 = NULL;
	AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		// if (Settings == null)
		AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0* L_0 = __this->___Settings_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogError("App Center isn't configured!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralDAA4544CDE34CEB868CCD792040C2BC24558C158, NULL);
		// return;
		return;
	}

IL_0019:
	{
		// var services = Settings.Services;
		AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0* L_2 = __this->___Settings_8;
		NullCheck(L_2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3;
		L_3 = AppCenterSettings_get_Services_m516A5A9323680216DD092A1CA62A5EDEC254E190(L_2, NULL);
		V_0 = L_3;
		// PrepareEventHandlers(services);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = V_0;
		AppCenterBehavior_PrepareEventHandlers_mB8152C6538FD063F9C6970AE7A16D2A819DB1F63(L_4, NULL);
		// InvokeInitializingServices();
		AppCenterBehavior_InvokeInitializingServices_mF5B3B0FED454FA9DCF386E0984331DEE899AB5C6(NULL);
		// AppCenter.SetWrapperSdk();
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		AppCenter_SetWrapperSdk_mC1FEF221ED9E17BFAF3D9E0087BEDF36F1185F44(NULL);
		// AppCenter.CacheStorageSize(Settings.MaxStorageSize.Size);
		AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0* L_5 = __this->___Settings_8;
		NullCheck(L_5);
		MaxStorageSizeProperty_tFD96186C17180DD384577CBF433AB9CF0AE1B846* L_6 = L_5->___MaxStorageSize_19;
		NullCheck(L_6);
		int64_t L_7 = L_6->___Size_1;
		AppCenter_CacheStorageSize_mE5AE33878628CDA78E19B11B49D191BE2660CE1F(L_7, NULL);
		// if (Settings.CustomLogUrl.UseCustomUrl)
		AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0* L_8 = __this->___Settings_8;
		NullCheck(L_8);
		CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E* L_9 = L_8->___CustomLogUrl_18;
		NullCheck(L_9);
		bool L_10 = L_9->___UseCustomUrl_1;
		if (!L_10)
		{
			goto IL_0071;
		}
	}
	{
		// AppCenter.CacheLogUrl(Settings.CustomLogUrl.Url);
		AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0* L_11 = __this->___Settings_8;
		NullCheck(L_11);
		CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E* L_12 = L_11->___CustomLogUrl_18;
		NullCheck(L_12);
		String_t* L_13 = L_12->___Url_2;
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		AppCenter_CacheLogUrl_m62D5F9202B5D83555B91ABB2456836D3BC1C8976(L_13, NULL);
	}

IL_0071:
	{
		// var appSecret = AppCenter.ParseAndSaveSecretForPlatform(Settings.AppSecret);
		AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0* L_14 = __this->___Settings_8;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = AppCenterSettings_get_AppSecret_m1FDB74A2D8D75DBDEA76C9F35395709CE3F9BF9B(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = AppCenter_ParseAndSaveSecretForPlatform_mB52EAD020A4205F2CF76B5F316E0BDA28080D235(L_15, NULL);
		V_1 = L_16;
		// var advancedSettings = GetComponent<AppCenterBehaviorAdvanced>();
		AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* L_17;
		L_17 = Component_GetComponent_TisAppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0_mE226822001911363684FFE9F5322ED99DFA1B97F(__this, Component_GetComponent_TisAppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0_mE226822001911363684FFE9F5322ED99DFA1B97F_RuntimeMethod_var);
		V_2 = L_17;
		// AppCenter.NetworkRequestsAllowed = Settings.AllowNetworkRequests;
		AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0* L_18 = __this->___Settings_8;
		NullCheck(L_18);
		bool L_19 = L_18->___AllowNetworkRequests_15;
		AppCenter_set_NetworkRequestsAllowed_mA4F3280DC8D8AC3310DEF71A4EB882151FF4300F(L_19, NULL);
		// if (IsStartFromAppCenterBehavior(advancedSettings))
		AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* L_20 = V_2;
		bool L_21;
		L_21 = AppCenterBehavior_IsStartFromAppCenterBehavior_mB60007382F599245C185009F61D6FC38626CD714(__this, L_20, NULL);
		if (!L_21)
		{
			goto IL_0163;
		}
	}
	{
		// AppCenter.LogLevel = Settings.InitialLogLevel;
		AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0* L_22 = __this->___Settings_8;
		NullCheck(L_22);
		int32_t L_23 = L_22->___InitialLogLevel_14;
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		AppCenter_set_LogLevel_mE8E84377D5D92725FC244EC73751B3719C308ACE(L_23, NULL);
		// if (Settings.EnableManualSessionTracker) {
		AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0* L_24 = __this->___Settings_8;
		NullCheck(L_24);
		bool L_25 = L_24->___EnableManualSessionTracker_16;
		if (!L_25)
		{
			goto IL_00c7;
		}
	}
	{
		// Analytics.EnableManualSessionTracker();
		Analytics_EnableManualSessionTracker_m7B72F4FA40FB8DB645FFEB9AF2732F01F71A9603(NULL);
	}

IL_00c7:
	{
		// if (Settings.CustomLogUrl.UseCustomUrl)
		AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0* L_26 = __this->___Settings_8;
		NullCheck(L_26);
		CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E* L_27 = L_26->___CustomLogUrl_18;
		NullCheck(L_27);
		bool L_28 = L_27->___UseCustomUrl_1;
		if (!L_28)
		{
			goto IL_00ee;
		}
	}
	{
		// AppCenter.SetLogUrl(Settings.CustomLogUrl.Url);
		AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0* L_29 = __this->___Settings_8;
		NullCheck(L_29);
		CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E* L_30 = L_29->___CustomLogUrl_18;
		NullCheck(L_30);
		String_t* L_31 = L_30->___Url_2;
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		AppCenter_SetLogUrl_m03EB92A786E3845811A10AB7753FD7C6DBA3916B(L_31, NULL);
	}

IL_00ee:
	{
		// if (Settings.MaxStorageSize.UseCustomMaxStorageSize && Settings.MaxStorageSize.Size > 0)
		AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0* L_32 = __this->___Settings_8;
		NullCheck(L_32);
		MaxStorageSizeProperty_tFD96186C17180DD384577CBF433AB9CF0AE1B846* L_33 = L_32->___MaxStorageSize_19;
		NullCheck(L_33);
		bool L_34 = L_33->___UseCustomMaxStorageSize_0;
		if (!L_34)
		{
			goto IL_0129;
		}
	}
	{
		AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0* L_35 = __this->___Settings_8;
		NullCheck(L_35);
		MaxStorageSizeProperty_tFD96186C17180DD384577CBF433AB9CF0AE1B846* L_36 = L_35->___MaxStorageSize_19;
		NullCheck(L_36);
		int64_t L_37 = L_36->___Size_1;
		if ((((int64_t)L_37) <= ((int64_t)((int64_t)0))))
		{
			goto IL_0129;
		}
	}
	{
		// AppCenterInternal.SetMaxStorageSize(Settings.MaxStorageSize.Size);
		AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0* L_38 = __this->___Settings_8;
		NullCheck(L_38);
		MaxStorageSizeProperty_tFD96186C17180DD384577CBF433AB9CF0AE1B846* L_39 = L_38->___MaxStorageSize_19;
		NullCheck(L_39);
		int64_t L_40 = L_39->___Size_1;
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_SetMaxStorageSize_mA959575D65A120E096CB1EFBE6B956F305083DBE(L_40, NULL);
	}

IL_0129:
	{
		// var startupType = GetStartupType(advancedSettings);
		AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* L_41 = V_2;
		int32_t L_42;
		L_42 = AppCenterBehavior_GetStartupType_m4970FDDE454C16465733166C07421352C878D3EE(__this, L_41, NULL);
		V_3 = L_42;
		// if (startupType != StartupType.Skip)
		int32_t L_43 = V_3;
		if ((((int32_t)L_43) == ((int32_t)4)))
		{
			goto IL_0163;
		}
	}
	{
		// var transmissionTargetToken = GetTransmissionTargetToken(advancedSettings);
		AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* L_44 = V_2;
		String_t* L_45;
		L_45 = AppCenterBehavior_GetTransmissionTargetToken_m5B43E993B8986735472F3B9BBC13D96F3D126748(__this, L_44, NULL);
		V_4 = L_45;
		// var appSecretString = GetAppSecretString(appSecret, transmissionTargetToken, startupType);
		String_t* L_46 = V_1;
		String_t* L_47 = V_4;
		int32_t L_48 = V_3;
		String_t* L_49;
		L_49 = AppCenterBehavior_GetAppSecretString_mA6E0E2F6AF26A74DACC80F68B684C836A2FD5999(__this, L_46, L_47, L_48, NULL);
		V_5 = L_49;
		// if (string.IsNullOrEmpty(appSecretString))
		String_t* L_50 = V_5;
		bool L_51;
		L_51 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_50, NULL);
		if (!L_51)
		{
			goto IL_015b;
		}
	}
	{
		// AppCenterInternal.Start(services);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_52 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_Start_mB7DBEDCB8B6889FE024CFED65FE6D72B6B0F0109(L_52, NULL);
		goto IL_0163;
	}

IL_015b:
	{
		// AppCenterInternal.Start(appSecretString, services);
		String_t* L_53 = V_5;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_54 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_Start_m9D7353850990EDE27B7A414343CC5A3506E81C0C(L_53, L_54, NULL);
	}

IL_0163:
	{
		// InvokeInitializedServices();
		AppCenterBehavior_InvokeInitializedServices_mC59E72B4B353D743D21AE6152A4F2FA4A5220D53(NULL);
		// if (Started != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_55 = ((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->___Started_6;
		if (!L_55)
		{
			goto IL_0179;
		}
	}
	{
		// Started.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_56 = ((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->___Started_6;
		NullCheck(L_56);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_56, NULL);
	}

IL_0179:
	{
		// }
		return;
	}
}
// System.Boolean AppCenterBehavior::IsStartFromAppCenterBehavior(AppCenterBehaviorAdvanced)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppCenterBehavior_IsStartFromAppCenterBehavior_mB60007382F599245C185009F61D6FC38626CD714 (AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F* __this, AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* ___advancedSettings0, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// Microsoft.AppCenter.Unity.StartupType AppCenterBehavior::GetStartupType(AppCenterBehaviorAdvanced)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppCenterBehavior_GetStartupType_m4970FDDE454C16465733166C07421352C878D3EE (AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F* __this, AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* ___advancedSettings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return advancedSettings != null && advancedSettings.SettingsAdvanced != null ?
		//     advancedSettings.SettingsAdvanced.GetStartupType() :
		//     StartupType.AppCenter;
		AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* L_0 = ___advancedSettings0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* L_2 = ___advancedSettings0;
		NullCheck(L_2);
		AppCenterSettingsAdvanced_t3C77BB839D0D7E010225EB4724C0A8677608452D* L_3 = L_2->___SettingsAdvanced_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		return (int32_t)(0);
	}

IL_0019:
	{
		AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* L_5 = ___advancedSettings0;
		NullCheck(L_5);
		AppCenterSettingsAdvanced_t3C77BB839D0D7E010225EB4724C0A8677608452D* L_6 = L_5->___SettingsAdvanced_4;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = AppCenterSettingsAdvanced_GetStartupType_mF60F93CC13581F129554B1F353CA280DC03166A7(L_6, NULL);
		return L_7;
	}
}
// System.String AppCenterBehavior::GetTransmissionTargetToken(AppCenterBehaviorAdvanced)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppCenterBehavior_GetTransmissionTargetToken_m5B43E993B8986735472F3B9BBC13D96F3D126748 (AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F* __this, AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* ___advancedSettings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return advancedSettings != null && advancedSettings.SettingsAdvanced != null ?
		//     advancedSettings.SettingsAdvanced.TransmissionTargetToken :
		//     string.Empty;
		AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* L_0 = ___advancedSettings0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* L_2 = ___advancedSettings0;
		NullCheck(L_2);
		AppCenterSettingsAdvanced_t3C77BB839D0D7E010225EB4724C0A8677608452D* L_3 = L_2->___SettingsAdvanced_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_001d;
		}
	}

IL_0017:
	{
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_5;
	}

IL_001d:
	{
		AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* L_6 = ___advancedSettings0;
		NullCheck(L_6);
		AppCenterSettingsAdvanced_t3C77BB839D0D7E010225EB4724C0A8677608452D* L_7 = L_6->___SettingsAdvanced_4;
		NullCheck(L_7);
		String_t* L_8 = L_7->___TransmissionTargetToken_4;
		return L_8;
	}
}
// System.String AppCenterBehavior::GetAppSecretString(System.String,System.String,Microsoft.AppCenter.Unity.StartupType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppCenterBehavior_GetAppSecretString_mA6E0E2F6AF26A74DACC80F68B684C836A2FD5999 (AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F* __this, String_t* ___appSecret0, String_t* ___transmissionTargetToken1, int32_t ___startupType2, const RuntimeMethod* method) 
{
	{
		// return appSecret;
		String_t* L_0 = ___appSecret0;
		return L_0;
	}
}
// System.Void AppCenterBehavior::PrepareEventHandlers(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehavior_PrepareEventHandlers_mB8152C6538FD063F9C6970AE7A16D2A819DB1F63 (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___services0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C55356E644F8F48930D301E46AB2B273303818E);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	int32_t V_1 = 0;
	MethodInfo_t* V_2 = NULL;
	{
		// foreach (var service in services)
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = ___services0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_002a;
	}

IL_0006:
	{
		// foreach (var service in services)
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Type_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// var method = service.GetMethod("PrepareEventHandlers");
		NullCheck(L_4);
		MethodInfo_t* L_5;
		L_5 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_4, _stringLiteral3C55356E644F8F48930D301E46AB2B273303818E, NULL);
		V_2 = L_5;
		// if (method != null)
		MethodInfo_t* L_6 = V_2;
		bool L_7;
		L_7 = MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC(L_6, (MethodInfo_t*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0026;
		}
	}
	{
		// method.Invoke(null, null);
		MethodInfo_t* L_8 = V_2;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_8, NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
	}

IL_0026:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002a:
	{
		// foreach (var service in services)
		int32_t L_11 = V_1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AppCenterBehavior::InvokeInitializingServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehavior_InvokeInitializingServices_mF5B3B0FED454FA9DCF386E0984331DEE899AB5C6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (InitializingServices != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->___InitializingServices_4;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// InitializingServices.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->___InitializingServices_4;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void AppCenterBehavior::InvokeInitializedServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehavior_InvokeInitializedServices_mC59E72B4B353D743D21AE6152A4F2FA4A5220D53 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (InitializedAppCenterAndServices != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->___InitializedAppCenterAndServices_5;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// InitializedAppCenterAndServices.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ((AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_il2cpp_TypeInfo_var))->___InitializedAppCenterAndServices_5;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void AppCenterBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehavior__ctor_m11607D47173F013DD42BF3301F8544C5F476F358 (AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void AppCenterBehaviorAdvanced::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehaviorAdvanced_Awake_m992C7EB7648FDBE94C5F7F1E6521BC74CB89147A (AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_mFF5B542CA4BEEC20923D0F3273AEFA493CFE071F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5065513D9101AA14628E1B49A28A2D9F6FF4B32D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.GetComponent<AppCenterBehavior>() == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		AppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F* L_1;
		L_1 = GameObject_GetComponent_TisAppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_mFF5B542CA4BEEC20923D0F3273AEFA493CFE071F(L_0, GameObject_GetComponent_TisAppCenterBehavior_tDB2CEE749F4D9D38352A6CF2223B4BE65693A04F_mFF5B542CA4BEEC20923D0F3273AEFA493CFE071F_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// Debug.LogError("App Center Behavior Advanced should have the App Center Behavior instance attached to the same game object.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral5065513D9101AA14628E1B49A28A2D9F6FF4B32D, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void AppCenterBehaviorAdvanced::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterBehaviorAdvanced__ctor_mD5A248878C7C1028AA453BDD293E362A6BFCB2E3 (AppCenterBehaviorAdvanced_tA41C72804F09887BAE234020CA948EDD506ACAC0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.String AppCenterSettings::get_AppSecret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppCenterSettings_get_AppSecret_m1FDB74A2D8D75DBDEA76C9F35395709CE3F9BF9B (AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_m92EFE2CC5B9152F9754C353D72BAF71C5372B420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_mEF0494673E3DDABC8B20F35D322B13B06740F477_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_AppSecretU3Eb__17_0_mE4D0DDD7037CED3C3CD3B371763412E28C688819_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_AppSecretU3Eb__17_1_mE33C4069483513013A957E2BDA5FD6C04AEC1348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BCD6469CBFAD87F852FA17274E38C0FF810B8F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78213F6858633125288256D108BC17D96595ACE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral940FB4B43F1DB758BF6397ADAF6422591EFA018D);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* G_B2_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B2_1 = NULL;
	Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* G_B1_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B1_1 = NULL;
	Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		// var appSecrets = new Dictionary<string, string>
		// {
		//     { "ios", iOSAppSecret },
		//     { "android", AndroidAppSecret },
		//     { "uwp", UWPAppSecret }
		// };
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = L_0;
		String_t* L_2 = __this->___iOSAppSecret_4;
		NullCheck(L_1);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, _stringLiteral78213F6858633125288256D108BC17D96595ACE1, L_2, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = L_1;
		String_t* L_4 = __this->___AndroidAppSecret_5;
		NullCheck(L_3);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_3, _stringLiteral940FB4B43F1DB758BF6397ADAF6422591EFA018D, L_4, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = L_3;
		String_t* L_6 = __this->___UWPAppSecret_6;
		NullCheck(L_5);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_5, _stringLiteral2BCD6469CBFAD87F852FA17274E38C0FF810B8F1, L_6, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// return string.Concat(appSecrets
		//     .Where(i => !string.IsNullOrEmpty(i.Value))
		//     .Select(i => string.Format("{0}={1};", i.Key, i.Value))
		//     .ToArray());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var);
		Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* L_7 = ((U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_1;
		Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* L_8 = L_7;
		G_B1_0 = L_8;
		G_B1_1 = L_5;
		if (L_8)
		{
			G_B2_0 = L_8;
			G_B2_1 = L_5;
			goto IL_0057;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var);
		U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6* L_9 = ((U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* L_10 = (Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1*)il2cpp_codegen_object_new(Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_m612313685E65C8F88E36E0730D48C7BA57EB3D9A(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3Cget_AppSecretU3Eb__17_0_mE4D0DDD7037CED3C3CD3B371763412E28C688819_RuntimeMethod_var), NULL);
		Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* L_11 = L_10;
		((U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_1), (void*)L_11);
		G_B2_0 = L_11;
		G_B2_1 = G_B1_1;
	}

IL_0057:
	{
		RuntimeObject* L_12;
		L_12 = Enumerable_Where_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_mEF0494673E3DDABC8B20F35D322B13B06740F477(G_B2_1, G_B2_0, Enumerable_Where_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_mEF0494673E3DDABC8B20F35D322B13B06740F477_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var);
		Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* L_13 = ((U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var))->___U3CU3E9__17_1_2;
		Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* L_14 = L_13;
		G_B3_0 = L_14;
		G_B3_1 = L_12;
		if (L_14)
		{
			G_B4_0 = L_14;
			G_B4_1 = L_12;
			goto IL_007b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var);
		U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6* L_15 = ((U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* L_16 = (Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088*)il2cpp_codegen_object_new(Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Func_2__ctor_m48BD5538630AB90CAACF2ADC165985AB743A6C30(L_16, L_15, (intptr_t)((void*)U3CU3Ec_U3Cget_AppSecretU3Eb__17_1_mE33C4069483513013A957E2BDA5FD6C04AEC1348_RuntimeMethod_var), NULL);
		Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* L_17 = L_16;
		((U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var))->___U3CU3E9__17_1_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var))->___U3CU3E9__17_1_2), (void*)L_17);
		G_B4_0 = L_17;
		G_B4_1 = G_B3_1;
	}

IL_007b:
	{
		RuntimeObject* L_18;
		L_18 = Enumerable_Select_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_m92EFE2CC5B9152F9754C353D72BAF71C5372B420(G_B4_1, G_B4_0, Enumerable_Select_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_m92EFE2CC5B9152F9754C353D72BAF71C5372B420_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19;
		L_19 = Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC(L_18, Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		String_t* L_20;
		L_20 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_19, NULL);
		return L_20;
	}
}
// System.Type[] AppCenterSettings::get_Services()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* AppCenterSettings_get_Services_m516A5A9323680216DD092A1CA62A5EDEC254E190 (AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisType_t_m28C7A2C8A923EDB686746CE65C1C0BD2BCF93A00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisType_t_mBDD356C957E8D2FEE45299F34F461B519451D745_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_ServicesU3Eb__19_0_mB1634A6F4049D1E10D7E5AA607D554DCE17DA607_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* V_0 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B8_0 = NULL;
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* G_B8_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B7_0 = NULL;
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* G_B7_1 = NULL;
	{
		// var services = new List<Type>();
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_0 = (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)il2cpp_codegen_object_new(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69(L_0, List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		V_0 = L_0;
		// if (UseAnalytics)
		bool L_1 = __this->___UseAnalytics_7;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// services.Add(AppCenter.Analytics);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = AppCenter_get_Analytics_m2283A291222598C7AACF89FF834719F721CF3744(NULL);
		NullCheck(L_2);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_2, L_3, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
	}

IL_0019:
	{
		// if (UseCrashes)
		bool L_4 = __this->___UseCrashes_8;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// services.Add(AppCenter.Crashes);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = AppCenter_get_Crashes_m51C5FA0ACAC68BB663005F50487C94211380E565(NULL);
		NullCheck(L_5);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_5, L_6, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
	}

IL_002c:
	{
		// if (UseDistribute)
		bool L_7 = __this->___UseDistribute_9;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		// services.Add(AppCenter.Distribute);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = AppCenter_get_Distribute_mF8ECC42DC2EA6C69FCEFB0E7C18C7AC71A1B9AA9(NULL);
		NullCheck(L_8);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_8, L_9, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
	}

IL_003f:
	{
		// return services.Where(i => i != null).ToArray();
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_11 = ((U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var))->___U3CU3E9__19_0_3;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_12 = L_11;
		G_B7_0 = L_12;
		G_B7_1 = L_10;
		if (L_12)
		{
			G_B8_0 = L_12;
			G_B8_1 = L_10;
			goto IL_005f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var);
		U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6* L_13 = ((U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_14 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_14, L_13, (intptr_t)((void*)U3CU3Ec_U3Cget_ServicesU3Eb__19_0_mB1634A6F4049D1E10D7E5AA607D554DCE17DA607_RuntimeMethod_var), NULL);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_15 = L_14;
		((U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var))->___U3CU3E9__19_0_3 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var))->___U3CU3E9__19_0_3), (void*)L_15);
		G_B8_0 = L_15;
		G_B8_1 = G_B7_1;
	}

IL_005f:
	{
		RuntimeObject* L_16;
		L_16 = Enumerable_Where_TisType_t_mBDD356C957E8D2FEE45299F34F461B519451D745(G_B8_1, G_B8_0, Enumerable_Where_TisType_t_mBDD356C957E8D2FEE45299F34F461B519451D745_RuntimeMethod_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_17;
		L_17 = Enumerable_ToArray_TisType_t_m28C7A2C8A923EDB686746CE65C1C0BD2BCF93A00(L_16, Enumerable_ToArray_TisType_t_m28C7A2C8A923EDB686746CE65C1C0BD2BCF93A00_RuntimeMethod_var);
		return L_17;
	}
}
// System.Void AppCenterSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterSettings__ctor_m7A8B0BED811FF6398C0FC2207BB00A13299929EC (AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaxStorageSizeProperty_tFD96186C17180DD384577CBF433AB9CF0AE1B846_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35CC70012F059CB8275866C9A7512CDEB6B5C503);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3B7DC9C565FD7E648DBD2C97A54803A3B1A6925);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2185E2B320102DBAC16E15976BE9935D7508BC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string iOSAppSecret = "";
		__this->___iOSAppSecret_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iOSAppSecret_4), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string AndroidAppSecret = "";
		__this->___AndroidAppSecret_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AndroidAppSecret_5), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string UWPAppSecret = "";
		__this->___UWPAppSecret_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UWPAppSecret_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public bool UseAnalytics = true;
		__this->___UseAnalytics_7 = (bool)1;
		// public bool UseCrashes = true;
		__this->___UseCrashes_8 = (bool)1;
		// public bool UseDistribute = true;
		__this->___UseDistribute_9 = (bool)1;
		// public CustomUrlProperty CustomApiUrl = new CustomUrlProperty("API");
		CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E* L_0 = (CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E*)il2cpp_codegen_object_new(CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CustomUrlProperty__ctor_m8EC5E9D4A202301F210CE6F79E4CA3B28725FCAC(L_0, _stringLiteral35CC70012F059CB8275866C9A7512CDEB6B5C503, NULL);
		__this->___CustomApiUrl_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CustomApiUrl_10), (void*)L_0);
		// public CustomUrlProperty CustomInstallUrl = new CustomUrlProperty("Install");
		CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E* L_1 = (CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E*)il2cpp_codegen_object_new(CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CustomUrlProperty__ctor_m8EC5E9D4A202301F210CE6F79E4CA3B28725FCAC(L_1, _stringLiteralA3B7DC9C565FD7E648DBD2C97A54803A3B1A6925, NULL);
		__this->___CustomInstallUrl_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CustomInstallUrl_11), (void*)L_1);
		// public bool AutomaticCheckForUpdate = true;
		__this->___AutomaticCheckForUpdate_13 = (bool)1;
		// public LogLevel InitialLogLevel = LogLevel.Info;
		__this->___InitialLogLevel_14 = 4;
		// public bool AllowNetworkRequests = true;
		__this->___AllowNetworkRequests_15 = (bool)1;
		// public CustomUrlProperty CustomLogUrl = new CustomUrlProperty("Log");
		CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E* L_2 = (CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E*)il2cpp_codegen_object_new(CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CustomUrlProperty__ctor_m8EC5E9D4A202301F210CE6F79E4CA3B28725FCAC(L_2, _stringLiteralD2185E2B320102DBAC16E15976BE9935D7508BC0, NULL);
		__this->___CustomLogUrl_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CustomLogUrl_18), (void*)L_2);
		// public MaxStorageSizeProperty MaxStorageSize = new MaxStorageSizeProperty();
		MaxStorageSizeProperty_tFD96186C17180DD384577CBF433AB9CF0AE1B846* L_3 = (MaxStorageSizeProperty_tFD96186C17180DD384577CBF433AB9CF0AE1B846*)il2cpp_codegen_object_new(MaxStorageSizeProperty_tFD96186C17180DD384577CBF433AB9CF0AE1B846_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MaxStorageSizeProperty__ctor_mA8AFF46DC2FFCDB775681F8321A5FFE7FF7F81AB(L_3, NULL);
		__this->___MaxStorageSize_19 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MaxStorageSize_19), (void*)L_3);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void AppCenterSettings/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA68BEAE04799D21DF82D6D79D05B8AC357F22228 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6* L_0 = (U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6*)il2cpp_codegen_object_new(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mF894DA0D4B00E498DE531531B16CF5089319CB46(L_0, NULL);
		((U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void AppCenterSettings/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF894DA0D4B00E498DE531531B16CF5089319CB46 (U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean AppCenterSettings/<>c::<get_AppSecret>b__17_0(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_AppSecretU3Eb__17_0_mE4D0DDD7037CED3C3CD3B371763412E28C688819 (U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6* __this, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(i => !string.IsNullOrEmpty(i.Value))
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&___i0), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.String AppCenterSettings/<>c::<get_AppSecret>b__17_1(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3Cget_AppSecretU3Eb__17_1_mE33C4069483513013A957E2BDA5FD6C04AEC1348 (U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6* __this, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D9CB688EB52F6892891546051D7091018D5885A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(i => string.Format("{0}={1};", i.Key, i.Value))
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&___i0), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		String_t* L_1;
		L_1 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&___i0), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		String_t* L_2;
		L_2 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral8D9CB688EB52F6892891546051D7091018D5885A, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean AppCenterSettings/<>c::<get_Services>b__19_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_ServicesU3Eb__19_0_mB1634A6F4049D1E10D7E5AA607D554DCE17DA607 (U3CU3Ec_tB0E235B49E9D2665D2773C96A568406B92A974E6* __this, Type_t* ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return services.Where(i => i != null).ToArray();
		Type_t* L_0 = ___i0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_0, (Type_t*)NULL, NULL);
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
// Microsoft.AppCenter.Unity.StartupType AppCenterSettingsAdvanced::GetStartupType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppCenterSettingsAdvanced_GetStartupType_mF60F93CC13581F129554B1F353CA280DC03166A7 (AppCenterSettingsAdvanced_t3C77BB839D0D7E010225EB4724C0A8677608452D* __this, const RuntimeMethod* method) 
{
	{
		// return AppCenterStartupType == StartupType.Both && string.IsNullOrEmpty(TransmissionTargetToken) ?
		//     StartupType.AppCenter :
		//     AppCenterStartupType;
		int32_t L_0 = __this->___AppCenterStartupType_5;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = __this->___TransmissionTargetToken_4;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}

IL_0016:
	{
		int32_t L_3 = __this->___AppCenterStartupType_5;
		return L_3;
	}

IL_001d:
	{
		return (int32_t)(0);
	}
}
// System.Reflection.Assembly AppCenterSettingsAdvanced::get_AppCenterAssembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* AppCenterSettingsAdvanced_get_AppCenterAssembly_m63A81FBFAF9CF1A1AB55B19EAAADCCBDACE949ED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterSettingsAdvanced_t3C77BB839D0D7E010225EB4724C0A8677608452D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return typeof(AppCenterSettingsAdvanced).GetTypeInfo().Assembly;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (AppCenterSettingsAdvanced_t3C77BB839D0D7E010225EB4724C0A8677608452D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_2;
		L_2 = IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870(L_1, NULL);
		NullCheck(L_2);
		Assembly_t* L_3;
		L_3 = VirtualFuncInvoker0< Assembly_t* >::Invoke(27 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_2);
		return L_3;
	}
}
// System.Void AppCenterSettingsAdvanced::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterSettingsAdvanced__ctor_m626C767927960CA53C2F008F7013900266CC5887 (AppCenterSettingsAdvanced_t3C77BB839D0D7E010225EB4724C0A8677608452D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string TransmissionTargetToken = "";
		__this->___TransmissionTargetToken_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TransmissionTargetToken_4), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public StartupType AppCenterStartupType = StartupType.Both;
		__this->___AppCenterStartupType_5 = 2;
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.String AppSecretAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppSecretAttribute_get_Name_m755A56413CEC33D82CE6E1D570C280DA6DDC04A8 (AppSecretAttribute_tA27B00D919104E7C568F0EA592C8483FC3F73438* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void AppSecretAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppSecretAttribute_set_Name_mE6CED04CDBC65893FEBC0D993E011FB58C6EDEA3 (AppSecretAttribute_tA27B00D919104E7C568F0EA592C8483FC3F73438* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void AppSecretAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppSecretAttribute__ctor_mD41B1BF909B1F6C1D7ABB4DD2972F2F712C68BE2 (AppSecretAttribute_tA27B00D919104E7C568F0EA592C8483FC3F73438* __this, const RuntimeMethod* method) 
{
	{
		// public AppSecretAttribute()
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// }
		return;
	}
}
// System.Void AppSecretAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppSecretAttribute__ctor_m605E0E19C322362AA8185B1308FA9BBE036C9E52 (AppSecretAttribute_tA27B00D919104E7C568F0EA592C8483FC3F73438* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// public AppSecretAttribute(string name)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// Name = name;
		String_t* L_0 = ___name0;
		AppSecretAttribute_set_Name_mE6CED04CDBC65893FEBC0D993E011FB58C6EDEA3_inline(__this, L_0, NULL);
		// }
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
// System.Void CustomDropDownPropertyAttribute::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDropDownPropertyAttribute__ctor_m95BF171ED4795A4482B7FBF99D4DBE80CBB1DC58 (CustomDropDownPropertyAttribute_tBB81AB17FD57948F6CDE254CDF0CC56668AF2B15* __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		// public CustomDropDownPropertyAttribute(string key, int value)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// SelectedKey = key;
		String_t* L_0 = ___key0;
		CustomDropDownPropertyAttribute_set_SelectedKey_m132F21C982DEAA99E16E614EFD346750048C09B4_inline(__this, L_0, NULL);
		// SelectedValue = value;
		int32_t L_1 = ___value1;
		CustomDropDownPropertyAttribute_set_SelectedValue_mEA7F2C2604B307C7F7321833380356CF8D52D8DE_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void CustomDropDownPropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDropDownPropertyAttribute__ctor_mDB288406826BAC9C01D3FA72F79C01CF64026427 (CustomDropDownPropertyAttribute_tBB81AB17FD57948F6CDE254CDF0CC56668AF2B15* __this, const RuntimeMethod* method) 
{
	{
		// public CustomDropDownPropertyAttribute()
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// }
		return;
	}
}
// System.String CustomDropDownPropertyAttribute::get_SelectedKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CustomDropDownPropertyAttribute_get_SelectedKey_mBAB0E8B4BA5902E18672A55E19598BCCE3ED626E (CustomDropDownPropertyAttribute_tBB81AB17FD57948F6CDE254CDF0CC56668AF2B15* __this, const RuntimeMethod* method) 
{
	{
		// public string SelectedKey { get; private set; }
		String_t* L_0 = __this->___U3CSelectedKeyU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void CustomDropDownPropertyAttribute::set_SelectedKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDropDownPropertyAttribute_set_SelectedKey_m132F21C982DEAA99E16E614EFD346750048C09B4 (CustomDropDownPropertyAttribute_tBB81AB17FD57948F6CDE254CDF0CC56668AF2B15* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string SelectedKey { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CSelectedKeyU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSelectedKeyU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int32 CustomDropDownPropertyAttribute::get_SelectedValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CustomDropDownPropertyAttribute_get_SelectedValue_m2361F3E24432F4A0AFFD58FA802C975AC89C59F4 (CustomDropDownPropertyAttribute_tBB81AB17FD57948F6CDE254CDF0CC56668AF2B15* __this, const RuntimeMethod* method) 
{
	{
		// public int SelectedValue { get; private set; }
		int32_t L_0 = __this->___U3CSelectedValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void CustomDropDownPropertyAttribute::set_SelectedValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomDropDownPropertyAttribute_set_SelectedValue_mEA7F2C2604B307C7F7321833380356CF8D52D8DE (CustomDropDownPropertyAttribute_tBB81AB17FD57948F6CDE254CDF0CC56668AF2B15* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int SelectedValue { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CSelectedValueU3Ek__BackingField_1 = L_0;
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
// System.Void CustomUrlProperty::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUrlProperty__ctor_m8EC5E9D4A202301F210CE6F79E4CA3B28725FCAC (CustomUrlProperty_t3037A08405C34AA758B385A95A410E687380280E* __this, String_t* ___urlName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string UrlName = "";
		__this->___UrlName_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UrlName_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string Url = "";
		__this->___Url_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Url_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public CustomUrlProperty(string urlName)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// UrlName = urlName;
		String_t* L_0 = ___urlName0;
		__this->___UrlName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UrlName_0), (void*)L_0);
		// }
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
// System.Void MaxStorageSizeProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaxStorageSizeProperty__ctor_mA8AFF46DC2FFCDB775681F8321A5FFE7FF7F81AB (MaxStorageSizeProperty_tFD96186C17180DD384577CBF433AB9CF0AE1B846* __this, const RuntimeMethod* method) 
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
// System.Void Test::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_OnClick_m9F29AA33E481304915A61ACBF2D283A4EE952C56 (Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B56062D03299854F7DBA8B79B7FD27BACD9BAD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3310E40EB2DE619658A5FE8C5761980DD156B745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67ED1B76D5518E000407B5E4A120E61725C91968);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92454A15C89C9980DD827D48776A457805E649E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFF2771310A145A828512B133B8055C8D0344B67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t5F2D4E9D7ABD81B1DA754569B619BF9A6CC32A1A V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_t17B6B18A2CBCE422EE6E95D36DDF5D3423525B69 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Debug.Log("Alert");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral92454A15C89C9980DD827D48776A457805E649E0, NULL);
		// ToastContentBuilder content = new ToastContentBuilder();
		ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* L_0 = (ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773*)il2cpp_codegen_object_new(ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ToastContentBuilder__ctor_m2DBF58D4E1BA1B8F29E1494F93C6310F0794FC3D(L_0, NULL);
		// content.AddArgument("action", "viewConversation")
		//        .AddArgument("conversationId", 9813)
		//        .AddText("Andrew sent you a picture")
		//        .AddText("Check this out, The Enchantments in Washington!");
		NullCheck(L_0);
		ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* L_1;
		L_1 = ToastContentBuilder_AddArgument_mF73C1B492AD502B160704AB38A79C8FF5C27C118(L_0, _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267, _stringLiteral0B56062D03299854F7DBA8B79B7FD27BACD9BAD2, NULL);
		NullCheck(L_1);
		ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* L_2;
		L_2 = ToastContentBuilder_AddArgument_mB83D672723434B5D5B7FC2E1A6236EABEB048DD1(L_1, _stringLiteral3310E40EB2DE619658A5FE8C5761980DD156B745, ((int32_t)9813), NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t5F2D4E9D7ABD81B1DA754569B619BF9A6CC32A1A));
		Nullable_1_t5F2D4E9D7ABD81B1DA754569B619BF9A6CC32A1A L_3 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_4 = V_1;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_5 = V_2;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_6 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t17B6B18A2CBCE422EE6E95D36DDF5D3423525B69));
		Nullable_1_t17B6B18A2CBCE422EE6E95D36DDF5D3423525B69 L_7 = V_3;
		NullCheck(L_2);
		ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* L_8;
		L_8 = ToastContentBuilder_AddText_m419ADE9E4AC2C4886B69248E17AEB076A076E79A(L_2, _stringLiteral67ED1B76D5518E000407B5E4A120E61725C91968, L_3, L_4, L_5, L_6, L_7, (String_t*)NULL, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t5F2D4E9D7ABD81B1DA754569B619BF9A6CC32A1A));
		Nullable_1_t5F2D4E9D7ABD81B1DA754569B619BF9A6CC32A1A L_9 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_10 = V_1;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_11 = V_2;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_12 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t17B6B18A2CBCE422EE6E95D36DDF5D3423525B69));
		Nullable_1_t17B6B18A2CBCE422EE6E95D36DDF5D3423525B69 L_13 = V_3;
		NullCheck(L_8);
		ToastContentBuilder_t5F513F07B48147CE157009394F3FC56988F17773* L_14;
		L_14 = ToastContentBuilder_AddText_m419ADE9E4AC2C4886B69248E17AEB076A076E79A(L_8, _stringLiteralEFF2771310A145A828512B133B8055C8D0344B67, L_9, L_10, L_11, L_12, L_13, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Test::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test__ctor_mB84DF4A3888723C395E76E3879FDFB8AA1EFEDCB (Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Microsoft.AppCenter.Unity.LogLevel Microsoft.AppCenter.Unity.AppCenter::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppCenter_get_LogLevel_m1076AD93EE0566927E5720887298102E248119E0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return (LogLevel)AppCenterInternal.GetLogLevel(); }
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = AppCenterInternal_GetLogLevel_m9D2209624F41E8D7DA7441583D28D87BA40855A1(NULL);
		return (int32_t)(L_0);
	}
}
// System.Void Microsoft.AppCenter.Unity.AppCenter::set_LogLevel(Microsoft.AppCenter.Unity.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_set_LogLevel_mE8E84377D5D92725FC244EC73751B3719C308ACE (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { AppCenterInternal.SetLogLevel((int)value); }
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_SetLogLevel_m368844DC03755627D4CCAAB58A72DB7D809B69CD(L_0, NULL);
		// set { AppCenterInternal.SetLogLevel((int)value); }
		return;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask Microsoft.AppCenter.Unity.AppCenter::SetEnabledAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* AppCenter_SetEnabledAsync_m73FD74AC44A5A859D5C9BFC0C5AB76E757257955 (bool ___enabled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AppCenterInternal.SetEnabledAsync(enabled);
		bool L_0 = ___enabled0;
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* L_1;
		L_1 = AppCenterInternal_SetEnabledAsync_mA37C37429A758F5412BA3E8811D540697ABC8A89(L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.AppCenter.Unity.AppCenter::StartFromLibrary(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_StartFromLibrary_mA6C44D32AD70D5BFF77F5A5EBF0959A9E30CF052 (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___servicesArray0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AppCenterInternal.StartFromLibrary(AppCenterInternal.ServicesToNativeTypes(servicesArray));
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = ___servicesArray0;
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1;
		L_1 = AppCenterInternal_ServicesToNativeTypes_m322BAE569A0BA5B663CC8BD32DEDFE4BBBF51035(L_0, NULL);
		AppCenterInternal_StartFromLibrary_m261F19418F4FDC01986128280FF6FE2BAD21E59C(L_1, NULL);
		// }
		return;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.AppCenter::IsEnabledAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* AppCenter_IsEnabledAsync_m3AAB924249F724FEF0EABA3359FD634D4293F6AE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AppCenterInternal.IsEnabledAsync();
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* L_0;
		L_0 = AppCenterInternal_IsEnabledAsync_m820C6BA7B6BFE481F01295A514186C4B1D071495(NULL);
		return L_0;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Nullable`1<System.Guid>> Microsoft.AppCenter.Unity.AppCenter::GetInstallIdAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t607F63C41BAB43BC4941DD60780C582E59050A07* AppCenter_GetInstallIdAsync_m4E7EB8114712BCDF5A91F57CB0A1590B47BC10B7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t22FBED9363A7A4047B1A9C292A172186B28A0B3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_ContinueWith_mF2E0761A5B505A6782DC315B4C74EA7EAF1BD977_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1__ctor_m0E19D19E40737B5E9363CD68F6321579AF2A22C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_t607F63C41BAB43BC4941DD60780C582E59050A07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CGetInstallIdAsyncU3Eb__0_mBCD4BBC1DD769E047C3FF8C697A56E213AF2E41C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t307C4B9794205410B456848306C318671EC906D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t307C4B9794205410B456848306C318671EC906D9* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_t307C4B9794205410B456848306C318671EC906D9* L_0 = (U3CU3Ec__DisplayClass9_0_t307C4B9794205410B456848306C318671EC906D9*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t307C4B9794205410B456848306C318671EC906D9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass9_0__ctor_m4EDF80AAA4B02C51CF005AC7E436761BE962D087(L_0, NULL);
		V_0 = L_0;
		// var stringTask = AppCenterInternal.GetInstallIdAsync();
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* L_1;
		L_1 = AppCenterInternal_GetInstallIdAsync_mBCB89D9A14A658ADAC763EC395DECA6F2536F235(NULL);
		// var guidTask = new AppCenterTask<Guid?>();
		U3CU3Ec__DisplayClass9_0_t307C4B9794205410B456848306C318671EC906D9* L_2 = V_0;
		AppCenterTask_1_t607F63C41BAB43BC4941DD60780C582E59050A07* L_3 = (AppCenterTask_1_t607F63C41BAB43BC4941DD60780C582E59050A07*)il2cpp_codegen_object_new(AppCenterTask_1_t607F63C41BAB43BC4941DD60780C582E59050A07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AppCenterTask_1__ctor_m0E19D19E40737B5E9363CD68F6321579AF2A22C8(L_3, AppCenterTask_1__ctor_m0E19D19E40737B5E9363CD68F6321579AF2A22C8_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___guidTask_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___guidTask_0), (void*)L_3);
		// stringTask.ContinueWith(t =>
		// {
		//     var installId = !string.IsNullOrEmpty(t.Result) ? new Guid(t.Result) : (Guid?)null;
		//     guidTask.SetResult(installId);
		// });
		U3CU3Ec__DisplayClass9_0_t307C4B9794205410B456848306C318671EC906D9* L_4 = V_0;
		Action_1_t22FBED9363A7A4047B1A9C292A172186B28A0B3C* L_5 = (Action_1_t22FBED9363A7A4047B1A9C292A172186B28A0B3C*)il2cpp_codegen_object_new(Action_1_t22FBED9363A7A4047B1A9C292A172186B28A0B3C_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_mCD5227B5AC901BB0B395B79D6B2B0F84546C5C16(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CGetInstallIdAsyncU3Eb__0_mBCD4BBC1DD769E047C3FF8C697A56E213AF2E41C_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AppCenterTask_1_ContinueWith_mF2E0761A5B505A6782DC315B4C74EA7EAF1BD977(L_1, L_5, AppCenterTask_1_ContinueWith_mF2E0761A5B505A6782DC315B4C74EA7EAF1BD977_RuntimeMethod_var);
		// return guidTask;
		U3CU3Ec__DisplayClass9_0_t307C4B9794205410B456848306C318671EC906D9* L_6 = V_0;
		NullCheck(L_6);
		AppCenterTask_1_t607F63C41BAB43BC4941DD60780C582E59050A07* L_7 = L_6->___guidTask_0;
		return L_7;
	}
}
// System.String Microsoft.AppCenter.Unity.AppCenter::GetSdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppCenter_GetSdkVersion_mA085321D8DCFD6941D08445CCC1EC4EB5DCE3490 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AppCenterInternal.GetSdkVersion();
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = AppCenterInternal_GetSdkVersion_m9778FF04F5F13F49D1A5707EA44A1BE44A520E9B(NULL);
		return L_0;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.String> Microsoft.AppCenter.Unity.AppCenter::GetLogUrlAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* AppCenter_GetLogUrlAsync_m59900CD4F5A73A26444AF6B3B84BC9C892D3DA72 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1__ctor_m2DE912DF90D32913EC3C63702DDF7FEB2A959A61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_logUrlTask == null)
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* L_0 = ((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____logUrlTask_1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// _logUrlTask = new AppCenterTask<string>();
		AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* L_1 = (AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94*)il2cpp_codegen_object_new(AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AppCenterTask_1__ctor_m2DE912DF90D32913EC3C63702DDF7FEB2A959A61(L_1, AppCenterTask_1__ctor_m2DE912DF90D32913EC3C63702DDF7FEB2A959A61_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____logUrlTask_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____logUrlTask_1), (void*)L_1);
	}

IL_0011:
	{
		// return _logUrlTask;
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* L_2 = ((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____logUrlTask_1;
		return L_2;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Int64> Microsoft.AppCenter.Unity.AppCenter::GetStorageSizeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F* AppCenter_GetStorageSizeAsync_m6A3A0223BCF797047B34FAD8C4A95700E5C73515 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1__ctor_m927A935214D6DFDB79C849B954C668BEF3334868_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_storageSizeTask == null)
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F* L_0 = ((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____storageSizeTask_2;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// _storageSizeTask = new AppCenterTask<long>();
		AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F* L_1 = (AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F*)il2cpp_codegen_object_new(AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AppCenterTask_1__ctor_m927A935214D6DFDB79C849B954C668BEF3334868(L_1, AppCenterTask_1__ctor_m927A935214D6DFDB79C849B954C668BEF3334868_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____storageSizeTask_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____storageSizeTask_2), (void*)L_1);
	}

IL_0011:
	{
		// return _storageSizeTask;
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F* L_2 = ((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____storageSizeTask_2;
		return L_2;
	}
}
// System.Void Microsoft.AppCenter.Unity.AppCenter::SetLogUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_SetLogUrl_m03EB92A786E3845811A10AB7753FD7C6DBA3916B (String_t* ___logUrl0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AppCenterInternal.SetLogUrl(logUrl);
		String_t* L_0 = ___logUrl0;
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_SetLogUrl_m133A42674D7169FD311063D38FA9620D80F23675(L_0, NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.AppCenter.Unity.AppCenter::get_NetworkRequestsAllowed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppCenter_get_NetworkRequestsAllowed_m795285DA0728424E8C896EDD39C7071B51540620 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AppCenterInternal.IsNetworkRequestsAllowed();
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AppCenterInternal_IsNetworkRequestsAllowed_m4E973E5918287EB118A78CA8104C5A58AF89D1D5(NULL);
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.AppCenter::set_NetworkRequestsAllowed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_set_NetworkRequestsAllowed_mA4F3280DC8D8AC3310DEF71A4EB882151FF4300F (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AppCenterInternal.SetNetworkRequestsAllowed(value);
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_SetNetworkRequestsAllowed_m1B5B69367C8C37341654A807BFBEEAD310A2F556(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.AppCenter::CacheStorageSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_CacheStorageSize_mE5AE33878628CDA78E19B11B49D191BE2660CE1F (int64_t ___storageSize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_SetResult_m3E3609EB4BB3170A7200F0E1DF34B7F47619473B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_storageSizeTask != null)
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F* L_0 = ((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____storageSizeTask_2;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// _storageSizeTask.SetResult(storageSize);
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F* L_1 = ((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____storageSizeTask_2;
		int64_t L_2 = ___storageSize0;
		NullCheck(L_1);
		AppCenterTask_1_SetResult_m3E3609EB4BB3170A7200F0E1DF34B7F47619473B(L_1, L_2, AppCenterTask_1_SetResult_m3E3609EB4BB3170A7200F0E1DF34B7F47619473B_RuntimeMethod_var);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.AppCenter::CacheLogUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_CacheLogUrl_m62D5F9202B5D83555B91ABB2456836D3BC1C8976 (String_t* ___logUrl0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_SetResult_mDCC3C8BB562D7857B003F5C88956D7C3C41FDCF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_logUrlTask != null)
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* L_0 = ((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____logUrlTask_1;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// _logUrlTask.SetResult(logUrl);
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* L_1 = ((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____logUrlTask_1;
		String_t* L_2 = ___logUrl0;
		NullCheck(L_1);
		AppCenterTask_1_SetResult_mDCC3C8BB562D7857B003F5C88956D7C3C41FDCF7(L_1, L_2, AppCenterTask_1_SetResult_mDCC3C8BB562D7857B003F5C88956D7C3C41FDCF7_RuntimeMethod_var);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.AppCenter.Unity.AppCenter::get_Configured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppCenter_get_Configured_m63F8503A2CB6E3CAA5283D20DF30A45B52C51829 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return AppCenterInternal.IsConfigured(); }
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AppCenterInternal_IsConfigured_m95E29F75B7CC13B32125402EB1F452E6E476BE7E(NULL);
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.AppCenter::SetWrapperSdk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_SetWrapperSdk_mC1FEF221ED9E17BFAF3D9E0087BEDF36F1185F44 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A97B4E158E9A7A0D9B4D90D9B6105A680F12788);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C05BB4EEA109136D3437B18A775C920D9DB0853);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AppCenterInternal.SetWrapperSdk(WrapperSdk.WrapperSdkVersion, WrapperSdk.Name, WrapperSdk.WrapperRuntimeVersion, null, null, null);
		String_t* L_0;
		L_0 = WrapperSdk_get_WrapperRuntimeVersion_mC75E5B85579E39A97811546DB9287438FC32265D(NULL);
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_SetWrapperSdk_mDE3A46D242FD823664A2FBEC6D1F9198ACC642B7(_stringLiteral5C05BB4EEA109136D3437B18A775C920D9DB0853, _stringLiteral0A97B4E158E9A7A0D9B4D90D9B6105A680F12788, L_0, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.String> Microsoft.AppCenter.Unity.AppCenter::GetSecretForPlatformAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* AppCenter_GetSecretForPlatformAsync_m69DD011DAFACB6EFE0DC4459CB747364C90457F1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1__ctor_m2DE912DF90D32913EC3C63702DDF7FEB2A959A61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_secretTask == null)
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* L_0 = ((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____secretTask_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// _secretTask = new AppCenterTask<string>();
		AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* L_1 = (AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94*)il2cpp_codegen_object_new(AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AppCenterTask_1__ctor_m2DE912DF90D32913EC3C63702DDF7FEB2A959A61(L_1, AppCenterTask_1__ctor_m2DE912DF90D32913EC3C63702DDF7FEB2A959A61_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____secretTask_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____secretTask_0), (void*)L_1);
	}

IL_0011:
	{
		// return _secretTask;
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* L_2 = ((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____secretTask_0;
		return L_2;
	}
}
// System.String Microsoft.AppCenter.Unity.AppCenter::ParseAndSaveSecretForPlatform(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppCenter_ParseAndSaveSecretForPlatform_mB52EAD020A4205F2CF76B5F316E0BDA28080D235 (String_t* ___secrets0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_SetResult_mDCC3C8BB562D7857B003F5C88956D7C3C41FDCF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	Il2CppChar V_4 = 0x0;
	{
		// var platformIdentifier = GetPlatformIdentifier();
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = AppCenter_GetPlatformIdentifier_m5B9CECC543B96F58D8F2ECEE4B9D6CE8D3C753FE(NULL);
		V_0 = L_0;
		// if (platformIdentifier == null)
		String_t* L_1 = V_0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return secrets;
		String_t* L_2 = ___secrets0;
		return L_2;
	}

IL_000b:
	{
		// if (secrets == null)
		String_t* L_3 = ___secrets0;
		if (L_3)
		{
			goto IL_0010;
		}
	}
	{
		// return secrets;
		String_t* L_4 = ___secrets0;
		return L_4;
	}

IL_0010:
	{
		// if (!secrets.Contains("="))
		String_t* L_5 = ___secrets0;
		NullCheck(L_5);
		bool L_6;
		L_6 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_5, _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E, NULL);
		if (L_6)
		{
			goto IL_001f;
		}
	}
	{
		// return secrets;
		String_t* L_7 = ___secrets0;
		return L_7;
	}

IL_001f:
	{
		// var platformIndicator = platformIdentifier + "=";
		String_t* L_8 = V_0;
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_8, _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E, NULL);
		V_1 = L_9;
		// var secretIdx = secrets.IndexOf(platformIndicator, StringComparison.Ordinal);
		String_t* L_10 = ___secrets0;
		String_t* L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = String_IndexOf_m490810CB7ADA9230AC0F8D78E213A8EFED129F55(L_10, L_11, 4, NULL);
		V_2 = L_12;
		// if (secretIdx == -1)
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_003a;
		}
	}
	{
		// return secrets;
		String_t* L_14 = ___secrets0;
		return L_14;
	}

IL_003a:
	{
		// secretIdx += platformIndicator.Length;
		int32_t L_15 = V_2;
		String_t* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, L_17));
		// var platformSecret = string.Empty;
		String_t* L_18 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_3 = L_18;
		goto IL_006c;
	}

IL_004b:
	{
		// var nextChar = secrets[secretIdx++];
		String_t* L_19 = ___secrets0;
		int32_t L_20 = V_2;
		int32_t L_21 = L_20;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		NullCheck(L_19);
		Il2CppChar L_22;
		L_22 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_19, L_21, NULL);
		V_4 = L_22;
		// if (nextChar == ';')
		Il2CppChar L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)59))))
		{
			goto IL_0075;
		}
	}
	{
		// platformSecret += nextChar;
		String_t* L_24 = V_3;
		String_t* L_25;
		L_25 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_4), NULL);
		String_t* L_26;
		L_26 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_24, L_25, NULL);
		V_3 = L_26;
	}

IL_006c:
	{
		// while (secretIdx < secrets.Length)
		int32_t L_27 = V_2;
		String_t* L_28 = ___secrets0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_28, NULL);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_004b;
		}
	}

IL_0075:
	{
		// if (_secretTask != null)
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* L_30 = ((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____secretTask_0;
		if (!L_30)
		{
			goto IL_0087;
		}
	}
	{
		// _secretTask.SetResult(platformSecret);
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* L_31 = ((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____secretTask_0;
		String_t* L_32 = V_3;
		NullCheck(L_31);
		AppCenterTask_1_SetResult_mDCC3C8BB562D7857B003F5C88956D7C3C41FDCF7(L_31, L_32, AppCenterTask_1_SetResult_mDCC3C8BB562D7857B003F5C88956D7C3C41FDCF7_RuntimeMethod_var);
	}

IL_0087:
	{
		// return platformSecret;
		String_t* L_33 = V_3;
		return L_33;
	}
}
// System.Void Microsoft.AppCenter.Unity.AppCenter::SetUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter_SetUserId_m026CE3F24D1B5B6C3EF44B737A732E0F80C5339F (String_t* ___userId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AppCenterInternal.SetUserId(userId);
		String_t* L_0 = ___userId0;
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_SetUserId_m40CD0D4A2D63F35DC56156C3DB50EAB1C044C635(L_0, NULL);
		// }
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.AppCenter::GetPlatformIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppCenter_GetPlatformIdentifier_m5B9CECC543B96F58D8F2ECEE4B9D6CE8D3C753FE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BCD6469CBFAD87F852FA17274E38C0FF810B8F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "uwp";
		return _stringLiteral2BCD6469CBFAD87F852FA17274E38C0FF810B8F1;
	}
}
// System.Type Microsoft.AppCenter.Unity.AppCenter::get_Analytics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AppCenter_get_Analytics_m2283A291222598C7AACF89FF834719F721CF3744 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE5FDA99FD0DA652091B477D5413646FF68054DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return AppCenterAssembly.GetType("Microsoft.AppCenter.Unity.Analytics.Analytics"); }
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		Assembly_t* L_0;
		L_0 = AppCenter_get_AppCenterAssembly_mEE7E23C47C5A754628FA5DD215BCE13D90BC15EA(NULL);
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(22 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_0, _stringLiteralCE5FDA99FD0DA652091B477D5413646FF68054DE);
		return L_1;
	}
}
// System.Type Microsoft.AppCenter.Unity.AppCenter::get_Crashes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AppCenter_get_Crashes_m51C5FA0ACAC68BB663005F50487C94211380E565 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CD71117A245265BF318F4E9FBBD3D0D9C8B53FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return AppCenterAssembly.GetType("Microsoft.AppCenter.Unity.Crashes.Crashes"); }
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		Assembly_t* L_0;
		L_0 = AppCenter_get_AppCenterAssembly_mEE7E23C47C5A754628FA5DD215BCE13D90BC15EA(NULL);
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(22 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_0, _stringLiteral9CD71117A245265BF318F4E9FBBD3D0D9C8B53FF);
		return L_1;
	}
}
// System.Type Microsoft.AppCenter.Unity.AppCenter::get_Distribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AppCenter_get_Distribute_mF8ECC42DC2EA6C69FCEFB0E7C18C7AC71A1B9AA9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E1D4E6BAF275B76FE3C8E35B29BA62E98FD82A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return AppCenterAssembly.GetType("Microsoft.AppCenter.Unity.Distribute.Distribute"); }
		il2cpp_codegen_runtime_class_init_inline(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		Assembly_t* L_0;
		L_0 = AppCenter_get_AppCenterAssembly_mEE7E23C47C5A754628FA5DD215BCE13D90BC15EA(NULL);
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(22 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_0, _stringLiteral0E1D4E6BAF275B76FE3C8E35B29BA62E98FD82A1);
		return L_1;
	}
}
// System.Reflection.Assembly Microsoft.AppCenter.Unity.AppCenter::get_AppCenterAssembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* AppCenter_get_AppCenterAssembly_mEE7E23C47C5A754628FA5DD215BCE13D90BC15EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return typeof(AppCenterSettings).GetTypeInfo().Assembly;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (AppCenterSettings_tB10A368980EAE7DB26F303125D7ABE5C6D1A72D0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_2;
		L_2 = IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870(L_1, NULL);
		NullCheck(L_2);
		Assembly_t* L_3;
		L_3 = VirtualFuncInvoker0< Assembly_t* >::Invoke(27 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_2);
		return L_3;
	}
}
// System.Void Microsoft.AppCenter.Unity.AppCenter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter__ctor_m8C3C210A25582AAC9C9F78758D62B30E911C4FDD (AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.AppCenter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenter__cctor_mF0C94B44978D8E2CD708E11BE0AC2A9337857C41 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1__ctor_m2DE912DF90D32913EC3C63702DDF7FEB2A959A61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1__ctor_m927A935214D6DFDB79C849B954C668BEF3334868_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static AppCenterTask<string> _secretTask = new AppCenterTask<string>();
		AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* L_0 = (AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94*)il2cpp_codegen_object_new(AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AppCenterTask_1__ctor_m2DE912DF90D32913EC3C63702DDF7FEB2A959A61(L_0, AppCenterTask_1__ctor_m2DE912DF90D32913EC3C63702DDF7FEB2A959A61_RuntimeMethod_var);
		((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____secretTask_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____secretTask_0), (void*)L_0);
		// private static AppCenterTask<string> _logUrlTask = new AppCenterTask<string>();
		AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* L_1 = (AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94*)il2cpp_codegen_object_new(AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AppCenterTask_1__ctor_m2DE912DF90D32913EC3C63702DDF7FEB2A959A61(L_1, AppCenterTask_1__ctor_m2DE912DF90D32913EC3C63702DDF7FEB2A959A61_RuntimeMethod_var);
		((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____logUrlTask_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____logUrlTask_1), (void*)L_1);
		// private static AppCenterTask<long> _storageSizeTask = new AppCenterTask<long>();
		AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F* L_2 = (AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F*)il2cpp_codegen_object_new(AppCenterTask_1_tF1F59498EE826511FE42AD5DA4860C0C2C66733F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AppCenterTask_1__ctor_m927A935214D6DFDB79C849B954C668BEF3334868(L_2, AppCenterTask_1__ctor_m927A935214D6DFDB79C849B954C668BEF3334868_RuntimeMethod_var);
		((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____storageSizeTask_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_StaticFields*)il2cpp_codegen_static_fields_for(AppCenter_tCD9EB9CCEB8C9EF37AD1730CFE6D7BAFB54A4EF9_il2cpp_TypeInfo_var))->____storageSizeTask_2), (void*)L_2);
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
void SetMaxStorageSizeCompletionHandler_Invoke_m05F33A93D920F1308935FD6BF33B45190A8467DC_Multicast(SetMaxStorageSizeCompletionHandler_t7C2D2C9543FEAF55C31123A331F4388E97DE1F36* __this, bool ___result0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SetMaxStorageSizeCompletionHandler_t7C2D2C9543FEAF55C31123A331F4388E97DE1F36* currentDelegate = reinterpret_cast<SetMaxStorageSizeCompletionHandler_t7C2D2C9543FEAF55C31123A331F4388E97DE1F36*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___result0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SetMaxStorageSizeCompletionHandler_Invoke_m05F33A93D920F1308935FD6BF33B45190A8467DC_Open(SetMaxStorageSizeCompletionHandler_t7C2D2C9543FEAF55C31123A331F4388E97DE1F36* __this, bool ___result0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___result0, method);
}
void SetMaxStorageSizeCompletionHandler_Invoke_m05F33A93D920F1308935FD6BF33B45190A8467DC_OpenStaticInvoker(SetMaxStorageSizeCompletionHandler_t7C2D2C9543FEAF55C31123A331F4388E97DE1F36* __this, bool ___result0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< bool >::Invoke(__this->___method_ptr_0, method, NULL, ___result0);
}
void SetMaxStorageSizeCompletionHandler_Invoke_m05F33A93D920F1308935FD6BF33B45190A8467DC_ClosedStaticInvoker(SetMaxStorageSizeCompletionHandler_t7C2D2C9543FEAF55C31123A331F4388E97DE1F36* __this, bool ___result0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___result0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SetMaxStorageSizeCompletionHandler_t7C2D2C9543FEAF55C31123A331F4388E97DE1F36 (SetMaxStorageSizeCompletionHandler_t7C2D2C9543FEAF55C31123A331F4388E97DE1F36* __this, bool ___result0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___result0));

}
// System.Void Microsoft.AppCenter.Unity.AppCenter/SetMaxStorageSizeCompletionHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetMaxStorageSizeCompletionHandler__ctor_mDDB44ACE15C06D2829F9F8CE2ED9957F92718B96 (SetMaxStorageSizeCompletionHandler_t7C2D2C9543FEAF55C31123A331F4388E97DE1F36* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SetMaxStorageSizeCompletionHandler_Invoke_m05F33A93D920F1308935FD6BF33B45190A8467DC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SetMaxStorageSizeCompletionHandler_Invoke_m05F33A93D920F1308935FD6BF33B45190A8467DC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SetMaxStorageSizeCompletionHandler_Invoke_m05F33A93D920F1308935FD6BF33B45190A8467DC_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SetMaxStorageSizeCompletionHandler_Invoke_m05F33A93D920F1308935FD6BF33B45190A8467DC_Multicast;
}
// System.Void Microsoft.AppCenter.Unity.AppCenter/SetMaxStorageSizeCompletionHandler::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetMaxStorageSizeCompletionHandler_Invoke_m05F33A93D920F1308935FD6BF33B45190A8467DC (SetMaxStorageSizeCompletionHandler_t7C2D2C9543FEAF55C31123A331F4388E97DE1F36* __this, bool ___result0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___result0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Microsoft.AppCenter.Unity.AppCenter/SetMaxStorageSizeCompletionHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetMaxStorageSizeCompletionHandler_BeginInvoke_m4AB49259C9B7DC240983C34D62810D4EAFE4AFD1 (SetMaxStorageSizeCompletionHandler_t7C2D2C9543FEAF55C31123A331F4388E97DE1F36* __this, bool ___result0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Microsoft.AppCenter.Unity.AppCenter/SetMaxStorageSizeCompletionHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetMaxStorageSizeCompletionHandler_EndInvoke_m1937B5CB76356D927CAD6E38E5A6F1F183DB8B5E (SetMaxStorageSizeCompletionHandler_t7C2D2C9543FEAF55C31123A331F4388E97DE1F36* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.AppCenter.Unity.AppCenter/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m4EDF80AAA4B02C51CF005AC7E436761BE962D087 (U3CU3Ec__DisplayClass9_0_t307C4B9794205410B456848306C318671EC906D9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.AppCenter/<>c__DisplayClass9_0::<GetInstallIdAsync>b__0(Microsoft.AppCenter.Unity.AppCenterTask`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CGetInstallIdAsyncU3Eb__0_mBCD4BBC1DD769E047C3FF8C697A56E213AF2E41C (U3CU3Ec__DisplayClass9_0_t307C4B9794205410B456848306C318671EC906D9* __this, AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_SetResult_mE7004CD9C33E553C310DB1C116E237E6230CC1F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_get_Result_mF34BE561D065C102FB30222D3BEFBC354E33E66A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mD2155EEC4DF44AF1AD75AEB77DA72D350854D0F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// var installId = !string.IsNullOrEmpty(t.Result) ? new Guid(t.Result) : (Guid?)null;
		AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* L_0 = ___t0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = AppCenterTask_1_get_Result_mF34BE561D065C102FB30222D3BEFBC354E33E66A(L_0, AppCenterTask_1_get_Result_mF34BE561D065C102FB30222D3BEFBC354E33E66A_RuntimeMethod_var);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7));
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_3 = V_1;
		G_B3_0 = L_3;
		goto IL_0028;
	}

IL_0018:
	{
		AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* L_4 = ___t0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = AppCenterTask_1_get_Result_mF34BE561D065C102FB30222D3BEFBC354E33E66A(L_4, AppCenterTask_1_get_Result_mF34BE561D065C102FB30222D3BEFBC354E33E66A_RuntimeMethod_var);
		Guid_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830((&L_6), L_5, /*hidden argument*/NULL);
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Nullable_1__ctor_mD2155EEC4DF44AF1AD75AEB77DA72D350854D0F2((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_mD2155EEC4DF44AF1AD75AEB77DA72D350854D0F2_RuntimeMethod_var);
		G_B3_0 = L_7;
	}

IL_0028:
	{
		V_0 = G_B3_0;
		// guidTask.SetResult(installId);
		AppCenterTask_1_t607F63C41BAB43BC4941DD60780C582E59050A07* L_8 = __this->___guidTask_0;
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_9 = V_0;
		NullCheck(L_8);
		AppCenterTask_1_SetResult_mE7004CD9C33E553C310DB1C116E237E6230CC1F7(L_8, L_9, AppCenterTask_1_SetResult_mE7004CD9C33E553C310DB1C116E237E6230CC1F7_RuntimeMethod_var);
		// });
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
// System.Boolean Microsoft.AppCenter.Unity.AppCenterTask::get_IsComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppCenterTask_get_IsComplete_m4D9202D5B58660A24952515B6AA38FEA0E786656 (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsComplete { get; private set; }
		bool L_0 = __this->___U3CIsCompleteU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.AppCenterTask::set_IsComplete(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterTask_set_IsComplete_m122C9F8AB583A5C44D16BCBAA8A20E5659749E65 (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsComplete { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsCompleteU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.AppCenterTask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterTask__ctor_mF38E2D0B73442B5E11B6FE85A9A1CD99D0C0A691 (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFBDB4A17BCF131E67BBA80B546CC944D4FFFB3A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<Action<AppCenterTask>> _continuationActions = new List<Action<AppCenterTask>>();
		List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099* L_0 = (List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099*)il2cpp_codegen_object_new(List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mFBDB4A17BCF131E67BBA80B546CC944D4FFFB3A6(L_0, List_1__ctor_mFBDB4A17BCF131E67BBA80B546CC944D4FFFB3A6_RuntimeMethod_var);
		__this->____continuationActions_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationActions_0), (void*)L_0);
		// protected readonly object _lockObject = new object();
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		__this->____lockObject_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lockObject_1), (void*)L_1);
		// public AppCenterTask()
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.AppCenterTask::ContinueWith(System.Action`1<Microsoft.AppCenter.Unity.AppCenterTask>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterTask_ContinueWith_mD071F1510A3239937D372EA9B79639F86DF407F1 (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* __this, Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9* ___continuationAction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9A280BF1FC5498FEC38CF4D3A9D0069191B6C278_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (_lockObject)
		RuntimeObject* L_0 = __this->____lockObject_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002e;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_002e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// _continuationActions.Add(continuationAction);
			List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099* L_4 = __this->____continuationActions_0;
			Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9* L_5 = ___continuationAction0;
			NullCheck(L_4);
			List_1_Add_m9A280BF1FC5498FEC38CF4D3A9D0069191B6C278_inline(L_4, L_5, List_1_Add_m9A280BF1FC5498FEC38CF4D3A9D0069191B6C278_RuntimeMethod_var);
			// InvokeContinuationActions();
			AppCenterTask_InvokeContinuationActions_mE63953CE7ED5A9A21133EE7C63A247AEA374FAE1(__this, NULL);
			// }
			goto IL_002f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.AppCenterTask::CompletionAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterTask_CompletionAction_m88681C426A93AA161479AD5D9DE6917EA6D0CFEA (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (_lockObject)
		RuntimeObject* L_0 = __this->____lockObject_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0020:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0029;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0029:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// IsComplete = true;
			AppCenterTask_set_IsComplete_m122C9F8AB583A5C44D16BCBAA8A20E5659749E65_inline(__this, (bool)1, NULL);
			// InvokeContinuationActions();
			AppCenterTask_InvokeContinuationActions_mE63953CE7ED5A9A21133EE7C63A247AEA374FAE1(__this, NULL);
			// }
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.AppCenterTask::ThrowIfCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterTask_ThrowIfCompleted_m6DBBCF1CA10870989F8BB39CD249602A973C2BD8 (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (_lockObject)
		RuntimeObject* L_0 = __this->____lockObject_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002f;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_002f:
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
				// if (IsComplete)
				bool L_4;
				L_4 = AppCenterTask_get_IsComplete_m4D9202D5B58660A24952515B6AA38FEA0E786656_inline(__this, NULL);
				if (!L_4)
				{
					goto IL_0024_1;
				}
			}
			{
				// throw new InvalidOperationException("The task has already completed");
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				NullCheck(L_5);
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral52357DD8902986C44A08FF6FDBBD46CA5CEA0331)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppCenterTask_ThrowIfCompleted_m6DBBCF1CA10870989F8BB39CD249602A973C2BD8_RuntimeMethod_var)));
			}

IL_0024_1:
			{
				// }
				goto IL_0030;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0030:
	{
		// }
		return;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask Microsoft.AppCenter.Unity.AppCenterTask::FromCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* AppCenterTask_FromCompleted_m1F770CCFC33031B8D66BFE11AC2BE8D750C124F3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var task = new AppCenterTask();
		AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* L_0 = (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A*)il2cpp_codegen_object_new(AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AppCenterTask__ctor_mF38E2D0B73442B5E11B6FE85A9A1CD99D0C0A691(L_0, NULL);
		// task.CompletionAction();
		AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* L_1 = L_0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(9 /* System.Void Microsoft.AppCenter.Unity.AppCenterTask::CompletionAction() */, L_1);
		// return task;
		return L_1;
	}
}
// System.Void Microsoft.AppCenter.Unity.AppCenterTask::InvokeContinuationActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterTask_InvokeContinuationActions_mE63953CE7ED5A9A21133EE7C63A247AEA374FAE1 (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m75D841D3D6C1099DC7CEA2728300005614603CA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m08528CAB78BA01626958C79ED1EB6247C3D6D8D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m17C9E6391509BD97E223AA75D7DF361525F84D5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9A280BF1FC5498FEC38CF4D3A9D0069191B6C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7EB6D122B376D641464D9C7455DBD6EE27350F08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m545481921B687960D51772877ACC772E96EF1C41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFBDB4A17BCF131E67BBA80B546CC944D4FFFB3A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	Enumerator_t67E125105D3F8ECD4E90BC8D26D7F3BD19BEB99E V_3;
	memset((&V_3), 0, sizeof(V_3));
	Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9* V_4 = NULL;
	{
		// var continuationActionsSnapshot = new List<Action<AppCenterTask>>();
		List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099* L_0 = (List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099*)il2cpp_codegen_object_new(List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mFBDB4A17BCF131E67BBA80B546CC944D4FFFB3A6(L_0, List_1__ctor_mFBDB4A17BCF131E67BBA80B546CC944D4FFFB3A6_RuntimeMethod_var);
		V_0 = L_0;
		// lock (_lockObject)
		RuntimeObject* L_1 = __this->____lockObject_1;
		V_1 = L_1;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006d:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0076;
					}
				}
				{
					RuntimeObject* L_3 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				}

IL_0076:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_4, (&V_2), NULL);
				// if (!IsComplete)
				bool L_5;
				L_5 = AppCenterTask_get_IsComplete_m4D9202D5B58660A24952515B6AA38FEA0E786656_inline(__this, NULL);
				if (L_5)
				{
					goto IL_0024_1;
				}
			}
			{
				// return;
				goto IL_00a6;
			}

IL_0024_1:
			{
				// foreach (var action in _continuationActions)
				List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099* L_6 = __this->____continuationActions_0;
				NullCheck(L_6);
				Enumerator_t67E125105D3F8ECD4E90BC8D26D7F3BD19BEB99E L_7;
				L_7 = List_1_GetEnumerator_m545481921B687960D51772877ACC772E96EF1C41(L_6, List_1_GetEnumerator_m545481921B687960D51772877ACC772E96EF1C41_RuntimeMethod_var);
				V_3 = L_7;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0052_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m75D841D3D6C1099DC7CEA2728300005614603CA0((&V_3), Enumerator_Dispose_m75D841D3D6C1099DC7CEA2728300005614603CA0_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0047_2;
					}

IL_0032_2:
					{
						// foreach (var action in _continuationActions)
						Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9* L_8;
						L_8 = Enumerator_get_Current_m17C9E6391509BD97E223AA75D7DF361525F84D5E_inline((&V_3), Enumerator_get_Current_m17C9E6391509BD97E223AA75D7DF361525F84D5E_RuntimeMethod_var);
						V_4 = L_8;
						// if (action != null)
						Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9* L_9 = V_4;
						if (!L_9)
						{
							goto IL_0047_2;
						}
					}
					{
						// continuationActionsSnapshot.Add(action);
						List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099* L_10 = V_0;
						Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9* L_11 = V_4;
						NullCheck(L_10);
						List_1_Add_m9A280BF1FC5498FEC38CF4D3A9D0069191B6C278_inline(L_10, L_11, List_1_Add_m9A280BF1FC5498FEC38CF4D3A9D0069191B6C278_RuntimeMethod_var);
					}

IL_0047_2:
					{
						// foreach (var action in _continuationActions)
						bool L_12;
						L_12 = Enumerator_MoveNext_m08528CAB78BA01626958C79ED1EB6247C3D6D8D3((&V_3), Enumerator_MoveNext_m08528CAB78BA01626958C79ED1EB6247C3D6D8D3_RuntimeMethod_var);
						if (L_12)
						{
							goto IL_0032_2;
						}
					}
					{
						goto IL_0060_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0060_1:
			{
				// _continuationActions.Clear();
				List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099* L_13 = __this->____continuationActions_0;
				NullCheck(L_13);
				List_1_Clear_m7EB6D122B376D641464D9C7455DBD6EE27350F08_inline(L_13, List_1_Clear_m7EB6D122B376D641464D9C7455DBD6EE27350F08_RuntimeMethod_var);
				// }
				goto IL_0077;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0077:
	{
		// foreach (var action in continuationActionsSnapshot)
		List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099* L_14 = V_0;
		NullCheck(L_14);
		Enumerator_t67E125105D3F8ECD4E90BC8D26D7F3BD19BEB99E L_15;
		L_15 = List_1_GetEnumerator_m545481921B687960D51772877ACC772E96EF1C41(L_14, List_1_GetEnumerator_m545481921B687960D51772877ACC772E96EF1C41_RuntimeMethod_var);
		V_3 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0098:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m75D841D3D6C1099DC7CEA2728300005614603CA0((&V_3), Enumerator_Dispose_m75D841D3D6C1099DC7CEA2728300005614603CA0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008d_1;
			}

IL_0080_1:
			{
				// foreach (var action in continuationActionsSnapshot)
				Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9* L_16;
				L_16 = Enumerator_get_Current_m17C9E6391509BD97E223AA75D7DF361525F84D5E_inline((&V_3), Enumerator_get_Current_m17C9E6391509BD97E223AA75D7DF361525F84D5E_RuntimeMethod_var);
				// action(this);
				NullCheck(L_16);
				Action_1_Invoke_mDFBEB39A9A23DB6A3A3CEC5B47277FFE1F01182C_inline(L_16, __this, NULL);
			}

IL_008d_1:
			{
				// foreach (var action in continuationActionsSnapshot)
				bool L_17;
				L_17 = Enumerator_MoveNext_m08528CAB78BA01626958C79ED1EB6247C3D6D8D3((&V_3), Enumerator_MoveNext_m08528CAB78BA01626958C79ED1EB6247C3D6D8D3_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_0080_1;
				}
			}
			{
				goto IL_00a6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.Runtime.CompilerServices.TaskAwaiter Microsoft.AppCenter.Unity.AppCenterTask::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 AppCenterTask_GetAwaiter_m10D7CA3C83CBDD08BF84ABF7C25D8A8642390DAE (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CGetAwaiterU3Eb__0_mE81B337BD41520523D3FF90A39F4E5940550A0CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_t09A38423D58B8050C75EC07995384839DBF88523_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_t09A38423D58B8050C75EC07995384839DBF88523* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass12_0_t09A38423D58B8050C75EC07995384839DBF88523* L_0 = (U3CU3Ec__DisplayClass12_0_t09A38423D58B8050C75EC07995384839DBF88523*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t09A38423D58B8050C75EC07995384839DBF88523_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass12_0__ctor_m6415A6EE02214F936FA51292374281EA975E81C8(L_0, NULL);
		V_0 = L_0;
		// var taskCompletionSource = new TaskCompletionSource<bool>();
		U3CU3Ec__DisplayClass12_0_t09A38423D58B8050C75EC07995384839DBF88523* L_1 = V_0;
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_2 = (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*)il2cpp_codegen_object_new(TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646(L_2, TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___taskCompletionSource_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___taskCompletionSource_0), (void*)L_2);
		// ContinueWith(task => taskCompletionSource.SetResult(true));
		U3CU3Ec__DisplayClass12_0_t09A38423D58B8050C75EC07995384839DBF88523* L_3 = V_0;
		Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9* L_4 = (Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9*)il2cpp_codegen_object_new(Action_1_t159D35DB19BB08BAE890074B9E7F823BEF74C4E9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m5DD7A330133E08D714DBB1E9D200B903E2EB363F(L_4, L_3, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CGetAwaiterU3Eb__0_mE81B337BD41520523D3FF90A39F4E5940550A0CF_RuntimeMethod_var), NULL);
		AppCenterTask_ContinueWith_mD071F1510A3239937D372EA9B79639F86DF407F1(__this, L_4, NULL);
		// return ((Task)taskCompletionSource.Task).GetAwaiter();
		U3CU3Ec__DisplayClass12_0_t09A38423D58B8050C75EC07995384839DBF88523* L_5 = V_0;
		NullCheck(L_5);
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_6 = L_5->___taskCompletionSource_0;
		NullCheck(L_6);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_7;
		L_7 = TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline(L_6, TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		NullCheck(L_7);
		TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_8;
		L_8 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_7, NULL);
		return L_8;
	}
}
// System.Boolean Microsoft.AppCenter.Unity.AppCenterTask::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppCenterTask_get_keepWaiting_mE3227DB1687DCBD6E56330E25478536AECC24372 (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* __this, const RuntimeMethod* method) 
{
	{
		// get { return !IsComplete; }
		bool L_0;
		L_0 = AppCenterTask_get_IsComplete_m4D9202D5B58660A24952515B6AA38FEA0E786656_inline(__this, NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Microsoft.AppCenter.Unity.AppCenterTask::.ctor(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterTask__ctor_mFFE1CE5E93795397047624E84D34518FCCBC0C90 (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_U3C_ctorU3Eb__15_0_mEF8B4D95C265FD3CE04CE34BB60F9FD3B5039BC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFBDB4A17BCF131E67BBA80B546CC944D4FFFB3A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<Action<AppCenterTask>> _continuationActions = new List<Action<AppCenterTask>>();
		List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099* L_0 = (List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099*)il2cpp_codegen_object_new(List_1_tC98BE1D8E74A003032C7D17EFB3AD43353758099_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mFBDB4A17BCF131E67BBA80B546CC944D4FFFB3A6(L_0, List_1__ctor_mFBDB4A17BCF131E67BBA80B546CC944D4FFFB3A6_RuntimeMethod_var);
		__this->____continuationActions_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationActions_0), (void*)L_0);
		// protected readonly object _lockObject = new object();
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		__this->____lockObject_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lockObject_1), (void*)L_1);
		// public AppCenterTask(Task task)
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		// task.ContinueWith(t => {
		//     CompletionAction();
		// });
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = ___task0;
		Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_3 = (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*)il2cpp_codegen_object_new(Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0(L_3, __this, (intptr_t)((void*)AppCenterTask_U3C_ctorU3Eb__15_0_mEF8B4D95C265FD3CE04CE34BB60F9FD3B5039BC7_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = Task_ContinueWith_m4150CBD0F7AC870F40F5E8D84E265B47A642C06C(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.AppCenterTask::<.ctor>b__15_0(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterTask_U3C_ctorU3Eb__15_0_mEF8B4D95C265FD3CE04CE34BB60F9FD3B5039BC7 (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t0, const RuntimeMethod* method) 
{
	{
		// CompletionAction();
		VirtualActionInvoker0::Invoke(9 /* System.Void Microsoft.AppCenter.Unity.AppCenterTask::CompletionAction() */, __this);
		// });
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
// System.Void Microsoft.AppCenter.Unity.AppCenterTask/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m6415A6EE02214F936FA51292374281EA975E81C8 (U3CU3Ec__DisplayClass12_0_t09A38423D58B8050C75EC07995384839DBF88523* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.AppCenterTask/<>c__DisplayClass12_0::<GetAwaiter>b__0(Microsoft.AppCenter.Unity.AppCenterTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CGetAwaiterU3Eb__0_mE81B337BD41520523D3FF90A39F4E5940550A0CF (U3CU3Ec__DisplayClass12_0_t09A38423D58B8050C75EC07995384839DBF88523* __this, AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ContinueWith(task => taskCompletionSource.SetResult(true));
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_0 = __this->___taskCompletionSource_0;
		NullCheck(L_0);
		TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448(L_0, (bool)1, TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
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
// System.String Microsoft.AppCenter.Unity.Device::get_SdkName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_SdkName_m0C70219E32ACA8FE9D8D8BC404E5B4D09BD5123A (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, const RuntimeMethod* method) 
{
	{
		// public string SdkName { get; private set; }
		String_t* L_0 = __this->___U3CSdkNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Device::set_SdkName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_SdkName_m26D5F51AC6FC80E75FAEEFAA5B833E615C2E2FA5 (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string SdkName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CSdkNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSdkNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Device::get_SdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_SdkVersion_mB9AE0971032A459B5986C01F13EA1B6D98149721 (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, const RuntimeMethod* method) 
{
	{
		// public string SdkVersion { get; private set; }
		String_t* L_0 = __this->___U3CSdkVersionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Device::set_SdkVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_SdkVersion_m5AA1E819EAB16BA4272C16E283500BB1EE385B60 (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string SdkVersion { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CSdkVersionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSdkVersionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Device::get_Model()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_Model_mBE0FFEEF4B469C29406ADCE8A4DA7DA02E1E46A7 (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, const RuntimeMethod* method) 
{
	{
		// public string Model { get; private set; }
		String_t* L_0 = __this->___U3CModelU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Device::set_Model(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_Model_mF2C6D5A55D89A1A8861E3C348971B9BD47091E01 (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Model { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CModelU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CModelU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Device::get_OemName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_OemName_m2437DAEA2E2585B12034EF4E58B3A17EB5E9F959 (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, const RuntimeMethod* method) 
{
	{
		// public string OemName { get; private set; }
		String_t* L_0 = __this->___U3COemNameU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Device::set_OemName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_OemName_m8CD7A571302B50E68B0E614155F8438EAD69CB04 (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string OemName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3COemNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COemNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Device::get_OsName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_OsName_m027281064582E2FD2680FEBACE0891751B26B766 (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, const RuntimeMethod* method) 
{
	{
		// public string OsName { get; private set; }
		String_t* L_0 = __this->___U3COsNameU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Device::set_OsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_OsName_mDA691D3E2FE0BD5460095C47D36EFDDB7EE47D2E (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string OsName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3COsNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COsNameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Device::get_OsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_OsVersion_m7E22BE83148CFCED2FF368C089C017918175ADAF (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, const RuntimeMethod* method) 
{
	{
		// public string OsVersion { get; private set; }
		String_t* L_0 = __this->___U3COsVersionU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Device::set_OsVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_OsVersion_m677A5A507278AA927BEDE2EC58D43F3EA08FCC1E (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string OsVersion { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3COsVersionU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COsVersionU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Device::get_OsBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_OsBuild_m4FA0540FA59BA12413F1EFC203792666D1D25265 (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, const RuntimeMethod* method) 
{
	{
		// public string OsBuild { get; private set; }
		String_t* L_0 = __this->___U3COsBuildU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Device::set_OsBuild(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_OsBuild_m3249E8F1557BE8AE97EF3048F2ACDD2BBE64DAC9 (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string OsBuild { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3COsBuildU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COsBuildU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Int32 Microsoft.AppCenter.Unity.Device::get_OsApiLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Device_get_OsApiLevel_m18B01EA45BE61D86FFAA598444ADE73E2B15A0A1 (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, const RuntimeMethod* method) 
{
	{
		// public int OsApiLevel { get; private set; }
		int32_t L_0 = __this->___U3COsApiLevelU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Device::set_OsApiLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_OsApiLevel_m5581F886572336FF5A258590A6DEC37BF1BAFC72 (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int OsApiLevel { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3COsApiLevelU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Device::get_Locale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_Locale_m385554ED1007F67B30AAE22F4C19B9382C653225 (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, const RuntimeMethod* method) 
{
	{
		// public string Locale { get; private set; }
		String_t* L_0 = __this->___U3CLocaleU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Device::set_Locale(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_Locale_m034271B4ABAAEBCEDF4BAB5E0B4F46532530509A (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Locale { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CLocaleU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLocaleU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Int32 Microsoft.AppCenter.Unity.Device::get_TimeZoneOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Device_get_TimeZoneOffset_m396B1C718E4995C5415C0E3A0DF671FA69924971 (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, const RuntimeMethod* method) 
{
	{
		// public int TimeZoneOffset { get; private set; }
		int32_t L_0 = __this->___U3CTimeZoneOffsetU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Device::set_TimeZoneOffset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_TimeZoneOffset_m8B9D5482188CD77CD79BADEDE3332581668A6382 (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int TimeZoneOffset { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CTimeZoneOffsetU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Device::get_ScreenSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_ScreenSize_m00D48971A84AAF0C625953849D59BB24DA6CF5BD (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, const RuntimeMethod* method) 
{
	{
		// public string ScreenSize { get; private set; }
		String_t* L_0 = __this->___U3CScreenSizeU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Device::set_ScreenSize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_ScreenSize_m2C878766AC0AEB156971E29AEE89040C80F0B6BD (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ScreenSize { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CScreenSizeU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CScreenSizeU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Device::get_AppVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_AppVersion_mAED83E440E9DB615FADC72F895FD4EE08617E15A (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, const RuntimeMethod* method) 
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = __this->___U3CAppVersionU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Device::set_AppVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_AppVersion_m5CAED222D389F7502E83995B19A20437B15085F3 (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CAppVersionU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAppVersionU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Device::get_CarrierName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_CarrierName_m8EF1038651FCFB038BB8BE6B3906A789740119EF (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, const RuntimeMethod* method) 
{
	{
		// public string CarrierName { get; private set; }
		String_t* L_0 = __this->___U3CCarrierNameU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Device::set_CarrierName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_CarrierName_m340B4694B0F2E1F8BB83309FC269FD4D5F325CDC (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string CarrierName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CCarrierNameU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCarrierNameU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Device::get_CarrierCountry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_CarrierCountry_mA99044E821CE70A9ECDCF5CD9806319E442E63A2 (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, const RuntimeMethod* method) 
{
	{
		// public string CarrierCountry { get; private set; }
		String_t* L_0 = __this->___U3CCarrierCountryU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Device::set_CarrierCountry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_CarrierCountry_m08F0B99D19BBE3477A2D5B2557D7BCA212CD1541 (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string CarrierCountry { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CCarrierCountryU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCarrierCountryU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Device::get_AppBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_AppBuild_m38D9F04F517CE9EF12A3D70A8810A9BEC0023AB4 (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, const RuntimeMethod* method) 
{
	{
		// public string AppBuild { get; private set; }
		String_t* L_0 = __this->___U3CAppBuildU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Device::set_AppBuild(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_AppBuild_m771B89576752DE520157928D728F5E04B7997E9B (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string AppBuild { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CAppBuildU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAppBuildU3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Device::get_AppNamespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_AppNamespace_mE23707F234590B6FBDB86DCB6B917345F9EB31AB (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, const RuntimeMethod* method) 
{
	{
		// public string AppNamespace { get; private set; }
		String_t* L_0 = __this->___U3CAppNamespaceU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Device::set_AppNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_AppNamespace_m9C76A6C89F2A9DCC0BFDB8E05C4DB2009F0A6DE7 (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string AppNamespace { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CAppNamespaceU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAppNamespaceU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Device::.ctor(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Int32,System.String,System.Int32,System.String,System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device__ctor_m7EBC9B7878351AE02CF4D786604CDB6C4185ACBB (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___sdkName0, String_t* ___sdkVersion1, String_t* ___model2, String_t* ___oemName3, String_t* ___osName4, String_t* ___osVersion5, String_t* ___osBuild6, int32_t ___osApiLevel7, String_t* ___locale8, int32_t ___timeZoneOffset9, String_t* ___screenSize10, String_t* ___appVersion11, String_t* ___carrierName12, String_t* ___carrierCountry13, String_t* ___appBuild14, String_t* ___appNamespace15, const RuntimeMethod* method) 
{
	{
		// public Device(string sdkName, string sdkVersion, string model, string oemName, string osName, string osVersion, string osBuild,
		//     int osApiLevel, string locale, int timeZoneOffset, string screenSize, string appVersion, string carrierName,
		//     string carrierCountry, string appBuild, string appNamespace)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// SdkName = sdkName;
		String_t* L_0 = ___sdkName0;
		Device_set_SdkName_m26D5F51AC6FC80E75FAEEFAA5B833E615C2E2FA5_inline(__this, L_0, NULL);
		// SdkVersion = sdkVersion;
		String_t* L_1 = ___sdkVersion1;
		Device_set_SdkVersion_m5AA1E819EAB16BA4272C16E283500BB1EE385B60_inline(__this, L_1, NULL);
		// Model = model;
		String_t* L_2 = ___model2;
		Device_set_Model_mF2C6D5A55D89A1A8861E3C348971B9BD47091E01_inline(__this, L_2, NULL);
		// OemName = oemName;
		String_t* L_3 = ___oemName3;
		Device_set_OemName_m8CD7A571302B50E68B0E614155F8438EAD69CB04_inline(__this, L_3, NULL);
		// OsName = osName;
		String_t* L_4 = ___osName4;
		Device_set_OsName_mDA691D3E2FE0BD5460095C47D36EFDDB7EE47D2E_inline(__this, L_4, NULL);
		// OsVersion = osVersion;
		String_t* L_5 = ___osVersion5;
		Device_set_OsVersion_m677A5A507278AA927BEDE2EC58D43F3EA08FCC1E_inline(__this, L_5, NULL);
		// OsBuild = osBuild;
		String_t* L_6 = ___osBuild6;
		Device_set_OsBuild_m3249E8F1557BE8AE97EF3048F2ACDD2BBE64DAC9_inline(__this, L_6, NULL);
		// OsApiLevel = osApiLevel;
		int32_t L_7 = ___osApiLevel7;
		Device_set_OsApiLevel_m5581F886572336FF5A258590A6DEC37BF1BAFC72_inline(__this, L_7, NULL);
		// Locale = locale;
		String_t* L_8 = ___locale8;
		Device_set_Locale_m034271B4ABAAEBCEDF4BAB5E0B4F46532530509A_inline(__this, L_8, NULL);
		// TimeZoneOffset = timeZoneOffset;
		int32_t L_9 = ___timeZoneOffset9;
		Device_set_TimeZoneOffset_m8B9D5482188CD77CD79BADEDE3332581668A6382_inline(__this, L_9, NULL);
		// ScreenSize = screenSize;
		String_t* L_10 = ___screenSize10;
		Device_set_ScreenSize_m2C878766AC0AEB156971E29AEE89040C80F0B6BD_inline(__this, L_10, NULL);
		// AppVersion = appVersion;
		String_t* L_11 = ___appVersion11;
		Device_set_AppVersion_m5CAED222D389F7502E83995B19A20437B15085F3_inline(__this, L_11, NULL);
		// CarrierName = carrierName;
		String_t* L_12 = ___carrierName12;
		Device_set_CarrierName_m340B4694B0F2E1F8BB83309FC269FD4D5F325CDC_inline(__this, L_12, NULL);
		// CarrierCountry = carrierCountry;
		String_t* L_13 = ___carrierCountry13;
		Device_set_CarrierCountry_m08F0B99D19BBE3477A2D5B2557D7BCA212CD1541_inline(__this, L_13, NULL);
		// AppBuild = appBuild;
		String_t* L_14 = ___appBuild14;
		Device_set_AppBuild_m771B89576752DE520157928D728F5E04B7997E9B_inline(__this, L_14, NULL);
		// AppNamespace = appNamespace;
		String_t* L_15 = ___appNamespace15;
		Device_set_AppNamespace_m9C76A6C89F2A9DCC0BFDB8E05C4DB2009F0A6DE7_inline(__this, L_15, NULL);
		// }
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
// System.String Microsoft.AppCenter.Unity.WrapperSdk::get_WrapperRuntimeVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WrapperSdk_get_WrapperRuntimeVersion_mC75E5B85579E39A97811546DB9287438FC32265D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrapperSdk_t0B116AC5E53CC4151FE763ED5C93185BA9350ED0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _hasAttemptedToGetRuntimeVersion ? _wrapperRuntimeVersion : (_wrapperRuntimeVersion = GetWrapperRuntimeVersion());
		bool L_0 = ((WrapperSdk_t0B116AC5E53CC4151FE763ED5C93185BA9350ED0_StaticFields*)il2cpp_codegen_static_fields_for(WrapperSdk_t0B116AC5E53CC4151FE763ED5C93185BA9350ED0_il2cpp_TypeInfo_var))->____hasAttemptedToGetRuntimeVersion_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_1;
		L_1 = WrapperSdk_GetWrapperRuntimeVersion_m4BF63A0770E75E58B2AFDDCB231A3E89FC2522CF(NULL);
		String_t* L_2 = L_1;
		((WrapperSdk_t0B116AC5E53CC4151FE763ED5C93185BA9350ED0_StaticFields*)il2cpp_codegen_static_fields_for(WrapperSdk_t0B116AC5E53CC4151FE763ED5C93185BA9350ED0_il2cpp_TypeInfo_var))->____wrapperRuntimeVersion_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WrapperSdk_t0B116AC5E53CC4151FE763ED5C93185BA9350ED0_StaticFields*)il2cpp_codegen_static_fields_for(WrapperSdk_t0B116AC5E53CC4151FE763ED5C93185BA9350ED0_il2cpp_TypeInfo_var))->____wrapperRuntimeVersion_0), (void*)L_2);
		return L_2;
	}

IL_0013:
	{
		String_t* L_3 = ((WrapperSdk_t0B116AC5E53CC4151FE763ED5C93185BA9350ED0_StaticFields*)il2cpp_codegen_static_fields_for(WrapperSdk_t0B116AC5E53CC4151FE763ED5C93185BA9350ED0_il2cpp_TypeInfo_var))->____wrapperRuntimeVersion_0;
		return L_3;
	}
}
// System.String Microsoft.AppCenter.Unity.WrapperSdk::GetWrapperRuntimeVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WrapperSdk_GetWrapperRuntimeVersion_m4BF63A0770E75E58B2AFDDCB231A3E89FC2522CF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrapperSdk_GetWrapperRuntimeVersion_m4BF63A0770E75E58B2AFDDCB231A3E89FC2522CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrapperSdk_t0B116AC5E53CC4151FE763ED5C93185BA9350ED0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA18A4AE569C5BE88A9C406093C040EFEBFF78C5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2230E71BB2A4058F4E1979D5887615085B84A60);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	{
		// _hasAttemptedToGetRuntimeVersion = true;
		((WrapperSdk_t0B116AC5E53CC4151FE763ED5C93185BA9350ED0_StaticFields*)il2cpp_codegen_static_fields_for(WrapperSdk_t0B116AC5E53CC4151FE763ED5C93185BA9350ED0_il2cpp_TypeInfo_var))->____hasAttemptedToGetRuntimeVersion_1 = (bool)1;
		// Type type = Type.GetType("Mono.Runtime");
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_0;
		L_0 = il2cpp_codegen_get_type(_stringLiteralA18A4AE569C5BE88A9C406093C040EFEBFF78C5E, Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var, WrapperSdk_GetWrapperRuntimeVersion_m4BF63A0770E75E58B2AFDDCB231A3E89FC2522CF_RuntimeMethod_var);
		V_0 = L_0;
		// if (type != null)
		Type_t* L_1 = V_0;
		bool L_2;
		L_2 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_1, (Type_t*)NULL, NULL);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		// MethodInfo displayName = type.GetMethod("GetDisplayName", BindingFlags.NonPublic | BindingFlags.Static);
		Type_t* L_3 = V_0;
		NullCheck(L_3);
		MethodInfo_t* L_4;
		L_4 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D(L_3, _stringLiteralB2230E71BB2A4058F4E1979D5887615085B84A60, ((int32_t)40), NULL);
		V_1 = L_4;
		// if (displayName != null)
		MethodInfo_t* L_5 = V_1;
		bool L_6;
		L_6 = MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC(L_5, (MethodInfo_t*)NULL, NULL);
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		// return (string)displayName.Invoke(null, null);
		MethodInfo_t* L_7 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_7, NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		return ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
	}

IL_003f:
	{
		// return null;
		return (String_t*)NULL;
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
// System.Void Microsoft.AppCenter.Unity.Distribute.Distribute::PrepareEventHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Distribute_PrepareEventHandlers_m07A52FE137CD13033F5E44E9539E59E6B985C2D7 (const RuntimeMethod* method) 
{
	{
		// DistributeInternal.PrepareEventHandlers();
		DistributeInternal_PrepareEventHandlers_m264A1AFDB06318D76A39478049EDF5434DD857B4(NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.Distribute::AddNativeType(System.Collections.Generic.List`1<System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Distribute_AddNativeType_mEFD63801AE9201E8B661A6C4C241B932E2A00DDE (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___nativeTypes0, const RuntimeMethod* method) 
{
	{
		// DistributeInternal.AddNativeType(nativeTypes);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_0 = ___nativeTypes0;
		DistributeInternal_AddNativeType_mD071E59775F01DD5336DE31F1D821D1A489689FD(L_0, NULL);
		// }
		return;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.Distribute.Distribute::IsEnabledAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* Distribute_IsEnabledAsync_m8C7BA8335405F490F6BF9F9403F188C627BD36BD (const RuntimeMethod* method) 
{
	{
		// return DistributeInternal.IsEnabledAsync();
		AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* L_0;
		L_0 = DistributeInternal_IsEnabledAsync_mFADC90581B84A53657CD5A27CFDAA1BCDE7E1F99(NULL);
		return L_0;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask Microsoft.AppCenter.Unity.Distribute.Distribute::SetEnabledAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* Distribute_SetEnabledAsync_m980B5650E3336FA5685C6EB25786F1144CD51270 (bool ___enabled0, const RuntimeMethod* method) 
{
	{
		// return DistributeInternal.SetEnabledAsync(enabled);
		bool L_0 = ___enabled0;
		AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* L_1;
		L_1 = DistributeInternal_SetEnabledAsync_m1C8934E4B3B9081EACCCD5ED0835B13F58C9BF5C(L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.Distribute::CheckForUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Distribute_CheckForUpdate_mB71B74CB47411E7BA41A47F8DD79872A4502E814 (const RuntimeMethod* method) 
{
	{
		// DistributeInternal.CheckForUpdate();
		DistributeInternal_CheckForUpdate_mE2CD5C6A7EFDD294EBAEF04038A965381E19602A(NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.Distribute::SetInstallUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Distribute_SetInstallUrl_mD04A43AA86ABD6757142A5E0383FB1EFC4CCCA07 (String_t* ___installUrl0, const RuntimeMethod* method) 
{
	{
		// DistributeInternal.SetInstallUrl(installUrl);
		String_t* L_0 = ___installUrl0;
		DistributeInternal_SetInstallUrl_m067228C78426A3156E46950486183230FEDCB273(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.Distribute::SetApiUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Distribute_SetApiUrl_mC8F271A0200B7DF36D5120CDC8A567C744E684AE (String_t* ___apiUrl0, const RuntimeMethod* method) 
{
	{
		// DistributeInternal.SetApiUrl(apiUrl);
		String_t* L_0 = ___apiUrl0;
		DistributeInternal_SetApiUrl_m9825AADAE77B874FEC418390CA13B50A9E720ABD(L_0, NULL);
		// }
		return;
	}
}
// Microsoft.AppCenter.Unity.Distribute.ReleaseAvailableCallback Microsoft.AppCenter.Unity.Distribute.Distribute::get_ReleaseAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A* Distribute_get_ReleaseAvailable_m38464BEBCD5C6640BC7930FAB4CD7B97B2BB9672 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; set;
		ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A* L_0 = ((Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_StaticFields*)il2cpp_codegen_static_fields_for(Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_il2cpp_TypeInfo_var))->___U3CReleaseAvailableU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.Distribute::set_ReleaseAvailable(Microsoft.AppCenter.Unity.Distribute.ReleaseAvailableCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Distribute_set_ReleaseAvailable_mB894D5808A5CDB842E2A942FDFB27A2F3DD5AD0D (ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; set;
		ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A* L_0 = ___value0;
		((Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_StaticFields*)il2cpp_codegen_static_fields_for(Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_il2cpp_TypeInfo_var))->___U3CReleaseAvailableU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_StaticFields*)il2cpp_codegen_static_fields_for(Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_il2cpp_TypeInfo_var))->___U3CReleaseAvailableU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Microsoft.AppCenter.Unity.Distribute.WillExitAppCallback Microsoft.AppCenter.Unity.Distribute.Distribute::get_WillExitApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WillExitAppCallback_tD0F683F8A55A233230DECD10BB6E77824BADE550* Distribute_get_WillExitApp_m47F752956F0CCF071E5E44C777C9AAFC7B55444C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; set;
		WillExitAppCallback_tD0F683F8A55A233230DECD10BB6E77824BADE550* L_0 = ((Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_StaticFields*)il2cpp_codegen_static_fields_for(Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_il2cpp_TypeInfo_var))->___U3CWillExitAppU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.Distribute::set_WillExitApp(Microsoft.AppCenter.Unity.Distribute.WillExitAppCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Distribute_set_WillExitApp_m5811383FF7313CF6D1709212E900BB893ABAA302 (WillExitAppCallback_tD0F683F8A55A233230DECD10BB6E77824BADE550* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; set;
		WillExitAppCallback_tD0F683F8A55A233230DECD10BB6E77824BADE550* L_0 = ___value0;
		((Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_StaticFields*)il2cpp_codegen_static_fields_for(Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_il2cpp_TypeInfo_var))->___U3CWillExitAppU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_StaticFields*)il2cpp_codegen_static_fields_for(Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_il2cpp_TypeInfo_var))->___U3CWillExitAppU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Microsoft.AppCenter.Unity.Distribute.NoReleaseAvailableCallback Microsoft.AppCenter.Unity.Distribute.Distribute::get_NoReleaseAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NoReleaseAvailableCallback_t2EA6E66890C8D2094ECA6FF52AFFBD2542802704* Distribute_get_NoReleaseAvailable_mE7FD72A9EE0E4852FDB245A864BBBDB2CE3D356D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; set;
		NoReleaseAvailableCallback_t2EA6E66890C8D2094ECA6FF52AFFBD2542802704* L_0 = ((Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_StaticFields*)il2cpp_codegen_static_fields_for(Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_il2cpp_TypeInfo_var))->___U3CNoReleaseAvailableU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.Distribute::set_NoReleaseAvailable(Microsoft.AppCenter.Unity.Distribute.NoReleaseAvailableCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Distribute_set_NoReleaseAvailable_mBFAAD33F5FEDE2595C693C7ACA3F4DB77904D5AB (NoReleaseAvailableCallback_t2EA6E66890C8D2094ECA6FF52AFFBD2542802704* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; set;
		NoReleaseAvailableCallback_t2EA6E66890C8D2094ECA6FF52AFFBD2542802704* L_0 = ___value0;
		((Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_StaticFields*)il2cpp_codegen_static_fields_for(Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_il2cpp_TypeInfo_var))->___U3CNoReleaseAvailableU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_StaticFields*)il2cpp_codegen_static_fields_for(Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400_il2cpp_TypeInfo_var))->___U3CNoReleaseAvailableU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.Distribute::StartDistribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Distribute_StartDistribute_m6E3DA00B42AF3F344484E3F9FEAD4CBBE8274CD7 (const RuntimeMethod* method) 
{
	{
		// DistributeInternal.StartDistribute();
		DistributeInternal_StartDistribute_m92B785708F53CAA328BB639D6E9023660737B8AD(NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.Distribute::NotifyUpdateAction(Microsoft.AppCenter.Unity.Distribute.UpdateAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Distribute_NotifyUpdateAction_mD8A77DB2502E6B03795461623D0543AB7C586EF7 (int32_t ___updateAction0, const RuntimeMethod* method) 
{
	{
		// DistributeInternal.NotifyUpdateAction((int)updateAction);
		int32_t L_0 = ___updateAction0;
		DistributeInternal_NotifyUpdateAction_m61FE6F60679D059CB5044AD4308A6A9450C4F15D(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.Distribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Distribute__ctor_m7179AD5FCC20BD610FAD77571DC05AA9F136B314 (Distribute_t1907238D2265D1EE21B819925EBEC72D5E225400* __this, const RuntimeMethod* method) 
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
bool ReleaseAvailableCallback_Invoke_m7AF941B38EFE49745693D1C1EBC46AFADAFC2CF8_Multicast(ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A* __this, ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* ___releaseDetails0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A* currentDelegate = reinterpret_cast<ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___releaseDetails0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool ReleaseAvailableCallback_Invoke_m7AF941B38EFE49745693D1C1EBC46AFADAFC2CF8_Open(ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A* __this, ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* ___releaseDetails0, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___releaseDetails0, method);
}
bool ReleaseAvailableCallback_Invoke_m7AF941B38EFE49745693D1C1EBC46AFADAFC2CF8_OpenStaticInvoker(ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A* __this, ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* ___releaseDetails0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* >::Invoke(__this->___method_ptr_0, method, NULL, ___releaseDetails0);
}
bool ReleaseAvailableCallback_Invoke_m7AF941B38EFE49745693D1C1EBC46AFADAFC2CF8_ClosedStaticInvoker(ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A* __this, ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* ___releaseDetails0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___releaseDetails0);
}
bool ReleaseAvailableCallback_Invoke_m7AF941B38EFE49745693D1C1EBC46AFADAFC2CF8_OpenVirtual(ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A* __this, ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* ___releaseDetails0, const RuntimeMethod* method)
{
	return VirtualFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___releaseDetails0);
}
bool ReleaseAvailableCallback_Invoke_m7AF941B38EFE49745693D1C1EBC46AFADAFC2CF8_OpenInterface(ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A* __this, ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* ___releaseDetails0, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___releaseDetails0);
}
bool ReleaseAvailableCallback_Invoke_m7AF941B38EFE49745693D1C1EBC46AFADAFC2CF8_OpenGenericVirtual(ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A* __this, ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* ___releaseDetails0, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker0< bool >::Invoke(method, ___releaseDetails0);
}
bool ReleaseAvailableCallback_Invoke_m7AF941B38EFE49745693D1C1EBC46AFADAFC2CF8_OpenGenericInterface(ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A* __this, ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* ___releaseDetails0, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker0< bool >::Invoke(method, ___releaseDetails0);
}
// System.Void Microsoft.AppCenter.Unity.Distribute.ReleaseAvailableCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReleaseAvailableCallback__ctor_mA4DA10A4FBA0BD68ABE4084E2E1764767DF1B82D (ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReleaseAvailableCallback_Invoke_m7AF941B38EFE49745693D1C1EBC46AFADAFC2CF8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ReleaseAvailableCallback_Invoke_m7AF941B38EFE49745693D1C1EBC46AFADAFC2CF8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReleaseAvailableCallback_Invoke_m7AF941B38EFE49745693D1C1EBC46AFADAFC2CF8_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ReleaseAvailableCallback_Invoke_m7AF941B38EFE49745693D1C1EBC46AFADAFC2CF8_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ReleaseAvailableCallback_Invoke_m7AF941B38EFE49745693D1C1EBC46AFADAFC2CF8_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ReleaseAvailableCallback_Invoke_m7AF941B38EFE49745693D1C1EBC46AFADAFC2CF8_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ReleaseAvailableCallback_Invoke_m7AF941B38EFE49745693D1C1EBC46AFADAFC2CF8_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ReleaseAvailableCallback_Invoke_m7AF941B38EFE49745693D1C1EBC46AFADAFC2CF8_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ReleaseAvailableCallback_Invoke_m7AF941B38EFE49745693D1C1EBC46AFADAFC2CF8_Multicast;
}
// System.Boolean Microsoft.AppCenter.Unity.Distribute.ReleaseAvailableCallback::Invoke(Microsoft.AppCenter.Unity.Distribute.ReleaseDetails)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReleaseAvailableCallback_Invoke_m7AF941B38EFE49745693D1C1EBC46AFADAFC2CF8 (ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A* __this, ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* ___releaseDetails0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___releaseDetails0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Microsoft.AppCenter.Unity.Distribute.ReleaseAvailableCallback::BeginInvoke(Microsoft.AppCenter.Unity.Distribute.ReleaseDetails,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReleaseAvailableCallback_BeginInvoke_m56D0A27CA48FD8B35073919109D3176C2F55F438 (ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A* __this, ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* ___releaseDetails0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___releaseDetails0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean Microsoft.AppCenter.Unity.Distribute.ReleaseAvailableCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReleaseAvailableCallback_EndInvoke_m6A08C7E2949CB1DBCD759E67A4742378AEA4F0A2 (ReleaseAvailableCallback_t7B783E4043B317FDE3DC4A6A15FAB37B6A42849A* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WillExitAppCallback_Invoke_mC130D53A99BA3D11EB6A1C3697F795802E635851_Multicast(WillExitAppCallback_tD0F683F8A55A233230DECD10BB6E77824BADE550* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WillExitAppCallback_tD0F683F8A55A233230DECD10BB6E77824BADE550* currentDelegate = reinterpret_cast<WillExitAppCallback_tD0F683F8A55A233230DECD10BB6E77824BADE550*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WillExitAppCallback_Invoke_mC130D53A99BA3D11EB6A1C3697F795802E635851_Open(WillExitAppCallback_tD0F683F8A55A233230DECD10BB6E77824BADE550* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void WillExitAppCallback_Invoke_mC130D53A99BA3D11EB6A1C3697F795802E635851_OpenStaticInvoker(WillExitAppCallback_tD0F683F8A55A233230DECD10BB6E77824BADE550* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void WillExitAppCallback_Invoke_mC130D53A99BA3D11EB6A1C3697F795802E635851_ClosedStaticInvoker(WillExitAppCallback_tD0F683F8A55A233230DECD10BB6E77824BADE550* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WillExitAppCallback_tD0F683F8A55A233230DECD10BB6E77824BADE550 (WillExitAppCallback_tD0F683F8A55A233230DECD10BB6E77824BADE550* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Microsoft.AppCenter.Unity.Distribute.WillExitAppCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WillExitAppCallback__ctor_m722BF6AB59104F862BE750C3B5707BB56654C1EB (WillExitAppCallback_tD0F683F8A55A233230DECD10BB6E77824BADE550* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WillExitAppCallback_Invoke_mC130D53A99BA3D11EB6A1C3697F795802E635851_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WillExitAppCallback_Invoke_mC130D53A99BA3D11EB6A1C3697F795802E635851_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WillExitAppCallback_Invoke_mC130D53A99BA3D11EB6A1C3697F795802E635851_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WillExitAppCallback_Invoke_mC130D53A99BA3D11EB6A1C3697F795802E635851_Multicast;
}
// System.Void Microsoft.AppCenter.Unity.Distribute.WillExitAppCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WillExitAppCallback_Invoke_mC130D53A99BA3D11EB6A1C3697F795802E635851 (WillExitAppCallback_tD0F683F8A55A233230DECD10BB6E77824BADE550* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Microsoft.AppCenter.Unity.Distribute.WillExitAppCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WillExitAppCallback_BeginInvoke_mDB8315A4D7275A4DF61917DB0C36A684AFAA4F34 (WillExitAppCallback_tD0F683F8A55A233230DECD10BB6E77824BADE550* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Microsoft.AppCenter.Unity.Distribute.WillExitAppCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WillExitAppCallback_EndInvoke_m09890973612C86DF187EA27FF26DADFE46E2A1C7 (WillExitAppCallback_tD0F683F8A55A233230DECD10BB6E77824BADE550* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void NoReleaseAvailableCallback_Invoke_mBF96D17D153D8E4910856016FDE52D065AD2AE6D_Multicast(NoReleaseAvailableCallback_t2EA6E66890C8D2094ECA6FF52AFFBD2542802704* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NoReleaseAvailableCallback_t2EA6E66890C8D2094ECA6FF52AFFBD2542802704* currentDelegate = reinterpret_cast<NoReleaseAvailableCallback_t2EA6E66890C8D2094ECA6FF52AFFBD2542802704*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NoReleaseAvailableCallback_Invoke_mBF96D17D153D8E4910856016FDE52D065AD2AE6D_Open(NoReleaseAvailableCallback_t2EA6E66890C8D2094ECA6FF52AFFBD2542802704* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void NoReleaseAvailableCallback_Invoke_mBF96D17D153D8E4910856016FDE52D065AD2AE6D_OpenStaticInvoker(NoReleaseAvailableCallback_t2EA6E66890C8D2094ECA6FF52AFFBD2542802704* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void NoReleaseAvailableCallback_Invoke_mBF96D17D153D8E4910856016FDE52D065AD2AE6D_ClosedStaticInvoker(NoReleaseAvailableCallback_t2EA6E66890C8D2094ECA6FF52AFFBD2542802704* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NoReleaseAvailableCallback_t2EA6E66890C8D2094ECA6FF52AFFBD2542802704 (NoReleaseAvailableCallback_t2EA6E66890C8D2094ECA6FF52AFFBD2542802704* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Microsoft.AppCenter.Unity.Distribute.NoReleaseAvailableCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoReleaseAvailableCallback__ctor_m8B57CFFB7143002D3639136BB94AC3B2D25A6F42 (NoReleaseAvailableCallback_t2EA6E66890C8D2094ECA6FF52AFFBD2542802704* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NoReleaseAvailableCallback_Invoke_mBF96D17D153D8E4910856016FDE52D065AD2AE6D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NoReleaseAvailableCallback_Invoke_mBF96D17D153D8E4910856016FDE52D065AD2AE6D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NoReleaseAvailableCallback_Invoke_mBF96D17D153D8E4910856016FDE52D065AD2AE6D_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&NoReleaseAvailableCallback_Invoke_mBF96D17D153D8E4910856016FDE52D065AD2AE6D_Multicast;
}
// System.Void Microsoft.AppCenter.Unity.Distribute.NoReleaseAvailableCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoReleaseAvailableCallback_Invoke_mBF96D17D153D8E4910856016FDE52D065AD2AE6D (NoReleaseAvailableCallback_t2EA6E66890C8D2094ECA6FF52AFFBD2542802704* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Microsoft.AppCenter.Unity.Distribute.NoReleaseAvailableCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NoReleaseAvailableCallback_BeginInvoke_mE5DF2DA697CDCEBFEDE777EC8957321FCE69B72E (NoReleaseAvailableCallback_t2EA6E66890C8D2094ECA6FF52AFFBD2542802704* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Microsoft.AppCenter.Unity.Distribute.NoReleaseAvailableCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoReleaseAvailableCallback_EndInvoke_m60A4F83CB5754BDE6CD91A5858A5699B1F0ABB15 (NoReleaseAvailableCallback_t2EA6E66890C8D2094ECA6FF52AFFBD2542802704* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReleaseDetails__ctor_m6D48FDEF1E595A431C66779A315800924CDD23A1 (ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* __this, const RuntimeMethod* method) 
{
	{
		// internal ReleaseDetails()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Int32 Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReleaseDetails_get_Id_m38D3A809F66C8DDB1749E400EC35D393CE67ECC9 (ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* __this, const RuntimeMethod* method) 
{
	{
		// public int Id { get; internal set; }
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReleaseDetails_set_Id_mE9B7058C46431F0F491C133857D51D96D5C9BECC (ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Id { get; internal set; }
		int32_t L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReleaseDetails_get_Version_m851509F87F11C826390AD47DF3208794D998E330 (ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* __this, const RuntimeMethod* method) 
{
	{
		// public string Version { get; internal set; }
		String_t* L_0 = __this->___U3CVersionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::set_Version(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReleaseDetails_set_Version_mAE5F642BDB12E0816EC289895FF9288BFF0FD80B (ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Version { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CVersionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVersionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::get_ShortVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReleaseDetails_get_ShortVersion_m2CE8A7F0E86664C3615685765A4AFE8C1FED90FA (ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* __this, const RuntimeMethod* method) 
{
	{
		// public string ShortVersion { get; internal set; }
		String_t* L_0 = __this->___U3CShortVersionU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::set_ShortVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReleaseDetails_set_ShortVersion_mF677258DB03C94D76B3021581F188D1CD2C6DCD8 (ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ShortVersion { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CShortVersionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CShortVersionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::get_ReleaseNotes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReleaseDetails_get_ReleaseNotes_mD1FC04B0E32FF6F8D94C46F1A8128A2F8B018DF5 (ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* __this, const RuntimeMethod* method) 
{
	{
		// public string ReleaseNotes { get; internal set; }
		String_t* L_0 = __this->___U3CReleaseNotesU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::set_ReleaseNotes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReleaseDetails_set_ReleaseNotes_m70A435B2F7188B4B3B97ABBD7EB79E951C851ADA (ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ReleaseNotes { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CReleaseNotesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReleaseNotesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Uri Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::get_ReleaseNotesUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ReleaseDetails_get_ReleaseNotesUrl_mA098B96DB194450B182B6CAF994E4880347706B4 (ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* __this, const RuntimeMethod* method) 
{
	{
		// public Uri ReleaseNotesUrl { get; internal set; }
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = __this->___U3CReleaseNotesUrlU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::set_ReleaseNotesUrl(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReleaseDetails_set_ReleaseNotesUrl_mBA097B92DB7EE8A3F518359E579546274439551D (ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) 
{
	{
		// public Uri ReleaseNotesUrl { get; internal set; }
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___value0;
		__this->___U3CReleaseNotesUrlU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReleaseNotesUrlU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Boolean Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::get_MandatoryUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReleaseDetails_get_MandatoryUpdate_m2550DD6285BF1C89E2289922FD17B0DC7115B801 (ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* __this, const RuntimeMethod* method) 
{
	{
		// public bool MandatoryUpdate { get; internal set; }
		bool L_0 = __this->___U3CMandatoryUpdateU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.ReleaseDetails::set_MandatoryUpdate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReleaseDetails_set_MandatoryUpdate_m34441F3666A0A942029214F3F9A05CF62DFD8F72 (ReleaseDetails_t204A5201DC3FF84B5CA12755BD387FBDC4FD5E3B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool MandatoryUpdate { get; internal set; }
		bool L_0 = ___value0;
		__this->___U3CMandatoryUpdateU3Ek__BackingField_5 = L_0;
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
// System.Void Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal::PrepareEventHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistributeInternal_PrepareEventHandlers_m264A1AFDB06318D76A39478049EDF5434DD857B4 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal::AddNativeType(System.Collections.Generic.List`1<System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistributeInternal_AddNativeType_mD071E59775F01DD5336DE31F1D821D1A489689FD (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___nativeTypes0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal::SetEnabledAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* DistributeInternal_SetEnabledAsync_m1C8934E4B3B9081EACCCD5ED0835B13F58C9BF5C (bool ___isEnabled0, const RuntimeMethod* method) 
{
	{
		// return AppCenterTask.FromCompleted();
		AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* L_0;
		L_0 = AppCenterTask_FromCompleted_m1F770CCFC33031B8D66BFE11AC2BE8D750C124F3(NULL);
		return L_0;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal::IsEnabledAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* DistributeInternal_IsEnabledAsync_mFADC90581B84A53657CD5A27CFDAA1BCDE7E1F99 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_FromCompleted_mBE828ABFBB7DC9BE11223EA6790E96F6D1926A03_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AppCenterTask<bool>.FromCompleted(false);
		AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* L_0;
		L_0 = AppCenterTask_1_FromCompleted_mBE828ABFBB7DC9BE11223EA6790E96F6D1926A03((bool)0, AppCenterTask_1_FromCompleted_mBE828ABFBB7DC9BE11223EA6790E96F6D1926A03_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal::SetInstallUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistributeInternal_SetInstallUrl_m067228C78426A3156E46950486183230FEDCB273 (String_t* ___installUrl0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal::SetApiUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistributeInternal_SetApiUrl_m9825AADAE77B874FEC418390CA13B50A9E720ABD (String_t* ___apiUrl0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal::NotifyUpdateAction(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistributeInternal_NotifyUpdateAction_m61FE6F60679D059CB5044AD4308A6A9450C4F15D (int32_t ___updateAction0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal::StartDistribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistributeInternal_StartDistribute_m92B785708F53CAA328BB639D6E9023660737B8AD (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal::CheckForUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistributeInternal_CheckForUpdate_mE2CD5C6A7EFDD294EBAEF04038A965381E19602A (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistributeInternal__ctor_m123E1172C3F0BEA3079E322F0C303A16A3A6CD6B (DistributeInternal_tE6C58E65586E99CC3B598D4B4E616EDF411EE41B* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.AppCenter.Unity.Distribute.Internal.DistributeInternal/Distribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Distribute__ctor_mD23404BE12651195F6A78F5BACF77C317C25ED89 (Distribute_t84FF430EF26AEEB554DC8DA656A19DFF0772C827* __this, const RuntimeMethod* method) 
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
// System.String Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorAttachmentLog_get_Text_m301A04CC88295FF0AED77BA2138D99211C407B14 (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, const RuntimeMethod* method) 
{
	{
		// public string Text { get; private set; }
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorAttachmentLog_set_Text_mD80155A9D321EF9EF8C96D0ABAF9C9A53D40C9A7 (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Text { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CTextU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Byte[] Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ErrorAttachmentLog_get_Data_mBB85F73E70A4730BE716A252860EAA78257EE432 (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, const RuntimeMethod* method) 
{
	{
		// public byte[] Data { get; private set; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CDataU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::set_Data(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorAttachmentLog_set_Data_m7505FBFD46C01D88B3EE01152AA9DD3C61EECF0B (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		// public byte[] Data { get; private set; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::get_FileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorAttachmentLog_get_FileName_mF7942888A97E06514427906FF0653E95C104706E (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, const RuntimeMethod* method) 
{
	{
		// public string FileName { get; private set; }
		String_t* L_0 = __this->___U3CFileNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::set_FileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorAttachmentLog_set_FileName_m6302491DF50852F010E1F5B2007B6CBDED6D0E1C (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string FileName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CFileNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFileNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::get_ContentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorAttachmentLog_get_ContentType_m78832B9298BD9681CC81D9DC3F83E6F28A9ADB00 (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, const RuntimeMethod* method) 
{
	{
		// public string ContentType { get; private set; }
		String_t* L_0 = __this->___U3CContentTypeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::set_ContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorAttachmentLog_set_ContentType_m3D6861A5E2B0EBF09515CB513446D79271E0170F (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ContentType { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CContentTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContentTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog/AttachmentType Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ErrorAttachmentLog_get_Type_m488F120C50A64992366308C9E331012F9F1EDEFA (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, const RuntimeMethod* method) 
{
	{
		// public AttachmentType Type { get; private set; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::set_Type(Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog/AttachmentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorAttachmentLog_set_Type_mCC44B878516D36419DD2289DCA759779FEDCB227 (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public AttachmentType Type { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::AttachmentWithText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* ErrorAttachmentLog_AttachmentWithText_mDA41C907CC22796CDAC0F7FA0C8CB0AF68C09721 (String_t* ___text0, String_t* ___fileName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ErrorAttachmentLog
		// {
		//     Text = text,
		//     FileName = fileName,
		//     Type = AttachmentType.Text
		// };
		ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* L_0 = (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F*)il2cpp_codegen_object_new(ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ErrorAttachmentLog__ctor_mFAC3EF36E7E2CEF2B904278CD00EE680ACE7BE51(L_0, NULL);
		ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* L_1 = L_0;
		String_t* L_2 = ___text0;
		NullCheck(L_1);
		ErrorAttachmentLog_set_Text_mD80155A9D321EF9EF8C96D0ABAF9C9A53D40C9A7_inline(L_1, L_2, NULL);
		ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* L_3 = L_1;
		String_t* L_4 = ___fileName1;
		NullCheck(L_3);
		ErrorAttachmentLog_set_FileName_m6302491DF50852F010E1F5B2007B6CBDED6D0E1C_inline(L_3, L_4, NULL);
		ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* L_5 = L_3;
		NullCheck(L_5);
		ErrorAttachmentLog_set_Type_mCC44B878516D36419DD2289DCA759779FEDCB227_inline(L_5, 0, NULL);
		return L_5;
	}
}
// Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::AttachmentWithBinary(System.Byte[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* ErrorAttachmentLog_AttachmentWithBinary_mAD3C5CFFD717C1BF4F36F5D9A727EA8E8ACF411B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, String_t* ___fileName1, String_t* ___contentType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ErrorAttachmentLog
		// {
		//     Data = data,
		//     FileName = fileName,
		//     ContentType = contentType,
		//     Type = AttachmentType.Binary
		// };
		ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* L_0 = (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F*)il2cpp_codegen_object_new(ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ErrorAttachmentLog__ctor_mFAC3EF36E7E2CEF2B904278CD00EE680ACE7BE51(L_0, NULL);
		ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* L_1 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data0;
		NullCheck(L_1);
		ErrorAttachmentLog_set_Data_m7505FBFD46C01D88B3EE01152AA9DD3C61EECF0B_inline(L_1, L_2, NULL);
		ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* L_3 = L_1;
		String_t* L_4 = ___fileName1;
		NullCheck(L_3);
		ErrorAttachmentLog_set_FileName_m6302491DF50852F010E1F5B2007B6CBDED6D0E1C_inline(L_3, L_4, NULL);
		ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* L_5 = L_3;
		String_t* L_6 = ___contentType2;
		NullCheck(L_5);
		ErrorAttachmentLog_set_ContentType_m3D6861A5E2B0EBF09515CB513446D79271E0170F_inline(L_5, L_6, NULL);
		ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* L_7 = L_5;
		NullCheck(L_7);
		ErrorAttachmentLog_set_Type_mCC44B878516D36419DD2289DCA759779FEDCB227_inline(L_7, 1, NULL);
		return L_7;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorAttachmentLog__ctor_mFAC3EF36E7E2CEF2B904278CD00EE680ACE7BE51 (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::.ctor(System.String,System.DateTimeOffset,System.DateTimeOffset,Microsoft.AppCenter.Unity.Crashes.Models.Exception,Microsoft.AppCenter.Unity.Device,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReport__ctor_mA326C03F259EB2F7595167CA9BACF340A64CE2A7 (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, String_t* ___id0, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___appStartTime1, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___appErrorTime2, Exception_t4102CE9657F42B955941C1DB3682212AAE071596* ___exception3, Device_t755299AB5F78614858DD1FFB0744D96517966BF9* ___device4, String_t* ___threadName5, const RuntimeMethod* method) 
{
	{
		// public ErrorReport(string id, DateTimeOffset appStartTime, DateTimeOffset appErrorTime, Models.Exception exception, Device device, string threadName)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Id = id;
		String_t* L_0 = ___id0;
		ErrorReport_set_Id_m788C9AA1293FA3D7EC11DB232E3C186B288DD988_inline(__this, L_0, NULL);
		// AppStartTime = appStartTime;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_1 = ___appStartTime1;
		ErrorReport_set_AppStartTime_m5E893C816CF5162C0CCEE5C134E196E91EC6CACB_inline(__this, L_1, NULL);
		// AppErrorTime = appErrorTime;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_2 = ___appErrorTime2;
		ErrorReport_set_AppErrorTime_mC9AC6AE118B5EC58542227EAEB53CAD0ED876C97_inline(__this, L_2, NULL);
		// Exception = exception;
		Exception_t4102CE9657F42B955941C1DB3682212AAE071596* L_3 = ___exception3;
		ErrorReport_set_Exception_mE86964E3691560036DE9DAD92A8BD73F0D17CCBD_inline(__this, L_3, NULL);
		// Device = device;
		Device_t755299AB5F78614858DD1FFB0744D96517966BF9* L_4 = ___device4;
		ErrorReport_set_Device_m1F92894D70BF83C96858A11D76BEDDF63F69478C_inline(__this, L_4, NULL);
		// ThreadName = threadName;
		String_t* L_5 = ___threadName5;
		ErrorReport_set_ThreadName_m9E11501D5B5A3942ED585F130A4B4769D5AAC120_inline(__this, L_5, NULL);
		// IsCrash = true;
		ErrorReport_set_IsCrash_m659CBA6BD682CB3B397AB3AED7C0627B91399A7F_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::.ctor(System.String,System.DateTimeOffset,System.DateTimeOffset,Microsoft.AppCenter.Unity.Crashes.Models.Exception,System.Int32,System.String,System.String,System.Boolean,Microsoft.AppCenter.Unity.Device)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReport__ctor_m3EC7DEFDBEA25BF3787D7825A6453BF8F26F0033 (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, String_t* ___id0, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___appStartTime1, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___appErrorTime2, Exception_t4102CE9657F42B955941C1DB3682212AAE071596* ___exception3, int32_t ___processId4, String_t* ___reporterKey5, String_t* ___reporterSignal6, bool ___isAppKill7, Device_t755299AB5F78614858DD1FFB0744D96517966BF9* ___device8, const RuntimeMethod* method) 
{
	{
		// public ErrorReport(string id, DateTimeOffset appStartTime, DateTimeOffset appErrorTime, Models.Exception exception, int processId, string reporterKey,
		//                    string reporterSignal, bool isAppKill, Device device)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Id = id;
		String_t* L_0 = ___id0;
		ErrorReport_set_Id_m788C9AA1293FA3D7EC11DB232E3C186B288DD988_inline(__this, L_0, NULL);
		// AppStartTime = appStartTime;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_1 = ___appStartTime1;
		ErrorReport_set_AppStartTime_m5E893C816CF5162C0CCEE5C134E196E91EC6CACB_inline(__this, L_1, NULL);
		// AppErrorTime = appErrorTime;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_2 = ___appErrorTime2;
		ErrorReport_set_AppErrorTime_mC9AC6AE118B5EC58542227EAEB53CAD0ED876C97_inline(__this, L_2, NULL);
		// Exception = exception;
		Exception_t4102CE9657F42B955941C1DB3682212AAE071596* L_3 = ___exception3;
		ErrorReport_set_Exception_mE86964E3691560036DE9DAD92A8BD73F0D17CCBD_inline(__this, L_3, NULL);
		// ProcessId = processId;
		int32_t L_4 = ___processId4;
		ErrorReport_set_ProcessId_m9AEB1927DC649688C5A6F935529993BFCAF92C9C_inline(__this, L_4, NULL);
		// ReporterKey = reporterKey;
		String_t* L_5 = ___reporterKey5;
		ErrorReport_set_ReporterKey_m4257DC70E4FBDDC160D7F82FD233C31CA84D4533_inline(__this, L_5, NULL);
		// ReporterSignal = reporterSignal;
		String_t* L_6 = ___reporterSignal6;
		ErrorReport_set_ReporterSignal_mF5FE47BEAD9CBE6BCDA02203B81F078C892BD906_inline(__this, L_6, NULL);
		// IsAppKill = isAppKill;
		bool L_7 = ___isAppKill7;
		ErrorReport_set_IsAppKill_mC511FD594F64611F6540F1F74B229D73E03905C9_inline(__this, L_7, NULL);
		// Device = device;
		Device_t755299AB5F78614858DD1FFB0744D96517966BF9* L_8 = ___device8;
		ErrorReport_set_Device_m1F92894D70BF83C96858A11D76BEDDF63F69478C_inline(__this, L_8, NULL);
		// IsCrash = true;
		ErrorReport_set_IsCrash_m659CBA6BD682CB3B397AB3AED7C0627B91399A7F_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Crashes.ErrorReport::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorReport_get_Id_m064FD57E454BDBAF01055E83AAABADAB89ED5A23 (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, const RuntimeMethod* method) 
{
	{
		// public string Id { get; private set; }
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReport_set_Id_m788C9AA1293FA3D7EC11DB232E3C186B288DD988 (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.DateTimeOffset Microsoft.AppCenter.Unity.Crashes.ErrorReport::get_AppStartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ErrorReport_get_AppStartTime_m1C654738CC0B3A8BC2DC4496EC3A88EEB1080954 (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, const RuntimeMethod* method) 
{
	{
		// public DateTimeOffset AppStartTime { get; private set; }
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_0 = __this->___U3CAppStartTimeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_AppStartTime(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReport_set_AppStartTime_m5E893C816CF5162C0CCEE5C134E196E91EC6CACB (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value0, const RuntimeMethod* method) 
{
	{
		// public DateTimeOffset AppStartTime { get; private set; }
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_0 = ___value0;
		__this->___U3CAppStartTimeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.DateTimeOffset Microsoft.AppCenter.Unity.Crashes.ErrorReport::get_AppErrorTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ErrorReport_get_AppErrorTime_m4294F296F73E3EDBAB08BD3E6C39158BC61E6948 (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, const RuntimeMethod* method) 
{
	{
		// public DateTimeOffset AppErrorTime { get; private set; }
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_0 = __this->___U3CAppErrorTimeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_AppErrorTime(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReport_set_AppErrorTime_mC9AC6AE118B5EC58542227EAEB53CAD0ED876C97 (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value0, const RuntimeMethod* method) 
{
	{
		// public DateTimeOffset AppErrorTime { get; private set; }
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_0 = ___value0;
		__this->___U3CAppErrorTimeU3Ek__BackingField_2 = L_0;
		return;
	}
}
// Microsoft.AppCenter.Unity.Device Microsoft.AppCenter.Unity.Crashes.ErrorReport::get_Device()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Device_t755299AB5F78614858DD1FFB0744D96517966BF9* ErrorReport_get_Device_m75E311DA865C9038100597743282BDDF66AD441B (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, const RuntimeMethod* method) 
{
	{
		// public Device Device { get; private set; }
		Device_t755299AB5F78614858DD1FFB0744D96517966BF9* L_0 = __this->___U3CDeviceU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_Device(Microsoft.AppCenter.Unity.Device)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReport_set_Device_m1F92894D70BF83C96858A11D76BEDDF63F69478C (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, Device_t755299AB5F78614858DD1FFB0744D96517966BF9* ___value0, const RuntimeMethod* method) 
{
	{
		// public Device Device { get; private set; }
		Device_t755299AB5F78614858DD1FFB0744D96517966BF9* L_0 = ___value0;
		__this->___U3CDeviceU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDeviceU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// Microsoft.AppCenter.Unity.Crashes.Models.Exception Microsoft.AppCenter.Unity.Crashes.ErrorReport::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t4102CE9657F42B955941C1DB3682212AAE071596* ErrorReport_get_Exception_m9D12F02565CF09DC7847C209CA4E9927E74B57D6 (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, const RuntimeMethod* method) 
{
	{
		// public Models.Exception Exception { get; private set; }
		Exception_t4102CE9657F42B955941C1DB3682212AAE071596* L_0 = __this->___U3CExceptionU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_Exception(Microsoft.AppCenter.Unity.Crashes.Models.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReport_set_Exception_mE86964E3691560036DE9DAD92A8BD73F0D17CCBD (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, Exception_t4102CE9657F42B955941C1DB3682212AAE071596* ___value0, const RuntimeMethod* method) 
{
	{
		// public Models.Exception Exception { get; private set; }
		Exception_t4102CE9657F42B955941C1DB3682212AAE071596* L_0 = ___value0;
		__this->___U3CExceptionU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExceptionU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Crashes.ErrorReport::get_ThreadName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorReport_get_ThreadName_mA3E80F9203B5F316DCA9F0FD0811D06BEA7C7DD4 (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, const RuntimeMethod* method) 
{
	{
		// public string ThreadName { get; private set; }
		String_t* L_0 = __this->___U3CThreadNameU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_ThreadName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReport_set_ThreadName_m9E11501D5B5A3942ED585F130A4B4769D5AAC120 (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ThreadName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CThreadNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CThreadNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Int32 Microsoft.AppCenter.Unity.Crashes.ErrorReport::get_ProcessId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ErrorReport_get_ProcessId_m6E213D8FEA6C79E3F501D2DD853DAA6A4EE997BF (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, const RuntimeMethod* method) 
{
	{
		// public int ProcessId { get; private set; }
		int32_t L_0 = __this->___U3CProcessIdU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_ProcessId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReport_set_ProcessId_m9AEB1927DC649688C5A6F935529993BFCAF92C9C (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int ProcessId { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CProcessIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Crashes.ErrorReport::get_ReporterKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorReport_get_ReporterKey_mE5269A01CE1F3D5E36738299C2B17C601AFE62D5 (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, const RuntimeMethod* method) 
{
	{
		// public string ReporterKey { get; private set; }
		String_t* L_0 = __this->___U3CReporterKeyU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_ReporterKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReport_set_ReporterKey_m4257DC70E4FBDDC160D7F82FD233C31CA84D4533 (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ReporterKey { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CReporterKeyU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReporterKeyU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Crashes.ErrorReport::get_ReporterSignal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorReport_get_ReporterSignal_mBEB17A054D575647B074F4DE2C65979368D914E4 (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, const RuntimeMethod* method) 
{
	{
		// public string ReporterSignal { get; private set; }
		String_t* L_0 = __this->___U3CReporterSignalU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_ReporterSignal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReport_set_ReporterSignal_mF5FE47BEAD9CBE6BCDA02203B81F078C892BD906 (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ReporterSignal { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CReporterSignalU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReporterSignalU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Boolean Microsoft.AppCenter.Unity.Crashes.ErrorReport::get_IsAppKill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ErrorReport_get_IsAppKill_m8B46BC8BB10C31DDBF183CA51D907B9709EB59D6 (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsAppKill { get; private set; }
		bool L_0 = __this->___U3CIsAppKillU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_IsAppKill(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReport_set_IsAppKill_mC511FD594F64611F6540F1F74B229D73E03905C9 (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsAppKill { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsAppKillU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Boolean Microsoft.AppCenter.Unity.Crashes.ErrorReport::get_IsCrash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ErrorReport_get_IsCrash_mAE1DE11BC11698265F6C7492B0BB5929530E4A1F (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCrash { get; internal set; }
		bool L_0 = __this->___U3CIsCrashU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.ErrorReport::set_IsCrash(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReport_set_IsCrash_m659CBA6BD682CB3B397AB3AED7C0627B91399A7F (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsCrash { get; internal set; }
		bool L_0 = ___value0;
		__this->___U3CIsCrashU3Ek__BackingField_10 = L_0;
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
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::PrepareEventHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_PrepareEventHandlers_m89A0922EC3567FF26BD5FD33857E34F3E01FA6AF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashes_HandleAppCenterInitialized_m5462C318A07C9606C2AAE936DA8104617B13BFB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashes_Initialize_m897C9327162D675E5708EFFC2CCF9A6F2740FDEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AppCenterBehavior.InitializingServices += Initialize;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, NULL, (intptr_t)((void*)Crashes_Initialize_m897C9327162D675E5708EFFC2CCF9A6F2740FDEF_RuntimeMethod_var), NULL);
		AppCenterBehavior_add_InitializingServices_mB63D1BEAFF3BE9E001A4EAB859445656897DDB20(L_0, NULL);
		// AppCenterBehavior.InitializedAppCenterAndServices += HandleAppCenterInitialized;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, NULL, (intptr_t)((void*)Crashes_HandleAppCenterInitialized_m5462C318A07C9606C2AAE936DA8104617B13BFB9_RuntimeMethod_var), NULL);
		AppCenterBehavior_add_InitializedAppCenterAndServices_m6CADDEEF7FC8BA40A0B807B6C616140DBD1AE13A(L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_Initialize_m897C9327162D675E5708EFFC2CCF9A6F2740FDEF (const RuntimeMethod* method) 
{
	{
		// CrashesDelegate.SetDelegate();
		CrashesDelegate_SetDelegate_m443F4793051ACE258552C50242E16463575ECD20(NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::AddNativeType(System.Collections.Generic.List`1<System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_AddNativeType_mD7F6CE6D89F7A8D68F94317CF934FA8D8FA2A733 (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___nativeTypes0, const RuntimeMethod* method) 
{
	{
		// CrashesInternal.AddNativeType(nativeTypes);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_0 = ___nativeTypes0;
		CrashesInternal_AddNativeType_m5454CBA0DEBE41A8960FF7118E2F991BD531B9AE(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::TrackError(System.Exception,System.Collections.Generic.IDictionary`2<System.String,System.String>,Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_TrackError_mE5E0D6B630B91DA654C03E6D92940FCC307A993A (Exception_t* ___exception0, RuntimeObject* ___properties1, ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* ___attachments2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (exception != null)
		Exception_t* L_0 = ___exception0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// var exceptionWrapper = CreateWrapperException(exception);
		Exception_t* L_1 = ___exception0;
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* L_2;
		L_2 = Crashes_CreateWrapperException_m59A3076E3425B2362C5B99E694F78E781F2FBE84(L_1, NULL);
		// CrashesInternal.TrackException(exceptionWrapper.GetRawObject(), properties, attachments);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = WrapperException_GetRawObject_mABD7354FC52EC410FFFB1E6DE4209DDFA0988AAF_inline(L_2, NULL);
		RuntimeObject* L_4 = ___properties1;
		ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* L_5 = ___attachments2;
		String_t* L_6;
		L_6 = CrashesInternal_TrackException_m183007839D194AABCD938416D165D2AEAC52BE7B(L_3, L_4, L_5, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::OnHandleLog(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_OnHandleLog_mB8904A6548F804D21C19C04DD0A61411AE58BA31 (String_t* ___logString0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (LogType.Assert == type || LogType.Exception == type || LogType.Error == type)
		int32_t L_0 = ___type2;
		if ((((int32_t)1) == ((int32_t)L_0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___type2;
		if ((((int32_t)4) == ((int32_t)L_1)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_2 = ___type2;
		if (L_2)
		{
			goto IL_002d;
		}
	}

IL_000b:
	{
		// var exception = CreateWrapperException(logString, stackTrace, type);
		String_t* L_3 = ___logString0;
		String_t* L_4 = ___stackTrace1;
		int32_t L_5 = ___type2;
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* L_6;
		L_6 = Crashes_CreateWrapperException_m0BF198E75EF1135105411A113149F46E799F5602(L_3, L_4, L_5, NULL);
		// var errorReportId = CrashesInternal.TrackException(exception.GetRawObject(), null, null);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = WrapperException_GetRawObject_mABD7354FC52EC410FFFB1E6DE4209DDFA0988AAF_inline(L_6, NULL);
		String_t* L_8;
		L_8 = CrashesInternal_TrackException_m183007839D194AABCD938416D165D2AEAC52BE7B(L_7, (RuntimeObject*)NULL, (ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4*)NULL, NULL);
		V_0 = L_8;
		// if (_enableErrorAttachmentsCallbacks)
		bool L_9 = ((Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_StaticFields*)il2cpp_codegen_static_fields_for(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var))->____enableErrorAttachmentsCallbacks_2;
		if (!L_9)
		{
			goto IL_002d;
		}
	}
	{
		// SendErrorAttachments(errorReportId);
		String_t* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		Crashes_SendErrorAttachments_m1543261C22016CB7A8CFFF2897D02923DC18BEFF(L_10, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.String> Microsoft.AppCenter.Unity.Crashes.Crashes::GetMinidumpDirectoryAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* Crashes_GetMinidumpDirectoryAsync_mE3838B70C014F1F620BB2BA4768EB120A15C7590 (const RuntimeMethod* method) 
{
	{
		// return CrashesInternal.GetMinidumpDirectoryAsync();
		AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* L_0;
		L_0 = CrashesInternal_GetMinidumpDirectoryAsync_mB367B80E514598F7DD6B503B4E5A9F08358E4AD6(NULL);
		return L_0;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.Crashes.Crashes::HasReceivedMemoryWarningInLastSessionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* Crashes_HasReceivedMemoryWarningInLastSessionAsync_m19BEA5E6E6E64A435F5B1EAC27125C0DD16E4ECC (const RuntimeMethod* method) 
{
	{
		// return CrashesInternal.HasReceivedMemoryWarningInLastSessionAsync();
		AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* L_0;
		L_0 = CrashesInternal_HasReceivedMemoryWarningInLastSessionAsync_m9579217D30D0AC746BF77B2362E8D6DF6A89C5DF(NULL);
		return L_0;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.Crashes.Crashes::IsEnabledAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* Crashes_IsEnabledAsync_m7342936A2AEE54B2A451BD017CC0C382FDD00CA3 (const RuntimeMethod* method) 
{
	{
		// return CrashesInternal.IsEnabledAsync();
		AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* L_0;
		L_0 = CrashesInternal_IsEnabledAsync_mD999A575F3E7BECCF64F9A35E152183447505D6C(NULL);
		return L_0;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask Microsoft.AppCenter.Unity.Crashes.Crashes::SetEnabledAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* Crashes_SetEnabledAsync_m2084F43A29887640D41AA13AD0BBBD961D137FB8 (bool ___enabled0, const RuntimeMethod* method) 
{
	{
		// return CrashesInternal.SetEnabledAsync(enabled);
		bool L_0 = ___enabled0;
		AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* L_1;
		L_1 = CrashesInternal_SetEnabledAsync_mD92C76DAC158E8613C9412E8E28D5E7C81ACC960(L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::GenerateTestCrash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_GenerateTestCrash_mFA242DB748184F2D1DA4E345BA7F603A9EEF501A (const RuntimeMethod* method) 
{
	{
		// CrashesInternal.GenerateTestCrash();
		CrashesInternal_GenerateTestCrash_mEE483D947961BD3886A539CAA669BD65614E2D75(NULL);
		// }
		return;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.Crashes.Crashes::HasCrashedInLastSessionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* Crashes_HasCrashedInLastSessionAsync_mBA8D2166F564C1B1DAA2728C3021C921A453F73B (const RuntimeMethod* method) 
{
	{
		// return CrashesInternal.HasCrashedInLastSessionAsync();
		AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* L_0;
		L_0 = CrashesInternal_HasCrashedInLastSessionAsync_m347F87960CAE5CAD3D39E9E10133F8E17259389D(NULL);
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::DisableMachExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_DisableMachExceptionHandler_m23DC736F9F6CC979BD083FB75478E53999BA5445 (const RuntimeMethod* method) 
{
	{
		// CrashesInternal.DisableMachExceptionHandler();
		CrashesInternal_DisableMachExceptionHandler_mBDA6FE1537E561678CB46580DC8910048D3739D2(NULL);
		// }
		return;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<Microsoft.AppCenter.Unity.Crashes.ErrorReport> Microsoft.AppCenter.Unity.Crashes.Crashes::GetLastSessionCrashReportAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t65EBB54C3C45E0625BF46EE257B85A5C0D40B89F* Crashes_GetLastSessionCrashReportAsync_m90EB47AA4F38D72E7D7160F68E1E8F8523E38782 (const RuntimeMethod* method) 
{
	{
		// return CrashesInternal.GetLastSessionCrashReportAsync();
		AppCenterTask_1_t65EBB54C3C45E0625BF46EE257B85A5C0D40B89F* L_0;
		L_0 = CrashesInternal_GetLastSessionCrashReportAsync_m2747B64FFE845751FCE4367A0D0A6ABB70F03C76(NULL);
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::ReportUnhandledExceptions(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_ReportUnhandledExceptions_m0C35C1DED0F73FA97C9993669A4DD3B27D0524A0 (bool ___enabled0, bool ___enableAttachmentsCallback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27CE5FBFC180E846C7FA300C4B9FB1A5A5D2FEAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!enabled && enableAttachmentsCallback)
		bool L_0 = ___enabled0;
		bool L_1 = ___enableAttachmentsCallback1;
		if (!((int32_t)(((((int32_t)L_0) == ((int32_t)0))? 1 : 0)&(int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogWarning("Cannot enable attachments callbacks without enabling unhandled exception reporting.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral27CE5FBFC180E846C7FA300C4B9FB1A5A5D2FEAA, NULL);
		goto IL_001a;
	}

IL_0014:
	{
		// _enableErrorAttachmentsCallbacks = enableAttachmentsCallback;
		bool L_2 = ___enableAttachmentsCallback1;
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		((Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_StaticFields*)il2cpp_codegen_static_fields_for(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var))->____enableErrorAttachmentsCallbacks_2 = L_2;
	}

IL_001a:
	{
		// if (_reportUnhandledExceptions == enabled)
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		bool L_3 = ((Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_StaticFields*)il2cpp_codegen_static_fields_for(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var))->____reportUnhandledExceptions_1;
		bool L_4 = ___enabled0;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0023;
		}
	}
	{
		// return;
		return;
	}

IL_0023:
	{
		// _reportUnhandledExceptions = enabled;
		bool L_5 = ___enabled0;
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		((Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_StaticFields*)il2cpp_codegen_static_fields_for(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var))->____reportUnhandledExceptions_1 = L_5;
		// if (enabled)
		bool L_6 = ___enabled0;
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		// SubscribeToUnhandledExceptions();
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		Crashes_SubscribeToUnhandledExceptions_m03CB80CACC6AB5792B14704D42745A2FF6D294A9(NULL);
		return;
	}

IL_0032:
	{
		// UnsubscribeFromUnhandledExceptions();
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		Crashes_UnsubscribeFromUnhandledExceptions_m4D36486447344FA9914C4B5F9B528DB7476B81D4(NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.AppCenter.Unity.Crashes.Crashes::IsReportingUnhandledExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Crashes_IsReportingUnhandledExceptions_mB8016F5AE6CD1291EE3C06C5B8B405914DABA104 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _reportUnhandledExceptions;
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		bool L_0 = ((Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_StaticFields*)il2cpp_codegen_static_fields_for(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var))->____reportUnhandledExceptions_1;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::set_ShouldAwaitUserConfirmation(Microsoft.AppCenter.Unity.Crashes.Crashes/UserConfirmationHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_set_ShouldAwaitUserConfirmation_m5FF1A2E3DF531DE0082EB0F0F452E11C8FF70EDC (UserConfirmationHandler_tBDA7834B3F9801EC3F58014178039A6DCBB1D0E3* ___value0, const RuntimeMethod* method) 
{
	{
		// CrashesInternal.SetUserConfirmationHandler(value);
		UserConfirmationHandler_tBDA7834B3F9801EC3F58014178039A6DCBB1D0E3* L_0 = ___value0;
		CrashesInternal_SetUserConfirmationHandler_m43062E5AD861D89B67C7CFFEBA4B00757F4DD7DE(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::NotifyUserConfirmation(Microsoft.AppCenter.Unity.Crashes.Crashes/ConfirmationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_NotifyUserConfirmation_m154AA4E3CAA629E26F6B2A0417820D27F73B6D13 (int32_t ___answer0, const RuntimeMethod* method) 
{
	{
		// CrashesInternal.NotifyWithUserConfirmation(answer);
		int32_t L_0 = ___answer0;
		CrashesInternal_NotifyWithUserConfirmation_m410541DB8BA921BD2B3D0127A3CDBF6603CDDE71(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::set_ShouldProcessErrorReport(Microsoft.AppCenter.Unity.Crashes.Crashes/ShouldProcessErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_set_ShouldProcessErrorReport_m3A5B485FA319446CA0F33778A3F4AE31C59DD897 (ShouldProcessErrorReportHandler_t4E12F40F03B893649A44881F0272F6738801A619* ___value0, const RuntimeMethod* method) 
{
	{
		// CrashesDelegate.SetShouldProcessErrorReportHandler(value);
		ShouldProcessErrorReportHandler_t4E12F40F03B893649A44881F0272F6738801A619* L_0 = ___value0;
		CrashesDelegate_SetShouldProcessErrorReportHandler_m95BE7E47176912E0F02B44E51A5246AF84A7412E(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::set_GetErrorAttachments(Microsoft.AppCenter.Unity.Crashes.Crashes/GetErrorAttachmentsHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_set_GetErrorAttachments_mB5BD3ADDFCA831300D31E6E61404D6923E4EB314 (GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* ___value0, const RuntimeMethod* method) 
{
	{
		// CrashesDelegate.SetGetErrorAttachmentsHandler(value);
		GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* L_0 = ___value0;
		CrashesDelegate_SetGetErrorAttachmentsHandler_mC93EEB9E02D7EF41B6BD5E7FAAC3462936A86659(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::add_SendingErrorReport(Microsoft.AppCenter.Unity.Crashes.Crashes/SendingErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_add_SendingErrorReport_mA3DB853AB29C9904AD9886EC5F3CE2F31D15B517 (SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (_objectLock)
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_StaticFields*)il2cpp_codegen_static_fields_for(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var))->____objectLock_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0021;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0021:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// CrashesDelegate.SendingErrorReport += value;
			SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* L_4 = ___value0;
			CrashesDelegate_add_SendingErrorReport_m9C7D4BF914C36C68A9F0B161139C88A9A62ECF55(L_4, NULL);
			// }
			goto IL_0022;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::remove_SendingErrorReport(Microsoft.AppCenter.Unity.Crashes.Crashes/SendingErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_remove_SendingErrorReport_mF8EEC8AB34CA363EC9CE0B707988C5A50BAA1FA2 (SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (_objectLock)
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_StaticFields*)il2cpp_codegen_static_fields_for(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var))->____objectLock_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0021;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0021:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// CrashesDelegate.SendingErrorReport -= value;
			SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* L_4 = ___value0;
			CrashesDelegate_remove_SendingErrorReport_m5F23FBEF5275687C6A013FE2961D99D0527D00D6(L_4, NULL);
			// }
			goto IL_0022;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::add_SentErrorReport(Microsoft.AppCenter.Unity.Crashes.Crashes/SentErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_add_SentErrorReport_m65A67A6C6CE16C37598F81C9FF54CB530749F274 (SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (_objectLock)
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_StaticFields*)il2cpp_codegen_static_fields_for(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var))->____objectLock_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0021;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0021:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// CrashesDelegate.SentErrorReport += value;
			SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* L_4 = ___value0;
			CrashesDelegate_add_SentErrorReport_m497C3AD51679AC3D17155944FB68663914074594(L_4, NULL);
			// }
			goto IL_0022;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::remove_SentErrorReport(Microsoft.AppCenter.Unity.Crashes.Crashes/SentErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_remove_SentErrorReport_m505AA697C5007ECFA893A4B172B760556EBB270B (SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (_objectLock)
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_StaticFields*)il2cpp_codegen_static_fields_for(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var))->____objectLock_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0021;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0021:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// CrashesDelegate.SentErrorReport -= value;
			SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* L_4 = ___value0;
			CrashesDelegate_remove_SentErrorReport_m12CC633C68BDCB4B25E2A7A441A7CCA7C7630862(L_4, NULL);
			// }
			goto IL_0022;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::add_FailedToSendErrorReport(Microsoft.AppCenter.Unity.Crashes.Crashes/FailedToSendErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_add_FailedToSendErrorReport_mA2F9705B8DEB3380A432770A2E0AFE1D5E93064A (FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (_objectLock)
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_StaticFields*)il2cpp_codegen_static_fields_for(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var))->____objectLock_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0021;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0021:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// CrashesDelegate.FailedToSendErrorReport += value;
			FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* L_4 = ___value0;
			CrashesDelegate_add_FailedToSendErrorReport_m712769F2F65E5C00EEA09D4FEA18E49913B3FA3D(L_4, NULL);
			// }
			goto IL_0022;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::remove_FailedToSendErrorReport(Microsoft.AppCenter.Unity.Crashes.Crashes/FailedToSendErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_remove_FailedToSendErrorReport_m83B6C37CF304C77403E6F0A61F5DC850BE2B443B (FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (_objectLock)
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_StaticFields*)il2cpp_codegen_static_fields_for(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var))->____objectLock_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0021;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0021:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// CrashesDelegate.FailedToSendErrorReport -= value;
			FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* L_4 = ___value0;
			CrashesDelegate_remove_FailedToSendErrorReport_mC5A0ACA37E21CDB6093C292CCE050A519E193D6D(L_4, NULL);
			// }
			goto IL_0022;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::StartCrashes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_StartCrashes_mE834273657DE17DDF3BDD1EFC0EA28552DC7C0BD (const RuntimeMethod* method) 
{
	{
		// CrashesInternal.StartCrashes();
		CrashesInternal_StartCrashes_m48102FDD033E93D0DD8E57B1BDF36BC0E5B54EFD(NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::SubscribeToUnhandledExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_SubscribeToUnhandledExceptions_m03CB80CACC6AB5792B14704D42745A2FF6D294A9 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::UnsubscribeFromUnhandledExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_UnsubscribeFromUnhandledExceptions_m4D36486447344FA9914C4B5F9B528DB7476B81D4 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::HandleAppCenterInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_HandleAppCenterInitialized_m5462C318A07C9606C2AAE936DA8104617B13BFB9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_reportUnhandledExceptions)
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		bool L_0 = ((Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_StaticFields*)il2cpp_codegen_static_fields_for(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var))->____reportUnhandledExceptions_1;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// SubscribeToUnhandledExceptions();
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		Crashes_SubscribeToUnhandledExceptions_m03CB80CACC6AB5792B14704D42745A2FF6D294A9(NULL);
	}

IL_000c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::TrackErrorWithAttachments(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_TrackErrorWithAttachments_m382628A86BDBB8B9150329D9AEF2E39E366F6D49 (Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var exceptionWrapper = CreateWrapperException(exception);
		Exception_t* L_0 = ___exception0;
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* L_1;
		L_1 = Crashes_CreateWrapperException_m59A3076E3425B2362C5B99E694F78E781F2FBE84(L_0, NULL);
		// var errorId = CrashesInternal.TrackException(exceptionWrapper.GetRawObject(), null, null);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = WrapperException_GetRawObject_mABD7354FC52EC410FFFB1E6DE4209DDFA0988AAF_inline(L_1, NULL);
		String_t* L_3;
		L_3 = CrashesInternal_TrackException_m183007839D194AABCD938416D165D2AEAC52BE7B(L_2, (RuntimeObject*)NULL, (ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4*)NULL, NULL);
		V_0 = L_3;
		// if (_enableErrorAttachmentsCallbacks)
		bool L_4 = ((Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_StaticFields*)il2cpp_codegen_static_fields_for(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var))->____enableErrorAttachmentsCallbacks_2;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		// SendErrorAttachments(errorId);
		String_t* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		Crashes_SendErrorAttachments_m1543261C22016CB7A8CFFF2897D02923DC18BEFF(L_5, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// Microsoft.AppCenter.Unity.Crashes.WrapperException Microsoft.AppCenter.Unity.Crashes.Crashes::CreateWrapperException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* Crashes_CreateWrapperException_m59A3076E3425B2362C5B99E694F78E781F2FBE84 (Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// var exceptionWrapper = new WrapperException();
		WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* L_0 = (WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92*)il2cpp_codegen_object_new(WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WrapperException__ctor_m9A34492BDBE45E1C7CB5734B81BAABC9F8979BD2(L_0, NULL);
		V_0 = L_0;
		// exceptionWrapper.SetWrapperSdkName(GetExceptionWrapperSdkName());
		WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Crashes_GetExceptionWrapperSdkName_mAE48AC191D0145A199A0D3490FA509F4A3B81322(NULL);
		NullCheck(L_1);
		WrapperException_SetWrapperSdkName_m83753C13D2BB11F44EF0E9B226962183288FC802(L_1, L_2, NULL);
		// exceptionWrapper.SetStacktrace(exception.StackTrace);
		WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* L_3 = V_0;
		Exception_t* L_4 = ___exception0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_4);
		NullCheck(L_3);
		WrapperException_SetStacktrace_m179F048E722DBD38EAB80303C3DD335C01E42AA0(L_3, L_5, NULL);
		// exceptionWrapper.SetMessage(exception.Message);
		WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* L_6 = V_0;
		Exception_t* L_7 = ___exception0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_7);
		NullCheck(L_6);
		WrapperException_SetMessage_m282D3CCAF0467062DA1B9A52BDA7277652453859(L_6, L_8, NULL);
		// exceptionWrapper.SetType(exception.GetType().ToString());
		WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* L_9 = V_0;
		Exception_t* L_10 = ___exception0;
		NullCheck(L_10);
		Type_t* L_11;
		L_11 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_10, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		NullCheck(L_9);
		WrapperException_SetType_m2C5DBFCDFA5DCDE729C4F0DB623BA8CC15D7CD13(L_9, L_12, NULL);
		// if (exception.InnerException != null)
		Exception_t* L_13 = ___exception0;
		NullCheck(L_13);
		Exception_t* L_14;
		L_14 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_13, NULL);
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		// var innerExceptionWrapper = CreateWrapperException(exception.InnerException).GetRawObject();
		Exception_t* L_15 = ___exception0;
		NullCheck(L_15);
		Exception_t* L_16;
		L_16 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* L_17;
		L_17 = Crashes_CreateWrapperException_m59A3076E3425B2362C5B99E694F78E781F2FBE84(L_16, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = WrapperException_GetRawObject_mABD7354FC52EC410FFFB1E6DE4209DDFA0988AAF_inline(L_17, NULL);
		V_1 = L_18;
		// exceptionWrapper.SetInnerException(innerExceptionWrapper);
		WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* L_19 = V_0;
		RuntimeObject* L_20 = V_1;
		NullCheck(L_19);
		WrapperException_SetInnerException_m517D4792A87100A161DC91D32F04849E04444AB6(L_19, L_20, NULL);
	}

IL_005a:
	{
		// return exceptionWrapper;
		WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* L_21 = V_0;
		return L_21;
	}
}
// Microsoft.AppCenter.Unity.Crashes.WrapperException Microsoft.AppCenter.Unity.Crashes.Crashes::CreateWrapperException(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* Crashes_CreateWrapperException_m0BF198E75EF1135105411A113149F46E799F5602 (String_t* ___logString0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83E5DECC987E8858B24A7178014E854EE2A9F663);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	{
		// var exception = new WrapperException();
		WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* L_0 = (WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92*)il2cpp_codegen_object_new(WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WrapperException__ctor_m9A34492BDBE45E1C7CB5734B81BAABC9F8979BD2(L_0, NULL);
		V_0 = L_0;
		// exception.SetWrapperSdkName(GetExceptionWrapperSdkName());
		WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Crashes_GetExceptionWrapperSdkName_mAE48AC191D0145A199A0D3490FA509F4A3B81322(NULL);
		NullCheck(L_1);
		WrapperException_SetWrapperSdkName_m83753C13D2BB11F44EF0E9B226962183288FC802(L_1, L_2, NULL);
		// string sanitizedLogString = logString.Replace("\n", " ");
		String_t* L_3 = ___logString0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_3, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_1 = L_4;
		// exception.SetMessage(sanitizedLogString);
		WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* L_5 = V_0;
		String_t* L_6 = V_1;
		NullCheck(L_5);
		WrapperException_SetMessage_m282D3CCAF0467062DA1B9A52BDA7277652453859(L_5, L_6, NULL);
		// exception.SetType(type.ToString());
		WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* L_7 = V_0;
		Il2CppFakeBox<int32_t> L_8(LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var, (&___type2));
		String_t* L_9;
		L_9 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), NULL);
		NullCheck(L_7);
		WrapperException_SetType_m2C5DBFCDFA5DCDE729C4F0DB623BA8CC15D7CD13(L_7, L_9, NULL);
		// string[] stacktraceLines = stackTrace.Split('\n');
		String_t* L_10 = ___stackTrace1;
		NullCheck(L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11;
		L_11 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_10, ((int32_t)10), 0, NULL);
		// string stackTraceString = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (string line in stacktraceLines)
		V_3 = L_11;
		V_4 = 0;
		goto IL_007a;
	}

IL_0051:
	{
		// foreach (string line in stacktraceLines)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_3;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_5 = L_15;
		// if (line.Length > 0)
		String_t* L_16 = V_5;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		// stackTraceString += "at " + line + "\n";
		String_t* L_18 = V_2;
		String_t* L_19 = V_5;
		String_t* L_20;
		L_20 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_18, _stringLiteral83E5DECC987E8858B24A7178014E854EE2A9F663, L_19, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		V_2 = L_20;
	}

IL_0074:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007a:
	{
		// foreach (string line in stacktraceLines)
		int32_t L_22 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_3;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0051;
		}
	}
	{
		// exception.SetStacktrace(stackTraceString);
		WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* L_24 = V_0;
		String_t* L_25 = V_2;
		NullCheck(L_24);
		WrapperException_SetStacktrace_m179F048E722DBD38EAB80303C3DD335C01E42AA0(L_24, L_25, NULL);
		// return exception;
		WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* L_26 = V_0;
		return L_26;
	}
}
// System.String Microsoft.AppCenter.Unity.Crashes.Crashes::GetExceptionWrapperSdkName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Crashes_GetExceptionWrapperSdkName_mAE48AC191D0145A199A0D3490FA509F4A3B81322 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AEF20CB652FB8962A6ED65B796910FF9FD7EE35);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "appcenter.xamarin"; // fix stack traces are not showing up in the portal UI
		return _stringLiteral8AEF20CB652FB8962A6ED65B796910FF9FD7EE35;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::SendErrorAttachments(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes_SendErrorAttachments_m1543261C22016CB7A8CFFF2897D02923DC18BEFF (String_t* ___errorReportId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* V_0 = NULL;
	ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* V_1 = NULL;
	ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* G_B3_0 = NULL;
	{
		// var errorReport = CrashesInternal.BuildHandledErrorReport(errorReportId);
		String_t* L_0 = ___errorReportId0;
		ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* L_1;
		L_1 = CrashesInternal_BuildHandledErrorReport_m6B380997012F07016194C91FD356BE9A4CE4B961(L_0, NULL);
		V_0 = L_1;
		// errorReport.IsCrash = false;
		ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* L_2 = V_0;
		NullCheck(L_2);
		ErrorReport_set_IsCrash_m659CBA6BD682CB3B397AB3AED7C0627B91399A7F_inline(L_2, (bool)0, NULL);
		// var attachments = CrashesDelegate.GetErrorAttachmentsHandler == null ? null : CrashesDelegate.GetErrorAttachmentsHandler(errorReport);
		GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* L_3 = ((CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_StaticFields*)il2cpp_codegen_static_fields_for(CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var))->___GetErrorAttachmentsHandler_3;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* L_4 = ((CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_StaticFields*)il2cpp_codegen_static_fields_for(CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var))->___GetErrorAttachmentsHandler_3;
		ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* L_5 = V_0;
		NullCheck(L_4);
		ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* L_6;
		L_6 = GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51_inline(L_4, L_5, NULL);
		G_B3_0 = L_6;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = ((ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4*)(NULL));
	}

IL_0023:
	{
		V_1 = G_B3_0;
		// CrashesInternal.SendErrorAttachments(errorReportId, attachments);
		String_t* L_7 = ___errorReportId0;
		ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* L_8 = V_1;
		CrashesInternal_SendErrorAttachments_mCE0CAB8226F16A77E7B035231E7AC9576C19F1B1(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes__ctor_m91D50CD5403D9B914ED7B9E758967656C4F479B3 (Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes__cctor_m0395EDD711F6148940482A9A7F51300DABC37C16 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool _reportUnhandledExceptions = false;
		((Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_StaticFields*)il2cpp_codegen_static_fields_for(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var))->____reportUnhandledExceptions_1 = (bool)0;
		// private static bool _enableErrorAttachmentsCallbacks = false;
		((Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_StaticFields*)il2cpp_codegen_static_fields_for(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var))->____enableErrorAttachmentsCallbacks_2 = (bool)0;
		// private static readonly object _objectLock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_StaticFields*)il2cpp_codegen_static_fields_for(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var))->____objectLock_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_StaticFields*)il2cpp_codegen_static_fields_for(Crashes_t76774156C845D3537AD43416CEFD1425FF5D2A50_il2cpp_TypeInfo_var))->____objectLock_3), (void*)L_0);
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
bool UserConfirmationHandler_Invoke_m4EE905E922BE9E1262316B912AE35BEDD0453B22_Multicast(UserConfirmationHandler_tBDA7834B3F9801EC3F58014178039A6DCBB1D0E3* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UserConfirmationHandler_tBDA7834B3F9801EC3F58014178039A6DCBB1D0E3* currentDelegate = reinterpret_cast<UserConfirmationHandler_tBDA7834B3F9801EC3F58014178039A6DCBB1D0E3*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool UserConfirmationHandler_Invoke_m4EE905E922BE9E1262316B912AE35BEDD0453B22_Open(UserConfirmationHandler_tBDA7834B3F9801EC3F58014178039A6DCBB1D0E3* __this, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
bool UserConfirmationHandler_Invoke_m4EE905E922BE9E1262316B912AE35BEDD0453B22_OpenStaticInvoker(UserConfirmationHandler_tBDA7834B3F9801EC3F58014178039A6DCBB1D0E3* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< bool >::Invoke(__this->___method_ptr_0, method, NULL);
}
bool UserConfirmationHandler_Invoke_m4EE905E922BE9E1262316B912AE35BEDD0453B22_ClosedStaticInvoker(UserConfirmationHandler_tBDA7834B3F9801EC3F58014178039A6DCBB1D0E3* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_UserConfirmationHandler_tBDA7834B3F9801EC3F58014178039A6DCBB1D0E3 (UserConfirmationHandler_tBDA7834B3F9801EC3F58014178039A6DCBB1D0E3* __this, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return static_cast<bool>(returnValue);
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes/UserConfirmationHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserConfirmationHandler__ctor_m382344E9C1EBC473339F5006BC32094EFB5B210C (UserConfirmationHandler_tBDA7834B3F9801EC3F58014178039A6DCBB1D0E3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UserConfirmationHandler_Invoke_m4EE905E922BE9E1262316B912AE35BEDD0453B22_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UserConfirmationHandler_Invoke_m4EE905E922BE9E1262316B912AE35BEDD0453B22_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UserConfirmationHandler_Invoke_m4EE905E922BE9E1262316B912AE35BEDD0453B22_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&UserConfirmationHandler_Invoke_m4EE905E922BE9E1262316B912AE35BEDD0453B22_Multicast;
}
// System.Boolean Microsoft.AppCenter.Unity.Crashes.Crashes/UserConfirmationHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserConfirmationHandler_Invoke_m4EE905E922BE9E1262316B912AE35BEDD0453B22 (UserConfirmationHandler_tBDA7834B3F9801EC3F58014178039A6DCBB1D0E3* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Microsoft.AppCenter.Unity.Crashes.Crashes/UserConfirmationHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UserConfirmationHandler_BeginInvoke_m5B209FCE5EB3DA46508B20755B1D6742331FBFD2 (UserConfirmationHandler_tBDA7834B3F9801EC3F58014178039A6DCBB1D0E3* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Boolean Microsoft.AppCenter.Unity.Crashes.Crashes/UserConfirmationHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserConfirmationHandler_EndInvoke_m0FE8986F0B137D2B6ABCA8129D9A970172FFEB16 (UserConfirmationHandler_tBDA7834B3F9801EC3F58014178039A6DCBB1D0E3* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool ShouldProcessErrorReportHandler_Invoke_m253FFADBA7FEC8411B6C1DC2F3A560B8F71E828F_Multicast(ShouldProcessErrorReportHandler_t4E12F40F03B893649A44881F0272F6738801A619* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ShouldProcessErrorReportHandler_t4E12F40F03B893649A44881F0272F6738801A619* currentDelegate = reinterpret_cast<ShouldProcessErrorReportHandler_t4E12F40F03B893649A44881F0272F6738801A619*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___errorReport0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool ShouldProcessErrorReportHandler_Invoke_m253FFADBA7FEC8411B6C1DC2F3A560B8F71E828F_Open(ShouldProcessErrorReportHandler_t4E12F40F03B893649A44881F0272F6738801A619* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___errorReport0, method);
}
bool ShouldProcessErrorReportHandler_Invoke_m253FFADBA7FEC8411B6C1DC2F3A560B8F71E828F_OpenStaticInvoker(ShouldProcessErrorReportHandler_t4E12F40F03B893649A44881F0272F6738801A619* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* >::Invoke(__this->___method_ptr_0, method, NULL, ___errorReport0);
}
bool ShouldProcessErrorReportHandler_Invoke_m253FFADBA7FEC8411B6C1DC2F3A560B8F71E828F_ClosedStaticInvoker(ShouldProcessErrorReportHandler_t4E12F40F03B893649A44881F0272F6738801A619* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___errorReport0);
}
bool ShouldProcessErrorReportHandler_Invoke_m253FFADBA7FEC8411B6C1DC2F3A560B8F71E828F_OpenVirtual(ShouldProcessErrorReportHandler_t4E12F40F03B893649A44881F0272F6738801A619* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	return VirtualFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___errorReport0);
}
bool ShouldProcessErrorReportHandler_Invoke_m253FFADBA7FEC8411B6C1DC2F3A560B8F71E828F_OpenInterface(ShouldProcessErrorReportHandler_t4E12F40F03B893649A44881F0272F6738801A619* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___errorReport0);
}
bool ShouldProcessErrorReportHandler_Invoke_m253FFADBA7FEC8411B6C1DC2F3A560B8F71E828F_OpenGenericVirtual(ShouldProcessErrorReportHandler_t4E12F40F03B893649A44881F0272F6738801A619* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker0< bool >::Invoke(method, ___errorReport0);
}
bool ShouldProcessErrorReportHandler_Invoke_m253FFADBA7FEC8411B6C1DC2F3A560B8F71E828F_OpenGenericInterface(ShouldProcessErrorReportHandler_t4E12F40F03B893649A44881F0272F6738801A619* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker0< bool >::Invoke(method, ___errorReport0);
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes/ShouldProcessErrorReportHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShouldProcessErrorReportHandler__ctor_m7C7B6BC9BB0A2D13C6D262CC42A111F6C6806B59 (ShouldProcessErrorReportHandler_t4E12F40F03B893649A44881F0272F6738801A619* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ShouldProcessErrorReportHandler_Invoke_m253FFADBA7FEC8411B6C1DC2F3A560B8F71E828F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ShouldProcessErrorReportHandler_Invoke_m253FFADBA7FEC8411B6C1DC2F3A560B8F71E828F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ShouldProcessErrorReportHandler_Invoke_m253FFADBA7FEC8411B6C1DC2F3A560B8F71E828F_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ShouldProcessErrorReportHandler_Invoke_m253FFADBA7FEC8411B6C1DC2F3A560B8F71E828F_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ShouldProcessErrorReportHandler_Invoke_m253FFADBA7FEC8411B6C1DC2F3A560B8F71E828F_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ShouldProcessErrorReportHandler_Invoke_m253FFADBA7FEC8411B6C1DC2F3A560B8F71E828F_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ShouldProcessErrorReportHandler_Invoke_m253FFADBA7FEC8411B6C1DC2F3A560B8F71E828F_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ShouldProcessErrorReportHandler_Invoke_m253FFADBA7FEC8411B6C1DC2F3A560B8F71E828F_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ShouldProcessErrorReportHandler_Invoke_m253FFADBA7FEC8411B6C1DC2F3A560B8F71E828F_Multicast;
}
// System.Boolean Microsoft.AppCenter.Unity.Crashes.Crashes/ShouldProcessErrorReportHandler::Invoke(Microsoft.AppCenter.Unity.Crashes.ErrorReport)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShouldProcessErrorReportHandler_Invoke_m253FFADBA7FEC8411B6C1DC2F3A560B8F71E828F (ShouldProcessErrorReportHandler_t4E12F40F03B893649A44881F0272F6738801A619* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___errorReport0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Microsoft.AppCenter.Unity.Crashes.Crashes/ShouldProcessErrorReportHandler::BeginInvoke(Microsoft.AppCenter.Unity.Crashes.ErrorReport,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShouldProcessErrorReportHandler_BeginInvoke_m6B03581FB9EC6A6D92B3092C6931908B2B931258 (ShouldProcessErrorReportHandler_t4E12F40F03B893649A44881F0272F6738801A619* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___errorReport0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean Microsoft.AppCenter.Unity.Crashes.Crashes/ShouldProcessErrorReportHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShouldProcessErrorReportHandler_EndInvoke_mF2EC9BF374BF0564914F1C9ED738603E8511DD9C (ShouldProcessErrorReportHandler_t4E12F40F03B893649A44881F0272F6738801A619* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51_Multicast(GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* currentDelegate = reinterpret_cast<GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0*>(delegatesToInvoke[i]);
		typedef ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* (*FunctionPointerType) (RuntimeObject*, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___errorReport0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51_Open(GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	typedef ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* (*FunctionPointerType) (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___errorReport0, method);
}
ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51_OpenStaticInvoker(GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4*, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* >::Invoke(__this->___method_ptr_0, method, NULL, ___errorReport0);
}
ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51_ClosedStaticInvoker(GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4*, RuntimeObject*, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___errorReport0);
}
ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51_OpenVirtual(GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	return VirtualFuncInvoker0< ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* >::Invoke(il2cpp_codegen_method_get_slot(method), ___errorReport0);
}
ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51_OpenInterface(GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker0< ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___errorReport0);
}
ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51_OpenGenericVirtual(GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker0< ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* >::Invoke(method, ___errorReport0);
}
ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51_OpenGenericInterface(GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker0< ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* >::Invoke(method, ___errorReport0);
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes/GetErrorAttachmentsHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetErrorAttachmentsHandler__ctor_mEDA17610ADD87974154CDB38632AAD7E93D83F6B (GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51_Multicast;
}
// Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog[] Microsoft.AppCenter.Unity.Crashes.Crashes/GetErrorAttachmentsHandler::Invoke(Microsoft.AppCenter.Unity.Crashes.ErrorReport)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51 (GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method) 
{
	typedef ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* (*FunctionPointerType) (RuntimeObject*, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___errorReport0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Microsoft.AppCenter.Unity.Crashes.Crashes/GetErrorAttachmentsHandler::BeginInvoke(Microsoft.AppCenter.Unity.Crashes.ErrorReport,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetErrorAttachmentsHandler_BeginInvoke_mE65E8DC76A93C08EC8883C89C7444F3A32A54E98 (GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___errorReport0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog[] Microsoft.AppCenter.Unity.Crashes.Crashes/GetErrorAttachmentsHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* GetErrorAttachmentsHandler_EndInvoke_m02450EF9F03CFF8B7312CA910A7D16C5CF120134 (GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SendingErrorReportHandler_Invoke_m0F104DC681082725A1BFC8F96B2A567D0FE511B8_Multicast(SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* currentDelegate = reinterpret_cast<SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___errorReport0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SendingErrorReportHandler_Invoke_m0F104DC681082725A1BFC8F96B2A567D0FE511B8_Open(SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___errorReport0, method);
}
void SendingErrorReportHandler_Invoke_m0F104DC681082725A1BFC8F96B2A567D0FE511B8_OpenStaticInvoker(SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* >::Invoke(__this->___method_ptr_0, method, NULL, ___errorReport0);
}
void SendingErrorReportHandler_Invoke_m0F104DC681082725A1BFC8F96B2A567D0FE511B8_ClosedStaticInvoker(SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___errorReport0);
}
void SendingErrorReportHandler_Invoke_m0F104DC681082725A1BFC8F96B2A567D0FE511B8_OpenVirtual(SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___errorReport0);
}
void SendingErrorReportHandler_Invoke_m0F104DC681082725A1BFC8F96B2A567D0FE511B8_OpenInterface(SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___errorReport0);
}
void SendingErrorReportHandler_Invoke_m0F104DC681082725A1BFC8F96B2A567D0FE511B8_OpenGenericVirtual(SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___errorReport0);
}
void SendingErrorReportHandler_Invoke_m0F104DC681082725A1BFC8F96B2A567D0FE511B8_OpenGenericInterface(SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___errorReport0);
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes/SendingErrorReportHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendingErrorReportHandler__ctor_mF92690EBD0E3CCC9B3ADB2CCB98FF403F9E4D4CF (SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SendingErrorReportHandler_Invoke_m0F104DC681082725A1BFC8F96B2A567D0FE511B8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SendingErrorReportHandler_Invoke_m0F104DC681082725A1BFC8F96B2A567D0FE511B8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SendingErrorReportHandler_Invoke_m0F104DC681082725A1BFC8F96B2A567D0FE511B8_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SendingErrorReportHandler_Invoke_m0F104DC681082725A1BFC8F96B2A567D0FE511B8_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SendingErrorReportHandler_Invoke_m0F104DC681082725A1BFC8F96B2A567D0FE511B8_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SendingErrorReportHandler_Invoke_m0F104DC681082725A1BFC8F96B2A567D0FE511B8_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SendingErrorReportHandler_Invoke_m0F104DC681082725A1BFC8F96B2A567D0FE511B8_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SendingErrorReportHandler_Invoke_m0F104DC681082725A1BFC8F96B2A567D0FE511B8_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SendingErrorReportHandler_Invoke_m0F104DC681082725A1BFC8F96B2A567D0FE511B8_Multicast;
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes/SendingErrorReportHandler::Invoke(Microsoft.AppCenter.Unity.Crashes.ErrorReport)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendingErrorReportHandler_Invoke_m0F104DC681082725A1BFC8F96B2A567D0FE511B8 (SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___errorReport0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Microsoft.AppCenter.Unity.Crashes.Crashes/SendingErrorReportHandler::BeginInvoke(Microsoft.AppCenter.Unity.Crashes.ErrorReport,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SendingErrorReportHandler_BeginInvoke_m33F43716DA51DB6E98D45A120B4B528E07ACFEB8 (SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___errorReport0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes/SendingErrorReportHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendingErrorReportHandler_EndInvoke_mABE288A5BD56E323655615A0FB91ACC95FC2CBFD (SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SentErrorReportHandler_Invoke_m340CFE6E87DF1DBA428686C2CF216C2E5184D0EF_Multicast(SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* currentDelegate = reinterpret_cast<SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___errorReport0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SentErrorReportHandler_Invoke_m340CFE6E87DF1DBA428686C2CF216C2E5184D0EF_Open(SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___errorReport0, method);
}
void SentErrorReportHandler_Invoke_m340CFE6E87DF1DBA428686C2CF216C2E5184D0EF_OpenStaticInvoker(SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* >::Invoke(__this->___method_ptr_0, method, NULL, ___errorReport0);
}
void SentErrorReportHandler_Invoke_m340CFE6E87DF1DBA428686C2CF216C2E5184D0EF_ClosedStaticInvoker(SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___errorReport0);
}
void SentErrorReportHandler_Invoke_m340CFE6E87DF1DBA428686C2CF216C2E5184D0EF_OpenVirtual(SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___errorReport0);
}
void SentErrorReportHandler_Invoke_m340CFE6E87DF1DBA428686C2CF216C2E5184D0EF_OpenInterface(SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___errorReport0);
}
void SentErrorReportHandler_Invoke_m340CFE6E87DF1DBA428686C2CF216C2E5184D0EF_OpenGenericVirtual(SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___errorReport0);
}
void SentErrorReportHandler_Invoke_m340CFE6E87DF1DBA428686C2CF216C2E5184D0EF_OpenGenericInterface(SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___errorReport0);
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes/SentErrorReportHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SentErrorReportHandler__ctor_m4748998F4EEE1D91A46E02022B0E914682C8EF04 (SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SentErrorReportHandler_Invoke_m340CFE6E87DF1DBA428686C2CF216C2E5184D0EF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SentErrorReportHandler_Invoke_m340CFE6E87DF1DBA428686C2CF216C2E5184D0EF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SentErrorReportHandler_Invoke_m340CFE6E87DF1DBA428686C2CF216C2E5184D0EF_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SentErrorReportHandler_Invoke_m340CFE6E87DF1DBA428686C2CF216C2E5184D0EF_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SentErrorReportHandler_Invoke_m340CFE6E87DF1DBA428686C2CF216C2E5184D0EF_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SentErrorReportHandler_Invoke_m340CFE6E87DF1DBA428686C2CF216C2E5184D0EF_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SentErrorReportHandler_Invoke_m340CFE6E87DF1DBA428686C2CF216C2E5184D0EF_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SentErrorReportHandler_Invoke_m340CFE6E87DF1DBA428686C2CF216C2E5184D0EF_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SentErrorReportHandler_Invoke_m340CFE6E87DF1DBA428686C2CF216C2E5184D0EF_Multicast;
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes/SentErrorReportHandler::Invoke(Microsoft.AppCenter.Unity.Crashes.ErrorReport)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SentErrorReportHandler_Invoke_m340CFE6E87DF1DBA428686C2CF216C2E5184D0EF (SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___errorReport0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Microsoft.AppCenter.Unity.Crashes.Crashes/SentErrorReportHandler::BeginInvoke(Microsoft.AppCenter.Unity.Crashes.ErrorReport,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SentErrorReportHandler_BeginInvoke_m517FC4F802E8C41B6F9B89F869DD66EDFEA2DA64 (SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___errorReport0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes/SentErrorReportHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SentErrorReportHandler_EndInvoke_mD346363CE820B851079DDFF4CF3D450AF638746A (SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void FailedToSendErrorReportHandler_Invoke_mC9038C21B8C55E65CAB695FCFC758DB26B9BB594_Multicast(FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, Exception_t4102CE9657F42B955941C1DB3682212AAE071596* ___exception1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* currentDelegate = reinterpret_cast<FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*, Exception_t4102CE9657F42B955941C1DB3682212AAE071596*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___errorReport0, ___exception1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FailedToSendErrorReportHandler_Invoke_mC9038C21B8C55E65CAB695FCFC758DB26B9BB594_Open(FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, Exception_t4102CE9657F42B955941C1DB3682212AAE071596* ___exception1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*, Exception_t4102CE9657F42B955941C1DB3682212AAE071596*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___errorReport0, ___exception1, method);
}
void FailedToSendErrorReportHandler_Invoke_mC9038C21B8C55E65CAB695FCFC758DB26B9BB594_OpenStaticInvoker(FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, Exception_t4102CE9657F42B955941C1DB3682212AAE071596* ___exception1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*, Exception_t4102CE9657F42B955941C1DB3682212AAE071596* >::Invoke(__this->___method_ptr_0, method, NULL, ___errorReport0, ___exception1);
}
void FailedToSendErrorReportHandler_Invoke_mC9038C21B8C55E65CAB695FCFC758DB26B9BB594_ClosedStaticInvoker(FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, Exception_t4102CE9657F42B955941C1DB3682212AAE071596* ___exception1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*, Exception_t4102CE9657F42B955941C1DB3682212AAE071596* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___errorReport0, ___exception1);
}
void FailedToSendErrorReportHandler_Invoke_mC9038C21B8C55E65CAB695FCFC758DB26B9BB594_OpenVirtual(FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, Exception_t4102CE9657F42B955941C1DB3682212AAE071596* ___exception1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< Exception_t4102CE9657F42B955941C1DB3682212AAE071596* >::Invoke(il2cpp_codegen_method_get_slot(method), ___errorReport0, ___exception1);
}
void FailedToSendErrorReportHandler_Invoke_mC9038C21B8C55E65CAB695FCFC758DB26B9BB594_OpenInterface(FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, Exception_t4102CE9657F42B955941C1DB3682212AAE071596* ___exception1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< Exception_t4102CE9657F42B955941C1DB3682212AAE071596* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___errorReport0, ___exception1);
}
void FailedToSendErrorReportHandler_Invoke_mC9038C21B8C55E65CAB695FCFC758DB26B9BB594_OpenGenericVirtual(FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, Exception_t4102CE9657F42B955941C1DB3682212AAE071596* ___exception1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< Exception_t4102CE9657F42B955941C1DB3682212AAE071596* >::Invoke(method, ___errorReport0, ___exception1);
}
void FailedToSendErrorReportHandler_Invoke_mC9038C21B8C55E65CAB695FCFC758DB26B9BB594_OpenGenericInterface(FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, Exception_t4102CE9657F42B955941C1DB3682212AAE071596* ___exception1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< Exception_t4102CE9657F42B955941C1DB3682212AAE071596* >::Invoke(method, ___errorReport0, ___exception1);
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes/FailedToSendErrorReportHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FailedToSendErrorReportHandler__ctor_m04E585F52AB04BD369F33CBE388CFDEE9E44C680 (FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FailedToSendErrorReportHandler_Invoke_mC9038C21B8C55E65CAB695FCFC758DB26B9BB594_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FailedToSendErrorReportHandler_Invoke_mC9038C21B8C55E65CAB695FCFC758DB26B9BB594_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FailedToSendErrorReportHandler_Invoke_mC9038C21B8C55E65CAB695FCFC758DB26B9BB594_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&FailedToSendErrorReportHandler_Invoke_mC9038C21B8C55E65CAB695FCFC758DB26B9BB594_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FailedToSendErrorReportHandler_Invoke_mC9038C21B8C55E65CAB695FCFC758DB26B9BB594_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&FailedToSendErrorReportHandler_Invoke_mC9038C21B8C55E65CAB695FCFC758DB26B9BB594_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FailedToSendErrorReportHandler_Invoke_mC9038C21B8C55E65CAB695FCFC758DB26B9BB594_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&FailedToSendErrorReportHandler_Invoke_mC9038C21B8C55E65CAB695FCFC758DB26B9BB594_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&FailedToSendErrorReportHandler_Invoke_mC9038C21B8C55E65CAB695FCFC758DB26B9BB594_Multicast;
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes/FailedToSendErrorReportHandler::Invoke(Microsoft.AppCenter.Unity.Crashes.ErrorReport,Microsoft.AppCenter.Unity.Crashes.Models.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FailedToSendErrorReportHandler_Invoke_mC9038C21B8C55E65CAB695FCFC758DB26B9BB594 (FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, Exception_t4102CE9657F42B955941C1DB3682212AAE071596* ___exception1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*, Exception_t4102CE9657F42B955941C1DB3682212AAE071596*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___errorReport0, ___exception1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Microsoft.AppCenter.Unity.Crashes.Crashes/FailedToSendErrorReportHandler::BeginInvoke(Microsoft.AppCenter.Unity.Crashes.ErrorReport,Microsoft.AppCenter.Unity.Crashes.Models.Exception,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FailedToSendErrorReportHandler_BeginInvoke_m7AB4150086C105FF443B10081026E6D75E8FFC58 (FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, Exception_t4102CE9657F42B955941C1DB3682212AAE071596* ___exception1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___errorReport0;
	__d_args[1] = ___exception1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Crashes/FailedToSendErrorReportHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FailedToSendErrorReportHandler_EndInvoke_m91FCFE4ACF7B733C3876E6E3DEE1AB45CCED600F (FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Microsoft.AppCenter.Unity.Crashes.WrapperException::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperException_GetRawObject_mABD7354FC52EC410FFFB1E6DE4209DDFA0988AAF (WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* __this, const RuntimeMethod* method) 
{
	{
		// return _rawObject;
		RuntimeObject* L_0 = __this->____rawObject_0;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.WrapperException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperException__ctor_m9A34492BDBE45E1C7CB5734B81BAABC9F8979BD2 (WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* __this, const RuntimeMethod* method) 
{
	{
		// public WrapperException()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _rawObject = WrapperExceptionInternal.Create();
		RuntimeObject* L_0;
		L_0 = WrapperExceptionInternal_Create_mDBADA29F176D094831AE8D3B462C048009C674A5(NULL);
		__this->____rawObject_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rawObject_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.WrapperException::SetType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperException_SetType_m2C5DBFCDFA5DCDE729C4F0DB623BA8CC15D7CD13 (WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* __this, String_t* ___type0, const RuntimeMethod* method) 
{
	{
		// WrapperExceptionInternal.SetType(_rawObject, type);
		RuntimeObject* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___type0;
		WrapperExceptionInternal_SetType_mDF574A3AD89452387E204F2E7D5414528983F464(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.WrapperException::SetMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperException_SetMessage_m282D3CCAF0467062DA1B9A52BDA7277652453859 (WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		// WrapperExceptionInternal.SetMessage(_rawObject, message);
		RuntimeObject* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___message0;
		WrapperExceptionInternal_SetMessage_mB1794D48A2F116E57ED301CA3631AB88F2B14764(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.WrapperException::SetStacktrace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperException_SetStacktrace_m179F048E722DBD38EAB80303C3DD335C01E42AA0 (WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* __this, String_t* ___stacktrace0, const RuntimeMethod* method) 
{
	{
		// WrapperExceptionInternal.SetStacktrace(_rawObject, stacktrace);
		RuntimeObject* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___stacktrace0;
		WrapperExceptionInternal_SetStacktrace_m817204DDD71B391A9914F2AC53EF3C7447D02C10(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.WrapperException::SetInnerException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperException_SetInnerException_m517D4792A87100A161DC91D32F04849E04444AB6 (WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* __this, RuntimeObject* ___innerException0, const RuntimeMethod* method) 
{
	{
		// WrapperExceptionInternal.SetInnerException(_rawObject, innerException);
		RuntimeObject* L_0 = __this->____rawObject_0;
		RuntimeObject* L_1 = ___innerException0;
		WrapperExceptionInternal_SetInnerException_m55BCAD9DE322AFF053959C621DAB0655F2F2E1A9(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.WrapperException::SetWrapperSdkName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperException_SetWrapperSdkName_m83753C13D2BB11F44EF0E9B226962183288FC802 (WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* __this, String_t* ___sdkName0, const RuntimeMethod* method) 
{
	{
		// WrapperExceptionInternal.SetWrapperSdkName(_rawObject, sdkName);
		RuntimeObject* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___sdkName0;
		WrapperExceptionInternal_SetWrapperSdkName_m615EF05E290A0B2C02B51D241870F5FDF7E5481E(L_0, L_1, NULL);
		// }
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
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::add_SendingErrorReport(Microsoft.AppCenter.Unity.Crashes.Crashes/SendingErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate_add_SendingErrorReport_m9C7D4BF914C36C68A9F0B161139C88A9A62ECF55 (SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* V_0 = NULL;
	SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* V_1 = NULL;
	SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* V_2 = NULL;
	{
		SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* L_0 = ((CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_StaticFields*)il2cpp_codegen_static_fields_for(CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var))->___SendingErrorReport_0;
		V_0 = L_0;
	}

IL_0006:
	{
		SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* L_1 = V_0;
		V_1 = L_1;
		SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* L_2 = V_1;
		SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC*)CastclassSealed((RuntimeObject*)L_4, SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC_il2cpp_TypeInfo_var));
		SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* L_5 = V_2;
		SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* L_6 = V_1;
		SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* L_7;
		L_7 = InterlockedCompareExchangeImpl<SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC*>((&((CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_StaticFields*)il2cpp_codegen_static_fields_for(CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var))->___SendingErrorReport_0), L_5, L_6);
		V_0 = L_7;
		SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* L_8 = V_0;
		SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* L_9 = V_1;
		if ((!(((RuntimeObject*)(SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC*)L_8) == ((RuntimeObject*)(SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::remove_SendingErrorReport(Microsoft.AppCenter.Unity.Crashes.Crashes/SendingErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate_remove_SendingErrorReport_m5F23FBEF5275687C6A013FE2961D99D0527D00D6 (SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* V_0 = NULL;
	SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* V_1 = NULL;
	SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* V_2 = NULL;
	{
		SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* L_0 = ((CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_StaticFields*)il2cpp_codegen_static_fields_for(CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var))->___SendingErrorReport_0;
		V_0 = L_0;
	}

IL_0006:
	{
		SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* L_1 = V_0;
		V_1 = L_1;
		SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* L_2 = V_1;
		SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC*)CastclassSealed((RuntimeObject*)L_4, SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC_il2cpp_TypeInfo_var));
		SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* L_5 = V_2;
		SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* L_6 = V_1;
		SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* L_7;
		L_7 = InterlockedCompareExchangeImpl<SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC*>((&((CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_StaticFields*)il2cpp_codegen_static_fields_for(CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var))->___SendingErrorReport_0), L_5, L_6);
		V_0 = L_7;
		SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* L_8 = V_0;
		SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC* L_9 = V_1;
		if ((!(((RuntimeObject*)(SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC*)L_8) == ((RuntimeObject*)(SendingErrorReportHandler_t0113F8CCEAAD10AC5628A9581046481CA8B894EC*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::add_SentErrorReport(Microsoft.AppCenter.Unity.Crashes.Crashes/SentErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate_add_SentErrorReport_m497C3AD51679AC3D17155944FB68663914074594 (SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* V_0 = NULL;
	SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* V_1 = NULL;
	SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* V_2 = NULL;
	{
		SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* L_0 = ((CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_StaticFields*)il2cpp_codegen_static_fields_for(CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var))->___SentErrorReport_1;
		V_0 = L_0;
	}

IL_0006:
	{
		SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* L_1 = V_0;
		V_1 = L_1;
		SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* L_2 = V_1;
		SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09*)CastclassSealed((RuntimeObject*)L_4, SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09_il2cpp_TypeInfo_var));
		SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* L_5 = V_2;
		SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* L_6 = V_1;
		SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* L_7;
		L_7 = InterlockedCompareExchangeImpl<SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09*>((&((CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_StaticFields*)il2cpp_codegen_static_fields_for(CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var))->___SentErrorReport_1), L_5, L_6);
		V_0 = L_7;
		SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* L_8 = V_0;
		SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* L_9 = V_1;
		if ((!(((RuntimeObject*)(SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09*)L_8) == ((RuntimeObject*)(SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::remove_SentErrorReport(Microsoft.AppCenter.Unity.Crashes.Crashes/SentErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate_remove_SentErrorReport_m12CC633C68BDCB4B25E2A7A441A7CCA7C7630862 (SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* V_0 = NULL;
	SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* V_1 = NULL;
	SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* V_2 = NULL;
	{
		SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* L_0 = ((CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_StaticFields*)il2cpp_codegen_static_fields_for(CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var))->___SentErrorReport_1;
		V_0 = L_0;
	}

IL_0006:
	{
		SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* L_1 = V_0;
		V_1 = L_1;
		SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* L_2 = V_1;
		SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09*)CastclassSealed((RuntimeObject*)L_4, SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09_il2cpp_TypeInfo_var));
		SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* L_5 = V_2;
		SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* L_6 = V_1;
		SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* L_7;
		L_7 = InterlockedCompareExchangeImpl<SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09*>((&((CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_StaticFields*)il2cpp_codegen_static_fields_for(CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var))->___SentErrorReport_1), L_5, L_6);
		V_0 = L_7;
		SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* L_8 = V_0;
		SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* L_9 = V_1;
		if ((!(((RuntimeObject*)(SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09*)L_8) == ((RuntimeObject*)(SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::add_FailedToSendErrorReport(Microsoft.AppCenter.Unity.Crashes.Crashes/FailedToSendErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate_add_FailedToSendErrorReport_m712769F2F65E5C00EEA09D4FEA18E49913B3FA3D (FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* V_0 = NULL;
	FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* V_1 = NULL;
	FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* V_2 = NULL;
	{
		FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* L_0 = ((CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_StaticFields*)il2cpp_codegen_static_fields_for(CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var))->___FailedToSendErrorReport_2;
		V_0 = L_0;
	}

IL_0006:
	{
		FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* L_1 = V_0;
		V_1 = L_1;
		FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* L_2 = V_1;
		FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47*)CastclassSealed((RuntimeObject*)L_4, FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47_il2cpp_TypeInfo_var));
		FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* L_5 = V_2;
		FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* L_6 = V_1;
		FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* L_7;
		L_7 = InterlockedCompareExchangeImpl<FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47*>((&((CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_StaticFields*)il2cpp_codegen_static_fields_for(CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var))->___FailedToSendErrorReport_2), L_5, L_6);
		V_0 = L_7;
		FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* L_8 = V_0;
		FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* L_9 = V_1;
		if ((!(((RuntimeObject*)(FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47*)L_8) == ((RuntimeObject*)(FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::remove_FailedToSendErrorReport(Microsoft.AppCenter.Unity.Crashes.Crashes/FailedToSendErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate_remove_FailedToSendErrorReport_mC5A0ACA37E21CDB6093C292CCE050A519E193D6D (FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* V_0 = NULL;
	FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* V_1 = NULL;
	FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* V_2 = NULL;
	{
		FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* L_0 = ((CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_StaticFields*)il2cpp_codegen_static_fields_for(CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var))->___FailedToSendErrorReport_2;
		V_0 = L_0;
	}

IL_0006:
	{
		FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* L_1 = V_0;
		V_1 = L_1;
		FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* L_2 = V_1;
		FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47*)CastclassSealed((RuntimeObject*)L_4, FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47_il2cpp_TypeInfo_var));
		FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* L_5 = V_2;
		FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* L_6 = V_1;
		FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* L_7;
		L_7 = InterlockedCompareExchangeImpl<FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47*>((&((CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_StaticFields*)il2cpp_codegen_static_fields_for(CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B_il2cpp_TypeInfo_var))->___FailedToSendErrorReport_2), L_5, L_6);
		V_0 = L_7;
		FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* L_8 = V_0;
		FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* L_9 = V_1;
		if ((!(((RuntimeObject*)(FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47*)L_8) == ((RuntimeObject*)(FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::SetDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate_SetDelegate_m443F4793051ACE258552C50242E16463575ECD20 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::SetShouldProcessErrorReportHandler(Microsoft.AppCenter.Unity.Crashes.Crashes/ShouldProcessErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate_SetShouldProcessErrorReportHandler_m95BE7E47176912E0F02B44E51A5246AF84A7412E (ShouldProcessErrorReportHandler_t4E12F40F03B893649A44881F0272F6738801A619* ___handler0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::SetGetErrorAttachmentsHandler(Microsoft.AppCenter.Unity.Crashes.Crashes/GetErrorAttachmentsHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate_SetGetErrorAttachmentsHandler_mC93EEB9E02D7EF41B6BD5E7FAAC3462936A86659 (GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* ___handler0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::SetSentErrorReportHandler(Microsoft.AppCenter.Unity.Crashes.Crashes/SentErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate_SetSentErrorReportHandler_m1E39E43588B522E40256A0AFF2372096C986A65C (SentErrorReportHandler_tC11AEA070770F196535A77CC6ABBCC1328273D09* ___handler0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::SetFailedToSendErrorReportHandler(Microsoft.AppCenter.Unity.Crashes.Crashes/FailedToSendErrorReportHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate_SetFailedToSendErrorReportHandler_m534CD58461AD3E67A44F09661F8949D279CDF947 (FailedToSendErrorReportHandler_tE8D7C34F1FAA24E70F4BC2F5AE7D87850AAF3E47* ___handler0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesDelegate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesDelegate__ctor_mF4D727B1012101C373145303FB225E1C502055F6 (CrashesDelegate_t5BDFE2EEFE5D02DECBD016F6699A464BA080C96B* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::AddNativeType(System.Collections.Generic.List`1<System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesInternal_AddNativeType_m5454CBA0DEBE41A8960FF7118E2F991BD531B9AE (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___nativeTypes0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::TrackException(System.Object,System.Collections.Generic.IDictionary`2<System.String,System.String>,Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CrashesInternal_TrackException_m183007839D194AABCD938416D165D2AEAC52BE7B (RuntimeObject* ___exception0, RuntimeObject* ___properties1, ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* ___attachments2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::HasReceivedMemoryWarningInLastSessionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* CrashesInternal_HasReceivedMemoryWarningInLastSessionAsync_m9579217D30D0AC746BF77B2362E8D6DF6A89C5DF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_FromCompleted_mBE828ABFBB7DC9BE11223EA6790E96F6D1926A03_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AppCenterTask<bool>.FromCompleted(false);
		AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* L_0;
		L_0 = AppCenterTask_1_FromCompleted_mBE828ABFBB7DC9BE11223EA6790E96F6D1926A03((bool)0, AppCenterTask_1_FromCompleted_mBE828ABFBB7DC9BE11223EA6790E96F6D1926A03_RuntimeMethod_var);
		return L_0;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::SetEnabledAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* CrashesInternal_SetEnabledAsync_mD92C76DAC158E8613C9412E8E28D5E7C81ACC960 (bool ___enabled0, const RuntimeMethod* method) 
{
	{
		// return AppCenterTask.FromCompleted();
		AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* L_0;
		L_0 = AppCenterTask_FromCompleted_m1F770CCFC33031B8D66BFE11AC2BE8D750C124F3(NULL);
		return L_0;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::IsEnabledAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* CrashesInternal_IsEnabledAsync_mD999A575F3E7BECCF64F9A35E152183447505D6C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_FromCompleted_mBE828ABFBB7DC9BE11223EA6790E96F6D1926A03_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AppCenterTask<bool>.FromCompleted(false);
		AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* L_0;
		L_0 = AppCenterTask_1_FromCompleted_mBE828ABFBB7DC9BE11223EA6790E96F6D1926A03((bool)0, AppCenterTask_1_FromCompleted_mBE828ABFBB7DC9BE11223EA6790E96F6D1926A03_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::GenerateTestCrash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesInternal_GenerateTestCrash_mEE483D947961BD3886A539CAA669BD65614E2D75 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::HasCrashedInLastSessionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* CrashesInternal_HasCrashedInLastSessionAsync_m347F87960CAE5CAD3D39E9E10133F8E17259389D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_FromCompleted_mBE828ABFBB7DC9BE11223EA6790E96F6D1926A03_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AppCenterTask<bool>.FromCompleted(false);
		AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* L_0;
		L_0 = AppCenterTask_1_FromCompleted_mBE828ABFBB7DC9BE11223EA6790E96F6D1926A03((bool)0, AppCenterTask_1_FromCompleted_mBE828ABFBB7DC9BE11223EA6790E96F6D1926A03_RuntimeMethod_var);
		return L_0;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<Microsoft.AppCenter.Unity.Crashes.ErrorReport> Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::GetLastSessionCrashReportAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t65EBB54C3C45E0625BF46EE257B85A5C0D40B89F* CrashesInternal_GetLastSessionCrashReportAsync_m2747B64FFE845751FCE4367A0D0A6ABB70F03C76 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_FromCompleted_m2E8070E027ACE944E6D8383CD98A29612E648AD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AppCenterTask<ErrorReport>.FromCompleted(null);
		AppCenterTask_1_t65EBB54C3C45E0625BF46EE257B85A5C0D40B89F* L_0;
		L_0 = AppCenterTask_1_FromCompleted_m2E8070E027ACE944E6D8383CD98A29612E648AD0((ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*)NULL, AppCenterTask_1_FromCompleted_m2E8070E027ACE944E6D8383CD98A29612E648AD0_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::DisableMachExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesInternal_DisableMachExceptionHandler_mBDA6FE1537E561678CB46580DC8910048D3739D2 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::SetUserConfirmationHandler(Microsoft.AppCenter.Unity.Crashes.Crashes/UserConfirmationHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesInternal_SetUserConfirmationHandler_m43062E5AD861D89B67C7CFFEBA4B00757F4DD7DE (UserConfirmationHandler_tBDA7834B3F9801EC3F58014178039A6DCBB1D0E3* ___handler0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::NotifyWithUserConfirmation(Microsoft.AppCenter.Unity.Crashes.Crashes/ConfirmationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesInternal_NotifyWithUserConfirmation_m410541DB8BA921BD2B3D0127A3CDBF6603CDDE71 (int32_t ___answer0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::StartCrashes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesInternal_StartCrashes_m48102FDD033E93D0DD8E57B1BDF36BC0E5B54EFD (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// Microsoft.AppCenter.Unity.Crashes.ErrorReport Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::BuildHandledErrorReport(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* CrashesInternal_BuildHandledErrorReport_m6B380997012F07016194C91FD356BE9A4CE4B961 (String_t* ___errorReportId0, const RuntimeMethod* method) 
{
	{
		// return null;
		return (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*)NULL;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::SendErrorAttachments(System.String,Microsoft.AppCenter.Unity.Crashes.ErrorAttachmentLog[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesInternal_SendErrorAttachments_mCE0CAB8226F16A77E7B035231E7AC9576C19F1B1 (String_t* ___errorReportId0, ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* ___attachments1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.String> Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::GetMinidumpDirectoryAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* CrashesInternal_GetMinidumpDirectoryAsync_mB367B80E514598F7DD6B503B4E5A9F08358E4AD6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_FromCompleted_mD4A54800F7407EBE1F847CD866DF4CC169D36F0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AppCenterTask<string>.FromCompleted("");
		AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* L_0;
		L_0 = AppCenterTask_1_FromCompleted_mD4A54800F7407EBE1F847CD866DF4CC169D36F0D(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, AppCenterTask_1_FromCompleted_mD4A54800F7407EBE1F847CD866DF4CC169D36F0D_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashesInternal__ctor_m6D3FD5B453D63607C05A9251D1050F6DDA2A9CB8 (CrashesInternal_t0D85F6C469ED354E5321EC2556D05C644E9D4E36* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.CrashesInternal/Crashes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashes__ctor_mF57B0E91BA7702D8797839A7888E4FDB0148A927 (Crashes_t732D17C72C32A314421B946D4B8F760B4E7CA6F2* __this, const RuntimeMethod* method) 
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
// System.Object Microsoft.AppCenter.Unity.Crashes.Internal.WrapperExceptionInternal::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperExceptionInternal_Create_mDBADA29F176D094831AE8D3B462C048009C674A5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.WrapperExceptionInternal::SetType(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperExceptionInternal_SetType_mDF574A3AD89452387E204F2E7D5414528983F464 (RuntimeObject* ___exception0, String_t* ___type1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.WrapperExceptionInternal::SetMessage(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperExceptionInternal_SetMessage_mB1794D48A2F116E57ED301CA3631AB88F2B14764 (RuntimeObject* ___exception0, String_t* ___message1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.WrapperExceptionInternal::SetStacktrace(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperExceptionInternal_SetStacktrace_m817204DDD71B391A9914F2AC53EF3C7447D02C10 (RuntimeObject* ___exception0, String_t* ___stacktrace1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.WrapperExceptionInternal::SetInnerException(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperExceptionInternal_SetInnerException_m55BCAD9DE322AFF053959C621DAB0655F2F2E1A9 (RuntimeObject* ___exception0, RuntimeObject* ___innerException1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.WrapperExceptionInternal::SetWrapperSdkName(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperExceptionInternal_SetWrapperSdkName_m615EF05E290A0B2C02B51D241870F5FDF7E5481E (RuntimeObject* ___exception0, String_t* ___sdkName1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Internal.WrapperExceptionInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperExceptionInternal__ctor_m86D178DD9B6AEE52CAB9AA8B53E9A402DA2BD34F (WrapperExceptionInternal_t34533181969DEAE7E5383A07C31147FA2DFAA234* __this, const RuntimeMethod* method) 
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
// System.String Microsoft.AppCenter.Unity.Crashes.Models.Exception::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exception_get_Message_m1B1CCD263B6C671B34DB637AF43B10132478EB84 (Exception_t4102CE9657F42B955941C1DB3682212AAE071596* __this, const RuntimeMethod* method) 
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Models.Exception::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_set_Message_m90797BB93D37DE9E89CEC971463C8FDFF1F84CEA (Exception_t4102CE9657F42B955941C1DB3682212AAE071596* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Crashes.Models.Exception::get_StackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exception_get_StackTrace_mFB53756ABBDD9142C312C2A56C305DE21F78C316 (Exception_t4102CE9657F42B955941C1DB3682212AAE071596* __this, const RuntimeMethod* method) 
{
	{
		// public string StackTrace { get; private set; }
		String_t* L_0 = __this->___U3CStackTraceU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Models.Exception::set_StackTrace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_set_StackTrace_mF498152DF845DB88A159F8A3D3EFDA51CE5B39C1 (Exception_t4102CE9657F42B955941C1DB3682212AAE071596* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string StackTrace { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CStackTraceU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStackTraceU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Crashes.Models.Exception::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m7A9FC00A23F8C6DE39834C9C8B3168252C0D66D2 (Exception_t4102CE9657F42B955941C1DB3682212AAE071596* __this, String_t* ___message0, String_t* ___stackTrace1, const RuntimeMethod* method) 
{
	{
		// public Exception(string message, string stackTrace)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Message = message;
		String_t* L_0 = ___message0;
		Exception_set_Message_m90797BB93D37DE9E89CEC971463C8FDFF1F84CEA_inline(__this, L_0, NULL);
		// StackTrace = stackTrace;
		String_t* L_1 = ___stackTrace1;
		Exception_set_StackTrace_mF498152DF845DB88A159F8A3D3EFDA51CE5B39C1_inline(__this, L_1, NULL);
		// }
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
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::Configure(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_Configure_m679F2FCDC0B7BA344A941567C73E8A41F49E44B4 (String_t* ___appSecret0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Prepare();
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_Prepare_mDF4F0A78C59489005EDD98C7F2C7E7AC9D39AF6D(NULL);
		// UWPAppCenter.Configure(appSecret);
		String_t* L_0 = ___appSecret0;
		il2cpp_codegen_runtime_class_init_inline(AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		AppCenter_Configure_m88C4025C1B7FFFD0AE115B61AC738CA9BCE89ABA(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::Start(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_Start_m9D7353850990EDE27B7A414343CC5A3506E81C0C (String_t* ___appSecret0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___services1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	{
		// var nativeServiceTypes = ServicesToNativeTypes(services);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = ___services1;
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1;
		L_1 = AppCenterInternal_ServicesToNativeTypes_m322BAE569A0BA5B663CC8BD32DEDFE4BBBF51035(L_0, NULL);
		V_0 = L_1;
		// Prepare();
		AppCenterInternal_Prepare_mDF4F0A78C59489005EDD98C7F2C7E7AC9D39AF6D(NULL);
		// UWPAppCenter.Start(appSecret, nativeServiceTypes);
		String_t* L_2 = ___appSecret0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		AppCenter_Start_m85586BCDDC4EC7033F88F3449DB5D058EE6F9457(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::Start(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_Start_mB7DBEDCB8B6889FE024CFED65FE6D72B6B0F0109 (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___services0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var nativeServiceTypes = ServicesToNativeTypes(services);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = ___services0;
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1;
		L_1 = AppCenterInternal_ServicesToNativeTypes_m322BAE569A0BA5B663CC8BD32DEDFE4BBBF51035(L_0, NULL);
		// Prepare();
		AppCenterInternal_Prepare_mDF4F0A78C59489005EDD98C7F2C7E7AC9D39AF6D(NULL);
		// UWPAppCenter.Start(nativeServiceTypes);
		il2cpp_codegen_runtime_class_init_inline(AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		AppCenter_Start_m0F40F7A1EAEEFD6E59A5EAFE69868777FFFB004A(L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::Start(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_Start_m0B50B4102061D39AADC1E39A20FEAA4C6FDD2695 (Type_t* ___service0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.String Microsoft.AppCenter.Unity.Internal.AppCenterInternal::GetSdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppCenterInternal_GetSdkVersion_m9778FF04F5F13F49D1A5707EA44A1BE44A520E9B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::StartServices(System.Type[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_StartServices_m07E1BCE29953A657EF90220EE3AB9F1F3C7242A6 (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___services0, int32_t ___numServices1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Prepare();
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_Prepare_mDF4F0A78C59489005EDD98C7F2C7E7AC9D39AF6D(NULL);
		// UWPAppCenter.Start(services);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = ___services0;
		il2cpp_codegen_runtime_class_init_inline(AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		AppCenter_Start_m0F40F7A1EAEEFD6E59A5EAFE69868777FFFB004A(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::SetLogLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_SetLogLevel_m368844DC03755627D4CCAAB58A72DB7D809B69CD (int32_t ___logLevel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Prepare();
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_Prepare_mDF4F0A78C59489005EDD98C7F2C7E7AC9D39AF6D(NULL);
		// UWPAppCenter.LogLevel = (Microsoft.AppCenter.LogLevel)LogLevelFromUnity(logLevel);
		int32_t L_0 = ___logLevel0;
		int32_t L_1;
		L_1 = AppCenterInternal_LogLevelFromUnity_m49E5D455A83742CCF6DFE521955ED7F3C17635D0(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		AppCenter_set_LogLevel_m0F027B14B9B2E40CFD3900B1EBA7D5E1776FAAAD(L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::SetUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_SetUserId_m40CD0D4A2D63F35DC56156C3DB50EAB1C044C635 (String_t* ___userId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Prepare();
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_Prepare_mDF4F0A78C59489005EDD98C7F2C7E7AC9D39AF6D(NULL);
		// UWPAppCenter.SetUserId(userId);
		String_t* L_0 = ___userId0;
		il2cpp_codegen_runtime_class_init_inline(AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		AppCenter_SetUserId_m1858879DD1D921FB5BC210F4EE072EF0642E17E8(L_0, NULL);
		// }
		return;
	}
}
// System.Int32 Microsoft.AppCenter.Unity.Internal.AppCenterInternal::GetLogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppCenterInternal_GetLogLevel_m9D2209624F41E8D7DA7441583D28D87BA40855A1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Prepare();
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_Prepare_mDF4F0A78C59489005EDD98C7F2C7E7AC9D39AF6D(NULL);
		// return (int)LogLevelFromUnity((int)UWPAppCenter.LogLevel);
		il2cpp_codegen_runtime_class_init_inline(AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = AppCenter_get_LogLevel_mF8CB2E903744A40CEBAF895B6B18868F97177A32(NULL);
		int32_t L_1;
		L_1 = AppCenterInternal_LogLevelFromUnity_m49E5D455A83742CCF6DFE521955ED7F3C17635D0(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Microsoft.AppCenter.Unity.Internal.AppCenterInternal::IsConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppCenterInternal_IsConfigured_m95E29F75B7CC13B32125402EB1F452E6E476BE7E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Prepare();
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_Prepare_mDF4F0A78C59489005EDD98C7F2C7E7AC9D39AF6D(NULL);
		// return UWPAppCenter.Configured;
		il2cpp_codegen_runtime_class_init_inline(AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AppCenter_get_Configured_m33CDAF9772559C0B1B0D5015CA72D78D518E5A02(NULL);
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::SetLogUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_SetLogUrl_m133A42674D7169FD311063D38FA9620D80F23675 (String_t* ___logUrl0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Prepare();
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_Prepare_mDF4F0A78C59489005EDD98C7F2C7E7AC9D39AF6D(NULL);
		// UWPAppCenter.SetLogUrl(logUrl);
		String_t* L_0 = ___logUrl0;
		il2cpp_codegen_runtime_class_init_inline(AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		AppCenter_SetLogUrl_m312E1763FB9A3A4BFE0D7C95D88E6472F42F3729(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::SetNetworkRequestsAllowed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_SetNetworkRequestsAllowed_m1B5B69367C8C37341654A807BFBEEAD310A2F556 (bool ___isAllowed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Prepare();
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_Prepare_mDF4F0A78C59489005EDD98C7F2C7E7AC9D39AF6D(NULL);
		// UWPAppCenter.IsNetworkRequestsAllowed = isAllowed;
		bool L_0 = ___isAllowed0;
		il2cpp_codegen_runtime_class_init_inline(AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		AppCenter_set_IsNetworkRequestsAllowed_m3B09C8C972ABC414F5598C187F34A578F70D23BA(L_0, NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.AppCenter.Unity.Internal.AppCenterInternal::IsNetworkRequestsAllowed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppCenterInternal_IsNetworkRequestsAllowed_m4E973E5918287EB118A78CA8104C5A58AF89D1D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Prepare();
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_Prepare_mDF4F0A78C59489005EDD98C7F2C7E7AC9D39AF6D(NULL);
		// return UWPAppCenter.IsNetworkRequestsAllowed;
		il2cpp_codegen_runtime_class_init_inline(AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AppCenter_get_IsNetworkRequestsAllowed_m4ED30A6B1240794648AB085E816507197BC50501(NULL);
		return L_0;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask Microsoft.AppCenter.Unity.Internal.AppCenterInternal::SetEnabledAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* AppCenterInternal_SetEnabledAsync_mA37C37429A758F5412BA3E8811D540697ABC8A89 (bool ___isEnabled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Prepare();
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_Prepare_mDF4F0A78C59489005EDD98C7F2C7E7AC9D39AF6D(NULL);
		// return new AppCenterTask(UWPAppCenter.SetEnabledAsync(isEnabled));
		bool L_0 = ___isEnabled0;
		il2cpp_codegen_runtime_class_init_inline(AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = AppCenter_SetEnabledAsync_m34C4D583B49F0AC09418FEDB4C83553BBA7077A0(L_0, NULL);
		AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* L_2 = (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A*)il2cpp_codegen_object_new(AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AppCenterTask__ctor_mFFE1CE5E93795397047624E84D34518FCCBC0C90(L_2, L_1, NULL);
		return L_2;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.Internal.AppCenterInternal::IsEnabledAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* AppCenterInternal_IsEnabledAsync_m820C6BA7B6BFE481F01295A514186C4B1D071495 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1__ctor_mF80BD0ADCE48A340567D5B1A044CFE903B6001F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Prepare();
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_Prepare_mDF4F0A78C59489005EDD98C7F2C7E7AC9D39AF6D(NULL);
		// return new AppCenterTask<bool>(UWPAppCenter.IsEnabledAsync());
		il2cpp_codegen_runtime_class_init_inline(AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_0;
		L_0 = AppCenter_IsEnabledAsync_m67EE03F480A444780850F954C078B750176E8D5C(NULL);
		AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* L_1 = (AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848*)il2cpp_codegen_object_new(AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AppCenterTask_1__ctor_mF80BD0ADCE48A340567D5B1A044CFE903B6001F1(L_1, L_0, AppCenterTask_1__ctor_mF80BD0ADCE48A340567D5B1A044CFE903B6001F1_RuntimeMethod_var);
		return L_1;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.String> Microsoft.AppCenter.Unity.Internal.AppCenterInternal::GetInstallIdAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* AppCenterInternal_GetInstallIdAsync_mBCB89D9A14A658ADAC763EC395DECA6F2536F235 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3D17A7F3B03B425D57654BAC0A572CCC94552120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1__ctor_m2DE912DF90D32913EC3C63702DDF7FEB2A959A61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_mD999084597085FBDB73C538D8D5A74EBE54B1CD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_U3CGetInstallIdAsyncU3Eb__0_m531818B791314B962EF85AC42D00DE2D6CC6976A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_t7B6288E3315E7FBD6CC04CDAD0867E254751558A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass17_0_t7B6288E3315E7FBD6CC04CDAD0867E254751558A* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_t7B6288E3315E7FBD6CC04CDAD0867E254751558A* L_0 = (U3CU3Ec__DisplayClass17_0_t7B6288E3315E7FBD6CC04CDAD0867E254751558A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass17_0_t7B6288E3315E7FBD6CC04CDAD0867E254751558A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass17_0__ctor_m856B1384E16F131442AC565B73BA748764165E0E(L_0, NULL);
		V_0 = L_0;
		// Prepare();
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_Prepare_mDF4F0A78C59489005EDD98C7F2C7E7AC9D39AF6D(NULL);
		// var installIdTask = UWPAppCenter.GetInstallIdAsync();
		il2cpp_codegen_runtime_class_init_inline(AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		Task_1_tF538A43CA1B31CD07E6A7AB3C10B4A8CF70228D6* L_1;
		L_1 = AppCenter_GetInstallIdAsync_m241352B1E7DC0A5361098D4A834F17D9592CAFE1(NULL);
		// var stringTask = new AppCenterTask<string>();
		U3CU3Ec__DisplayClass17_0_t7B6288E3315E7FBD6CC04CDAD0867E254751558A* L_2 = V_0;
		AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* L_3 = (AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94*)il2cpp_codegen_object_new(AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AppCenterTask_1__ctor_m2DE912DF90D32913EC3C63702DDF7FEB2A959A61(L_3, AppCenterTask_1__ctor_m2DE912DF90D32913EC3C63702DDF7FEB2A959A61_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___stringTask_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___stringTask_0), (void*)L_3);
		// installIdTask.ContinueWith(t =>
		// {
		//     var installId = t.Result?.ToString();
		//     stringTask.SetResult(installId);
		// });
		U3CU3Ec__DisplayClass17_0_t7B6288E3315E7FBD6CC04CDAD0867E254751558A* L_4 = V_0;
		Action_1_t3D17A7F3B03B425D57654BAC0A572CCC94552120* L_5 = (Action_1_t3D17A7F3B03B425D57654BAC0A572CCC94552120*)il2cpp_codegen_object_new(Action_1_t3D17A7F3B03B425D57654BAC0A572CCC94552120_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m31871A4A384D1DA4C34C6706F2E91F393BBA0F8D(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass17_0_U3CGetInstallIdAsyncU3Eb__0_m531818B791314B962EF85AC42D00DE2D6CC6976A_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = Task_1_ContinueWith_mD999084597085FBDB73C538D8D5A74EBE54B1CD5(L_1, L_5, Task_1_ContinueWith_mD999084597085FBDB73C538D8D5A74EBE54B1CD5_RuntimeMethod_var);
		// return stringTask;
		U3CU3Ec__DisplayClass17_0_t7B6288E3315E7FBD6CC04CDAD0867E254751558A* L_7 = V_0;
		NullCheck(L_7);
		AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* L_8 = L_7->___stringTask_0;
		return L_8;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::SetWrapperSdk(System.String,System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_SetWrapperSdk_mDE3A46D242FD823664A2FBEC6D1F9198ACC642B7 (String_t* ___wrapperSdkVersion0, String_t* ___wrapperSdkName1, String_t* ___wrapperRuntimeVersion2, String_t* ___liveUpdateReleaseLabel3, String_t* ___liveUpdateDeploymentKey4, String_t* ___liveUpdatePackageHash5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrapperSdk_tECB9236A440301E3EE2E2B3C8A3EBE48DCC28B31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Prepare();
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_Prepare_mDF4F0A78C59489005EDD98C7F2C7E7AC9D39AF6D(NULL);
		// var wrapperSdk = new Microsoft.AppCenter.WrapperSdk(wrapperSdkName, wrapperSdkVersion, wrapperRuntimeVersion, liveUpdateReleaseLabel, liveUpdateDeploymentKey, liveUpdatePackageHash);
		String_t* L_0 = ___wrapperSdkName1;
		String_t* L_1 = ___wrapperSdkVersion0;
		String_t* L_2 = ___wrapperRuntimeVersion2;
		String_t* L_3 = ___liveUpdateReleaseLabel3;
		String_t* L_4 = ___liveUpdateDeploymentKey4;
		String_t* L_5 = ___liveUpdatePackageHash5;
		WrapperSdk_tECB9236A440301E3EE2E2B3C8A3EBE48DCC28B31* L_6 = (WrapperSdk_tECB9236A440301E3EE2E2B3C8A3EBE48DCC28B31*)il2cpp_codegen_object_new(WrapperSdk_tECB9236A440301E3EE2E2B3C8A3EBE48DCC28B31_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WrapperSdk__ctor_mC742F8F6089461EBA19F2BA3CF0727BECFF06921(L_6, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// UWPAppCenter.SetWrapperSdk(wrapperSdk);
		il2cpp_codegen_runtime_class_init_inline(AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		AppCenter_SetWrapperSdk_m95F638F0F52661CE86AD0FC2D36B76B0E787F05E(L_6, NULL);
		// }
		return;
	}
}
// System.Int32 Microsoft.AppCenter.Unity.Internal.AppCenterInternal::LogLevelToUnity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppCenterInternal_LogLevelToUnity_m65D599FE9AC9F82DB419DED3B4C361B2B5B2FEDB (int32_t ___logLevel0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch ((Microsoft.AppCenter.LogLevel)logLevel)
		int32_t L_0 = ___logLevel0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_002a;
			}
			case 3:
			{
				goto IL_002c;
			}
			case 4:
			{
				goto IL_002e;
			}
			case 5:
			{
				goto IL_0030;
			}
			case 6:
			{
				goto IL_0032;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0026:
	{
		// return (int)Microsoft.AppCenter.Unity.LogLevel.Verbose;
		return 2;
	}

IL_0028:
	{
		// return (int)Microsoft.AppCenter.Unity.LogLevel.Debug;
		return 3;
	}

IL_002a:
	{
		// return (int)Microsoft.AppCenter.Unity.LogLevel.Info;
		return 4;
	}

IL_002c:
	{
		// return (int)Microsoft.AppCenter.Unity.LogLevel.Warn;
		return 5;
	}

IL_002e:
	{
		// return (int)Microsoft.AppCenter.Unity.LogLevel.Error;
		return 6;
	}

IL_0030:
	{
		// return (int)Microsoft.AppCenter.Unity.LogLevel.Assert;
		return 7;
	}

IL_0032:
	{
		// return (int)Microsoft.AppCenter.Unity.LogLevel.None;
		return 8;
	}

IL_0034:
	{
		// return logLevel;
		int32_t L_2 = ___logLevel0;
		return L_2;
	}
}
// Microsoft.AppCenter.LogLevel Microsoft.AppCenter.Unity.Internal.AppCenterInternal::LogLevelFromUnity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppCenterInternal_LogLevelFromUnity_m49E5D455A83742CCF6DFE521955ED7F3C17635D0 (int32_t ___logLevel0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch ((Microsoft.AppCenter.Unity.LogLevel)logLevel)
		int32_t L_0 = ___logLevel0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 2)))
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_002e;
			}
			case 4:
			{
				goto IL_0030;
			}
			case 5:
			{
				goto IL_0032;
			}
			case 6:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_0036;
	}

IL_0028:
	{
		// return Microsoft.AppCenter.LogLevel.Verbose;
		return (int32_t)(0);
	}

IL_002a:
	{
		// return Microsoft.AppCenter.LogLevel.Debug;
		return (int32_t)(1);
	}

IL_002c:
	{
		// return Microsoft.AppCenter.LogLevel.Info;
		return (int32_t)(2);
	}

IL_002e:
	{
		// return Microsoft.AppCenter.LogLevel.Warn;
		return (int32_t)(3);
	}

IL_0030:
	{
		// return Microsoft.AppCenter.LogLevel.Error;
		return (int32_t)(4);
	}

IL_0032:
	{
		// return Microsoft.AppCenter.LogLevel.Assert;
		return (int32_t)(5);
	}

IL_0034:
	{
		// return Microsoft.AppCenter.LogLevel.None;
		return (int32_t)(6);
	}

IL_0036:
	{
		// return (Microsoft.AppCenter.LogLevel)logLevel;
		int32_t L_2 = ___logLevel0;
		return (int32_t)(L_2);
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::StartFromLibrary(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_StartFromLibrary_m261F19418F4FDC01986128280FF6FE2BAD21E59C (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___services0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Type[] Microsoft.AppCenter.Unity.Internal.AppCenterInternal::ServicesToNativeTypes(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* AppCenterInternal_ServicesToNativeTypes_m322BAE569A0BA5B663CC8BD32DEDFE4BBBF51035 (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___services0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mAF39173491C493DC9C643F76BC50C311070BEE56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960F467686B419FB4E398CEBCF39AF7A4A7C488E);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* V_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var nativeTypes = new List<Type>();
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_0 = (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)il2cpp_codegen_object_new(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69(L_0, List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var service in services)
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = ___services0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_002e;
	}

IL_000c:
	{
		// foreach (var service in services)
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Type_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// service.GetMethod("AddNativeType").Invoke(null, new object[] { nativeTypes });
		NullCheck(L_5);
		MethodInfo_t* L_6;
		L_6 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_5, _stringLiteral960F467686B419FB4E398CEBCF39AF7A4A7C488E, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_9 = V_0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		NullCheck(L_6);
		RuntimeObject* L_10;
		L_10 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_6, NULL, L_8, NULL);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002e:
	{
		// foreach (var service in services)
		int32_t L_12 = V_2;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// return nativeTypes.ToArray();
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_14 = V_0;
		NullCheck(L_14);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_15;
		L_15 = List_1_ToArray_mAF39173491C493DC9C643F76BC50C311070BEE56(L_14, List_1_ToArray_mAF39173491C493DC9C643F76BC50C311070BEE56_RuntimeMethod_var);
		return L_15;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::SetMaxStorageSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_SetMaxStorageSize_mA959575D65A120E096CB1EFBE6B956F305083DBE (int64_t ___size0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Prepare();
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		AppCenterInternal_Prepare_mDF4F0A78C59489005EDD98C7F2C7E7AC9D39AF6D(NULL);
		// UWPAppCenter.SetMaxStorageSizeAsync(size);
		int64_t L_0 = ___size0;
		il2cpp_codegen_runtime_class_init_inline(AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_1;
		L_1 = AppCenter_SetMaxStorageSizeAsync_mB263A22BE72E30B85310CED6E4276388DF3ABD7E(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal_Prepare_mDF4F0A78C59489005EDD98C7F2C7E7AC9D39AF6D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceInformationHelper_t5E1CED181AF763E4029CA7220F41B8777A7DD155_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityApplicationSettingsFactory_t08F1EC52F5EFAB3E39543A2E3FD9926E44BCF314_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityScreenSizeProviderFactory_tB85C15DE74D726E03FD34EF2B6CD2CD08CD854F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (_lockObject)
		il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var))->____lockObject_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0046;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0046:
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
				// if (!_prepared)
				il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
				bool L_4 = ((AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var))->____prepared_0;
				if (L_4)
				{
					goto IL_003b_1;
				}
			}
			{
				// UnityScreenSizeProvider.Initialize();
				il2cpp_codegen_runtime_class_init_inline(UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var);
				UnityScreenSizeProvider_Initialize_m7B263E8738DF0A9DE52B75F423D0074A22541D42(NULL);
				// DeviceInformationHelper.SetScreenSizeProviderFactory(new UnityScreenSizeProviderFactory());
				UnityScreenSizeProviderFactory_tB85C15DE74D726E03FD34EF2B6CD2CD08CD854F9* L_5 = (UnityScreenSizeProviderFactory_tB85C15DE74D726E03FD34EF2B6CD2CD08CD854F9*)il2cpp_codegen_object_new(UnityScreenSizeProviderFactory_tB85C15DE74D726E03FD34EF2B6CD2CD08CD854F9_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				UnityScreenSizeProviderFactory__ctor_m14DE88813A9F0EEE6CC1A8DE73A086A534D9BAD6(L_5, NULL);
				il2cpp_codegen_runtime_class_init_inline(DeviceInformationHelper_t5E1CED181AF763E4029CA7220F41B8777A7DD155_il2cpp_TypeInfo_var);
				DeviceInformationHelper_SetScreenSizeProviderFactory_m7BA3D4C034661C5016D8FE3C3D64B5293452FC8E(L_5, NULL);
				// UnityApplicationSettings.Initialize();
				il2cpp_codegen_runtime_class_init_inline(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var);
				UnityApplicationSettings_Initialize_mE440CB936EB4EC29557B73DF1632F37D3D453260(NULL);
				// UWPAppCenter.SetApplicationSettingsFactory(new UnityApplicationSettingsFactory());
				UnityApplicationSettingsFactory_t08F1EC52F5EFAB3E39543A2E3FD9926E44BCF314* L_6 = (UnityApplicationSettingsFactory_t08F1EC52F5EFAB3E39543A2E3FD9926E44BCF314*)il2cpp_codegen_object_new(UnityApplicationSettingsFactory_t08F1EC52F5EFAB3E39543A2E3FD9926E44BCF314_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				UnityApplicationSettingsFactory__ctor_m125CBC8AD6518D503BB8076E05CA8AAA2D7BB09E(L_6, NULL);
				il2cpp_codegen_runtime_class_init_inline(AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
				AppCenter_SetApplicationSettingsFactory_m40D0E075E32FE2CADE6BB2F09E02A690F53D245D(L_6, NULL);
				// _prepared = true;
				il2cpp_codegen_runtime_class_init_inline(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
				((AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var))->____prepared_0 = (bool)1;
			}

IL_003b_1:
			{
				// }
				goto IL_0047;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal__ctor_m4AD20CE92722151285BB775ACD95CD419320AF57 (AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterInternal__cctor_m229905AC77FB5D816FB6AA05BC05E37FC8449170 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool _prepared = false;
		((AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var))->____prepared_0 = (bool)0;
		// private static object _lockObject = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var))->____lockObject_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterInternal_t1D1B657E177F07EB7CDBB2302A6990B3B867BEFF_il2cpp_TypeInfo_var))->____lockObject_1), (void*)L_0);
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
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m856B1384E16F131442AC565B73BA748764165E0E (U3CU3Ec__DisplayClass17_0_t7B6288E3315E7FBD6CC04CDAD0867E254751558A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.AppCenterInternal/<>c__DisplayClass17_0::<GetInstallIdAsync>b__0(System.Threading.Tasks.Task`1<System.Nullable`1<System.Guid>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3CGetInstallIdAsyncU3Eb__0_m531818B791314B962EF85AC42D00DE2D6CC6976A (U3CU3Ec__DisplayClass17_0_t7B6288E3315E7FBD6CC04CDAD0867E254751558A* __this, Task_1_tF538A43CA1B31CD07E6A7AB3C10B4A8CF70228D6* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_SetResult_mDCC3C8BB562D7857B003F5C88956D7C3C41FDCF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mC6EDE8162AB388B6482F745FF996B594ACC373AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mA4048346752BF05849998E450987EB444BE2AD63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_mBBDAAE00353EA3E045503F629D77F8A7B0C43D32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Guid_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7* G_B2_0 = NULL;
	Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// var installId = t.Result?.ToString();
		Task_1_tF538A43CA1B31CD07E6A7AB3C10B4A8CF70228D6* L_0 = ___t0;
		NullCheck(L_0);
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_1;
		L_1 = Task_1_get_Result_mBBDAAE00353EA3E045503F629D77F8A7B0C43D32(L_0, Task_1_get_Result_mBBDAAE00353EA3E045503F629D77F8A7B0C43D32_RuntimeMethod_var);
		V_1 = L_1;
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7* L_2 = (&V_1);
		bool L_3;
		L_3 = Nullable_1_get_HasValue_mA4048346752BF05849998E450987EB444BE2AD63_inline(L_2, Nullable_1_get_HasValue_mA4048346752BF05849998E450987EB444BE2AD63_RuntimeMethod_var);
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0028;
	}

IL_0015:
	{
		Guid_t L_4;
		L_4 = Nullable_1_GetValueOrDefault_mC6EDE8162AB388B6482F745FF996B594ACC373AC_inline(G_B2_0, Nullable_1_GetValueOrDefault_mC6EDE8162AB388B6482F745FF996B594ACC373AC_RuntimeMethod_var);
		V_2 = L_4;
		String_t* L_5;
		L_5 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_2), NULL);
		G_B3_0 = L_5;
	}

IL_0028:
	{
		V_0 = G_B3_0;
		// stringTask.SetResult(installId);
		AppCenterTask_1_t418311D913DC61E0C6E649AE0A386B3D9EBABC94* L_6 = __this->___stringTask_0;
		String_t* L_7 = V_0;
		NullCheck(L_6);
		AppCenterTask_1_SetResult_mDCC3C8BB562D7857B003F5C88956D7C3C41FDCF7(L_6, L_7, AppCenterTask_1_SetResult_mDCC3C8BB562D7857B003F5C88956D7C3C41FDCF7_RuntimeMethod_var);
		// });
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
// Microsoft.AppCenter.Unity.Internal.Utils.UnityCoroutineHelper Microsoft.AppCenter.Unity.Internal.Utils.UnityCoroutineHelper::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118* UnityCoroutineHelper_get_Instance_mCFCE30AEDC2C7971D55733D8DB995CCD5F0289B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118_mE325A615D9682C02060763EF7C2A24C3C0DEBDFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisUnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118_m274204CBBE40669EDDC0D91E7C45D3378F879CC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47641359241938A271986FDB45287C9F5F9EF71A);
		s_Il2CppMethodInitialized = true;
	}
	UnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118* V_0 = NULL;
	{
		// var instance = FindObjectOfType<UnityCoroutineHelper>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		UnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118* L_0;
		L_0 = Object_FindObjectOfType_TisUnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118_m274204CBBE40669EDDC0D91E7C45D3378F879CC9(Object_FindObjectOfType_TisUnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118_m274204CBBE40669EDDC0D91E7C45D3378F879CC9_RuntimeMethod_var);
		V_0 = L_0;
		// if (instance == null)
		UnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118* L_1 = V_0;
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// var gameObject = new GameObject("App Center Helper")
		// {
		//     hideFlags = HideFlags.HideAndDontSave
		// };
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteral47641359241938A271986FDB45287C9F5F9EF71A, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_5, NULL);
		// instance = gameObject.AddComponent<UnityCoroutineHelper>();
		NullCheck(L_5);
		UnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118* L_6;
		L_6 = GameObject_AddComponent_TisUnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118_mE325A615D9682C02060763EF7C2A24C3C0DEBDFA(L_5, GameObject_AddComponent_TisUnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118_mE325A615D9682C02060763EF7C2A24C3C0DEBDFA_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_002d:
	{
		// return instance;
		UnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118* L_7 = V_0;
		return L_7;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityCoroutineHelper::StartCoroutine(System.Func`1<System.Collections.IEnumerator>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityCoroutineHelper_StartCoroutine_m58CF612097F020F1B5EE3A0A098F9F4FA1C98B81 (Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* ___coroutine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCallbackItem_t8F547FBF833801E6B146C645D74B8BCAAFD6B9AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CStartCoroutineU3Eb__0_m96FD6E2DE2902064DBA740E143A1FDC82006B60E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tD61BD08ED3DE5B400CF1A9F2AC443555AD943384_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tD61BD08ED3DE5B400CF1A9F2AC443555AD943384* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_tD61BD08ED3DE5B400CF1A9F2AC443555AD943384* L_0 = (U3CU3Ec__DisplayClass2_0_tD61BD08ED3DE5B400CF1A9F2AC443555AD943384*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tD61BD08ED3DE5B400CF1A9F2AC443555AD943384_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m17568411E7FBE42B56D452F8DBB508D7160126CA(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tD61BD08ED3DE5B400CF1A9F2AC443555AD943384* L_1 = V_0;
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_2 = ___coroutine0;
		NullCheck(L_1);
		L_1->___coroutine_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___coroutine_0), (void*)L_2);
		// if (WSAApplication.RunningOnAppThread())
		bool L_3;
		L_3 = Application_RunningOnAppThread_mCFBD810100F24F07A00B6F37221609D111AE8DE8(NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// Instance.StartCoroutine(coroutine());
		UnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118* L_4;
		L_4 = UnityCoroutineHelper_get_Instance_mCFCE30AEDC2C7971D55733D8DB995CCD5F0289B3(NULL);
		U3CU3Ec__DisplayClass2_0_tD61BD08ED3DE5B400CF1A9F2AC443555AD943384* L_5 = V_0;
		NullCheck(L_5);
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_6 = L_5->___coroutine_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = Func_1_Invoke_mC8C2E075F688B1F6C0700B6DD0147A02A7AC1672_inline(L_6, NULL);
		NullCheck(L_4);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_4, L_7, NULL);
		return;
	}

IL_002b:
	{
		// WSAApplication.InvokeOnAppThread(() =>
		// {
		//     Instance.StartCoroutine(coroutine());
		// }, false);
		U3CU3Ec__DisplayClass2_0_tD61BD08ED3DE5B400CF1A9F2AC443555AD943384* L_9 = V_0;
		AppCallbackItem_t8F547FBF833801E6B146C645D74B8BCAAFD6B9AB* L_10 = (AppCallbackItem_t8F547FBF833801E6B146C645D74B8BCAAFD6B9AB*)il2cpp_codegen_object_new(AppCallbackItem_t8F547FBF833801E6B146C645D74B8BCAAFD6B9AB_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		AppCallbackItem__ctor_m80B06333902B113393593934CAF0B6BAC3294CDA(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CStartCoroutineU3Eb__0_m96FD6E2DE2902064DBA740E143A1FDC82006B60E_RuntimeMethod_var), NULL);
		Application_InvokeOnAppThread_m3753BD615455BB7B199994834AA2640286674B41(L_10, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityCoroutineHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityCoroutineHelper__ctor_m5D8B00C19578E3713F0B1C9D4B660D8B97953974 (UnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityCoroutineHelper/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m17568411E7FBE42B56D452F8DBB508D7160126CA (U3CU3Ec__DisplayClass2_0_tD61BD08ED3DE5B400CF1A9F2AC443555AD943384* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityCoroutineHelper/<>c__DisplayClass2_0::<StartCoroutine>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CStartCoroutineU3Eb__0_m96FD6E2DE2902064DBA740E143A1FDC82006B60E (U3CU3Ec__DisplayClass2_0_tD61BD08ED3DE5B400CF1A9F2AC443555AD943384* __this, const RuntimeMethod* method) 
{
	{
		// Instance.StartCoroutine(coroutine());
		UnityCoroutineHelper_t9FFC8E942AD1E9339494176B8FB4CF35F9528118* L_0;
		L_0 = UnityCoroutineHelper_get_Instance_mCFCE30AEDC2C7971D55733D8DB995CCD5F0289B3(NULL);
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_1 = __this->___coroutine_0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Func_1_Invoke_mC8C2E075F688B1F6C0700B6DD0147A02A7AC1672_inline(L_1, NULL);
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_2, NULL);
		// }, false);
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
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings::SetValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityApplicationSettings_SetValue_m1D84FF152AB28DFC746EF7D3478E55C44F1CBCA8 (UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (_lockObject)
		il2cpp_codegen_runtime_class_init_inline(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_StaticFields*)il2cpp_codegen_static_fields_for(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var))->____lockObject_1;
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
			// _current[key] = value;
			il2cpp_codegen_runtime_class_init_inline(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var);
			RuntimeObject* L_4 = ((UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_StaticFields*)il2cpp_codegen_static_fields_for(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var))->____current_2;
			String_t* L_5 = ___key0;
			RuntimeObject* L_6 = ___value1;
			NullCheck(L_4);
			InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_4, L_5, L_6);
			// _dirty = true;
			((UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_StaticFields*)il2cpp_codegen_static_fields_for(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var))->____dirty_3 = (bool)1;
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings::ContainsKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityApplicationSettings_ContainsKey_m3C6D75DE7FD67F0C4EB5520F3E5EBC5E62E8C98D (UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (_lockObject)
		il2cpp_codegen_runtime_class_init_inline(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_StaticFields*)il2cpp_codegen_static_fields_for(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var))->____lockObject_1;
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
			// return _current.ContainsKey(key);
			il2cpp_codegen_runtime_class_init_inline(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var);
			RuntimeObject* L_4 = ((UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_StaticFields*)il2cpp_codegen_static_fields_for(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var))->____current_2;
			String_t* L_5 = ___key0;
			NullCheck(L_4);
			bool L_6;
			L_6 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::ContainsKey(TKey) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_4, L_5);
			V_2 = L_6;
			goto IL_0028;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0028:
	{
		// }
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityApplicationSettings_Remove_mF6804E75639E8F99B14EC315DC4616498D4903C8 (UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (_lockObject)
		il2cpp_codegen_runtime_class_init_inline(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_StaticFields*)il2cpp_codegen_static_fields_for(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var))->____lockObject_1;
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
			// _current.Remove(key);
			il2cpp_codegen_runtime_class_init_inline(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var);
			RuntimeObject* L_4 = ((UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_StaticFields*)il2cpp_codegen_static_fields_for(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var))->____current_2;
			String_t* L_5 = ___key0;
			NullCheck(L_4);
			bool L_6;
			L_6 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::Remove(TKey) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_4, L_5);
			// _dirty = true;
			((UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_StaticFields*)il2cpp_codegen_static_fields_for(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var))->____dirty_3 = (bool)1;
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings::ReadAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityApplicationSettings_ReadAll_m06FF35711208428EB72828E4C8420C033F7253E7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m4E6CF81A3D2231FFE97362398E4A8E43CFE9E8BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7B03CF8C5272BDEFBF0A12AE37C1D117DEA4EF7);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	{
		// var json = PlayerPrefs.GetString(AppCenterSettingsKey, null);
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63(_stringLiteralC7B03CF8C5272BDEFBF0A12AE37C1D117DEA4EF7, (String_t*)NULL, NULL);
		// var settings = JsonConvert.DeserializeObject<Dictionary<string, object>>(json);
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1;
		L_1 = JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m4E6CF81A3D2231FFE97362398E4A8E43CFE9E8BA(L_0, JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m4E6CF81A3D2231FFE97362398E4A8E43CFE9E8BA_RuntimeMethod_var);
		V_0 = L_1;
		// return settings != null ? settings : new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = V_0;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_3, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		return L_3;
	}

IL_001a:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = V_0;
		return L_4;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityApplicationSettings_Initialize_mE440CB936EB4EC29557B73DF1632F37D3D453260 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityApplicationSettings_MainThreadCoroutine_m574687C1E28855F34AED1E0268A16EA77C0F83A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _current = ReadAll();
		il2cpp_codegen_runtime_class_init_inline(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = UnityApplicationSettings_ReadAll_m06FF35711208428EB72828E4C8420C033F7253E7(NULL);
		((UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_StaticFields*)il2cpp_codegen_static_fields_for(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var))->____current_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_StaticFields*)il2cpp_codegen_static_fields_for(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var))->____current_2), (void*)L_0);
		// UnityCoroutineHelper.StartCoroutine(MainThreadCoroutine);
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_1 = (Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941*)il2cpp_codegen_object_new(Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_m46EE8C5F7DAECC4CF1353D682ABEC3A55D0AFAAC(L_1, NULL, (intptr_t)((void*)UnityApplicationSettings_MainThreadCoroutine_m574687C1E28855F34AED1E0268A16EA77C0F83A2_RuntimeMethod_var), NULL);
		UnityCoroutineHelper_StartCoroutine_m58CF612097F020F1B5EE3A0A098F9F4FA1C98B81(L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings::MainThreadCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityApplicationSettings_MainThreadCoroutine_m574687C1E28855F34AED1E0268A16EA77C0F83A2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMainThreadCoroutineU3Ed__10_t0AA9E98CB6DD6FC8382CE0D587A7F304EB2D4431_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMainThreadCoroutineU3Ed__10_t0AA9E98CB6DD6FC8382CE0D587A7F304EB2D4431* L_0 = (U3CMainThreadCoroutineU3Ed__10_t0AA9E98CB6DD6FC8382CE0D587A7F304EB2D4431*)il2cpp_codegen_object_new(U3CMainThreadCoroutineU3Ed__10_t0AA9E98CB6DD6FC8382CE0D587A7F304EB2D4431_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMainThreadCoroutineU3Ed__10__ctor_m86C909E45236E7BFEB7E6389EC67A629C43233AA(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityApplicationSettings__ctor_mD57C9FBAA61F0E9B7D78B3BC53386B281E5CC7A4 (UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityApplicationSettings__cctor_mAA7D4BC15C9CA2A9A8AB14F1203A8BEC0A337BE3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly object _lockObject = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_StaticFields*)il2cpp_codegen_static_fields_for(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var))->____lockObject_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_StaticFields*)il2cpp_codegen_static_fields_for(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var))->____lockObject_1), (void*)L_0);
		// private static bool _dirty = false;
		((UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_StaticFields*)il2cpp_codegen_static_fields_for(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var))->____dirty_3 = (bool)0;
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
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings/<MainThreadCoroutine>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMainThreadCoroutineU3Ed__10__ctor_m86C909E45236E7BFEB7E6389EC67A629C43233AA (U3CMainThreadCoroutineU3Ed__10_t0AA9E98CB6DD6FC8382CE0D587A7F304EB2D4431* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings/<MainThreadCoroutine>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMainThreadCoroutineU3Ed__10_System_IDisposable_Dispose_mBF56467F4577F712710D454B0DD78DF0A68AA801 (U3CMainThreadCoroutineU3Ed__10_t0AA9E98CB6DD6FC8382CE0D587A7F304EB2D4431* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings/<MainThreadCoroutine>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMainThreadCoroutineU3Ed__10_MoveNext_m88D803D95C77249D4667203889B4DD42864963F9 (U3CMainThreadCoroutineU3Ed__10_t0AA9E98CB6DD6FC8382CE0D587A7F304EB2D4431* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7B03CF8C5272BDEFBF0A12AE37C1D117DEA4EF7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0017:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0027:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (_dirty)
		il2cpp_codegen_runtime_class_init_inline(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var);
		bool L_3 = ((UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_StaticFields*)il2cpp_codegen_static_fields_for(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var))->____dirty_3;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// lock (_lockObject)
		il2cpp_codegen_runtime_class_init_inline(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_StaticFields*)il2cpp_codegen_static_fields_for(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var))->____lockObject_1;
		V_2 = L_4;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0058:
			{// begin finally (depth: 1)
				{
					bool L_5 = V_3;
					if (!L_5)
					{
						goto IL_0061;
					}
				}
				{
					RuntimeObject* L_6 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_6, NULL);
				}

IL_0061:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_7 = V_2;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_7, (&V_3), NULL);
			// json = JsonConvert.SerializeObject(_current);
			il2cpp_codegen_runtime_class_init_inline(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var);
			RuntimeObject* L_8 = ((UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_StaticFields*)il2cpp_codegen_static_fields_for(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var))->____current_2;
			il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
			String_t* L_9;
			L_9 = JsonConvert_SerializeObject_mEF78C5DAFDB944E8E19657EB92F5394370B27CAF(L_8, NULL);
			V_1 = L_9;
			// _dirty = false;
			((UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_StaticFields*)il2cpp_codegen_static_fields_for(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var))->____dirty_3 = (bool)0;
			// }
			goto IL_0062;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0062:
	{
		// PlayerPrefs.SetString(AppCenterSettingsKey, json);
		String_t* L_10 = V_1;
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteralC7B03CF8C5272BDEFBF0A12AE37C1D117DEA4EF7, L_10, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
		// while (true)
		goto IL_0017;
	}
}
// System.Object Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings/<MainThreadCoroutine>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMainThreadCoroutineU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE578DF1ABD2ADCBDBB9D2AA13466BA36C34B775C (U3CMainThreadCoroutineU3Ed__10_t0AA9E98CB6DD6FC8382CE0D587A7F304EB2D4431* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings/<MainThreadCoroutine>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMainThreadCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_m6B38DCFE25D3AE922B53182649FA1846780C9661 (U3CMainThreadCoroutineU3Ed__10_t0AA9E98CB6DD6FC8382CE0D587A7F304EB2D4431* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMainThreadCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_m6B38DCFE25D3AE922B53182649FA1846780C9661_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettings/<MainThreadCoroutine>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMainThreadCoroutineU3Ed__10_System_Collections_IEnumerator_get_Current_m8CC44AE2CD0750474B2166DB9BC792623F9DFBB7 (U3CMainThreadCoroutineU3Ed__10_t0AA9E98CB6DD6FC8382CE0D587A7F304EB2D4431* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// Microsoft.AppCenter.Utils.IApplicationSettings Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettingsFactory::CreateApplicationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityApplicationSettingsFactory_CreateApplicationSettings_mB8EA3EA9A62D957E84313210ED052CD5723D21F0 (UnityApplicationSettingsFactory_t08F1EC52F5EFAB3E39543A2E3FD9926E44BCF314* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityApplicationSettings();
		UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A* L_0 = (UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A*)il2cpp_codegen_object_new(UnityApplicationSettings_tF74FD4A2113885A2C0F76B9153AB5192F505636A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityApplicationSettings__ctor_mD57C9FBAA61F0E9B7D78B3BC53386B281E5CC7A4(L_0, NULL);
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettingsFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityApplicationSettingsFactory__ctor_m125CBC8AD6518D503BB8076E05CA8AAA2D7BB09E (UnityApplicationSettingsFactory_t08F1EC52F5EFAB3E39543A2E3FD9926E44BCF314* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityApplicationSettingsHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityApplicationSettingsHelper__ctor_m4AFEB3F076E6182B6687A990F982FF804664BB43 (UnityApplicationSettingsHelper_t612F24E1389046370CB9FC6B4A01A631B3A798F0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Int32 Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProvider::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityScreenSizeProvider_get_Height_m6165D8BFAECBD819D5FE67AA92E8D0BFD4B11ED6 (UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override int Height => _height;
		il2cpp_codegen_runtime_class_init_inline(UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var);
		int32_t L_0 = ((UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_StaticFields*)il2cpp_codegen_static_fields_for(UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var))->____height_0;
		return L_0;
	}
}
// System.Int32 Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProvider::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityScreenSizeProvider_get_Width_m4E7410056FFF53B5784D0308AD93EC2680BA3484 (UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override int Width => _width;
		il2cpp_codegen_runtime_class_init_inline(UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var);
		int32_t L_0 = ((UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_StaticFields*)il2cpp_codegen_static_fields_for(UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var))->____width_1;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProvider::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityScreenSizeProvider_Initialize_m7B263E8738DF0A9DE52B75F423D0074A22541D42 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _height = Screen.currentResolution.height;
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 L_0;
		L_0 = Screen_get_currentResolution_mDA9FEB72E2C16BD66D709E94CD9504BF7CAC899E(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Resolution_get_height_mD46754FA3634CA816BE91D1610D1FEBDECCEBE5B((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var);
		((UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_StaticFields*)il2cpp_codegen_static_fields_for(UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var))->____height_0 = L_1;
		// _width = Screen.currentResolution.width;
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 L_2;
		L_2 = Screen_get_currentResolution_mDA9FEB72E2C16BD66D709E94CD9504BF7CAC899E(NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Resolution_get_width_mC55423852D453EEC0B66E692AA3E7F5DE772FB24((&V_0), NULL);
		((UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_StaticFields*)il2cpp_codegen_static_fields_for(UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var))->____width_1 = L_3;
		// _initializationTaskSource.SetResult(true);
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_4 = ((UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_StaticFields*)il2cpp_codegen_static_fields_for(UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var))->____initializationTaskSource_2;
		NullCheck(L_4);
		TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448(L_4, (bool)1, TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProvider::add_ScreenSizeChanged(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityScreenSizeProvider_add_ScreenSizeChanged_m64A6C5A30F12986A39836824C89F9C54E7E48BCD (UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___ScreenSizeChanged_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___ScreenSizeChanged_3);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProvider::remove_ScreenSizeChanged(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityScreenSizeProvider_remove_ScreenSizeChanged_mA7A799CC2A6291AF664A03283363418365E5F217 (UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___ScreenSizeChanged_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___ScreenSizeChanged_3);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProvider::WaitUntilReadyAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnityScreenSizeProvider_WaitUntilReadyAsync_mDB29161C6F01D45587DD7DE950699F926319C353 (UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _initializationTaskSource.Task;
		il2cpp_codegen_runtime_class_init_inline(UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var);
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_0 = ((UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_StaticFields*)il2cpp_codegen_static_fields_for(UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var))->____initializationTaskSource_2;
		NullCheck(L_0);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_1;
		L_1 = TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline(L_0, TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityScreenSizeProvider__ctor_m54E1B8A72B53DA038D1E347341660624D72154FF (UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9* __this, const RuntimeMethod* method) 
{
	{
		ScreenSizeProviderBase__ctor_mBF631AD794FC3247CBE4B5AFA372D27C2D498B43(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityScreenSizeProvider__cctor_m3582D0E96C4BAD9F33207005969F6463DFB0A8F2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static TaskCompletionSource<bool> _initializationTaskSource = new TaskCompletionSource<bool>();
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_0 = (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*)il2cpp_codegen_object_new(TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646(L_0, TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		((UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_StaticFields*)il2cpp_codegen_static_fields_for(UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var))->____initializationTaskSource_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_StaticFields*)il2cpp_codegen_static_fields_for(UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var))->____initializationTaskSource_2), (void*)L_0);
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
// Microsoft.AppCenter.Utils.IScreenSizeProvider Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProviderFactory::CreateScreenSizeProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityScreenSizeProviderFactory_CreateScreenSizeProvider_mC12354ED3CB6EA1B8B88622B3ABE2A6AE024167C (UnityScreenSizeProviderFactory_tB85C15DE74D726E03FD34EF2B6CD2CD08CD854F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityScreenSizeProvider();
		UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9* L_0 = (UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9*)il2cpp_codegen_object_new(UnityScreenSizeProvider_t3FAC7B290AD499B374C5E30B9550D9302A6908F9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityScreenSizeProvider__ctor_m54E1B8A72B53DA038D1E347341660624D72154FF(L_0, NULL);
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Internal.Utils.UnityScreenSizeProviderFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityScreenSizeProviderFactory__ctor_m14DE88813A9F0EEE6CC1A8DE73A086A534D9BAD6 (UnityScreenSizeProviderFactory_tB85C15DE74D726E03FD34EF2B6CD2CD08CD854F9* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.AppCenter.Unity.Analytics.Analytics::PrepareEventHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_PrepareEventHandlers_m7054F6C1DA174D0A4CD0D52C58A31AC861A767C1 (const RuntimeMethod* method) 
{
	{
		// AnalyticsInternal.PrepareEventHandlers();
		AnalyticsInternal_PrepareEventHandlers_mF9392F1E0177EE2A61CADBD5665E158BE9E71474(NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Analytics::AddNativeType(System.Collections.Generic.List`1<System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_AddNativeType_m5073792C12F4993E9660878AAD94DA6E91FB260E (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___nativeTypes0, const RuntimeMethod* method) 
{
	{
		// AnalyticsInternal.AddNativeType(nativeTypes);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_0 = ___nativeTypes0;
		AnalyticsInternal_AddNativeType_m0DE0BF0CA61373D251CA124CFFA6385E6AC262C9(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Analytics::TrackEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_TrackEvent_mFC9453A22DEB7BEE922B5F439280CE4F3EACA0EA (String_t* ___eventName0, const RuntimeMethod* method) 
{
	{
		// AnalyticsInternal.TrackEvent(eventName);
		String_t* L_0 = ___eventName0;
		AnalyticsInternal_TrackEvent_mAAEF640122152A8DE8B158FEA21F9956CFBB36B4(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Analytics::TrackEvent(System.String,Microsoft.AppCenter.Unity.Analytics.Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_TrackEvent_mBE445D0DA215CC815BA6B34392F9BF97910969EC (String_t* ___eventName0, int32_t ___flags1, const RuntimeMethod* method) 
{
	{
		// AnalyticsInternal.TrackEvent(eventName, (int)flags);
		String_t* L_0 = ___eventName0;
		int32_t L_1 = ___flags1;
		AnalyticsInternal_TrackEvent_m6E6FD7BF8F55E9377016A4C4CEB8BE7FC3D2382B(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Analytics::TrackEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_TrackEvent_mCB30831F009E7009229D32FBC56355979DF8652E (String_t* ___eventName0, RuntimeObject* ___properties1, const RuntimeMethod* method) 
{
	{
		// if (properties == null)
		RuntimeObject* L_0 = ___properties1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// TrackEvent(eventName);
		String_t* L_1 = ___eventName0;
		Analytics_TrackEvent_mFC9453A22DEB7BEE922B5F439280CE4F3EACA0EA(L_1, NULL);
		return;
	}

IL_000a:
	{
		// AnalyticsInternal.TrackEventWithProperties(eventName, properties);
		String_t* L_2 = ___eventName0;
		RuntimeObject* L_3 = ___properties1;
		AnalyticsInternal_TrackEventWithProperties_m3A521BC88D31D108F86AE290C74C19806027656F(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Analytics::TrackEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,Microsoft.AppCenter.Unity.Analytics.Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_TrackEvent_m001792B3774B8265253B73F5CCDC9027F2424801 (String_t* ___eventName0, RuntimeObject* ___properties1, int32_t ___flags2, const RuntimeMethod* method) 
{
	{
		// if (properties == null)
		RuntimeObject* L_0 = ___properties1;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// TrackEvent(eventName, flags);
		String_t* L_1 = ___eventName0;
		int32_t L_2 = ___flags2;
		Analytics_TrackEvent_mBE445D0DA215CC815BA6B34392F9BF97910969EC(L_1, L_2, NULL);
		return;
	}

IL_000b:
	{
		// AnalyticsInternal.TrackEventWithProperties(eventName, properties, (int)flags);
		String_t* L_3 = ___eventName0;
		RuntimeObject* L_4 = ___properties1;
		int32_t L_5 = ___flags2;
		AnalyticsInternal_TrackEventWithProperties_m81AC9AA7E3C6B64910CF59280309143033CAFDD4(L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Analytics::TrackEvent(System.String,Microsoft.AppCenter.Unity.Analytics.EventProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_TrackEvent_m82E0F751EEF1CBF055FCECF64C33F625A9233871 (String_t* ___eventName0, EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* ___properties1, const RuntimeMethod* method) 
{
	{
		// if (properties == null)
		EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* L_0 = ___properties1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// TrackEvent(eventName);
		String_t* L_1 = ___eventName0;
		Analytics_TrackEvent_mFC9453A22DEB7BEE922B5F439280CE4F3EACA0EA(L_1, NULL);
		return;
	}

IL_000a:
	{
		// AnalyticsInternal.TrackEventWithProperties(eventName, properties);
		String_t* L_2 = ___eventName0;
		EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* L_3 = ___properties1;
		AnalyticsInternal_TrackEventWithProperties_m28AE31247C9B500A5C08BED07884A9CFE8E5AB6C(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Analytics::TrackEvent(System.String,Microsoft.AppCenter.Unity.Analytics.EventProperties,Microsoft.AppCenter.Unity.Analytics.Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_TrackEvent_m3308E83E7C224F824360CB7C26E9B5B6F8B5E6BF (String_t* ___eventName0, EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* ___properties1, int32_t ___flags2, const RuntimeMethod* method) 
{
	{
		// if (properties == null)
		EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* L_0 = ___properties1;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// TrackEvent(eventName, flags);
		String_t* L_1 = ___eventName0;
		int32_t L_2 = ___flags2;
		Analytics_TrackEvent_mBE445D0DA215CC815BA6B34392F9BF97910969EC(L_1, L_2, NULL);
		return;
	}

IL_000b:
	{
		// AnalyticsInternal.TrackEventWithProperties(eventName, properties, (int)flags);
		String_t* L_3 = ___eventName0;
		EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* L_4 = ___properties1;
		int32_t L_5 = ___flags2;
		AnalyticsInternal_TrackEventWithProperties_m56AB45DD408C66E58208924EEC7687F91DC13245(L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.Analytics.Analytics::IsEnabledAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* Analytics_IsEnabledAsync_m98C9BDCDFFE5B14B6AC65E9C83C09F00AA5032B5 (const RuntimeMethod* method) 
{
	{
		// return AnalyticsInternal.IsEnabledAsync();
		AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* L_0;
		L_0 = AnalyticsInternal_IsEnabledAsync_m2C840BA5DADA7AEEA977FB8133EEF8C1DFC20D36(NULL);
		return L_0;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask Microsoft.AppCenter.Unity.Analytics.Analytics::SetEnabledAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* Analytics_SetEnabledAsync_mDE74AB7B9A82A1309D49B9F987157E5750B408E7 (bool ___enabled0, const RuntimeMethod* method) 
{
	{
		// return AnalyticsInternal.SetEnabledAsync(enabled);
		bool L_0 = ___enabled0;
		AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* L_1;
		L_1 = AnalyticsInternal_SetEnabledAsync_mC1D761BBA65808E2855B51A8921644522AB53C03(L_0, NULL);
		return L_1;
	}
}
// Microsoft.AppCenter.Unity.Analytics.TransmissionTarget Microsoft.AppCenter.Unity.Analytics.Analytics::GetTransmissionTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* Analytics_GetTransmissionTarget_m1F3270CBA4311B789788AD12F3C41FB48A532630 (String_t* ___transmissionTargetToken0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Type_t* V_1 = NULL;
	{
		// if (string.IsNullOrEmpty(transmissionTargetToken))
		String_t* L_0 = ___transmissionTargetToken0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3*)NULL;
	}

IL_000a:
	{
		// var internalObject = AnalyticsInternal.GetTransmissionTarget(transmissionTargetToken, out success);
		String_t* L_2 = ___transmissionTargetToken0;
		Type_t* L_3;
		L_3 = AnalyticsInternal_GetTransmissionTarget_m97ADABA862EEE168B230BA3CED24F940CB8507D9(L_2, (&V_0), NULL);
		V_1 = L_3;
		// return success ? new TransmissionTarget(internalObject) : null;
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0018;
		}
	}
	{
		return (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3*)NULL;
	}

IL_0018:
	{
		Type_t* L_5 = V_1;
		TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* L_6 = (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3*)il2cpp_codegen_object_new(TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		TransmissionTarget__ctor_m51B8B2F0F5ECCB77841A1A47BF277610F5C79434(L_6, L_5, NULL);
		return L_6;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Analytics::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_Pause_mDCDB97586FFF215F32935EE4318F82DA2C31B7D3 (const RuntimeMethod* method) 
{
	{
		// AnalyticsInternal.Pause();
		AnalyticsInternal_Pause_m2A2FC4CA433C9F0A926455C8A6B45D4D7527953F(NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Analytics::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_Resume_mF2C8F9F3211375BE13ECFFEBB0066464E6939108 (const RuntimeMethod* method) 
{
	{
		// AnalyticsInternal.Resume();
		AnalyticsInternal_Resume_m6C71581DC6702813943B169ADF0FF33587F0AEC9(NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Analytics::EnableManualSessionTracker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_EnableManualSessionTracker_m7B72F4FA40FB8DB645FFEB9AF2732F01F71A9603 (const RuntimeMethod* method) 
{
	{
		// AnalyticsInternal.EnableManualSessionTracker();
		AnalyticsInternal_EnableManualSessionTracker_mF75F47B1732756C81D280EA2A321F26997D5915D(NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Analytics::StartSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_StartSession_mF2536A948789934C5C08DE9B0CA4B189FC339D1E (const RuntimeMethod* method) 
{
	{
		// AnalyticsInternal.StartSession();
		AnalyticsInternal_StartSession_mC76A12257B7ED3105254F03C3BCCCA39CFC61865(NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Analytics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics__ctor_mC9CF7E2C51005A28998A96C8CF9FE330E79428B1 (Analytics_tD265BE413E2757DBA3F7A08B38A5A77063F111F1* __this, const RuntimeMethod* method) 
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
// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.AppCenter.Unity.Analytics.EventProperties::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* EventProperties_GetRawObject_mACB25CE577F07CA6C1A87639D93B1110EFE375E1 (EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* __this, const RuntimeMethod* method) 
{
	{
		// return _rawObject;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____rawObject_0;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.EventProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventProperties__ctor_mBA7A3F67E99AD24C2753B7FE0D02E557E73EDD6F (EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* __this, const RuntimeMethod* method) 
{
	{
		// public EventProperties()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _rawObject = EventPropertiesInternal.Create();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0;
		L_0 = EventPropertiesInternal_Create_m3885816BE0A5B4501C8D3F1A4DB33E4A6FB2CE0D(NULL);
		__this->____rawObject_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rawObject_0), (void*)L_0);
		// }
		return;
	}
}
// Microsoft.AppCenter.Unity.Analytics.EventProperties Microsoft.AppCenter.Unity.Analytics.EventProperties::Set(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* EventProperties_Set_m8E17DEFC66C9AEA478F81854CB65B8DB7E9BEF76 (EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* __this, String_t* ___key0, String_t* ___val1, const RuntimeMethod* method) 
{
	{
		// EventPropertiesInternal.SetString(_rawObject, key, val);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___key0;
		String_t* L_2 = ___val1;
		EventPropertiesInternal_SetString_mC4067EEA3E329D248A9C47F7713E406A3857FD1C(L_0, L_1, L_2, NULL);
		// return this;
		return __this;
	}
}
// Microsoft.AppCenter.Unity.Analytics.EventProperties Microsoft.AppCenter.Unity.Analytics.EventProperties::Set(System.String,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* EventProperties_Set_mA56CE0D436B91874023378BD93D48A440293AC63 (EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* __this, String_t* ___key0, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___val1, const RuntimeMethod* method) 
{
	{
		// EventPropertiesInternal.SetDate(_rawObject, key, val);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___key0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ___val1;
		EventPropertiesInternal_SetDate_m827458E62AFE4E1FA427DD40BF2D39D17951A3C6(L_0, L_1, L_2, NULL);
		// return this;
		return __this;
	}
}
// Microsoft.AppCenter.Unity.Analytics.EventProperties Microsoft.AppCenter.Unity.Analytics.EventProperties::Set(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* EventProperties_Set_mD264833118175146F24B7C6BAFE036A3938C1AC9 (EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* __this, String_t* ___key0, int64_t ___val1, const RuntimeMethod* method) 
{
	{
		// EventPropertiesInternal.SetNumber(_rawObject, key, val);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___key0;
		int64_t L_2 = ___val1;
		EventPropertiesInternal_SetNumber_mFA6EFB6B44BE1749E4A6980385BD21B982EA6009(L_0, L_1, L_2, NULL);
		// return this;
		return __this;
	}
}
// Microsoft.AppCenter.Unity.Analytics.EventProperties Microsoft.AppCenter.Unity.Analytics.EventProperties::Set(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* EventProperties_Set_mCA5933CB89090AE0E7FDD6EF6CFA889872482502 (EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* __this, String_t* ___key0, double ___val1, const RuntimeMethod* method) 
{
	{
		// EventPropertiesInternal.SetNumber(_rawObject, key, val);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___key0;
		double L_2 = ___val1;
		EventPropertiesInternal_SetNumber_mA4FE9048CE236F1443477412E5A18E4FB20F00B6(L_0, L_1, L_2, NULL);
		// return this;
		return __this;
	}
}
// Microsoft.AppCenter.Unity.Analytics.EventProperties Microsoft.AppCenter.Unity.Analytics.EventProperties::Set(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* EventProperties_Set_mDFA829CEC9F744B3FB763FEAC5F85FA026265D2C (EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* __this, String_t* ___key0, bool ___val1, const RuntimeMethod* method) 
{
	{
		// EventPropertiesInternal.SetBool(_rawObject, key, val);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___key0;
		bool L_2 = ___val1;
		EventPropertiesInternal_SetBool_mE854F20974F62AF9869B0EDA11175C8077AF144B(L_0, L_1, L_2, NULL);
		// return this;
		return __this;
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
// System.Object Microsoft.AppCenter.Unity.Analytics.PropertyConfigurator::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyConfigurator_GetRawObject_m2D38BBC773A03C9D6C0E47390A7D0223D40B244E (PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91* __this, const RuntimeMethod* method) 
{
	{
		// return _rawObject;
		RuntimeObject* L_0 = __this->____rawObject_0;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfigurator::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfigurator__ctor_m1C63AF25910E61B21361E1F81AB297A98AE3F8A9 (PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91* __this, RuntimeObject* ___rawObject0, const RuntimeMethod* method) 
{
	{
		// public PropertyConfigurator(RawType rawObject)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _rawObject = rawObject;
		RuntimeObject* L_0 = ___rawObject0;
		__this->____rawObject_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rawObject_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfigurator::SetAppName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfigurator_SetAppName_m50CBD1889C164A13C48E078440589BBD10BDED41 (PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91* __this, String_t* ___appName0, const RuntimeMethod* method) 
{
	{
		// PropertyConfiguratorInternal.SetAppName(_rawObject, appName);
		RuntimeObject* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___appName0;
		PropertyConfiguratorInternal_SetAppName_m90A0380275EE483C44C6271881D45E85BC69D5D2(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfigurator::SetAppVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfigurator_SetAppVersion_mB9A5D9E40181327A10C95819B8CE0070DC005139 (PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91* __this, String_t* ___appVersion0, const RuntimeMethod* method) 
{
	{
		// PropertyConfiguratorInternal.SetAppVersion(_rawObject, appVersion);
		RuntimeObject* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___appVersion0;
		PropertyConfiguratorInternal_SetAppVersion_m2E7D531E19764AC7C1CD07D6B6D22C75697FBC69(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfigurator::SetAppLocale(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfigurator_SetAppLocale_mFA8CC257A0BA7AB029ABDE6330F0C6ACA1719A6A (PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91* __this, String_t* ___appLocale0, const RuntimeMethod* method) 
{
	{
		// PropertyConfiguratorInternal.SetAppLocale(_rawObject, appLocale);
		RuntimeObject* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___appLocale0;
		PropertyConfiguratorInternal_SetAppLocale_mE3BFDB0DD4DD2D7CDDD8DD80027B2A84CEA3FBF6(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfigurator::SetEventProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfigurator_SetEventProperty_mC70510B83B3E288D024FCDF7871AAF412FCA62E2 (PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		// PropertyConfiguratorInternal.SetEventProperty(_rawObject, key, value);
		RuntimeObject* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___key0;
		String_t* L_2 = ___value1;
		PropertyConfiguratorInternal_SetEventProperty_mF5B11F158F9AD8598F1F9C5DA0503D8DA67B3D2F(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfigurator::SetEventProperty(System.String,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfigurator_SetEventProperty_m895066EA2D05E8147AEE4C7A12C595C4E780269F (PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91* __this, String_t* ___key0, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value1, const RuntimeMethod* method) 
{
	{
		// PropertyConfiguratorInternal.SetEventProperty(_rawObject, key, value);
		RuntimeObject* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___key0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ___value1;
		PropertyConfiguratorInternal_SetEventProperty_m92374BC9F683952D2082B582092004DC3A8C2F7C(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfigurator::SetEventProperty(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfigurator_SetEventProperty_mD9073B97059F68DE1B099E8E48E06D56929C7D2D (PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91* __this, String_t* ___key0, int64_t ___value1, const RuntimeMethod* method) 
{
	{
		// PropertyConfiguratorInternal.SetEventProperty(_rawObject, key, value);
		RuntimeObject* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___key0;
		int64_t L_2 = ___value1;
		PropertyConfiguratorInternal_SetEventProperty_mC4392BAFFAC4F49F7D3587F0407A07070875B02B(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfigurator::SetEventProperty(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfigurator_SetEventProperty_mAB1A1ED43731292608419CD45A5372FFBEC2F033 (PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91* __this, String_t* ___key0, double ___value1, const RuntimeMethod* method) 
{
	{
		// PropertyConfiguratorInternal.SetEventProperty(_rawObject, key, value);
		RuntimeObject* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___key0;
		double L_2 = ___value1;
		PropertyConfiguratorInternal_SetEventProperty_mDD1404A5D93FA60751DB9B85793CA420CD3E40F0(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfigurator::SetEventProperty(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfigurator_SetEventProperty_mC3F836D99E30F1C78304DE1F97B70A1847D24554 (PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91* __this, String_t* ___key0, bool ___value1, const RuntimeMethod* method) 
{
	{
		// PropertyConfiguratorInternal.SetEventProperty(_rawObject, key, value);
		RuntimeObject* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___key0;
		bool L_2 = ___value1;
		PropertyConfiguratorInternal_SetEventProperty_m638F6ECC4A2B6A58493AAF0F01188843384F1639(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfigurator::SetUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfigurator_SetUserId_mC8AF0A1E85A86F878037CC86A20926EFA8939DE7 (PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91* __this, String_t* ___userId0, const RuntimeMethod* method) 
{
	{
		// PropertyConfiguratorInternal.SetUserId(_rawObject, userId);
		RuntimeObject* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___userId0;
		PropertyConfiguratorInternal_SetUserId_mEA369FC07403CAF31F260A97E382C3A52E6EFE00(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfigurator::RemoveEventProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfigurator_RemoveEventProperty_m283B65876FB08B5840E4EAECEA432DD7A67D911E (PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	{
		// PropertyConfiguratorInternal.RemoveEventProperty(_rawObject, key);
		RuntimeObject* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___key0;
		PropertyConfiguratorInternal_RemoveEventProperty_mBC9A625CC51FD7D1FF722A644FE17ADE0C6C1DFD(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfigurator::CollectDeviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfigurator_CollectDeviceId_m977AE943E388AC0FEC3767B3D9147DC24509F0BA (PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91* __this, const RuntimeMethod* method) 
{
	{
		// PropertyConfiguratorInternal.CollectDeviceId(_rawObject);
		RuntimeObject* L_0 = __this->____rawObject_0;
		PropertyConfiguratorInternal_CollectDeviceId_m8F7E5A5A5CACA34AC3663E1B2FBC1921C3FFE7C4(L_0, NULL);
		// }
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
// System.Object Microsoft.AppCenter.Unity.Analytics.TransmissionTarget::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransmissionTarget_GetRawObject_m37A0E58E7C142D6F0FD4897DBE952B343E40D980 (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* __this, const RuntimeMethod* method) 
{
	{
		// return _rawObject;
		RuntimeObject* L_0 = __this->____rawObject_0;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTarget::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTarget__ctor_m51B8B2F0F5ECCB77841A1A47BF277610F5C79434 (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* __this, RuntimeObject* ___rawObject0, const RuntimeMethod* method) 
{
	{
		// public TransmissionTarget(RawType rawObject)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _rawObject = rawObject;
		RuntimeObject* L_0 = ___rawObject0;
		__this->____rawObject_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rawObject_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTarget::TrackEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTarget_TrackEvent_m6CD6E663A74756AF656C4376AA2323B86CD1A7CC (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* __this, String_t* ___eventName0, const RuntimeMethod* method) 
{
	{
		// TransmissionTargetInternal.TrackEvent(_rawObject, eventName);
		RuntimeObject* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___eventName0;
		TransmissionTargetInternal_TrackEvent_m11C1137AEAD65689CA05E3AB2C147B190BC428A4(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTarget::TrackEvent(System.String,Microsoft.AppCenter.Unity.Analytics.Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTarget_TrackEvent_m6C308A3963DC9286FA78BC4E68D355CA2F4BABA1 (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* __this, String_t* ___eventName0, int32_t ___flags1, const RuntimeMethod* method) 
{
	{
		// TransmissionTargetInternal.TrackEvent(_rawObject, eventName, (int)flags);
		RuntimeObject* L_0 = __this->____rawObject_0;
		String_t* L_1 = ___eventName0;
		int32_t L_2 = ___flags1;
		TransmissionTargetInternal_TrackEvent_mA4DA02EDC6515EB643CA42F785C9B7810FEE6384(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTarget::TrackEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTarget_TrackEvent_m64D69FB92BE5016007F04C07255E2A22D1AABB3A (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* __this, String_t* ___eventName0, RuntimeObject* ___properties1, const RuntimeMethod* method) 
{
	{
		// if (properties == null)
		RuntimeObject* L_0 = ___properties1;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// TrackEvent(eventName);
		String_t* L_1 = ___eventName0;
		TransmissionTarget_TrackEvent_m6CD6E663A74756AF656C4376AA2323B86CD1A7CC(__this, L_1, NULL);
		return;
	}

IL_000b:
	{
		// TransmissionTargetInternal.TrackEventWithProperties(_rawObject, eventName, properties);
		RuntimeObject* L_2 = __this->____rawObject_0;
		String_t* L_3 = ___eventName0;
		RuntimeObject* L_4 = ___properties1;
		TransmissionTargetInternal_TrackEventWithProperties_mE1F917FB42A09A61B994407F4E758C3F3C319967(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTarget::TrackEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,Microsoft.AppCenter.Unity.Analytics.Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTarget_TrackEvent_m52890A91D4977B367FB52B415B22687DB52A782D (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* __this, String_t* ___eventName0, RuntimeObject* ___properties1, int32_t ___flags2, const RuntimeMethod* method) 
{
	{
		// if (properties == null)
		RuntimeObject* L_0 = ___properties1;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// TrackEvent(eventName, flags);
		String_t* L_1 = ___eventName0;
		int32_t L_2 = ___flags2;
		TransmissionTarget_TrackEvent_m6C308A3963DC9286FA78BC4E68D355CA2F4BABA1(__this, L_1, L_2, NULL);
		return;
	}

IL_000c:
	{
		// TransmissionTargetInternal.TrackEventWithProperties(_rawObject, eventName, properties, (int)flags);
		RuntimeObject* L_3 = __this->____rawObject_0;
		String_t* L_4 = ___eventName0;
		RuntimeObject* L_5 = ___properties1;
		int32_t L_6 = ___flags2;
		TransmissionTargetInternal_TrackEventWithProperties_m6491DEADAC7DEB0972F67C1313D2E97B46D87E4F(L_3, L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTarget::TrackEvent(System.String,Microsoft.AppCenter.Unity.Analytics.EventProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTarget_TrackEvent_m76C8BB457C7219E0344204A425DE0C8F44CA1032 (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* __this, String_t* ___eventName0, EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* ___properties1, const RuntimeMethod* method) 
{
	{
		// if (properties == null)
		EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* L_0 = ___properties1;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// TrackEvent(eventName);
		String_t* L_1 = ___eventName0;
		TransmissionTarget_TrackEvent_m6CD6E663A74756AF656C4376AA2323B86CD1A7CC(__this, L_1, NULL);
		return;
	}

IL_000b:
	{
		// TransmissionTargetInternal.TrackEventWithProperties(_rawObject, eventName, properties);
		RuntimeObject* L_2 = __this->____rawObject_0;
		String_t* L_3 = ___eventName0;
		EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* L_4 = ___properties1;
		TransmissionTargetInternal_TrackEventWithProperties_m6C30B755F48DC734627409BC588B33133C53F8EF(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTarget::TrackEvent(System.String,Microsoft.AppCenter.Unity.Analytics.EventProperties,Microsoft.AppCenter.Unity.Analytics.Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTarget_TrackEvent_m953A15E22306A08E0765B3523E1B53204A92380B (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* __this, String_t* ___eventName0, EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* ___properties1, int32_t ___flags2, const RuntimeMethod* method) 
{
	{
		// if (properties == null)
		EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* L_0 = ___properties1;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// TrackEvent(eventName, flags);
		String_t* L_1 = ___eventName0;
		int32_t L_2 = ___flags2;
		TransmissionTarget_TrackEvent_m6C308A3963DC9286FA78BC4E68D355CA2F4BABA1(__this, L_1, L_2, NULL);
		return;
	}

IL_000c:
	{
		// TransmissionTargetInternal.TrackEventWithProperties(_rawObject, eventName, properties, (int)flags);
		RuntimeObject* L_3 = __this->____rawObject_0;
		String_t* L_4 = ___eventName0;
		EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* L_5 = ___properties1;
		int32_t L_6 = ___flags2;
		TransmissionTargetInternal_TrackEventWithProperties_m1425895D42011E290776AB6843763EC8112675EC(L_3, L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.Analytics.TransmissionTarget::IsEnabledAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* TransmissionTarget_IsEnabledAsync_m6E23267236DF75087BEBA4C444DDA97DF189B2D6 (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* __this, const RuntimeMethod* method) 
{
	{
		// return TransmissionTargetInternal.IsEnabledAsync(_rawObject);
		RuntimeObject* L_0 = __this->____rawObject_0;
		AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* L_1;
		L_1 = TransmissionTargetInternal_IsEnabledAsync_m59AF016AA04F3B9112D7FBF723908C442C02E31A(L_0, NULL);
		return L_1;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask Microsoft.AppCenter.Unity.Analytics.TransmissionTarget::SetEnabledAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* TransmissionTarget_SetEnabledAsync_m90AADD66ECE7CB04C673E145AE746F6EC5F2E686 (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* __this, bool ___enabled0, const RuntimeMethod* method) 
{
	{
		// return TransmissionTargetInternal.SetEnabledAsync(_rawObject, enabled);
		RuntimeObject* L_0 = __this->____rawObject_0;
		bool L_1 = ___enabled0;
		AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* L_2;
		L_2 = TransmissionTargetInternal_SetEnabledAsync_m97608DB06DD5C638968C5D4C7C686532A942D932(L_0, L_1, NULL);
		return L_2;
	}
}
// Microsoft.AppCenter.Unity.Analytics.TransmissionTarget Microsoft.AppCenter.Unity.Analytics.TransmissionTarget::GetTransmissionTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* TransmissionTarget_GetTransmissionTarget_m9DBB26CC14E1A1EE88FDA06E40ECD2999AD4CC74 (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* __this, String_t* ___childTransmissionTargetToken0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TransmissionTargetInternal_tF7CA4859D77A5305C4003B4A8372FF8D0F3E9BC7* V_1 = NULL;
	{
		// if (string.IsNullOrEmpty(childTransmissionTargetToken))
		String_t* L_0 = ___childTransmissionTargetToken0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3*)NULL;
	}

IL_000a:
	{
		// var internalObject = TransmissionTargetInternal.GetTransmissionTarget(_rawObject, childTransmissionTargetToken, out success);
		RuntimeObject* L_2 = __this->____rawObject_0;
		String_t* L_3 = ___childTransmissionTargetToken0;
		TransmissionTargetInternal_tF7CA4859D77A5305C4003B4A8372FF8D0F3E9BC7* L_4;
		L_4 = TransmissionTargetInternal_GetTransmissionTarget_mF8BE520966F5FAFD71C532A03E16C61425338891(L_2, L_3, (&V_0), NULL);
		V_1 = L_4;
		// return success ? new TransmissionTarget(internalObject) : null;
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		return (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3*)NULL;
	}

IL_001e:
	{
		TransmissionTargetInternal_tF7CA4859D77A5305C4003B4A8372FF8D0F3E9BC7* L_6 = V_1;
		TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* L_7 = (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3*)il2cpp_codegen_object_new(TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		TransmissionTarget__ctor_m51B8B2F0F5ECCB77841A1A47BF277610F5C79434(L_7, L_6, NULL);
		return L_7;
	}
}
// Microsoft.AppCenter.Unity.Analytics.PropertyConfigurator Microsoft.AppCenter.Unity.Analytics.TransmissionTarget::GetPropertyConfigurator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91* TransmissionTarget_GetPropertyConfigurator_m3118E9C84006E61C469245F1A396F37EE3D976F2 (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new PropertyConfigurator(TransmissionTargetInternal.GetPropertyConfigurator(_rawObject));
		RuntimeObject* L_0 = __this->____rawObject_0;
		PropertyConfiguratorInternal_t6C451FBD973EB49AAE7E63A0961C83631D7989A4* L_1;
		L_1 = TransmissionTargetInternal_GetPropertyConfigurator_mBAD2D6047EC6778C5EFD970B9A80AF5EC3888355(L_0, NULL);
		PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91* L_2 = (PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91*)il2cpp_codegen_object_new(PropertyConfigurator_t6FDC351EF8CBFFCBE24B856218B0774C41C95D91_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		PropertyConfigurator__ctor_m1C63AF25910E61B21361E1F81AB297A98AE3F8A9(L_2, L_1, NULL);
		return L_2;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTarget::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTarget_Pause_m0FB5019B0686F2B4E5A4F6E9ACDC2F2360EDF1D9 (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* __this, const RuntimeMethod* method) 
{
	{
		// TransmissionTargetInternal.Pause(_rawObject);
		RuntimeObject* L_0 = __this->____rawObject_0;
		TransmissionTargetInternal_Pause_mB0821B1AB15A1841EBF0047658B4103719D6A52B(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTarget::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTarget_Resume_m9357802DBA6FE8626831F0B1FA59613C4E8AA21A (TransmissionTarget_t8CC151F69C8E61CE7A43C117ACA89582A6DC7DD3* __this, const RuntimeMethod* method) 
{
	{
		// TransmissionTargetInternal.Resume(_rawObject);
		RuntimeObject* L_0 = __this->____rawObject_0;
		TransmissionTargetInternal_Resume_mECC4FF3FC248684D533AD5B57E03A6E9FA670FB1(L_0, NULL);
		// }
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
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::SetAppName(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_SetAppName_m90A0380275EE483C44C6271881D45E85BC69D5D2 (RuntimeObject* ___propertyConfigurator0, String_t* ___appName1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::SetUserId(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_SetUserId_mEA369FC07403CAF31F260A97E382C3A52E6EFE00 (RuntimeObject* ___propertyConfigurator0, String_t* ___userId1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::SetAppVersion(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_SetAppVersion_m2E7D531E19764AC7C1CD07D6B6D22C75697FBC69 (RuntimeObject* ___propertyConfigurator0, String_t* ___appVersion1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::SetAppLocale(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_SetAppLocale_mE3BFDB0DD4DD2D7CDDD8DD80027B2A84CEA3FBF6 (RuntimeObject* ___propertyConfigurator0, String_t* ___appLocale1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::SetEventProperty(System.Object,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_SetEventProperty_mF5B11F158F9AD8598F1F9C5DA0503D8DA67B3D2F (RuntimeObject* ___propertyConfigurator0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::SetEventProperty(System.Object,System.String,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_SetEventProperty_m92374BC9F683952D2082B582092004DC3A8C2F7C (RuntimeObject* ___propertyConfigurator0, String_t* ___key1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::SetEventProperty(System.Object,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_SetEventProperty_mC4392BAFFAC4F49F7D3587F0407A07070875B02B (RuntimeObject* ___propertyConfigurator0, String_t* ___key1, int64_t ___value2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::SetEventProperty(System.Object,System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_SetEventProperty_mDD1404A5D93FA60751DB9B85793CA420CD3E40F0 (RuntimeObject* ___propertyConfigurator0, String_t* ___key1, double ___value2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::SetEventProperty(System.Object,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_SetEventProperty_m638F6ECC4A2B6A58493AAF0F01188843384F1639 (RuntimeObject* ___propertyConfigurator0, String_t* ___key1, bool ___value2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::RemoveEventProperty(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_RemoveEventProperty_mBC9A625CC51FD7D1FF722A644FE17ADE0C6C1DFD (RuntimeObject* ___propertyConfigurator0, String_t* ___key1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::CollectDeviceId(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal_CollectDeviceId_m8F7E5A5A5CACA34AC3663E1B2FBC1921C3FFE7C4 (RuntimeObject* ___propertyConfigurator0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyConfiguratorInternal__ctor_m0C862DF9E2E67656297846020F10AFC80881B43E (PropertyConfiguratorInternal_t6C451FBD973EB49AAE7E63A0961C83631D7989A4* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::TrackEvent(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTargetInternal_TrackEvent_m11C1137AEAD65689CA05E3AB2C147B190BC428A4 (RuntimeObject* ___transmissionTarget0, String_t* ___eventName1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::TrackEvent(System.Object,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTargetInternal_TrackEvent_mA4DA02EDC6515EB643CA42F785C9B7810FEE6384 (RuntimeObject* ___transmissionTarget0, String_t* ___eventName1, int32_t ___flags2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::TrackEventWithProperties(System.Object,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTargetInternal_TrackEventWithProperties_mE1F917FB42A09A61B994407F4E758C3F3C319967 (RuntimeObject* ___transmissionTarget0, String_t* ___eventName1, RuntimeObject* ___properties2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::TrackEventWithProperties(System.Object,System.String,Microsoft.AppCenter.Unity.Analytics.EventProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTargetInternal_TrackEventWithProperties_m6C30B755F48DC734627409BC588B33133C53F8EF (RuntimeObject* ___transmissionTarget0, String_t* ___eventName1, EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* ___properties2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::TrackEventWithProperties(System.Object,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTargetInternal_TrackEventWithProperties_m6491DEADAC7DEB0972F67C1313D2E97B46D87E4F (RuntimeObject* ___transmissionTarget0, String_t* ___eventName1, RuntimeObject* ___properties2, int32_t ___flags3, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::TrackEventWithProperties(System.Object,System.String,Microsoft.AppCenter.Unity.Analytics.EventProperties,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTargetInternal_TrackEventWithProperties_m1425895D42011E290776AB6843763EC8112675EC (RuntimeObject* ___transmissionTarget0, String_t* ___eventName1, EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* ___properties2, int32_t ___flags3, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::SetEnabledAsync(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* TransmissionTargetInternal_SetEnabledAsync_m97608DB06DD5C638968C5D4C7C686532A942D932 (RuntimeObject* ___transmissionTarget0, bool ___enabled1, const RuntimeMethod* method) 
{
	{
		// return AppCenterTask.FromCompleted();
		AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* L_0;
		L_0 = AppCenterTask_FromCompleted_m1F770CCFC33031B8D66BFE11AC2BE8D750C124F3(NULL);
		return L_0;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::IsEnabledAsync(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* TransmissionTargetInternal_IsEnabledAsync_m59AF016AA04F3B9112D7FBF723908C442C02E31A (RuntimeObject* ___transmissionTarget0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_FromCompleted_mBE828ABFBB7DC9BE11223EA6790E96F6D1926A03_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AppCenterTask<bool>.FromCompleted(false);
		AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* L_0;
		L_0 = AppCenterTask_1_FromCompleted_mBE828ABFBB7DC9BE11223EA6790E96F6D1926A03((bool)0, AppCenterTask_1_FromCompleted_mBE828ABFBB7DC9BE11223EA6790E96F6D1926A03_RuntimeMethod_var);
		return L_0;
	}
}
// Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::GetTransmissionTarget(System.Object,System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransmissionTargetInternal_tF7CA4859D77A5305C4003B4A8372FF8D0F3E9BC7* TransmissionTargetInternal_GetTransmissionTarget_mF8BE520966F5FAFD71C532A03E16C61425338891 (RuntimeObject* ___transmissionTargetParent0, String_t* ___transmissionTargetToken1, bool* ___success2, const RuntimeMethod* method) 
{
	{
		// success = false;
		bool* L_0 = ___success2;
		*((int8_t*)L_0) = (int8_t)0;
		// return null;
		return (TransmissionTargetInternal_tF7CA4859D77A5305C4003B4A8372FF8D0F3E9BC7*)NULL;
	}
}
// Microsoft.AppCenter.Unity.Analytics.PropertyConfiguratorInternal Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::GetPropertyConfigurator(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyConfiguratorInternal_t6C451FBD973EB49AAE7E63A0961C83631D7989A4* TransmissionTargetInternal_GetPropertyConfigurator_mBAD2D6047EC6778C5EFD970B9A80AF5EC3888355 (RuntimeObject* ___transmissionTargetParent0, const RuntimeMethod* method) 
{
	{
		// return null;
		return (PropertyConfiguratorInternal_t6C451FBD973EB49AAE7E63A0961C83631D7989A4*)NULL;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::Pause(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTargetInternal_Pause_mB0821B1AB15A1841EBF0047658B4103719D6A52B (RuntimeObject* ___transmissionTarget0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::Resume(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTargetInternal_Resume_mECC4FF3FC248684D533AD5B57E03A6E9FA670FB1 (RuntimeObject* ___transmissionTarget0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.TransmissionTargetInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransmissionTargetInternal__ctor_mE7DCF8A5E1F92B6D8F1FF005A88F2C1CCCB027EB (TransmissionTargetInternal_tF7CA4859D77A5305C4003B4A8372FF8D0F3E9BC7* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::PrepareEventHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_PrepareEventHandlers_mF9392F1E0177EE2A61CADBD5665E158BE9E71474 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::AddNativeType(System.Collections.Generic.List`1<System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_AddNativeType_m0DE0BF0CA61373D251CA124CFFA6385E6AC262C9 (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___nativeTypes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// nativeTypes.Add(typeof(UWPAnalytics));
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_0 = ___nativeTypes0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		NullCheck(L_0);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_0, L_2, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::TrackEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_TrackEvent_mAAEF640122152A8DE8B158FEA21F9956CFBB36B4 (String_t* ___eventName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UWPAnalytics.TrackEvent(eventName);
		String_t* L_0 = ___eventName0;
		il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		Analytics_TrackEvent_m4E8DDFD9E51898BD0DC7A2D7817BE40DB108F76D(L_0, (RuntimeObject*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::TrackEvent(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_TrackEvent_m6E6FD7BF8F55E9377016A4C4CEB8BE7FC3D2382B (String_t* ___eventName0, int32_t ___flags1, const RuntimeMethod* method) 
{
	{
		// TrackEvent(eventName);
		String_t* L_0 = ___eventName0;
		AnalyticsInternal_TrackEvent_mAAEF640122152A8DE8B158FEA21F9956CFBB36B4(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::TrackEventWithProperties(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_TrackEventWithProperties_m3A521BC88D31D108F86AE290C74C19806027656F (String_t* ___eventName0, RuntimeObject* ___properties1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UWPAnalytics.TrackEvent(eventName, properties);
		String_t* L_0 = ___eventName0;
		RuntimeObject* L_1 = ___properties1;
		il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		Analytics_TrackEvent_m4E8DDFD9E51898BD0DC7A2D7817BE40DB108F76D(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::TrackEventWithProperties(System.String,Microsoft.AppCenter.Unity.Analytics.EventProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_TrackEventWithProperties_m28AE31247C9B500A5C08BED07884A9CFE8E5AB6C (String_t* ___eventName0, EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* ___properties1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsInternal_t1A69E38757773806A1766F9CE3FD0749638BC94F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C5383CC70EC2B2F2264A3B6047CCE0F83B5B723);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_warningLogged)
		bool L_0 = ((AnalyticsInternal_t1A69E38757773806A1766F9CE3FD0749638BC94F_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsInternal_t1A69E38757773806A1766F9CE3FD0749638BC94F_il2cpp_TypeInfo_var))->____warningLogged_0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.LogWarning("Warning: Strongly typed properties are not supported on UWP platform. " +
		//     "All property values will be converted to strings for this and all the future calls.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral4C5383CC70EC2B2F2264A3B6047CCE0F83B5B723, NULL);
		// _warningLogged = true;
		((AnalyticsInternal_t1A69E38757773806A1766F9CE3FD0749638BC94F_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsInternal_t1A69E38757773806A1766F9CE3FD0749638BC94F_il2cpp_TypeInfo_var))->____warningLogged_0 = (bool)1;
	}

IL_0017:
	{
		// UWPAnalytics.TrackEvent(eventName, properties.GetRawObject());
		String_t* L_1 = ___eventName0;
		EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* L_2 = ___properties1;
		NullCheck(L_2);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3;
		L_3 = EventProperties_GetRawObject_mACB25CE577F07CA6C1A87639D93B1110EFE375E1_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		Analytics_TrackEvent_m4E8DDFD9E51898BD0DC7A2D7817BE40DB108F76D(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::TrackEventWithProperties(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_TrackEventWithProperties_m81AC9AA7E3C6B64910CF59280309143033CAFDD4 (String_t* ___eventName0, RuntimeObject* ___properties1, int32_t ___flags2, const RuntimeMethod* method) 
{
	{
		// TrackEventWithProperties(eventName, properties);
		String_t* L_0 = ___eventName0;
		RuntimeObject* L_1 = ___properties1;
		AnalyticsInternal_TrackEventWithProperties_m3A521BC88D31D108F86AE290C74C19806027656F(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::TrackEventWithProperties(System.String,Microsoft.AppCenter.Unity.Analytics.EventProperties,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_TrackEventWithProperties_m56AB45DD408C66E58208924EEC7687F91DC13245 (String_t* ___eventName0, EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* ___properties1, int32_t ___flags2, const RuntimeMethod* method) 
{
	{
		// TrackEventWithProperties(eventName, properties);
		String_t* L_0 = ___eventName0;
		EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* L_1 = ___properties1;
		AnalyticsInternal_TrackEventWithProperties_m28AE31247C9B500A5C08BED07884A9CFE8E5AB6C(L_0, L_1, NULL);
		// }
		return;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::SetEnabledAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* AnalyticsInternal_SetEnabledAsync_mC1D761BBA65808E2855B51A8921644522AB53C03 (bool ___isEnabled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AppCenterTask(UWPAnalytics.SetEnabledAsync(isEnabled));
		bool L_0 = ___isEnabled0;
		il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Analytics_SetEnabledAsync_m3B261BAB2A94CB53CEF71D2843D3A9B47946820E(L_0, NULL);
		AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* L_2 = (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A*)il2cpp_codegen_object_new(AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AppCenterTask__ctor_mFFE1CE5E93795397047624E84D34518FCCBC0C90(L_2, L_1, NULL);
		return L_2;
	}
}
// Microsoft.AppCenter.Unity.AppCenterTask`1<System.Boolean> Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::IsEnabledAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* AnalyticsInternal_IsEnabledAsync_m2C840BA5DADA7AEEA977FB8133EEF8C1DFC20D36 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1__ctor_mF80BD0ADCE48A340567D5B1A044CFE903B6001F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AppCenterTask<bool>(UWPAnalytics.IsEnabledAsync());
		il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_0;
		L_0 = Analytics_IsEnabledAsync_m7D62590CF72C8240C1500B392B3D11C044D4B149(NULL);
		AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848* L_1 = (AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848*)il2cpp_codegen_object_new(AppCenterTask_1_t957C85E57A899D08AEA452E8DAD9DE7219B2B848_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AppCenterTask_1__ctor_mF80BD0ADCE48A340567D5B1A044CFE903B6001F1(L_1, L_0, AppCenterTask_1__ctor_mF80BD0ADCE48A340567D5B1A044CFE903B6001F1_RuntimeMethod_var);
		return L_1;
	}
}
// System.Type Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::GetTransmissionTarget(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AnalyticsInternal_GetTransmissionTarget_m97ADABA862EEE168B230BA3CED24F940CB8507D9 (String_t* ___transmissionTargetToken0, bool* ___success1, const RuntimeMethod* method) 
{
	{
		// success = false;
		bool* L_0 = ___success1;
		*((int8_t*)L_0) = (int8_t)0;
		// return null;
		return (Type_t*)NULL;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_Pause_m2A2FC4CA433C9F0A926455C8A6B45D4D7527953F (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_Resume_m6C71581DC6702813943B169ADF0FF33587F0AEC9 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::EnableManualSessionTracker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_EnableManualSessionTracker_mF75F47B1732756C81D280EA2A321F26997D5915D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UWPAnalytics.EnableManualSessionTracker();
		il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		Analytics_EnableManualSessionTracker_m8A1C3448450FD95FA87EE106E604584A680CAC36(NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::StartSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal_StartSession_mC76A12257B7ED3105254F03C3BCCCA39CFC61865 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UWPAnalytics.StartSession();
		il2cpp_codegen_runtime_class_init_inline(Analytics_t4B6C27563C4B46838446469C3F244FD98B2AFCC2_il2cpp_TypeInfo_var);
		Analytics_StartSession_mD1634F4C9DBC5E571117CCA7854D0EE764FED7BC(NULL);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.AnalyticsInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsInternal__ctor_m56AD725C1E76931B79B44881FC6FF15DA2174834 (AnalyticsInternal_t1A69E38757773806A1766F9CE3FD0749638BC94F* __this, const RuntimeMethod* method) 
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
// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.AppCenter.Unity.Analytics.Internal.EventPropertiesInternal::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* EventPropertiesInternal_Create_m3885816BE0A5B4501C8D3F1A4DB33E4A6FB2CE0D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.EventPropertiesInternal::SetString(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventPropertiesInternal_SetString_mC4067EEA3E329D248A9C47F7713E406A3857FD1C (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___properties0, String_t* ___key1, String_t* ___val2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// properties[key] = val;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___properties0;
		String_t* L_1 = ___key1;
		String_t* L_2 = ___val2;
		NullCheck(L_0);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_0, L_1, L_2, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.EventPropertiesInternal::SetNumber(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventPropertiesInternal_SetNumber_mFA6EFB6B44BE1749E4A6980385BD21B982EA6009 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___properties0, String_t* ___key1, int64_t ___val2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// properties[key] = val.ToString(CultureInfo.InvariantCulture);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___properties0;
		String_t* L_1 = ___key1;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_3;
		L_3 = Int64_ToString_m5250B67D3E89B8EB829FB26136E744F1F141B7FD((&___val2), L_2, NULL);
		NullCheck(L_0);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_0, L_1, L_3, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.EventPropertiesInternal::SetNumber(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventPropertiesInternal_SetNumber_mA4FE9048CE236F1443477412E5A18E4FB20F00B6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___properties0, String_t* ___key1, double ___val2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// properties[key] = val.ToString(CultureInfo.InvariantCulture);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___properties0;
		String_t* L_1 = ___key1;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_3;
		L_3 = Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357((&___val2), L_2, NULL);
		NullCheck(L_0);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_0, L_1, L_3, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.EventPropertiesInternal::SetBool(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventPropertiesInternal_SetBool_mE854F20974F62AF9869B0EDA11175C8077AF144B (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___properties0, String_t* ___key1, bool ___val2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// properties[key] = val.ToString();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___properties0;
		String_t* L_1 = ___key1;
		String_t* L_2;
		L_2 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___val2), NULL);
		NullCheck(L_0);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_0, L_1, L_2, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.EventPropertiesInternal::SetDate(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventPropertiesInternal_SetDate_m827458E62AFE4E1FA427DD40BF2D39D17951A3C6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___properties0, String_t* ___key1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___val2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A5A594451EBCA834C28B0A6993647185ECF2D16);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var format = "yyyy-MM-dd'T'HH:mm:ss.fffK";
		V_0 = _stringLiteral8A5A594451EBCA834C28B0A6993647185ECF2D16;
		// var dateString = val.ToString(format, CultureInfo.InvariantCulture);
		String_t* L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_2;
		L_2 = DateTime_ToString_m27637E1131A10BED8A95639D64339023D5EBBF00((&___val2), L_0, L_1, NULL);
		V_1 = L_2;
		// properties[key] = dateString;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ___properties0;
		String_t* L_4 = ___key1;
		String_t* L_5 = V_1;
		NullCheck(L_3);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_3, L_4, L_5, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.AppCenter.Unity.Analytics.Internal.EventPropertiesInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventPropertiesInternal__ctor_m98234848F832AA547C03EEF35545413D7AC22C17 (EventPropertiesInternal_t0491918ACBCF73EAFDC7F002DE18FBA5640F2290* __this, const RuntimeMethod* method) 
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
// UnityEngine.AndroidJavaObject Assets.AppCenter.Plugins.Android.Utility.AndroidUtility::GetAndroidContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidUtility_GetAndroidContext_m42685E8CFF87B44E6E1F6EFB1FFD71793D2C0FF6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidUtility_t8F62C5CBE69814E53A43E446312D05095E339F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_context != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidUtility_t8F62C5CBE69814E53A43E446312D05095E339F0B_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtility_t8F62C5CBE69814E53A43E446312D05095E339F0B_il2cpp_TypeInfo_var))->____context_0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return _context;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((AndroidUtility_t8F62C5CBE69814E53A43E446312D05095E339F0B_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtility_t8F62C5CBE69814E53A43E446312D05095E339F0B_il2cpp_TypeInfo_var))->____context_0;
		return L_1;
	}

IL_000d:
	{
		// var unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// var activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_2, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		// _context = activity.Call<AndroidJavaObject>("getApplicationContext");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_3, _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9, L_4, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		((AndroidUtility_t8F62C5CBE69814E53A43E446312D05095E339F0B_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtility_t8F62C5CBE69814E53A43E446312D05095E339F0B_il2cpp_TypeInfo_var))->____context_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidUtility_t8F62C5CBE69814E53A43E446312D05095E339F0B_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtility_t8F62C5CBE69814E53A43E446312D05095E339F0B_il2cpp_TypeInfo_var))->____context_0), (void*)L_5);
		// return _context;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ((AndroidUtility_t8F62C5CBE69814E53A43E446312D05095E339F0B_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtility_t8F62C5CBE69814E53A43E446312D05095E339F0B_il2cpp_TypeInfo_var))->____context_0;
		return L_6;
	}
}
// System.Void Assets.AppCenter.Plugins.Android.Utility.AndroidUtility::SetPreferenceInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtility_SetPreferenceInt_m055E744F63C0A4A03125021D01D7099300A65194 (String_t* ___prefKey0, int32_t ___prefValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DE10CB9863FBD79A26BDD1E6581EC58F503024E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A4D640CF9D59A4F71FD24C9CD2278A4D71D503E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AA961E914CD1D587EB94CC5E82EFA76731DF41B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EC438EC45167313D62C8D0D3D2FD52F72313009);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFA90AE2C53115375F9EE68D02C9F024EEEFE8F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AndroidJavaObject context = GetAndroidContext();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidUtility_GetAndroidContext_m42685E8CFF87B44E6E1F6EFB1FFD71793D2C0FF6(NULL);
		// AndroidJavaObject sharedPreferences = context.Call<AndroidJavaObject>("getSharedPreferences", new object[] { PREFS_NAME, 0 });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralBFA90AE2C53115375F9EE68D02C9F024EEEFE8F0);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralBFA90AE2C53115375F9EE68D02C9F024EEEFE8F0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = 0;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteral9EC438EC45167313D62C8D0D3D2FD52F72313009, L_3, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// AndroidJavaObject editor = sharedPreferences.Call<AndroidJavaObject>("edit");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_6);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
		L_8 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_6, _stringLiteral8AA961E914CD1D587EB94CC5E82EFA76731DF41B, L_7, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// editor = editor.Call<AndroidJavaObject>("putInt", new object[] { prefKey, prefValue });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		String_t* L_11 = ___prefKey0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
		int32_t L_13 = ___prefValue1;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_15);
		NullCheck(L_8);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16;
		L_16 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_8, _stringLiteral2DE10CB9863FBD79A26BDD1E6581EC58F503024E, L_12, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// editor.Call("apply");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17;
		L_17 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_16);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_16, _stringLiteral5A4D640CF9D59A4F71FD24C9CD2278A4D71D503E, L_17, NULL);
		// }
		return;
	}
}
// System.Void Assets.AppCenter.Plugins.Android.Utility.AndroidUtility::SetPreferenceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtility_SetPreferenceString_m76B1CBDAD6BD6CD28144BAD90D36AEA4C498E3C6 (String_t* ___prefKey0, String_t* ___prefValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A885A89832F4E62C8E259AA47DF0907BB0C1ED3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A4D640CF9D59A4F71FD24C9CD2278A4D71D503E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AA961E914CD1D587EB94CC5E82EFA76731DF41B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EC438EC45167313D62C8D0D3D2FD52F72313009);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFA90AE2C53115375F9EE68D02C9F024EEEFE8F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AndroidJavaObject context = GetAndroidContext();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidUtility_GetAndroidContext_m42685E8CFF87B44E6E1F6EFB1FFD71793D2C0FF6(NULL);
		// AndroidJavaObject sharedPreferences = context.Call<AndroidJavaObject>("getSharedPreferences", new object[] { PREFS_NAME, 0 });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralBFA90AE2C53115375F9EE68D02C9F024EEEFE8F0);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralBFA90AE2C53115375F9EE68D02C9F024EEEFE8F0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = 0;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteral9EC438EC45167313D62C8D0D3D2FD52F72313009, L_3, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// AndroidJavaObject editor = sharedPreferences.Call<AndroidJavaObject>("edit");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_6);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
		L_8 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_6, _stringLiteral8AA961E914CD1D587EB94CC5E82EFA76731DF41B, L_7, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// editor = editor.Call<AndroidJavaObject>("putString", new object[] { prefKey, prefValue });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		String_t* L_11 = ___prefKey0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
		String_t* L_13 = ___prefValue1;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_13);
		NullCheck(L_8);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14;
		L_14 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_8, _stringLiteral4A885A89832F4E62C8E259AA47DF0907BB0C1ED3, L_12, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// editor.Call("apply");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15;
		L_15 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_14);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_14, _stringLiteral5A4D640CF9D59A4F71FD24C9CD2278A4D71D503E, L_15, NULL);
		// }
		return;
	}
}
// System.Void Assets.AppCenter.Plugins.Android.Utility.AndroidUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtility__ctor_m648083C45D3DB0D33F98C626A66AF819CDBE34CE (AndroidUtility_t8F62C5CBE69814E53A43E446312D05095E339F0B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppSecretAttribute_set_Name_mE6CED04CDBC65893FEBC0D993E011FB58C6EDEA3_inline (AppSecretAttribute_tA27B00D919104E7C568F0EA592C8483FC3F73438* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomDropDownPropertyAttribute_set_SelectedKey_m132F21C982DEAA99E16E614EFD346750048C09B4_inline (CustomDropDownPropertyAttribute_tBB81AB17FD57948F6CDE254CDF0CC56668AF2B15* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string SelectedKey { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CSelectedKeyU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSelectedKeyU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomDropDownPropertyAttribute_set_SelectedValue_mEA7F2C2604B307C7F7321833380356CF8D52D8DE_inline (CustomDropDownPropertyAttribute_tBB81AB17FD57948F6CDE254CDF0CC56668AF2B15* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int SelectedValue { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CSelectedValueU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppCenterTask_set_IsComplete_m122C9F8AB583A5C44D16BCBAA8A20E5659749E65_inline (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsComplete { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsCompleteU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AppCenterTask_get_IsComplete_m4D9202D5B58660A24952515B6AA38FEA0E786656_inline (AppCenterTask_tC98BBCEE7242F989DC7E054BFE7362C20D94D83A* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsComplete { get; private set; }
		bool L_0 = __this->___U3CIsCompleteU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_SdkName_m26D5F51AC6FC80E75FAEEFAA5B833E615C2E2FA5_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string SdkName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CSdkNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSdkNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_SdkVersion_m5AA1E819EAB16BA4272C16E283500BB1EE385B60_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string SdkVersion { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CSdkVersionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSdkVersionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_Model_mF2C6D5A55D89A1A8861E3C348971B9BD47091E01_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Model { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CModelU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CModelU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_OemName_m8CD7A571302B50E68B0E614155F8438EAD69CB04_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string OemName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3COemNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COemNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_OsName_mDA691D3E2FE0BD5460095C47D36EFDDB7EE47D2E_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string OsName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3COsNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COsNameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_OsVersion_m677A5A507278AA927BEDE2EC58D43F3EA08FCC1E_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string OsVersion { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3COsVersionU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COsVersionU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_OsBuild_m3249E8F1557BE8AE97EF3048F2ACDD2BBE64DAC9_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string OsBuild { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3COsBuildU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COsBuildU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_OsApiLevel_m5581F886572336FF5A258590A6DEC37BF1BAFC72_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int OsApiLevel { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3COsApiLevelU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_Locale_m034271B4ABAAEBCEDF4BAB5E0B4F46532530509A_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Locale { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CLocaleU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLocaleU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_TimeZoneOffset_m8B9D5482188CD77CD79BADEDE3332581668A6382_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int TimeZoneOffset { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CTimeZoneOffsetU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_ScreenSize_m2C878766AC0AEB156971E29AEE89040C80F0B6BD_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ScreenSize { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CScreenSizeU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CScreenSizeU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_AppVersion_m5CAED222D389F7502E83995B19A20437B15085F3_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CAppVersionU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAppVersionU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_CarrierName_m340B4694B0F2E1F8BB83309FC269FD4D5F325CDC_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string CarrierName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CCarrierNameU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCarrierNameU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_CarrierCountry_m08F0B99D19BBE3477A2D5B2557D7BCA212CD1541_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string CarrierCountry { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CCarrierCountryU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCarrierCountryU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_AppBuild_m771B89576752DE520157928D728F5E04B7997E9B_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string AppBuild { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CAppBuildU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAppBuildU3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_AppNamespace_m9C76A6C89F2A9DCC0BFDB8E05C4DB2009F0A6DE7_inline (Device_t755299AB5F78614858DD1FFB0744D96517966BF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string AppNamespace { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CAppNamespaceU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAppNamespaceU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorAttachmentLog_set_Text_mD80155A9D321EF9EF8C96D0ABAF9C9A53D40C9A7_inline (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Text { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CTextU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorAttachmentLog_set_FileName_m6302491DF50852F010E1F5B2007B6CBDED6D0E1C_inline (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string FileName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CFileNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFileNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorAttachmentLog_set_Type_mCC44B878516D36419DD2289DCA759779FEDCB227_inline (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public AttachmentType Type { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorAttachmentLog_set_Data_m7505FBFD46C01D88B3EE01152AA9DD3C61EECF0B_inline (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		// public byte[] Data { get; private set; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorAttachmentLog_set_ContentType_m3D6861A5E2B0EBF09515CB513446D79271E0170F_inline (ErrorAttachmentLog_tCD2D77783385F2C1EE4E4ABADEB7BBC9ED98C11F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ContentType { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CContentTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContentTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_Id_m788C9AA1293FA3D7EC11DB232E3C186B288DD988_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_AppStartTime_m5E893C816CF5162C0CCEE5C134E196E91EC6CACB_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value0, const RuntimeMethod* method) 
{
	{
		// public DateTimeOffset AppStartTime { get; private set; }
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_0 = ___value0;
		__this->___U3CAppStartTimeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_AppErrorTime_mC9AC6AE118B5EC58542227EAEB53CAD0ED876C97_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value0, const RuntimeMethod* method) 
{
	{
		// public DateTimeOffset AppErrorTime { get; private set; }
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_0 = ___value0;
		__this->___U3CAppErrorTimeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_Exception_mE86964E3691560036DE9DAD92A8BD73F0D17CCBD_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, Exception_t4102CE9657F42B955941C1DB3682212AAE071596* ___value0, const RuntimeMethod* method) 
{
	{
		// public Models.Exception Exception { get; private set; }
		Exception_t4102CE9657F42B955941C1DB3682212AAE071596* L_0 = ___value0;
		__this->___U3CExceptionU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExceptionU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_Device_m1F92894D70BF83C96858A11D76BEDDF63F69478C_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, Device_t755299AB5F78614858DD1FFB0744D96517966BF9* ___value0, const RuntimeMethod* method) 
{
	{
		// public Device Device { get; private set; }
		Device_t755299AB5F78614858DD1FFB0744D96517966BF9* L_0 = ___value0;
		__this->___U3CDeviceU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDeviceU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_ThreadName_m9E11501D5B5A3942ED585F130A4B4769D5AAC120_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ThreadName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CThreadNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CThreadNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_IsCrash_m659CBA6BD682CB3B397AB3AED7C0627B91399A7F_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsCrash { get; internal set; }
		bool L_0 = ___value0;
		__this->___U3CIsCrashU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_ProcessId_m9AEB1927DC649688C5A6F935529993BFCAF92C9C_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int ProcessId { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CProcessIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_ReporterKey_m4257DC70E4FBDDC160D7F82FD233C31CA84D4533_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ReporterKey { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CReporterKeyU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReporterKeyU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_ReporterSignal_mF5FE47BEAD9CBE6BCDA02203B81F078C892BD906_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ReporterSignal { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CReporterSignalU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReporterSignalU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorReport_set_IsAppKill_mC511FD594F64611F6540F1F74B229D73E03905C9_inline (ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsAppKill { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsAppKillU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WrapperException_GetRawObject_mABD7354FC52EC410FFFB1E6DE4209DDFA0988AAF_inline (WrapperException_tD2AACA8610D30D393B870B5AC955140EF8D0BF92* __this, const RuntimeMethod* method) 
{
	{
		// return _rawObject;
		RuntimeObject* L_0 = __this->____rawObject_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->____innerException_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* GetErrorAttachmentsHandler_Invoke_mBD9133DC25B16E6BA4D37EF950B65C3F98199E51_inline (GetErrorAttachmentsHandler_tF278A24191E5C8721FA3AFB1CEE146D93CE436F0* __this, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A* ___errorReport0, const RuntimeMethod* method) 
{
	typedef ErrorAttachmentLogU5BU5D_t05E066B547776C2E5D1831729A269994B407D2B4* (*FunctionPointerType) (RuntimeObject*, ErrorReport_t826C8138A0E82253963F694232FB39A5D21CD54A*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___errorReport0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exception_set_Message_m90797BB93D37DE9E89CEC971463C8FDFF1F84CEA_inline (Exception_t4102CE9657F42B955941C1DB3682212AAE071596* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exception_set_StackTrace_mF498152DF845DB88A159F8A3D3EFDA51CE5B39C1_inline (Exception_t4102CE9657F42B955941C1DB3682212AAE071596* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string StackTrace { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CStackTraceU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStackTraceU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* EventProperties_GetRawObject_mACB25CE577F07CA6C1A87639D93B1110EFE375E1_inline (EventProperties_tD2EBD23E25171F80AEC927FB7346561500E7E1AF* __this, const RuntimeMethod* method) 
{
	{
		// return _rawObject;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____rawObject_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_0 = (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*)__this->____task_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t Nullable_1_GetValueOrDefault_mC6EDE8162AB388B6482F745FF996B594ACC373AC_gshared_inline (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = (Guid_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
