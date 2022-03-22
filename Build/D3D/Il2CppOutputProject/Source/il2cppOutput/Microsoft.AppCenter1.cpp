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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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

// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678;
// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
struct Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B;
// System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722;
// System.Action`1<Microsoft.AppCenter.Ingestion.IServiceCall>
struct Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>
struct Dictionary_2_tF6E6966F10E61B56845F7774B83ED8BD6E9FAF16;
// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HeaderInfo>
struct Dictionary_2_t5CD3F4D4D92A89783AE1C95F1528A7B08E8A54E0;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A;
// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HttpHeaders/HeaderBucket>
struct Dictionary_2_t1B3325E856D6A0623AE0B139B6A7E8B27C590A41;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380;
// System.Func`1<System.Net.Http.HttpMessageHandler>
struct Func_1_t6AF25BB0B2C5568E8B6D37356D94C2B0A4B8D757;
// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver>
struct Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_tF42287527472FA89789873F068A87C60A00EC7D3;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>,Microsoft.AppCenter.Ingestion.ServiceCall>
struct Func_2_t6BBE2A46DEE55390A48A23CDCC5222AD63F5FF8B;
// System.Func`2<Windows.Networking.Connectivity.NetworkStatusChangedEventHandler,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Func_2_tE58B48BE6085E8F1F25AE070DF5BA7FD6857B90B;
// System.Func`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Func_2_t1C28D2BFD837EC81FF3046F74030179155D5F3BE;
// System.Func`2<System.TimeSpan,System.TimeSpan>
struct Func_2_tF4FE852EBF23BF32AA642F02C58B9F2FCED2DE13;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<Microsoft.AppCenter.Ingestion.ServiceCall>
struct HashSet_1_t4C4408853DBA73AA631F24AB98ABBA00CF3B00AE;
// System.Collections.Generic.IDictionary`2<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>
struct IDictionary_2_tC91A41F4A2AC2D3D20FF06B627796122AF989592;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>>
struct IEnumerable_1_t4C7997E903AA144A04098BD7A84336D54E6ED7E2;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Microsoft.AppCenter.Ingestion.ServiceCall>
struct IEnumerable_1_t07CC59C6D34DC1E722725C38281CD25B003389A3;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<System.TimeSpan>
struct IEnumerable_1_t5DF461E4665C43670474803BB90C477B3C0069E7;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.AppCenter.Ingestion.ServiceCall>
struct IEqualityComparer_1_tD4607F66872A6E61F6AE95C0789EEFFA987BAA5D;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t106D4C1340745E38431865BBEA6AE170A4713431;
// System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log>
struct IList_1_tBB3AF24F46266EE747B4E503CEC3B65DC5D813F7;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB;
// System.Collections.Generic.ISet`1<Microsoft.AppCenter.Ingestion.ServiceCall>
struct ISet_1_tE515514B77EF13FFB1869A693B0FD9633C72E3B8;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>
struct KeyCollection_t9CE4C68888545104BE71284BCB22076C9CA67814;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Type>
struct KeyCollection_t0E4390205378461F38BE857216C35DA687D245FA;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB;
// System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue>
struct List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Microsoft.AppCenter.Ingestion.ServiceCall>
struct List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Predicate`1<System.UInt32>
struct Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886;
// System.Threading.Tasks.TaskFactory`1<System.Net.Http.HttpResponseMessage>
struct TaskFactory_1_t7BDD01363BBCFF64B4A6BDDBBE222716A0B2E2BA;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>
struct Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>
struct ValueCollection_t1EF9BC97DA7B0A77EDF91DB6D0E14BD85CB22E76;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Type>
struct ValueCollection_tA14BD0EE42AEA7EBFF2E10776A87B14C678C2E11;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>[]
struct EntryU5BU5D_t209CD3DB4F61B1FD4EF2DB360BFD29D44F12977A;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Type>[]
struct EntryU5BU5D_t544267CEF10C325101E064C4EC137C5A1ADC3D92;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.AppCenter.Ingestion.ServiceCall>[]
struct SlotU5BU5D_t3AEAF35324811DBE0C42466A356FCBE328E5B2C7;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Microsoft.AppCenter.Ingestion.ServiceCall[]
struct ServiceCallU5BU5D_t9BA3C64BBAEC90687CB7F213A56E7EA5905E31BF;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.TimeSpan[]
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_tD9BAC60F604446ED14967643F63A83CE2A5C3701;
// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F;
// Microsoft.AppCenter.AppCenterException
struct AppCenterException_tB634D40CB28DEDD5DB0505D281398E1C085E5C6C;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// Windows.Networking.Connectivity.ConnectionProfile
struct ConnectionProfile_t7D38F137CC7E2E3288194F8D9DEF267E0E72EE07;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.AppCenter.Ingestion.Models.Device
struct Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// Microsoft.AppCenter.Utils.Files.File
struct File_tA59B16BE432513D1F2E34CE4E5179CD25D2B083B;
// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C;
// System.Net.Http.HttpClient
struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42;
// System.Net.Http.HttpContent
struct HttpContent_tD09737BB27CB151BC9688882F785208620211E1C;
// System.Net.Http.Headers.HttpContentHeaders
struct HttpContentHeaders_t4E2506F081BD682D0538A5CB38ED1D836C2E8C4F;
// System.Net.Http.Headers.HttpHeaders
struct HttpHeaders_t2AF7326A86CE4E4F524137C7A7FF8F3597C12449;
// Microsoft.AppCenter.Ingestion.Http.HttpIngestionException
struct HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB;
// System.Net.Http.HttpMessageHandler
struct HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17;
// System.Net.Http.HttpMessageInvoker
struct HttpMessageInvoker_t00698E3A7D5068564C401C7D3F90798056A04800;
// System.Net.Http.HttpMethod
struct HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E;
// Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter
struct HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE;
// System.Net.Http.Headers.HttpRequestHeaders
struct HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7;
// System.Net.Http.HttpRequestMessage
struct HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2;
// System.Net.Http.Headers.HttpResponseHeaders
struct HttpResponseHeaders_tAD02F8CC2960BC561FEFD63E0121701743EAA7A8;
// System.Net.Http.HttpResponseMessage
struct HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t7EC502F5FCA86DD95579A92A1E0116BE32D6340B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// Microsoft.AppCenter.Ingestion.Http.IHttpNetworkAdapter
struct IHttpNetworkAdapter_t922D04C876A68235FC8EA168F80908E50F12742E;
// Microsoft.AppCenter.Ingestion.IIngestion
struct IIngestion_tA3178197A22BB5839EE548F17E2243F900DE902C;
// Windows.Networking.Connectivity.INetworkInformationStatics
struct INetworkInformationStatics_tD2ECEA3EBE3621A67043DFCAC738C00D5A77356D;
// Windows.Networking.Connectivity.INetworkInformationStatics2
struct INetworkInformationStatics2_t5B5992EF54A5A5D44132F8E85D55FFB4C89C335A;
// Microsoft.AppCenter.Ingestion.Http.INetworkStateAdapter
struct INetworkStateAdapter_t918EFC296ECAE7406AF2D1A808B22DFEB0B5660B;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t29B0AEAFB8A7BF2EE446320DE590343B21EA69A3;
// Newtonsoft.Json.Serialization.ISerializationBinder
struct ISerializationBinder_t3C8B850335FB40001C9201981439AE77B430031F;
// Microsoft.AppCenter.Ingestion.IServiceCall
struct IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t44C99CB7D5AB59A077F569914E56DAD66B5A41EF;
// Microsoft.AppCenter.Ingestion.Http.IngestionDecorator
struct IngestionDecorator_tFB755D94DE686939DD91160456B8D33547F61857;
// Microsoft.AppCenter.Ingestion.IngestionException
struct IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA;
// Microsoft.AppCenter.Ingestion.Http.IngestionHttp
struct IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A;
// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632;
// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46;
// Newtonsoft.Json.JsonContainerAttribute
struct JsonContainerAttribute_t84168DEA2B41EB84D4BF6C3AF04D6075F4CEB1C7;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89;
// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765;
// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3;
// Newtonsoft.Json.JsonWriterException
struct JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616;
// Microsoft.AppCenter.Ingestion.Models.Log
struct Log_t716EF1A690F81BB19494869650F9161B1B60E74A;
// Microsoft.AppCenter.Ingestion.Models.LogContainer
struct LogContainer_tBCB89E6BB0DBE4E8EB7FC504CBCDFE546A8EE33D;
// Microsoft.AppCenter.Ingestion.Models.Serialization.LogJsonConverter
struct LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB;
// Microsoft.AppCenter.Ingestion.Models.LogWithProperties
struct LogWithProperties_t26F7CE0BED8320D2D8DA53E3E6F9DF267140CC53;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.Net.Http.Headers.MediaTypeHeaderValue
struct MediaTypeHeaderValue_t9B713F37D05A4B23FFAFEAE8B988ED7BC46BCEAF;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Newtonsoft.Json.Serialization.NamingStrategy
struct NamingStrategy_tB85DD4A9F6C33F668AF7273D3B5193ABC4617D50;
// Microsoft.AppCenter.Ingestion.Http.NetworkIngestionException
struct NetworkIngestionException_t5FF011790FE4837200242574A13EC51BE32F5DD8;
// Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter
struct NetworkStateAdapter_t162CDFD808FB548577B4DECD58028CAC271CAD8B;
// Microsoft.AppCenter.Ingestion.Http.NetworkStateIngestion
struct NetworkStateIngestion_t3B1209F7E80F7412CE9EF9FB7AAADA7D62244AF8;
// Windows.Networking.Connectivity.NetworkStatusChangedEventHandler
struct NetworkStatusChangedEventHandler_t6F8926B863301A8B2873AF7FE3968C729B1FEB4A;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_tF293724DEA588C35A7E94C4F4413AEE6438FE9CD;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// Microsoft.AppCenter.Ingestion.Http.RetryableIngestion
struct RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Microsoft.AppCenter.Ingestion.ServiceCall
struct ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// Microsoft.AppCenter.Ingestion.Models.StartServiceLog
struct StartServiceLog_t7395E5583F8EE57EB2FC14008CB24A990475234B;
// System.String
struct String_t;
// System.Net.Http.StringContent
struct StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Threading.Timer
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
// System.Threading.TimerCallback
struct TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// Microsoft.AppCenter.Ingestion.Models.ValidationException
struct ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Net.Http.HttpContent/FixedMemoryStream
struct FixedMemoryStream_tDCEF941500AF29277C42DDF40970FB21B4A66188;
// Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tE3AE9B6AC9346C1BBA66C6207687B82FEEA3B227;
// Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t81B7DBF7C608A675F863D0FBCE96D50FDB389041;
// Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter/IsNetworkAvailableDelegate
struct IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094;
// Microsoft.AppCenter.Ingestion.Http.NetworkStateIngestion/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA;
// Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c
struct U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D;
// Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t98D32386B0EA0CFFDF2A6BA1238E13711A6ED628;
// Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t5D82049F904442EA70A5C18B185A6A06A9B0D5A5;
// Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285;
// Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF6E6966F10E61B56845F7774B83ED8BD6E9FAF16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6BBE2A46DEE55390A48A23CDCC5222AD63F5FF8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE58B48BE6085E8F1F25AE070DF5BA7FD6857B90B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF4FE852EBF23BF32AA642F02C58B9F2FCED2DE13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t4C4408853DBA73AA631F24AB98ABBA00CF3B00AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpRequestException_t4460572C60D2686D9713A867A73B238DB3C1BB40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpStatusCode_t530B6899270B44ED560C3872DB5F9698FB7D7374_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t34ADF4E4D8642D4A0DF9A59730ED94DD5BBD0408_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t62F133CC563B92F715599B8B90F36E6A4B6EF345_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tA1FD6AEBAF7E08FA37B8FDBCA41B3EDEB6E0B4DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tBA46B0B91EBAF6B08DED48AF18B2916FC06B7FC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tC91A41F4A2AC2D3D20FF06B627796122AF989592_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t07CC59C6D34DC1E722725C38281CD25B003389A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tA3E51B391F7C6BFE30CF1028D179344618F8640D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tD3860B459ED0E7C76CB2D1BA3E3C43F699423099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t33C586567D256608FCFB51E45779D71DA4E834FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t70F2A459AFD5F18F18D91680D57FA5945BF87038_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tC123493C536203F953613BA163ECF81D729F8758_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHttpNetworkAdapter_t922D04C876A68235FC8EA168F80908E50F12742E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IIngestion_tA3178197A22BB5839EE548F17E2243F900DE902C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INetworkStateAdapter_t918EFC296ECAE7406AF2D1A808B22DFEB0B5660B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISet_1_tE515514B77EF13FFB1869A693B0FD9633C72E3B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonObjectAttribute_tF1A0A8D30875A7ECC57B4B2D52C684D61D2038B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogContainer_tBCB89E6BB0DBE4E8EB7FC504CBCDFE546A8EE33D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkIngestionException_t5FF011790FE4837200242574A13EC51BE32F5DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkStatusChangedEventHandler_t6F8926B863301A8B2873AF7FE3968C729B1FEB4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_tE3AE9B6AC9346C1BBA66C6207687B82FEEA3B227_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t98D32386B0EA0CFFDF2A6BA1238E13711A6ED628_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t5D82049F904442EA70A5C18B185A6A06A9B0D5A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t81B7DBF7C608A675F863D0FBCE96D50FDB389041_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsRuntimeMarshal_t2E440B8ECBDEA6D789E5D53780B0D5446578C9D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tAF29AD7806E5FAD06A2D21AFD04BA59150D73C35____4A0329F6BC6CFCA9A8AB50642D4194DAC746722AB550F113AEC760677EBFD217_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A;
IL2CPP_EXTERN_C String_t* _stringLiteral03C940DA17D60B8720CC52948255206388CA2ED3;
IL2CPP_EXTERN_C String_t* _stringLiteral0608E262A79695944F27DA7EFE397D991672D664;
IL2CPP_EXTERN_C String_t* _stringLiteral06D1EB82798478354C6948DFC5D583DAD2340515;
IL2CPP_EXTERN_C String_t* _stringLiteral07FA768FE437DE189178EAA96E5C1DCB97E27D58;
IL2CPP_EXTERN_C String_t* _stringLiteral0E39645720F700C5BA8F22492C0E3E15B3C7CCF7;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral1F745EAD59BFB381551AEF9C5A2857D973AAF521;
IL2CPP_EXTERN_C String_t* _stringLiteral205C6801DE5F298B190ED6D3163ADCF0830786ED;
IL2CPP_EXTERN_C String_t* _stringLiteral28C657C35606C36B75064A8C71A21A47750B175D;
IL2CPP_EXTERN_C String_t* _stringLiteral2DF2E61E73DABE2E270AEF265BB75BB035003DE3;
IL2CPP_EXTERN_C String_t* _stringLiteral30F98028910AABDC27AFC8E97649C19BCD9F34FF;
IL2CPP_EXTERN_C String_t* _stringLiteral3176B77F12772FD8A9BAF3584128DC3E3741D6F5;
IL2CPP_EXTERN_C String_t* _stringLiteral31E7183DF529BA540D91817B38D9AA4B46E9D9B9;
IL2CPP_EXTERN_C String_t* _stringLiteral38E5FF6FEFB5390BFE4691519F48CAFC6CF1A918;
IL2CPP_EXTERN_C String_t* _stringLiteral3FD257E451BA9EE5341508F02A19203AA89CE879;
IL2CPP_EXTERN_C String_t* _stringLiteral48218C8D51899E77266A7C390992D9F6E5EB8B0A;
IL2CPP_EXTERN_C String_t* _stringLiteral4FE9AEDF8344786732D21EDE16BA13968BBA865B;
IL2CPP_EXTERN_C String_t* _stringLiteral5146662D3D422BB788AFE1C140592E0D626FAC67;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral5CE5CC00002D7A6ABFE45CD6E4F8408DD3A993A2;
IL2CPP_EXTERN_C String_t* _stringLiteral65E915DB1DAD2DE1BAC17CE746EF7796A442D000;
IL2CPP_EXTERN_C String_t* _stringLiteral68955AB338790E58AA1D834638DFCE824101EAC2;
IL2CPP_EXTERN_C String_t* _stringLiteral69B5C482F992C91543F99142A06B06404AD2EA29;
IL2CPP_EXTERN_C String_t* _stringLiteral7231943EFA58E6A594D1D4826D9124C7F85E14CA;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral80A41D9F6AF361FC7A56F2BE6B309B938B03B797;
IL2CPP_EXTERN_C String_t* _stringLiteral91810B39666B5620FFC9866BF5F431B1CBE0DFD4;
IL2CPP_EXTERN_C String_t* _stringLiteral940FD4603D8BBE53AEBE9C525A420112DED1C48E;
IL2CPP_EXTERN_C String_t* _stringLiteral959D3E2840A052997AC641B000A87E2F1EDEB519;
IL2CPP_EXTERN_C String_t* _stringLiteral9816E74B93E1C26A72AD4D2196C8A3C7A3C28924;
IL2CPP_EXTERN_C String_t* _stringLiteralAC5E714FDB18E61C82391AEAC684008F824FD526;
IL2CPP_EXTERN_C String_t* _stringLiteralB05AA4B134D48D0AE3E3006759B599A36E597739;
IL2CPP_EXTERN_C String_t* _stringLiteralB3A3083FA5F0C79FEA30B5B38204217E3D180B72;
IL2CPP_EXTERN_C String_t* _stringLiteralB53164CA4C459CB05FC00B949BA6C9342B3E0E5C;
IL2CPP_EXTERN_C String_t* _stringLiteralB723E5FA50CBED75F142D8F9663A11B382CB4D50;
IL2CPP_EXTERN_C String_t* _stringLiteralB82E8094F6C269064FB21EECF4E3877BB41DC47D;
IL2CPP_EXTERN_C String_t* _stringLiteralBAFFCA9E64319DB37AD0AAD6279F0739A06705C1;
IL2CPP_EXTERN_C String_t* _stringLiteralBFA92CAEAE5C188E8FB205FED5A693D0E5657C29;
IL2CPP_EXTERN_C String_t* _stringLiteralC39BEFA6E2364103FE54E7F847E0E38844016692;
IL2CPP_EXTERN_C String_t* _stringLiteralD1D91A54A9D205529046FE855F06CA9F29886FCE;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDCF6CF1CD99E83C31C5EB27488E6D6783FD8666C;
IL2CPP_EXTERN_C String_t* _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
IL2CPP_EXTERN_C String_t* _stringLiteralE3E0BC991DA54A4EBC858D968493D0CB4D55810B;
IL2CPP_EXTERN_C String_t* _stringLiteralE47BAF69A9960A55C663C31AEEB05CF0E17A548B;
IL2CPP_EXTERN_C String_t* _stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31;
IL2CPP_EXTERN_C String_t* _stringLiteralE9BC5448F801E76297E3357031AF715633F11FAE;
IL2CPP_EXTERN_C String_t* _stringLiteralED4982B52E882040926EF298B3D48FD767897991;
IL2CPP_EXTERN_C String_t* _stringLiteralF01153B013CC270E68EC619A597A8D4A666327D5;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF67FF52BAD5C543F3623D3051EA5B4ED8BCD0DEB;
IL2CPP_EXTERN_C String_t* _stringLiteralFDFF7DE977FD5A162C675407A9DFEB07EC1019F5;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Exists_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m7682788918845A8DAC3D68E9D80B5C2286BAE808_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3_m5473A83C72D384F7BBC121D0BBA5E80DB094A9DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4_m41AFA5F7BC93A89453C37582BB7D8B74C3296C98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4_m08E36D1E5E2C1BCE4F2D497E3BF9CF862A39F2CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3_m456E846D66F83310D60F047CBE357BE66D1A601E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m405223B330A9C7CAEE30F69ED25942A300B8AD8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m4CB15D06286C7AA0BA8318800D23A9D574CBE0E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mED939EC41D03B857452EE11F39619C2EBAD738A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m26E971C14F1544C9885F24A11904078C58824DD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m24028EF7BDC5CB458ACD42392CA5D7159051A041_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3_m4B2CBF4544E17D942BE7F61BD18CDA6E8F5654E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4_mF933D9071DD1DFC3C8873330EAC341C8BE384CDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3_mF130BA2C0B49C95C083ECAD3EEF252256616EC3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m008E78C54F6D07930908411CC2D34FA037CE13F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Device_Validate_mF697DB62E9092A7575AD739CA70362B6C0E8DA9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5DB2F37A92DF25F21D413B2FD5032AE166575E93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisString_t_mFDD6B0338B3884E99F737C0A244064FB65FA15ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisKeyValuePair_2_tB29ECA52B7B5116B1B8BEE9839440B852F86E651_TisServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D_m57DC7B8DA4D36B1F7EBF75401E9CF4842D1BE14E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m1CACB6EA5206C77CFDE019023F5F3D5962A525C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m9BAF0642B14948F0C9FD481375A07EC439843694_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D_mBE49109AB9E55633783C064A19F6E380587160DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7009053EFD176FAACD4AEE93783EF107EA2FB70F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7E0899DECE2A081D7E8285C2B25A1FF33AC61E27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m00757EFB48FF97E701B8FA0E15A3FA83EDEE1E67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m19C7B752431F5A49D7ED56F064AB16071A418ABE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisLog_t716EF1A690F81BB19494869650F9161B1B60E74A_m12E2CC448EFF0E44EB4870855A9538BB9C78FE33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m8FB77AD62AEE27727E7D5C067E307DDB739F8405_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m1E3DD229B4B5832486C0B15F4503CE6109DCAC46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD0B9443F072815730072E662FF0C2D4DEB834709_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCF6C68013E9EEDE20E1461ACDBE498E9C0E6A41C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEE8E4CAEF186EFA0540E1901BA3965B6AE7C45E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogContainer_Validate_m6029039B01156FCECF4A03F17C002F80A424A79D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogJsonConverter_ReadJson_m56D5EE09F62BB82CA685F48DDA4B5939C029BBCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogJsonConverter_WriteJson_m5CCC7993C8B038E4D147799AD37840DD7E6A8A90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Log_Validate_m06947D5D6A4DEB54521430A714CCBB83C567BA31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkInformation_add_NetworkStatusChanged_m4EE1DF896ACE6D54B090348D73623E4C29ADF644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkInformation_remove_NetworkStatusChanged_m340D00C6A982247F5C2A55B05B8767F7B40378D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkStateAdapter_CheckNetworkAvailable_m62EBA984AD02CE35C41977FE9AF2E9DA337E5343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkStateAdapter_U3C_ctorU3Eb__5_0_m0CE4B3E669FFF768472BAA5AF805BBBE56EEA109_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkStateIngestion_OnNetworkStateChange_m05909CBDD3FEC79BF109AB9CC3015975D89909DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RetryableIngestion__ctor_m53209B6C23424208A0CC96F70D6E28327D8AAAA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCall_Cancel_m3E010F03B685313B1BBEFD6A3CC6C50187FA9AA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCall_ContinueWith_mC2D657EC79A22E85E1269E18F5283DBC7DD5F1F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCall_CopyState_m281AC07EFD4E05A8D3E9C8911E633F10390D84AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCall_SetException_mE0EB108581A7CF084B3E2DF9B59423543EE1EE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCall_SetResult_m9B59DF998BF6786119C0490316D28F0B7E936D88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StartServiceLog_Validate_mE86E1D04071B73F5B6520E1CA56957CD76CDA785_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m2976BD674D15E3F3419CF9D4C4C27C863EAAC469_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m75DDCE5DDCDA410C5506E2E7DD257E9E065EBB13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendAsyncU3Ed__9_MoveNext_m2A966297E93944E4427565DB81CC1BAC79075C58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendRequestAsyncU3Ed__11_MoveNext_mEB54C0A8B8F3AC9E82BD7CFCA5923C427E266259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCancelAllCallsU3Eb__11_0_mF203030FDBB53356B5C6D6D2DAD128FC3DA8A895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CSendRequestAsyncU3Eb__0_m6CE9B712D9F7838960888F1D603DEBEC1001D221_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_m35E103C2C949E6743F242D1C918B3B2A6A9D4D80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CRetryCallU3Eb__0_mC717B8F18957F7557F830638995354CC280B958D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CIntervalCallU3Eb__0_m45F7E4AA0127A5B0C384DE0B0D2A260F75759EA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CRetryCallU3Eb__0_mFB71D58D8D80DC156598A7CD8DA6B82BCE837691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CRetryCallU3Eb__1_m4236537DD40C0C7CD59E2EFC0B327B397BDF5B7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CRetryCallContinuationU3Eb__0_m01F522B5D6147CE587D48CC611CF39423DDE5731_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CCallU3Eb__0_m41FEEDBDF9275B2414CA1E49393F43A9E6AC23C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeMarshal_AddEventHandler_TisNetworkStatusChangedEventHandler_t6F8926B863301A8B2873AF7FE3968C729B1FEB4A_m7237298FED5FBBD2CC0EE67DA82F36892B7E0D8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* JsonObjectAttribute_tF1A0A8D30875A7ECC57B4B2D52C684D61D2038B9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Log_t716EF1A690F81BB19494869650F9161B1B60E74A_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IConnectionProfile_t9F2B5E98A8F0E48AD985F9E4C16DAC7DFE44F385;
struct INetworkStatusChangedEventHandler_t6F8926B863301A8B2873AF7FE3968C729B1FEB4A_ComCallableWrapper;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Networking.Connectivity.INetworkInformationStatics2
struct NOVTABLE INetworkInformationStatics2_t5B5992EF54A5A5D44132F8E85D55FFB4C89C335A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics2_U24__Stripped0_FindConnectionProfilesAsync_mAD0DBA439CAE51EB012594DB6CB24BBD6312EC96() = 0;
};

// System.Collections.Generic.Dictionary`2<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>
struct Dictionary_2_tF6E6966F10E61B56845F7774B83ED8BD6E9FAF16  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t209CD3DB4F61B1FD4EF2DB360BFD29D44F12977A* ____entries_1;
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
	KeyCollection_t9CE4C68888545104BE71284BCB22076C9CA67814* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1EF9BC97DA7B0A77EDF91DB6D0E14BD85CB22E76* ____values_8;
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

// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t544267CEF10C325101E064C4EC137C5A1ADC3D92* ____entries_1;
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
	KeyCollection_t0E4390205378461F38BE857216C35DA687D245FA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA14BD0EE42AEA7EBFF2E10776A87B14C678C2E11* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<Microsoft.AppCenter.Ingestion.ServiceCall>
struct HashSet_1_t4C4408853DBA73AA631F24AB98ABBA00CF3B00AE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t3AEAF35324811DBE0C42466A356FCBE328E5B2C7* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<Microsoft.AppCenter.Ingestion.ServiceCall>
struct List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ServiceCallU5BU5D_t9BA3C64BBAEC90687CB7F213A56E7EA5905E31BF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ServiceCallU5BU5D_t9BA3C64BBAEC90687CB7F213A56E7EA5905E31BF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// Microsoft.AppCenter.AppCenterLog
struct AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D  : public RuntimeObject
{
};

struct AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_StaticFields
{
	// System.String Microsoft.AppCenter.AppCenterLog::<LogTag>k__BackingField
	String_t* ___U3CLogTagU3Ek__BackingField_0;
	// System.Object Microsoft.AppCenter.AppCenterLog::LogLock
	RuntimeObject* ___LogLock_1;
	// Microsoft.AppCenter.LogLevel modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.AppCenter.AppCenterLog::_level
	int32_t ____level_2;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B  : public RuntimeObject
{
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_kernelEvent
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E* ____registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_state
	int32_t ____state_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_threadIDExecutingCallbacks
	int32_t ____threadIDExecutingCallbacks_6;
	// System.Boolean System.Threading.CancellationTokenSource::_disposed
	bool ____disposed_7;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_executingCallback
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ____executingCallback_8;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_timer
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ____timer_9;
};

struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_StaticFields
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::s_canceledSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_canceledSource_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::s_neverCanceledSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_neverCanceledSource_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD* ___s_timerCallback_10;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// Microsoft.AppCenter.Utils.Files.File
struct File_tA59B16BE432513D1F2E34CE4E5179CD25D2B083B  : public RuntimeObject
{
	// System.IO.FileInfo Microsoft.AppCenter.Utils.Files.File::_underlyingFileInfo
	FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* ____underlyingFileInfo_0;
};

// System.Net.Http.HttpContent
struct HttpContent_tD09737BB27CB151BC9688882F785208620211E1C  : public RuntimeObject
{
	// System.Net.Http.HttpContent/FixedMemoryStream System.Net.Http.HttpContent::buffer
	FixedMemoryStream_tDCEF941500AF29277C42DDF40970FB21B4A66188* ___buffer_0;
	// System.Boolean System.Net.Http.HttpContent::disposed
	bool ___disposed_1;
	// System.Net.Http.Headers.HttpContentHeaders System.Net.Http.HttpContent::headers
	HttpContentHeaders_t4E2506F081BD682D0538A5CB38ED1D836C2E8C4F* ___headers_2;
};

// System.Net.Http.HttpMessageHandler
struct HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17  : public RuntimeObject
{
};

// System.Net.Http.HttpMessageInvoker
struct HttpMessageInvoker_t00698E3A7D5068564C401C7D3F90798056A04800  : public RuntimeObject
{
	// System.Net.Http.HttpMessageHandler System.Net.Http.HttpMessageInvoker::handler
	HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17* ___handler_0;
	// System.Boolean System.Net.Http.HttpMessageInvoker::disposeHandler
	bool ___disposeHandler_1;
};

// System.Net.Http.HttpMethod
struct HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E  : public RuntimeObject
{
	// System.String System.Net.Http.HttpMethod::method
	String_t* ___method_7;
};

struct HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_StaticFields
{
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::delete_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___delete_method_0;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::get_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___get_method_1;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::head_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___head_method_2;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::options_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___options_method_3;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::post_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___post_method_4;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::put_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___put_method_5;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::trace_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___trace_method_6;
};

// Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter
struct HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE  : public RuntimeObject
{
	// System.Net.Http.HttpClient Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter::_httpClient
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ____httpClient_1;
	// System.Object Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter::_lockObject
	RuntimeObject* ____lockObject_2;
};

struct HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE_StaticFields
{
	// System.Func`1<System.Net.Http.HttpMessageHandler> Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter::HttpMessageHandlerOverride
	Func_1_t6AF25BB0B2C5568E8B6D37356D94C2B0A4B8D757* ___HttpMessageHandlerOverride_3;
	// System.UInt32[] Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter::NetworkUnavailableCodes
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___NetworkUnavailableCodes_4;
};

// System.Net.Http.HttpRequestMessage
struct HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2  : public RuntimeObject
{
	// System.Net.Http.Headers.HttpRequestHeaders System.Net.Http.HttpRequestMessage::headers
	HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7* ___headers_0;
	// System.Net.Http.HttpMethod System.Net.Http.HttpRequestMessage::method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___method_1;
	// System.Version System.Net.Http.HttpRequestMessage::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_2;
	// System.Uri System.Net.Http.HttpRequestMessage::uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri_3;
	// System.Boolean System.Net.Http.HttpRequestMessage::is_used
	bool ___is_used_4;
	// System.Boolean System.Net.Http.HttpRequestMessage::disposed
	bool ___disposed_5;
	// System.Net.Http.HttpContent System.Net.Http.HttpRequestMessage::<Content>k__BackingField
	HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* ___U3CContentU3Ek__BackingField_6;
};

// System.Net.Http.HttpResponseMessage
struct HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970  : public RuntimeObject
{
	// System.Net.Http.Headers.HttpResponseHeaders System.Net.Http.HttpResponseMessage::headers
	HttpResponseHeaders_tAD02F8CC2960BC561FEFD63E0121701743EAA7A8* ___headers_0;
	// System.String System.Net.Http.HttpResponseMessage::reasonPhrase
	String_t* ___reasonPhrase_1;
	// System.Net.HttpStatusCode System.Net.Http.HttpResponseMessage::statusCode
	int32_t ___statusCode_2;
	// System.Version System.Net.Http.HttpResponseMessage::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_3;
	// System.Boolean System.Net.Http.HttpResponseMessage::disposed
	bool ___disposed_4;
	// System.Net.Http.HttpContent System.Net.Http.HttpResponseMessage::<Content>k__BackingField
	HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* ___U3CContentU3Ek__BackingField_5;
	// System.Net.Http.HttpRequestMessage System.Net.Http.HttpResponseMessage::<RequestMessage>k__BackingField
	HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* ___U3CRequestMessageU3Ek__BackingField_6;
};

// Microsoft.AppCenter.Ingestion.Http.IngestionDecorator
struct IngestionDecorator_tFB755D94DE686939DD91160456B8D33547F61857  : public RuntimeObject
{
	// Microsoft.AppCenter.Ingestion.IIngestion Microsoft.AppCenter.Ingestion.Http.IngestionDecorator::<DecoratedApi>k__BackingField
	RuntimeObject* ___U3CDecoratedApiU3Ek__BackingField_0;
};

// Microsoft.AppCenter.Ingestion.Http.IngestionHttp
struct IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6  : public RuntimeObject
{
	// System.String Microsoft.AppCenter.Ingestion.Http.IngestionHttp::_baseLogUrl
	String_t* ____baseLogUrl_5;
	// Microsoft.AppCenter.Ingestion.Http.IHttpNetworkAdapter Microsoft.AppCenter.Ingestion.Http.IngestionHttp::_httpNetwork
	RuntimeObject* ____httpNetwork_6;
};

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3  : public RuntimeObject
{
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A* ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject* ____annotations_4;
};

struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_StaticFields
{
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46* ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BigIntegerTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___StringTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___GuidTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___TimeSpanTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___UriTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___CharTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___DateTimeTypes_13;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BytesTypes_14;
};

// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16  : public RuntimeObject
{
};

// Microsoft.AppCenter.Ingestion.Models.LogContainer
struct LogContainer_tBCB89E6BB0DBE4E8EB7FC504CBCDFE546A8EE33D  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log> Microsoft.AppCenter.Ingestion.Models.LogContainer::<Logs>k__BackingField
	RuntimeObject* ___U3CLogsU3Ek__BackingField_0;
};

// Microsoft.AppCenter.Ingestion.Models.Serialization.LogSerializer
struct LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8  : public RuntimeObject
{
};

struct LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_StaticFields
{
	// Newtonsoft.Json.JsonSerializerSettings Microsoft.AppCenter.Ingestion.Models.Serialization.LogSerializer::SerializationSettings
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___SerializationSettings_0;
	// Microsoft.AppCenter.Ingestion.Models.Serialization.LogJsonConverter Microsoft.AppCenter.Ingestion.Models.Serialization.LogSerializer::Converter
	LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB* ___Converter_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Net.Http.Headers.MediaTypeHeaderValue
struct MediaTypeHeaderValue_t9B713F37D05A4B23FFAFEAE8B988ED7BC46BCEAF  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue> System.Net.Http.Headers.MediaTypeHeaderValue::parameters
	List_1_tDA5CEFAE1D25D1C53EE560BA507CD8C8C9A418CC* ___parameters_0;
	// System.String System.Net.Http.Headers.MediaTypeHeaderValue::media_type
	String_t* ___media_type_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter
struct NetworkStateAdapter_t162CDFD808FB548577B4DECD58028CAC271CAD8B  : public RuntimeObject
{
	// Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter/IsNetworkAvailableDelegate Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter::<IsNetworkAvailable>k__BackingField
	IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* ___U3CIsNetworkAvailableU3Ek__BackingField_0;
	// System.EventHandler Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter::NetworkStatusChanged
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___NetworkStatusChanged_1;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
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

// Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tE3AE9B6AC9346C1BBA66C6207687B82FEEA3B227  : public RuntimeObject
{
	// System.Exception Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<>c__DisplayClass11_0::e
	Exception_t* ___e_0;
};

// Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t81B7DBF7C608A675F863D0FBCE96D50FDB389041  : public RuntimeObject
{
	// Microsoft.AppCenter.Ingestion.ServiceCall Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<>c__DisplayClass8_0::call
	ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* ___call_0;
};

// Microsoft.AppCenter.Ingestion.Http.NetworkStateIngestion/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA  : public RuntimeObject
{
	// Microsoft.AppCenter.Ingestion.ServiceCall Microsoft.AppCenter.Ingestion.Http.NetworkStateIngestion/<>c__DisplayClass4_0::call
	ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* ___call_0;
	// Microsoft.AppCenter.Ingestion.IServiceCall Microsoft.AppCenter.Ingestion.Http.NetworkStateIngestion/<>c__DisplayClass4_0::result
	RuntimeObject* ___result_1;
};

// Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c
struct U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D  : public RuntimeObject
{
};

struct U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D_StaticFields
{
	// Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c::<>9
	U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D* ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>,Microsoft.AppCenter.Ingestion.ServiceCall> Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c::<>9__11_0
	Func_2_t6BBE2A46DEE55390A48A23CDCC5222AD63F5FF8B* ___U3CU3E9__11_0_1;
};

// Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t98D32386B0EA0CFFDF2A6BA1238E13711A6ED628  : public RuntimeObject
{
	// System.Random Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass3_0::random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___random_0;
};

// Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t5D82049F904442EA70A5C18B185A6A06A9B0D5A5  : public RuntimeObject
{
	// System.Action Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass5_0::action
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action_0;
};

// Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285  : public RuntimeObject
{
	// Microsoft.AppCenter.Ingestion.ServiceCall Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass6_0::call
	ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* ___call_0;
	// Microsoft.AppCenter.Ingestion.IServiceCall Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass6_0::result
	RuntimeObject* ___result_1;
	// Microsoft.AppCenter.Ingestion.Http.RetryableIngestion Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass6_0::<>4__this
	RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* ___U3CU3E4__this_2;
	// System.Int32 Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass6_0::retry
	int32_t ___retry_3;
};

// Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE  : public RuntimeObject
{
	// Microsoft.AppCenter.Ingestion.Http.RetryableIngestion Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass7_0::<>4__this
	RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* ___U3CU3E4__this_0;
	// Microsoft.AppCenter.Ingestion.ServiceCall Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass7_0::call
	ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* ___call_1;
	// System.Int32 Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass7_0::retry
	int32_t ___retry_2;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.Http.HttpResponseMessage>
struct ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>
struct ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>
struct ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
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

// System.Collections.Generic.List`1/Enumerator<Microsoft.AppCenter.Ingestion.ServiceCall>
struct Enumerator_t890F7495A9FEBCDBDAB13DA1AC59115DD621AA32 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>
struct KeyValuePair_2_tB29ECA52B7B5116B1B8BEE9839440B852F86E651 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ConstructorHandling>
struct Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.Formatting>
struct Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling>
struct Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling>
struct Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling>
struct Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.Required>
struct Nullable_1_t0ED183EB9E50B714F9A282F07935579F070B562B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling>
struct Nullable_1_t762E380C63D6C0CB1E8ADBCADE57240FB061367F 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>
struct Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___m_result_22;
};

struct Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7BDD01363BBCFF64B4A6BDDBBE222716A0B2E2BA* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;
};

struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_23;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// System.Net.Http.ByteArrayContent
struct ByteArrayContent_tBF2970AB753D27DAEF2C2235A1A090944A8F386E  : public HttpContent_tD09737BB27CB151BC9688882F785208620211E1C
{
	// System.Byte[] System.Net.Http.ByteArrayContent::content
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___content_3;
	// System.Int32 System.Net.Http.ByteArrayContent::offset
	int32_t ___offset_4;
	// System.Int32 System.Net.Http.ByteArrayContent::count
	int32_t ___count_5;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// Windows.Networking.Connectivity.ConnectionProfile
struct ConnectionProfile_t7D38F137CC7E2E3288194F8D9DEF267E0E72EE07  : public Il2CppComObject
{
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

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B 
{
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;
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

// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A  : public JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3
{
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616* ____listChanged_15;
	// System.ComponentModel.AddingNewEventHandler Newtonsoft.Json.Linq.JContainer::_addingNew
	AddingNewEventHandler_tD9BAC60F604446ED14967643F63A83CE2A5C3701* ____addingNew_16;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* ____collectionChanged_17;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject* ____syncRoot_18;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_19;
};

// Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E 
{
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;
};

struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_StaticFields
{
	// System.Char[] Newtonsoft.Json.JsonPosition::SpecialCharacters
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___SpecialCharacters_0;
};
// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
};

// Microsoft.AppCenter.Ingestion.Models.Serialization.LogJsonConverter
struct LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> Microsoft.AppCenter.Ingestion.Models.Serialization.LogJsonConverter::_logTypes
	Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* ____logTypes_0;
	// System.Object Microsoft.AppCenter.Ingestion.Models.Serialization.LogJsonConverter::_jsonConverterLock
	RuntimeObject* ____jsonConverterLock_1;
};

struct LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB_StaticFields
{
	// Newtonsoft.Json.JsonSerializerSettings Microsoft.AppCenter.Ingestion.Models.Serialization.LogJsonConverter::SerializationSettings
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___SerializationSettings_2;
};

// Microsoft.AppCenter.Ingestion.Http.NetworkStateIngestion
struct NetworkStateIngestion_t3B1209F7E80F7412CE9EF9FB7AAADA7D62244AF8  : public IngestionDecorator_tFB755D94DE686939DD91160456B8D33547F61857
{
	// System.Collections.Generic.ISet`1<Microsoft.AppCenter.Ingestion.ServiceCall> Microsoft.AppCenter.Ingestion.Http.NetworkStateIngestion::_calls
	RuntimeObject* ____calls_1;
	// Microsoft.AppCenter.Ingestion.Http.INetworkStateAdapter Microsoft.AppCenter.Ingestion.Http.NetworkStateIngestion::_networkStateAdapter
	RuntimeObject* ____networkStateAdapter_2;
};

// Microsoft.AppCenter.Ingestion.Http.RetryableIngestion
struct RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86  : public IngestionDecorator_tFB755D94DE686939DD91160456B8D33547F61857
{
	// System.Collections.Generic.IDictionary`2<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer> Microsoft.AppCenter.Ingestion.Http.RetryableIngestion::_calls
	RuntimeObject* ____calls_2;
	// System.TimeSpan[] Microsoft.AppCenter.Ingestion.Http.RetryableIngestion::_retryIntervals
	TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* ____retryIntervals_3;
};

struct RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86_StaticFields
{
	// System.TimeSpan[] Microsoft.AppCenter.Ingestion.Http.RetryableIngestion::DefaultIntervals
	TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* ___DefaultIntervals_1;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.Threading.Timer
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Threading.TimerCallback System.Threading.Timer::callback
	TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD* ___callback_1;
	// System.Object System.Threading.Timer::state
	RuntimeObject* ___state_2;
	// System.Int64 System.Threading.Timer::due_time_ms
	int64_t ___due_time_ms_3;
	// System.Int64 System.Threading.Timer::period_ms
	int64_t ___period_ms_4;
	// System.Int64 System.Threading.Timer::next_run
	int64_t ___next_run_5;
	// System.Boolean System.Threading.Timer::disposed
	bool ___disposed_6;
	// System.Boolean System.Threading.Timer::is_dead
	bool ___is_dead_7;
	// System.Boolean System.Threading.Timer::is_added
	bool ___is_added_8;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t62D79343C057E72A17F947A2697C0B3F0E949140 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t62D79343C057E72A17F947A2697C0B3F0E949140__padding[16];
	};
};

// Interop/Kernel32/FILE_TIME
struct FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 
{
	// System.UInt32 Interop/Kernel32/FILE_TIME::dwLowDateTime
	uint32_t ___dwLowDateTime_0;
	// System.UInt32 Interop/Kernel32/FILE_TIME::dwHighDateTime
	uint32_t ___dwHighDateTime_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Net.Http.HttpResponseMessage>
struct AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>
struct AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Net.Http.HttpResponseMessage>
struct ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA ___m_configuredTaskAwaiter_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 ___m_configuredTaskAwaiter_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.String>
struct ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 ___m_configuredTaskAwaiter_0;
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

// System.Nullable`1<System.Runtime.Serialization.StreamingContext>
struct Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tAF29AD7806E5FAD06A2D21AFD04BA59150D73C35  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tAF29AD7806E5FAD06A2D21AFD04BA59150D73C35_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::4A0329F6BC6CFCA9A8AB50642D4194DAC746722AB550F113AEC760677EBFD217
	__StaticArrayInitTypeSizeU3D16_t62D79343C057E72A17F947A2697C0B3F0E949140 ___4A0329F6BC6CFCA9A8AB50642D4194DAC746722AB550F113AEC760677EBFD217_0;
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

// System.Net.Http.HttpClient
struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42  : public HttpMessageInvoker_t00698E3A7D5068564C401C7D3F90798056A04800
{
	// System.Uri System.Net.Http.HttpClient::base_address
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___base_address_3;
	// System.Threading.CancellationTokenSource System.Net.Http.HttpClient::cts
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___cts_4;
	// System.Boolean System.Net.Http.HttpClient::disposed
	bool ___disposed_5;
	// System.Net.Http.Headers.HttpRequestHeaders System.Net.Http.HttpClient::headers
	HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7* ___headers_6;
	// System.Int64 System.Net.Http.HttpClient::buffer_size
	int64_t ___buffer_size_7;
	// System.TimeSpan System.Net.Http.HttpClient::timeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeout_8;
};

struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_StaticFields
{
	// System.TimeSpan System.Net.Http.HttpClient::TimeoutDefault
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___TimeoutDefault_2;
};

// System.Net.Http.Headers.HttpHeaders
struct HttpHeaders_t2AF7326A86CE4E4F524137C7A7FF8F3597C12449  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HttpHeaders/HeaderBucket> System.Net.Http.Headers.HttpHeaders::headers
	Dictionary_2_t1B3325E856D6A0623AE0B139B6A7E8B27C590A41* ___headers_1;
	// System.Net.Http.Headers.HttpHeaderKind System.Net.Http.Headers.HttpHeaders::HeaderKind
	int32_t ___HeaderKind_2;
	// System.Nullable`1<System.Boolean> System.Net.Http.Headers.HttpHeaders::connectionclose
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___connectionclose_3;
	// System.Nullable`1<System.Boolean> System.Net.Http.Headers.HttpHeaders::transferEncodingChunked
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___transferEncodingChunked_4;
};

struct HttpHeaders_t2AF7326A86CE4E4F524137C7A7FF8F3597C12449_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HeaderInfo> System.Net.Http.Headers.HttpHeaders::known_headers
	Dictionary_2_t5CD3F4D4D92A89783AE1C95F1528A7B08E8A54E0* ___known_headers_0;
};
// Windows.Networking.Connectivity.INetworkInformationStatics
struct NOVTABLE INetworkInformationStatics_tD2ECEA3EBE3621A67043DFCAC738C00D5A77356D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped0_GetConnectionProfiles_mA202B7E73DF040CCBA5C05489982B33C953476CB() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_GetInternetConnectionProfile_mFDE8749000C85A402B0E2D75DAA8046AD174B903(IConnectionProfile_t9F2B5E98A8F0E48AD985F9E4C16DAC7DFE44F385** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped1_GetLanIdentifiers_mA881ADE11081A156F66E3EE7F7B5E8E2FA88397D() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped2_GetHostNames_m450EF4BC7F4B68765DA39B4B035D81E93F712C72() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped3_GetProxyConfigurationAsync_m32493A8F8C22D7087107EA0AB8C03F63661365B3() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped4_GetSortedEndpointPairs_m237D86F43E3EF34F50F5C6E168B0622215E47A5E() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_add_NetworkStatusChanged_m3A5AD486F9C2B06BB2B34C5DED1F183B104779B6(INetworkStatusChangedEventHandler_t6F8926B863301A8B2873AF7FE3968C729B1FEB4A_ComCallableWrapper* ___networkStatusHandler0, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_remove_NetworkStatusChanged_mB339B75F91A13A087C3CEE3306C99AD1540061EB(EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___eventCookie0) = 0;
};

// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1  : public JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A
{
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632* ____properties_20;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_21;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_tF293724DEA588C35A7E94C4F4413AEE6438FE9CD* ___PropertyChanging_22;
};

// Newtonsoft.Json.JsonContainerAttribute
struct JsonContainerAttribute_t84168DEA2B41EB84D4BF6C3AF04D6075F4CEB1C7  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Newtonsoft.Json.JsonContainerAttribute::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String Newtonsoft.Json.JsonContainerAttribute::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_1;
	// System.String Newtonsoft.Json.JsonContainerAttribute::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_2;
	// System.Type Newtonsoft.Json.JsonContainerAttribute::<ItemConverterType>k__BackingField
	Type_t* ___U3CItemConverterTypeU3Ek__BackingField_3;
	// System.Object[] Newtonsoft.Json.JsonContainerAttribute::<ItemConverterParameters>k__BackingField
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___U3CItemConverterParametersU3Ek__BackingField_4;
	// Newtonsoft.Json.Serialization.NamingStrategy Newtonsoft.Json.JsonContainerAttribute::<NamingStrategyInstance>k__BackingField
	NamingStrategy_tB85DD4A9F6C33F668AF7273D3B5193ABC4617D50* ___U3CNamingStrategyInstanceU3Ek__BackingField_5;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonContainerAttribute::_isReference
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____isReference_6;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonContainerAttribute::_itemIsReference
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____itemIsReference_7;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonContainerAttribute::_itemReferenceLoopHandling
	Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 ____itemReferenceLoopHandling_8;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonContainerAttribute::_itemTypeNameHandling
	Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 ____itemTypeNameHandling_9;
	// System.Type Newtonsoft.Json.JsonContainerAttribute::_namingStrategyType
	Type_t* ____namingStrategyType_10;
	// System.Object[] Newtonsoft.Json.JsonContainerAttribute::_namingStrategyParameters
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____namingStrategyParameters_11;
};

// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765  : public RuntimeObject
{
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject* ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;
};

// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59  : public RuntimeObject
{
	// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializer::_typeNameHandling
	int32_t ____typeNameHandling_0;
	// Newtonsoft.Json.TypeNameAssemblyFormatHandling Newtonsoft.Json.JsonSerializer::_typeNameAssemblyFormatHandling
	int32_t ____typeNameAssemblyFormatHandling_1;
	// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializer::_preserveReferencesHandling
	int32_t ____preserveReferencesHandling_2;
	// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializer::_referenceLoopHandling
	int32_t ____referenceLoopHandling_3;
	// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializer::_missingMemberHandling
	int32_t ____missingMemberHandling_4;
	// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializer::_objectCreationHandling
	int32_t ____objectCreationHandling_5;
	// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializer::_nullValueHandling
	int32_t ____nullValueHandling_6;
	// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializer::_defaultValueHandling
	int32_t ____defaultValueHandling_7;
	// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializer::_constructorHandling
	int32_t ____constructorHandling_8;
	// Newtonsoft.Json.MetadataPropertyHandling Newtonsoft.Json.JsonSerializer::_metadataPropertyHandling
	int32_t ____metadataPropertyHandling_9;
	// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::_converters
	JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89* ____converters_10;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::_contractResolver
	RuntimeObject* ____contractResolver_11;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializer::_traceWriter
	RuntimeObject* ____traceWriter_12;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializer::_equalityComparer
	RuntimeObject* ____equalityComparer_13;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializer::_serializationBinder
	RuntimeObject* ____serializationBinder_14;
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializer::_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ____context_15;
	// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializer::_referenceResolver
	RuntimeObject* ____referenceResolver_16;
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializer::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_17;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializer::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_18;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializer::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_19;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializer::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_20;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializer::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_21;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializer::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_22;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializer::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_23;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializer::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_24;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializer::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_25;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_maxDepthSet
	bool ____maxDepthSet_26;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializer::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_27;
	// System.String Newtonsoft.Json.JsonSerializer::_dateFormatString
	String_t* ____dateFormatString_28;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_dateFormatStringSet
	bool ____dateFormatStringSet_29;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializer::Error
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___Error_30;
};

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.JsonWriter::<AutoCompleteOnClose>k__BackingField
	bool ___U3CAutoCompleteOnCloseU3Ek__BackingField_7;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_8;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_9;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_10;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_11;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_12;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_13;
};

struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_StaticFields
{
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArrayTempate
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArrayTempate_1;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Microsoft.AppCenter.Ingestion.ServiceCall
struct ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D  : public RuntimeObject
{
	// System.Threading.CancellationTokenSource Microsoft.AppCenter.Ingestion.ServiceCall::_tokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____tokenSource_0;
	// System.Action`1<Microsoft.AppCenter.Ingestion.IServiceCall> Microsoft.AppCenter.Ingestion.ServiceCall::_continuationAction
	Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* ____continuationAction_1;
	// System.Object Microsoft.AppCenter.Ingestion.ServiceCall::_lock
	RuntimeObject* ____lock_2;
	// System.Boolean Microsoft.AppCenter.Ingestion.ServiceCall::_disposed
	bool ____disposed_3;
	// System.Boolean Microsoft.AppCenter.Ingestion.ServiceCall::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_4;
	// System.String Microsoft.AppCenter.Ingestion.ServiceCall::<Result>k__BackingField
	String_t* ___U3CResultU3Ek__BackingField_5;
	// System.Exception Microsoft.AppCenter.Ingestion.ServiceCall::<Exception>k__BackingField
	Exception_t* ___U3CExceptionU3Ek__BackingField_6;
	// System.String Microsoft.AppCenter.Ingestion.ServiceCall::<AppSecret>k__BackingField
	String_t* ___U3CAppSecretU3Ek__BackingField_7;
	// System.Guid Microsoft.AppCenter.Ingestion.ServiceCall::<InstallId>k__BackingField
	Guid_t ___U3CInstallIdU3Ek__BackingField_8;
	// System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log> Microsoft.AppCenter.Ingestion.ServiceCall::<Logs>k__BackingField
	RuntimeObject* ___U3CLogsU3Ek__BackingField_9;
};

// System.Net.Http.StringContent
struct StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9  : public ByteArrayContent_tBF2970AB753D27DAEF2C2235A1A090944A8F386E
{
};

// Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA
struct WIN32_FILE_ATTRIBUTE_DATA_tD093F8658579DA72CCD2E158A681DDE37834F73B 
{
	// System.Int32 Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::dwFileAttributes
	int32_t ___dwFileAttributes_0;
	// Interop/Kernel32/FILE_TIME Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::ftCreationTime
	FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 ___ftCreationTime_1;
	// Interop/Kernel32/FILE_TIME Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::ftLastAccessTime
	FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 ___ftLastAccessTime_2;
	// Interop/Kernel32/FILE_TIME Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::ftLastWriteTime
	FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 ___ftLastWriteTime_3;
	// System.UInt32 Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::nFileSizeHigh
	uint32_t ___nFileSizeHigh_4;
	// System.UInt32 Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::nFileSizeLow
	uint32_t ___nFileSizeLow_5;
};

// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F  : public Exception_t
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* ___m_innerExceptions_18;
};

// Microsoft.AppCenter.AppCenterException
struct AppCenterException_tB634D40CB28DEDD5DB0505D281398E1C085E5C6C  : public Exception_t
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA System.IO.FileSystemInfo::_data
	WIN32_FILE_ATTRIBUTE_DATA_tD093F8658579DA72CCD2E158A681DDE37834F73B ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialized
	int32_t ____dataInitialized_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_5;
};

// System.Net.Http.Headers.HttpContentHeaders
struct HttpContentHeaders_t4E2506F081BD682D0538A5CB38ED1D836C2E8C4F  : public HttpHeaders_t2AF7326A86CE4E4F524137C7A7FF8F3597C12449
{
	// System.Net.Http.HttpContent System.Net.Http.Headers.HttpContentHeaders::content
	HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* ___content_5;
};

// System.Net.Http.HttpRequestException
struct HttpRequestException_t4460572C60D2686D9713A867A73B238DB3C1BB40  : public Exception_t
{
};

// System.Net.Http.Headers.HttpRequestHeaders
struct HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7  : public HttpHeaders_t2AF7326A86CE4E4F524137C7A7FF8F3597C12449
{
	// System.Nullable`1<System.Boolean> System.Net.Http.Headers.HttpRequestHeaders::expectContinue
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___expectContinue_5;
};

// Newtonsoft.Json.JsonException
struct JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD  : public Exception_t
{
};

// Newtonsoft.Json.JsonObjectAttribute
struct JsonObjectAttribute_tF1A0A8D30875A7ECC57B4B2D52C684D61D2038B9  : public JsonContainerAttribute_t84168DEA2B41EB84D4BF6C3AF04D6075F4CEB1C7
{
	// Newtonsoft.Json.MemberSerialization Newtonsoft.Json.JsonObjectAttribute::_memberSerialization
	int32_t ____memberSerialization_12;
	// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling> Newtonsoft.Json.JsonObjectAttribute::_missingMemberHandling
	Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 ____missingMemberHandling_13;
	// System.Nullable`1<Newtonsoft.Json.Required> Newtonsoft.Json.JsonObjectAttribute::_itemRequired
	Nullable_1_t0ED183EB9E50B714F9A282F07935579F070B562B ____itemRequired_14;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.JsonObjectAttribute::_itemNullValueHandling
	Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 ____itemNullValueHandling_15;
};

// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF  : public RuntimeObject
{
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializerSettings::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_21;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_22;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializerSettings::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_23;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializerSettings::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_24;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_25;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializerSettings::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_26;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializerSettings::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_27;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_28;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializerSettings::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_29;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializerSettings::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_30;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_maxDepthSet
	bool ____maxDepthSet_31;
	// System.String Newtonsoft.Json.JsonSerializerSettings::_dateFormatString
	String_t* ____dateFormatString_32;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_dateFormatStringSet
	bool ____dateFormatStringSet_33;
	// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameAssemblyFormatHandling
	Nullable_1_t762E380C63D6C0CB1E8ADBCADE57240FB061367F ____typeNameAssemblyFormatHandling_34;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.JsonSerializerSettings::_defaultValueHandling
	Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 ____defaultValueHandling_35;
	// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling> Newtonsoft.Json.JsonSerializerSettings::_preserveReferencesHandling
	Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 ____preserveReferencesHandling_36;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.JsonSerializerSettings::_nullValueHandling
	Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 ____nullValueHandling_37;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.JsonSerializerSettings::_objectCreationHandling
	Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D ____objectCreationHandling_38;
	// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling> Newtonsoft.Json.JsonSerializerSettings::_missingMemberHandling
	Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 ____missingMemberHandling_39;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonSerializerSettings::_referenceLoopHandling
	Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 ____referenceLoopHandling_40;
	// System.Nullable`1<System.Runtime.Serialization.StreamingContext> Newtonsoft.Json.JsonSerializerSettings::_context
	Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A ____context_41;
	// System.Nullable`1<Newtonsoft.Json.ConstructorHandling> Newtonsoft.Json.JsonSerializerSettings::_constructorHandling
	Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 ____constructorHandling_42;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameHandling
	Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 ____typeNameHandling_43;
	// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling> Newtonsoft.Json.JsonSerializerSettings::_metadataPropertyHandling
	Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE ____metadataPropertyHandling_44;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_45;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializerSettings::<ContractResolver>k__BackingField
	RuntimeObject* ___U3CContractResolverU3Ek__BackingField_46;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializerSettings::<EqualityComparer>k__BackingField
	RuntimeObject* ___U3CEqualityComparerU3Ek__BackingField_47;
	// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver> Newtonsoft.Json.JsonSerializerSettings::<ReferenceResolverProvider>k__BackingField
	Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2* ___U3CReferenceResolverProviderU3Ek__BackingField_48;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializerSettings::<TraceWriter>k__BackingField
	RuntimeObject* ___U3CTraceWriterU3Ek__BackingField_49;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializerSettings::<SerializationBinder>k__BackingField
	RuntimeObject* ___U3CSerializationBinderU3Ek__BackingField_50;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializerSettings::<Error>k__BackingField
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___U3CErrorU3Ek__BackingField_51;
};

struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_StaticFields
{
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::DefaultContext
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___DefaultContext_9;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::DefaultCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___DefaultCulture_18;
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

// Windows.Networking.Connectivity.NetworkInformation
struct NetworkInformation_t7E519CA4945D985CB909921BBAA04BB58C68BF2D  : public Il2CppComObject
{
};

struct NetworkInformation_t7E519CA4945D985CB909921BBAA04BB58C68BF2D_StaticFields
{
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.Connectivity.INetworkInformationStatics2
	INetworkInformationStatics2_t5B5992EF54A5A5D44132F8E85D55FFB4C89C335A* ____inetworkInformationStatics2_t5B5992EF54A5A5D44132F8E85D55FFB4C89C335A;
	// Cached pointer to Windows.Networking.Connectivity.INetworkInformationStatics
	INetworkInformationStatics_tD2ECEA3EBE3621A67043DFCAC738C00D5A77356D* ____inetworkInformationStatics_tD2ECEA3EBE3621A67043DFCAC738C00D5A77356D;
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.Connectivity.NetworkInformation"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline INetworkInformationStatics2_t5B5992EF54A5A5D44132F8E85D55FFB4C89C335A* get_____inetworkInformationStatics2_t5B5992EF54A5A5D44132F8E85D55FFB4C89C335A()
	{
		INetworkInformationStatics2_t5B5992EF54A5A5D44132F8E85D55FFB4C89C335A* returnValue = ____inetworkInformationStatics2_t5B5992EF54A5A5D44132F8E85D55FFB4C89C335A;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(INetworkInformationStatics2_t5B5992EF54A5A5D44132F8E85D55FFB4C89C335A::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____inetworkInformationStatics2_t5B5992EF54A5A5D44132F8E85D55FFB4C89C335A), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____inetworkInformationStatics2_t5B5992EF54A5A5D44132F8E85D55FFB4C89C335A;
			}
		}
		return returnValue;
	}

	inline INetworkInformationStatics_tD2ECEA3EBE3621A67043DFCAC738C00D5A77356D* get_____inetworkInformationStatics_tD2ECEA3EBE3621A67043DFCAC738C00D5A77356D()
	{
		INetworkInformationStatics_tD2ECEA3EBE3621A67043DFCAC738C00D5A77356D* returnValue = ____inetworkInformationStatics_tD2ECEA3EBE3621A67043DFCAC738C00D5A77356D;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(INetworkInformationStatics_tD2ECEA3EBE3621A67043DFCAC738C00D5A77356D::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____inetworkInformationStatics_tD2ECEA3EBE3621A67043DFCAC738C00D5A77356D), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____inetworkInformationStatics_tD2ECEA3EBE3621A67043DFCAC738C00D5A77356D;
			}
		}
		return returnValue;
	}
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

// Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9
struct U3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4 
{
	// System.Int32 Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9::<>t__builder
	AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E ___U3CU3Et__builder_1;
	// Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9::<>4__this
	HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* ___U3CU3E4__this_2;
	// System.String Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9::uri
	String_t* ___uri_3;
	// System.String Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9::method
	String_t* ___method_4;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9::headers
	RuntimeObject* ___headers_5;
	// System.String Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9::jsonContent
	String_t* ___jsonContent_6;
	// System.Threading.CancellationToken Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_7;
	// System.Net.Http.HttpRequestMessage Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9::<request>5__2
	HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* ___U3CrequestU3E5__2_8;
	// System.Net.Http.HttpResponseMessage Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9::<response>5__3
	HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___U3CresponseU3E5__3_9;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.Http.HttpResponseMessage> Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9::<>u__1
	ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA ___U3CU3Eu__1_10;
	// System.String Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9::<contentType>5__4
	String_t* ___U3CcontentTypeU3E5__4_11;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String> Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9::<>u__2
	ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 ___U3CU3Eu__2_12;
};

// Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendRequestAsync>d__11
struct U3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3 
{
	// System.Int32 Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendRequestAsync>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Net.Http.HttpResponseMessage> Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendRequestAsync>d__11::<>t__builder
	AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3 ___U3CU3Et__builder_1;
	// Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendRequestAsync>d__11::<>4__this
	HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* ___U3CU3E4__this_2;
	// System.Net.Http.HttpRequestMessage Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendRequestAsync>d__11::request
	HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* ___request_3;
	// System.Threading.CancellationToken Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendRequestAsync>d__11::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.Http.HttpResponseMessage> Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendRequestAsync>d__11::<>u__1
	ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA ___U3CU3Eu__1_5;
};

// Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<CallAsync>d__9
struct U3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3 
{
	// System.Int32 Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<CallAsync>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<CallAsync>d__9::<>t__builder
	AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E ___U3CU3Et__builder_1;
	// System.Threading.CancellationToken Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<CallAsync>d__9::token
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___token_2;
	// Microsoft.AppCenter.Ingestion.Http.IngestionHttp Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<CallAsync>d__9::<>4__this
	IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* ___U3CU3E4__this_3;
	// System.String Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<CallAsync>d__9::appSecret
	String_t* ___appSecret_4;
	// System.Guid Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<CallAsync>d__9::installId
	Guid_t ___installId_5;
	// System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log> Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<CallAsync>d__9::logs
	RuntimeObject* ___logs_6;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String> Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<CallAsync>d__9::<>u__1
	ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 ___U3CU3Eu__1_7;
};

// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
struct Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B  : public MulticastDelegate_t
{
};

// System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722  : public MulticastDelegate_t
{
};

// System.Action`1<Microsoft.AppCenter.Ingestion.IServiceCall>
struct Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`1<System.Net.Http.HttpMessageHandler>
struct Func_1_t6AF25BB0B2C5568E8B6D37356D94C2B0A4B8D757  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>,Microsoft.AppCenter.Ingestion.ServiceCall>
struct Func_2_t6BBE2A46DEE55390A48A23CDCC5222AD63F5FF8B  : public MulticastDelegate_t
{
};

// System.Func`2<Windows.Networking.Connectivity.NetworkStatusChangedEventHandler,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Func_2_tE58B48BE6085E8F1F25AE070DF5BA7FD6857B90B  : public MulticastDelegate_t
{
};

// System.Func`2<System.TimeSpan,System.TimeSpan>
struct Func_2_tF4FE852EBF23BF32AA642F02C58B9F2FCED2DE13  : public MulticastDelegate_t
{
};

// System.Predicate`1<System.UInt32>
struct Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// Microsoft.AppCenter.Ingestion.IngestionException
struct IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA  : public AppCenterException_tB634D40CB28DEDD5DB0505D281398E1C085E5C6C
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA  : public JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD
{
	// System.Int32 Newtonsoft.Json.JsonReaderException::<LineNumber>k__BackingField
	int32_t ___U3CLineNumberU3Ek__BackingField_18;
	// System.Int32 Newtonsoft.Json.JsonReaderException::<LinePosition>k__BackingField
	int32_t ___U3CLinePositionU3Ek__BackingField_19;
	// System.String Newtonsoft.Json.JsonReaderException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_20;
};

// Newtonsoft.Json.JsonWriterException
struct JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA  : public JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD
{
	// System.String Newtonsoft.Json.JsonWriterException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_18;
};

// Microsoft.AppCenter.Ingestion.Models.LogWithProperties
struct LogWithProperties_t26F7CE0BED8320D2D8DA53E3E6F9DF267140CC53  : public Log_t716EF1A690F81BB19494869650F9161B1B60E74A
{
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Microsoft.AppCenter.Ingestion.Models.LogWithProperties::<Properties>k__BackingField
	RuntimeObject* ___U3CPropertiesU3Ek__BackingField_4;
};

// Windows.Networking.Connectivity.NetworkStatusChangedEventHandler
struct NetworkStatusChangedEventHandler_t6F8926B863301A8B2873AF7FE3968C729B1FEB4A  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Networking.Connectivity.NetworkStatusChangedEventHandler
struct INetworkStatusChangedEventHandler_t6F8926B863301A8B2873AF7FE3968C729B1FEB4A_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0) = 0;
};


// Microsoft.AppCenter.Ingestion.Models.StartServiceLog
struct StartServiceLog_t7395E5583F8EE57EB2FC14008CB24A990475234B  : public Log_t716EF1A690F81BB19494869650F9161B1B60E74A
{
	// System.Collections.Generic.IList`1<System.String> Microsoft.AppCenter.Ingestion.Models.StartServiceLog::<Services>k__BackingField
	RuntimeObject* ___U3CServicesU3Ek__BackingField_5;
};

// System.Threading.TimerCallback
struct TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD  : public MulticastDelegate_t
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter/IsNetworkAvailableDelegate
struct IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// Microsoft.AppCenter.Ingestion.Http.HttpIngestionException
struct HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB  : public IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA
{
	// System.String Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::<Method>k__BackingField
	String_t* ___U3CMethodU3Ek__BackingField_19;
	// System.Uri Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::<RequestUri>k__BackingField
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___U3CRequestUriU3Ek__BackingField_20;
	// System.String Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::<RequestContent>k__BackingField
	String_t* ___U3CRequestContentU3Ek__BackingField_21;
	// System.Int32 Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::<StatusCode>k__BackingField
	int32_t ___U3CStatusCodeU3Ek__BackingField_22;
	// System.String Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::<ResponseContent>k__BackingField
	String_t* ___U3CResponseContentU3Ek__BackingField_23;
};

// Microsoft.AppCenter.Ingestion.Http.NetworkIngestionException
struct NetworkIngestionException_t5FF011790FE4837200242574A13EC51BE32F5DD8  : public IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA
{
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// Microsoft.AppCenter.Ingestion.Models.ValidationException
struct ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04  : public IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.TimeSpan[]
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6  : public RuntimeArray
{
	ALIGN_FIELD (8) TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A m_Items[1];

	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String,Newtonsoft.Json.JsonSerializerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConvert_DeserializeObject_TisRuntimeObject_mC0F334473B49B5FC671F48E2DD243286483ED7EF_gshared (String_t* ___value0, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___settings1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m90B7EA3C338F6A61C7F47898E913088053DA56DF_gshared (Func_2_t1C28D2BFD837EC81FF3046F74030179155D5F3BE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mE59785557489C8127A4B1AF2A7281F701BA8152B_gshared (Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::AddEventHandler<System.Object>(System.Func`2<T,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeMarshal_AddEventHandler_TisRuntimeObject_mBB91B5D4609386C1BF68DC9942AC20F8C1C4398F_gshared (Func_2_t1C28D2BFD837EC81FF3046F74030179155D5F3BE* ___addMethod0, Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* ___removeMethod1, RuntimeObject* ___handler2, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Object>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4_m44138AFB91FDD86C69BB9F27826FC0E969A91122_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendRequestAsync>d__11>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3_m1CC80FCD50C94F392E48EF83D89F38F6AD257D83_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3* ___stateMachine0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8 Task_1_ConfigureAwait_m9D6420C859925B7C250DED7586DD770C91632070_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline (ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mD6243A7544181F96816A5F81459F4B66908ADB5E_gshared (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4_m9A3EAF2F0443C5381CE5319B045F24348BDF962A_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___awaiter0, U3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConfiguredTaskAwaiter_GetResult_m00ABE5C46A983C38086438B7A7CB2C62296B3383_gshared (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendRequestAsync>d__11>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3_mB5EA91F0FE2EB1A8C55EEE72FA7EEFB0CF6CE41A_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___awaiter0, U3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m191DE04E7B94C1F159CF5893C403D9F6DDA4958F_gshared (Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Array::Exists<System.UInt32>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_Exists_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m7682788918845A8DAC3D68E9D80B5C2286BAE808_gshared (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___array0, Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* ___match1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_mA0846133B2903064AAD1D23FE61AE736A033F866_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678* ___continuationAction0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<CallAsync>d__9>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3_mADFEFC0F53E1AB82750A4FB557859FE356D238E6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<CallAsync>d__9>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3_mD78156E3DFB8994D2E5FF48A775A6160F93EAEB0_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___awaiter0, U3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.TimeSpan,System.TimeSpan>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m1F49A7C3323CA613E9FF6BB1FED045E0D2BCA3B3_gshared (Func_2_tF4FE852EBF23BF32AA642F02C58B9F2FCED2DE13* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.TimeSpan,System.TimeSpan>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m1CACB6EA5206C77CFDE019023F5F3D5962A525C6_gshared (RuntimeObject* ___source0, Func_2_tF4FE852EBF23BF32AA642F02C58B9F2FCED2DE13* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.TimeSpan>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* Enumerable_ToArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m9BAF0642B14948F0C9FD481375A07EC439843694_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_m1F10F0C7C29D1C2BE692C38BB8966EBD32326114_gshared (RuntimeObject* ___source0, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.IO.FileInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, String_t* ___fileName0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Utils.Files.File::.ctor(System.IO.FileInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File__ctor_m9B098E8FD21A6F0E8257FCC0AFE508E98D294532 (File_tA59B16BE432513D1F2E34CE4E5179CD25D2B083B* __this, FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* ___fileInfo0, const RuntimeMethod* method) ;
// System.String System.IO.File::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_m5635BE83C14358AB1721547180F43103F777CEB5 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Threading.CancellationToken Microsoft.AppCenter.Ingestion.ServiceCall::get_CancellationToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ServiceCall_get_CancellationToken_m0B73B27CE998AB3D215672ABDDCD07F3E3E2C890 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Exception Microsoft.AppCenter.Ingestion.ServiceCall::get_Exception()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* ServiceCall_get_Exception_m029A679D68FEB51EDFC4C483B88212CFF8F68F46_inline (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4 (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationTokenSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___objectName0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.AppCenter.Ingestion.ServiceCall::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ServiceCall_get_IsCompleted_mDAAE68D9056F1450144411C8C2A587B4E49F45C9_inline (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.AppCenter.Ingestion.ServiceCall::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServiceCall_get_IsCanceled_mF008C0B6A01B10CC20CBD356ED488E7199B3E7BA (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Action`1<Microsoft.AppCenter.Ingestion.IServiceCall>::Invoke(T)
inline void Action_1_Invoke_mAB24B83D874E28329625FD1E6C1AD175A57D5426_inline (Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void Microsoft.AppCenter.Ingestion.ServiceCall::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCall_Cancel_m3E010F03B685313B1BBEFD6A3CC6C50187FA9AA2 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.ServiceCall::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCall_SetException_mE0EB108581A7CF084B3E2DF9B59423543EE1EE54 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.ServiceCall::SetResult(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCall_SetResult_m9B59DF998BF6786119C0490316D28F0B7E936D88 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, String_t* ___result0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.ServiceCall::set_IsCompleted(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServiceCall_set_IsCompleted_mBB766E67DAF0D7F7D3366A5DB5DACFDED551E964_inline (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.ServiceCall::set_Result(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServiceCall_set_Result_m500B0356F352254A765BDE7760D26A01B852EA92_inline (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.ServiceCall::set_Exception(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServiceCall_set_Exception_mE085E786C80C0C82A970A7ED2833E131FA5F3399_inline (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, Exception_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationTokenSource::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationTokenSource::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_Dispose_m5096059D16078E130BB87D268D4871849B53449B (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.AppCenterException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterException__ctor_m78865B2F74BDD293543B6CD3BCF5E568215D548D (AppCenterException_tB634D40CB28DEDD5DB0505D281398E1C085E5C6C* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.AppCenterException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterException__ctor_m98752C4D7F658A25A4733F41EB67E83774634A6F (AppCenterException_tB634D40CB28DEDD5DB0505D281398E1C085E5C6C* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Ingestion.Models.ValidationException::GetRuleString(Microsoft.AppCenter.Ingestion.Models.ValidationException/Rule,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValidationException_GetRuleString_mE6CB7877146B304F05258A35C542EF228A8C916C (int32_t ___rule0, String_t* ___extraValue1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.IngestionException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngestionException__ctor_m58552E494FEF6F3EE6517BC36023F9CE308A8E69 (IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Ingestion.Models.ValidationException::GetErrorString(Microsoft.AppCenter.Ingestion.Models.ValidationException/Rule,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValidationException_GetErrorString_m35D26CA80A668ABE524322769B91A738F7440C18 (int32_t ___validationRule0, String_t* ___propertyName1, RuntimeObject* ___detail2, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Log::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__ctor_m16C3520A27BD6A7683E73E66EE461E81675E6491 (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Microsoft.AppCenter.Ingestion.Models.StartServiceLog::set_Services(System.Collections.Generic.IList`1<System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StartServiceLog_set_Services_mEA5F99E46599ABD29F874CF420FFADDCF849D020_inline (StartServiceLog_t7395E5583F8EE57EB2FC14008CB24A990475234B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Log::.ctor(Microsoft.AppCenter.Ingestion.Models.Device,System.Nullable`1<System.DateTime>,System.Nullable`1<System.Guid>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__ctor_m9D3FC8BB1D9E05127350E0CD33CE73C480C13BB6 (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* ___device0, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___timestamp1, Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___sid2, String_t* ___userId3, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Log::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Validate_m06947D5D6A4DEB54521430A714CCBB83C567BA31 (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<System.String> Microsoft.AppCenter.Ingestion.Models.StartServiceLog::get_Services()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* StartServiceLog_get_Services_mD297C7CF0F266CE38E585F0315D2B061A52D4507_inline (StartServiceLog_t7395E5583F8EE57EB2FC14008CB24A990475234B* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.ValidationException::.ctor(Microsoft.AppCenter.Ingestion.Models.ValidationException/Rule,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationException__ctor_m8044FBF3F2AA8CEC98A9337B4650778C806F3CA0 (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* __this, int32_t ___validationRule0, String_t* ___propertyName1, RuntimeObject* ___detail2, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_SdkName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_SdkName_mAEE2D89E6F9925D293A2A6B8F7BD00E4A577710E_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_SdkVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_SdkVersion_mEF60A7D5E795FAB7A76CA1D3B7CAC1263145E738_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_WrapperSdkVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_WrapperSdkVersion_m541EABE005F436D5082B13970398C833CA316454_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_WrapperSdkName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_WrapperSdkName_m5A8FE1E793E2B2E4F2AA0668127CDF4632AA0E87_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_Model(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_Model_m0D8C9743E1B4304C8753AB52C263A29E4C2B4006_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_OemName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_OemName_mC2DF112C46BB82F0442B7B24810B48F2D120FDD3_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_OsName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_OsName_m3708A3408CAD0DD9F40EAB5A8E6FB36F89F34E3E_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_OsVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_OsVersion_mEC4CDCD7DB47D16510C56E670303B9AAD743FC3A_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_OsBuild(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_OsBuild_m778DB9F89D63EE1A042FCB131B18214DE71077A5_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_OsApiLevel(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_OsApiLevel_m28DC8D9FEC49918F11916C35D20F091D12615BB8_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_Locale(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_Locale_m97E69C3A8F77013359F9FBF74CFA5BCB87875E94_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_TimeZoneOffset(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_TimeZoneOffset_mD048F1F3150A8FD76F0083CF76506C30AE622B90_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_ScreenSize(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_ScreenSize_mB1DC823CD354F05F38615763E7A2509792CF1F2F_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_AppVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_AppVersion_mEC02EBF356393A2A46B874D5DDFFA2B56EAEADD5_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_CarrierName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_CarrierName_m911D4F0360F37BFD0614EF4BB5BB72434753CC99_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_CarrierCountry(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_CarrierCountry_mECE558BE8F62ED93BBE357F4F8DEB235348F7376_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_AppBuild(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_AppBuild_m99BA217EA93A1FD8841A8C7DAA84E8C7FAD5B4BA_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_AppNamespace(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_AppNamespace_mD3A302B2EF7AD04609C784FEF1C30C2F0F1E27CE_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_LiveUpdateReleaseLabel(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_LiveUpdateReleaseLabel_m163C680D432C0DAE633F1FE187F794182F9E5FE4_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_LiveUpdateDeploymentKey(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_LiveUpdateDeploymentKey_m7E0EF2D6FC2503BBB8F49BF72677B6A9F87AEBEF_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_LiveUpdatePackageHash(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_LiveUpdatePackageHash_mBA5B2AF7634ACB32B9751839C86E58E0648BB0E2_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_WrapperRuntimeVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_WrapperRuntimeVersion_m536B55177953C6C3BDE6848469F9C114FD416BBE_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_SdkName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Device_get_SdkName_m61EA3126F54F0A96A3BF3B31BF853A25650064E4_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_SdkVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Device_get_SdkVersion_mA2A1B16637F535C08E72F06CD29411A57DEAED21_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_OsName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Device_get_OsName_m453943CE18EF57FFA858034D7765C05511CB4D8D_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_OsVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Device_get_OsVersion_m1FCFDAE6C4D62C612962FF8D76F17663231D0752_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_Locale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Device_get_Locale_mB239F951904366698F8F69911A206E61BD5CCA51_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_AppVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Device_get_AppVersion_mEA1A4785A9F83341AC7504472BC6E608DCB6DB75_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_AppBuild()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Device_get_AppBuild_m2122264D6A01D62B228AEE89C57F9A52456CBEF5_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) ;
// System.Int32 Microsoft.AppCenter.Ingestion.Models.Device::get_TimeZoneOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Device_get_TimeZoneOffset_m3992117DA557A325832BB1AB23844BFD0E2303C9_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Log::set_Timestamp(System.Nullable`1<System.DateTime>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Log_set_Timestamp_mA5BB9F65895F5E91AECACB6C433ECC4C20D5F63E_inline (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Log::set_Sid(System.Nullable`1<System.Guid>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Log_set_Sid_m84495D0B7FAFB7D41C3DD1AFF5DB8E9D8F553F80_inline (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Log::set_UserId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Log_set_UserId_m85FE28C1033CF36C37E42CACE479850B85D97643_inline (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Log::set_Device(Microsoft.AppCenter.Ingestion.Models.Device)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Log_set_Device_m4EC2F2FD10BF9985EE7EAF70012913B7CE45F35B_inline (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* ___value0, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Ingestion.Models.Device Microsoft.AppCenter.Ingestion.Models.Log::get_Device()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* Log_get_Device_mD82076B7A498A9A358644DE800320D13CF8605DC_inline (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.LogContainer::set_Logs(System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogContainer_set_Logs_m1D4B7C9F7A8B52FB22D79A72407711763A46829D_inline (LogContainer_tBCB89E6BB0DBE4E8EB7FC504CBCDFE546A8EE33D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log> Microsoft.AppCenter.Ingestion.Models.LogContainer::get_Logs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LogContainer_get_Logs_m17AEABAEC28233674902AB7D7E02D90E0C1AE565_inline (LogContainer_tBCB89E6BB0DBE4E8EB7FC504CBCDFE546A8EE33D* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.LogWithProperties::set_Properties(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogWithProperties_set_Properties_mE869B50E3B86676E05C54D3FD90C1FBF13659D06_inline (LogWithProperties_t26F7CE0BED8320D2D8DA53E3E6F9DF267140CC53* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonSerializerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings__ctor_mE1C9A90375BA88DF7F6911F1F96AEEC6A98CD22F (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_Formatting(Newtonsoft.Json.Formatting)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_Formatting_mDDA6BC2622543E93A40D384276E263B201198D8F (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_DateFormatHandling(Newtonsoft.Json.DateFormatHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_DateFormatHandling_mFBA5ACD80A371C9DD914EEB68ECF88838E9F3E3A (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_DateTimeZoneHandling(Newtonsoft.Json.DateTimeZoneHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_DateTimeZoneHandling_mBB425C59864C5582F45569DAE3E682AC5AAF58D0 (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_NullValueHandling(Newtonsoft.Json.NullValueHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_NullValueHandling_mC389679010477A90BA5F811621B460004710CF16 (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_ReferenceLoopHandling(Newtonsoft.Json.ReferenceLoopHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_ReferenceLoopHandling_m813030F79F8DFFFA2C0C63A5C1C4D2348488CC94 (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___key0, Type_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, Type_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Load(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* JObject_Load_m6B2F9403F668469EC086A8240E025F207F0AC9C3 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::GetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2 (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void Newtonsoft.Json.JsonReaderException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReaderException__ctor_mAFE5357FE1357F883559902C116B07650D9583B9 (JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* __this, String_t* ___message0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Type>::get_Item(TKey)
inline Type_t* Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean Newtonsoft.Json.Linq.JObject::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JObject_Remove_m42D8594E735983D401F734BFECA380FE92459AD1 (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// System.Object Newtonsoft.Json.Linq.JToken::ToObject(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JToken_ToObject_m6ADC3E3DA56C6D22F90046C7D25B5D2779E54341 (JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* __this, Type_t* ___objectType0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Attribute System.Reflection.CustomAttributeExtensions::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* CustomAttributeExtensions_GetCustomAttribute_mCA56DC0C06E64A07614D1EB2D1B3B10152DFF828 (MemberInfo_t* ___element0, Type_t* ___attributeType1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriterException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterException__ctor_mE9EA5E8870BA0DD45EA0FF6AFC56646E2965D39E (JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object,Newtonsoft.Json.JsonSerializerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_m39CAEEF10A134A4A5A39B4A515782CD59B267459 (RuntimeObject* ___value0, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___settings1, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* JObject_Parse_mAFE39B83D08F5D889D34F83E017661FF28E4D0AC (String_t* ___json0, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.JsonContainerAttribute::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JsonContainerAttribute_get_Id_m29622512E031394994ECAB5AE0E26444D5EAA733_inline (JsonContainerAttribute_t84168DEA2B41EB84D4BF6C3AF04D6075F4CEB1C7* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::FromObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* JToken_FromObject_m297D1F60B99E6E6BE29904BF0F7334DBEA087E35 (RuntimeObject* ___o0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Linq.JObject::Add(System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_Add_m2F15295DA90DA00BDD3C94313C0F3DC4DE3C7A39 (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* __this, String_t* ___propertyName0, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::.ctor()
inline void Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Newtonsoft.Json.JsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB (JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Serialization.LogJsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogJsonConverter__ctor_m7673BA08A58610C6CDAF0D9FD804AC2677270517 (LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::get_Converters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonSerializerSettings_get_Converters_mB7EE43E74FA48980B6C0976D7A2160B2174C8FCA_inline (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.Serialization.LogJsonConverter::AddLogType(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogJsonConverter_AddLogType_m5D2F6AD4F1572601D7DB88F58F42150717360F0F (LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB* __this, String_t* ___typeName0, Type_t* ___type1, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<Microsoft.AppCenter.Ingestion.Models.Log>(System.String,Newtonsoft.Json.JsonSerializerSettings)
inline Log_t716EF1A690F81BB19494869650F9161B1B60E74A* JsonConvert_DeserializeObject_TisLog_t716EF1A690F81BB19494869650F9161B1B60E74A_m12E2CC448EFF0E44EB4870855A9538BB9C78FE33 (String_t* ___value0, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___settings1, const RuntimeMethod* method)
{
	return ((  Log_t716EF1A690F81BB19494869650F9161B1B60E74A* (*) (String_t*, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_mC0F334473B49B5FC671F48E2DD243286483ED7EF_gshared)(___value0, ___settings1, method);
}
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter/IsNetworkAvailableDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsNetworkAvailableDelegate__ctor_m1AD46846E1336A15FD0D847917F8E6E3DE110745 (IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Func`2<Windows.Networking.Connectivity.NetworkStatusChangedEventHandler,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4E68B702E00F35BD381DD1FEC330421546B0C525 (Func_2_tE58B48BE6085E8F1F25AE070DF5BA7FD6857B90B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE58B48BE6085E8F1F25AE070DF5BA7FD6857B90B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m90B7EA3C338F6A61C7F47898E913088053DA56DF_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE59785557489C8127A4B1AF2A7281F701BA8152B (Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mE59785557489C8127A4B1AF2A7281F701BA8152B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Windows.Networking.Connectivity.NetworkStatusChangedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStatusChangedEventHandler__ctor_mD463CFA0E836E3CC8526994A5B448F19A1FCCAE2 (NetworkStatusChangedEventHandler_t6F8926B863301A8B2873AF7FE3968C729B1FEB4A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::AddEventHandler<Windows.Networking.Connectivity.NetworkStatusChangedEventHandler>(System.Func`2<T,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,T)
inline void WindowsRuntimeMarshal_AddEventHandler_TisNetworkStatusChangedEventHandler_t6F8926B863301A8B2873AF7FE3968C729B1FEB4A_m7237298FED5FBBD2CC0EE67DA82F36892B7E0D8C (Func_2_tE58B48BE6085E8F1F25AE070DF5BA7FD6857B90B* ___addMethod0, Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* ___removeMethod1, NetworkStatusChangedEventHandler_t6F8926B863301A8B2873AF7FE3968C729B1FEB4A* ___handler2, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE58B48BE6085E8F1F25AE070DF5BA7FD6857B90B*, Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722*, NetworkStatusChangedEventHandler_t6F8926B863301A8B2873AF7FE3968C729B1FEB4A*, const RuntimeMethod*))WindowsRuntimeMarshal_AddEventHandler_TisRuntimeObject_mBB91B5D4609386C1BF68DC9942AC20F8C1C4398F_gshared)(___addMethod0, ___removeMethod1, ___handler2, method);
}
// Windows.Networking.Connectivity.ConnectionProfile Windows.Networking.Connectivity.NetworkInformation::GetInternetConnectionProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionProfile_t7D38F137CC7E2E3288194F8D9DEF267E0E72EE07* NetworkInformation_GetInternetConnectionProfile_mF585D32BF942B4F5B9C916827F3B6651556F6B58 (const RuntimeMethod* method) ;
// Windows.Networking.Connectivity.NetworkConnectivityLevel Windows.Networking.Connectivity.ConnectionProfile::GetNetworkConnectivityLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionProfile_GetNetworkConnectivityLevel_m8CF14BDBA2650D6D07957B8EF666F0056ECC0577 (ConnectionProfile_t7D38F137CC7E2E3288194F8D9DEF267E0E72EE07* __this, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter/IsNetworkAvailableDelegate Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter::get_IsNetworkAvailable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* NetworkStateAdapter_get_IsNetworkAvailable_mA8752A57DD85AE477D3D2ED6682A9F4E29280DDE_inline (NetworkStateAdapter_t162CDFD808FB548577B4DECD58028CAC271CAD8B* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter/IsNetworkAvailableDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IsNetworkAvailableDelegate_Invoke_m0D79327FF89CC5944048CFC5879572B060A33140_inline (IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* __this, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.AppCenterLog::get_LogTag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AppCenterLog_get_LogTag_m4A23B83F7546FD8257D50CB94AA58159AD410A74_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.AppCenterLog::Error(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterLog_Error_m49FE660A2ECC4A27180A20EAE2B9EF297B14CB9A (String_t* ___tag0, String_t* ___message1, Exception_t* ___exception2, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) ;
// System.Int32 Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::get_StatusCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HttpIngestionException_get_StatusCode_m30C6870FEC2EDA6277086CC35EA448EFD6141087_inline (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Ingestion.IIngestion Microsoft.AppCenter.Ingestion.Http.IngestionDecorator::get_DecoratedApi()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IngestionDecorator_get_DecoratedApi_m75F50A4CE3791E162C2CA56FD99AB50F47AD3CF5_inline (IngestionDecorator_tFB755D94DE686939DD91160456B8D33547F61857* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.IngestionException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngestionException__ctor_m00B6711624E97269411AE459B2744C7389D5D425 (IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.IngestionException::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngestionException__ctor_m840D302FAF3D1245700A2B440E66A3426B50780C (IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA* __this, Exception_t* ___innerException0, const RuntimeMethod* method) ;
// System.Void System.Net.Http.HttpClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpClient__ctor_mD64C48138600CF1398E7BB24BF33EB582ECB1AFD (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Net.Http.HttpMessageHandler>::Invoke()
inline HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17* Func_1_Invoke_m03A0DD87958454CDAEE8EA6CC048933809344B83_inline (Func_1_t6AF25BB0B2C5568E8B6D37356D94C2B0A4B8D757* __this, const RuntimeMethod* method)
{
	return ((  HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17* (*) (Func_1_t6AF25BB0B2C5568E8B6D37356D94C2B0A4B8D757*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// System.Void System.Net.Http.HttpClient::.ctor(System.Net.Http.HttpMessageHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpClient__ctor_m8576B495665CC46BCF2D212052733B50C2F7B597 (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* __this, HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17* ___handler0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Create()
inline AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E AsyncTaskMethodBuilder_1_Create_m4CB15D06286C7AA0BA8318800D23A9D574CBE0E8 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Start<Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4_mF933D9071DD1DFC3C8873330EAC341C8BE384CDC (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, U3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, U3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4_m44138AFB91FDD86C69BB9F27826FC0E969A91122_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::get_Task()
inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void System.Net.Http.HttpRequestMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestMessage__ctor_m672C314A2324A62C47D4AB1F65C88EC1F0781FC6 (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Http.HttpMethod::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpMethod__ctor_m0D28A3D943866C642FC93FDC7F56B25A928B3A4E (HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* __this, String_t* ___method0, const RuntimeMethod* method) ;
// System.Void System.Net.Http.HttpRequestMessage::set_Method(System.Net.Http.HttpMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestMessage_set_Method_m61AD45CEAC59C0EE631A33AC8E888AFEB70D3541 (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* __this, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___value0, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___uriString0, const RuntimeMethod* method) ;
// System.Void System.Net.Http.HttpRequestMessage::set_RequestUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestMessage_set_RequestUri_m8F8BF17F6A9BEA510759DB3148563ABB8E7FE9CB (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) ;
// System.Net.Http.Headers.HttpRequestHeaders System.Net.Http.HttpRequestMessage::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7* HttpRequestMessage_get_Headers_m96F9758D4AA6C78EDFAFEB222FA05767054EE78C (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* __this, const RuntimeMethod* method) ;
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
// System.Void System.Net.Http.Headers.HttpHeaders::Add(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpHeaders_Add_m9F704C4C77ED5BE4FAABEA3138CCF1D3D6732DA8 (HttpHeaders_t2AF7326A86CE4E4F524137C7A7FF8F3597C12449* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.Void System.Net.Http.StringContent::.ctor(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringContent__ctor_m087EE223A359FCC20C728E0B171F4797243CB53B (StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9* __this, String_t* ___content0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) ;
// System.Void System.Net.Http.HttpRequestMessage::set_Content(System.Net.Http.HttpContent)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpRequestMessage_set_Content_m522F62E997874DA5A3F77BD4DD7A1C7CA2629DC9_inline (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* __this, HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* ___value0, const RuntimeMethod* method) ;
// System.Net.Http.HttpContent System.Net.Http.HttpRequestMessage::get_Content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* HttpRequestMessage_get_Content_m263E0A8B60C6D617144203073CA853A473FA860E_inline (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* __this, const RuntimeMethod* method) ;
// System.Net.Http.Headers.HttpContentHeaders System.Net.Http.HttpContent::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpContentHeaders_t4E2506F081BD682D0538A5CB38ED1D836C2E8C4F* HttpContent_get_Headers_m6183562F724ABF57805E94A2AB0D72BF44659DCD (HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* __this, const RuntimeMethod* method) ;
// System.Net.Http.Headers.MediaTypeHeaderValue System.Net.Http.Headers.MediaTypeHeaderValue::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MediaTypeHeaderValue_t9B713F37D05A4B23FFAFEAE8B988ED7BC46BCEAF* MediaTypeHeaderValue_Parse_m296D4860C6E4E2AF3927F6AAC53B87390B5049C5 (String_t* ___input0, const RuntimeMethod* method) ;
// System.Void System.Net.Http.Headers.HttpContentHeaders::set_ContentType(System.Net.Http.Headers.MediaTypeHeaderValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpContentHeaders_set_ContentType_m3990A9596A873AE4AFCE1FEB2FA744136B48D779 (HttpContentHeaders_t4E2506F081BD682D0538A5CB38ED1D836C2E8C4F* __this, MediaTypeHeaderValue_t9B713F37D05A4B23FFAFEAE8B988ED7BC46BCEAF* ___value0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Net.Http.HttpResponseMessage>::Create()
inline AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3 AsyncTaskMethodBuilder_1_Create_m405223B330A9C7CAEE30F69ED25942A300B8AD8A (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Net.Http.HttpResponseMessage>::Start<Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendRequestAsync>d__11>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3_mF130BA2C0B49C95C083ECAD3EEF252256616EC3B (AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3* __this, U3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3*, U3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3_m1CC80FCD50C94F392E48EF83D89F38F6AD257D83_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Net.Http.HttpResponseMessage>::get_Task()
inline Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* AsyncTaskMethodBuilder_1_get_Task_m008E78C54F6D07930908411CC2D34FA037CE13F3 (AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* (*) (AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void System.Net.Http.HttpMessageInvoker::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpMessageInvoker_Dispose_m77B4582C70919C6B31CC3805EDE7A9866574BC41 (HttpMessageInvoker_t00698E3A7D5068564C401C7D3F90798056A04800* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Net.Http.HttpRequestMessage Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter::CreateRequest(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* HttpNetworkAdapter_CreateRequest_m34135188FBAB2E096A5C6324D28D7A70EF8FF9EF (HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* __this, String_t* ___uri0, String_t* ___method1, RuntimeObject* ___headers2, String_t* ___jsonContent3, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter::SendRequestAsync(System.Net.Http.HttpRequestMessage,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* HttpNetworkAdapter_SendRequestAsync_mAE0D3CF9F92A72DCE67BE48426D9EEFCF2F3CDD4 (HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* __this, HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* ___request0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504 (Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD (*) (Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023*, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m9D6420C859925B7C250DED7586DD770C91632070_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Net.Http.HttpResponseMessage>::GetAwaiter()
inline ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_inline (ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD* __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA (*) (ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD*, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.Http.HttpResponseMessage>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249 (ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA*, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mD6243A7544181F96816A5F81459F4B66908ADB5E_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.Http.HttpResponseMessage>,Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4_m08E36D1E5E2C1BCE4F2D497E3BF9CF862A39F2CA (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA* ___awaiter0, U3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA*, U3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4_m9A3EAF2F0443C5381CE5319B045F24348BDF962A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.Http.HttpResponseMessage>::GetResult()
inline HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A (ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA* __this, const RuntimeMethod* method)
{
	return ((  HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* (*) (ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA*, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m00ABE5C46A983C38086438B7A7CB2C62296B3383_gshared)(__this, method);
}
// System.Net.Http.HttpContent System.Net.Http.HttpResponseMessage::get_Content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.String> System.Net.Http.HttpContent::ReadAsStringAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* HttpContent_ReadAsStringAsync_m69166E8C01E4287FFBA3E8E41805FF068362BF2B (HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.String>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8 (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC (*) (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m9D6420C859925B7C250DED7586DD770C91632070_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.String>::GetAwaiter()
inline ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_inline (ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC* __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 (*) (ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC*, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1 (ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5*, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mD6243A7544181F96816A5F81459F4B66908ADB5E_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>,Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4_m41AFA5F7BC93A89453C37582BB7D8B74C3296C98 (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5* ___awaiter0, U3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5*, U3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4_m9A3EAF2F0443C5381CE5319B045F24348BDF962A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>::GetResult()
inline String_t* ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8 (ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5*, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m00ABE5C46A983C38086438B7A7CB2C62296B3383_gshared)(__this, method);
}
// System.Boolean System.Net.Http.Headers.HttpHeaders::TryGetValues(System.String,System.Collections.Generic.IEnumerable`1<System.String>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpHeaders_TryGetValues_mB5EEDB33F50315E70936E150C63E0E932114C3D2 (HttpHeaders_t2AF7326A86CE4E4F524137C7A7FF8F3597C12449* __this, String_t* ___name0, RuntimeObject** ___values1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline String_t* Enumerable_FirstOrDefault_TisString_t_mFDD6B0338B3884E99F737C0A244064FB65FA15ED (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_gshared)(___source0, method);
}
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Net.HttpStatusCode System.Net.Http.HttpResponseMessage::get_StatusCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HttpResponseMessage_get_StatusCode_m63BE26E4C79137B35F3066C6BA6A5FF5F3D16AAA_inline (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.AppCenterLog::Verbose(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterLog_Verbose_m496FA6FB6D137210518A8D5640776B89442CAA94 (String_t* ___tag0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpIngestionException__ctor_m6011F92CA77B8BD836F231C261F91B8461A009DE (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Net.Http.HttpMethod System.Net.Http.HttpRequestMessage::get_Method()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* HttpRequestMessage_get_Method_m1E2C8323C43F6E09513C58777F2B0D9CD0D2627B_inline (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::set_Method(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpIngestionException_set_Method_m6B66DB19362950E74BEDEAF0687500E136BF9015_inline (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Uri System.Net.Http.HttpRequestMessage::get_RequestUri()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* HttpRequestMessage_get_RequestUri_mB71FD84AC5D3AAD3D9E3BA0FB827691F52E235A5_inline (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::set_RequestUri(System.Uri)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpIngestionException_set_RequestUri_m82521B9D0A00DA0300DBF991D6C9C32A7559475E_inline (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::set_StatusCode(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpIngestionException_set_StatusCode_m6F638292B39FC49BF12F0F4687E5C5F9EB366BFA_inline (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::set_RequestContent(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpIngestionException_set_RequestContent_mBA06BA201ECCB28A5EB181B46DD1C6A1CF5F8325_inline (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::set_ResponseContent(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpIngestionException_set_ResponseContent_m0104916227934F9C78AE4DBF49AA056A47DC0D8F_inline (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, String_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__9_MoveNext_m2A966297E93944E4427565DB81CC1BAC79075C58 (U3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30 (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__9_SetStateMachine_m60088D0B7737FA81ACD6DB31BF13313B11A6D400 (U3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Int32 System.Exception::get_HResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Exception_get_HResult_mBA9CD3C01C2F0C68DFA6ED7824F7371D7E1A4163_inline (Exception_t* __this, const RuntimeMethod* method) ;
// System.Net.Http.HttpClient Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter::get_HttpClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* HttpNetworkAdapter_get_HttpClient_mCBFB6D82A60BE989B4325286BD31DB004F95AAD6 (HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Net.Http.HttpResponseMessage>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.Http.HttpResponseMessage>,Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendRequestAsync>d__11>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3_m456E846D66F83310D60F047CBE357BE66D1A601E (AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3* __this, ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA* ___awaiter0, U3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3*, ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA*, U3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3_mB5EA91F0FE2EB1A8C55EEE72FA7EEFB0CF6CE41A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkIngestionException::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkIngestionException__ctor_m002DF22ABD280FB225F2D259594893825A3C6CE3 (NetworkIngestionException_t5FF011790FE4837200242574A13EC51BE32F5DD8* __this, Exception_t* ___innerException0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mBF31CD9F2A121A0BB5838CD0915BF357361EB37C (U3CU3Ec__DisplayClass11_0_tE3AE9B6AC9346C1BBA66C6207687B82FEEA3B227* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m191DE04E7B94C1F159CF5893C403D9F6DDA4958F (Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m191DE04E7B94C1F159CF5893C403D9F6DDA4958F_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Array::Exists<System.UInt32>(T[],System.Predicate`1<T>)
inline bool Array_Exists_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m7682788918845A8DAC3D68E9D80B5C2286BAE808 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___array0, Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* ___match1, const RuntimeMethod* method)
{
	return ((  bool (*) (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF*, const RuntimeMethod*))Array_Exists_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m7682788918845A8DAC3D68E9D80B5C2286BAE808_gshared)(___array0, ___match1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Net.Http.HttpResponseMessage>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mED939EC41D03B857452EE11F39619C2EBAD738A3 (AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Net.Http.HttpResponseMessage>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m26E971C14F1544C9885F24A11904078C58824DD0 (AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3* __this, HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3*, HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendRequestAsync>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__11_MoveNext_mEB54C0A8B8F3AC9E82BD7CFCA5923C427E266259 (U3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Net.Http.HttpResponseMessage>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m24028EF7BDC5CB458ACD42392CA5D7159051A041 (AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendRequestAsync>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__11_SetStateMachine_m82C405B6C89623382237611B63126BA1A0161CC1 (U3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<Microsoft.AppCenter.Ingestion.ServiceCall>::.ctor()
inline void HashSet_1__ctor_m19C7B752431F5A49D7ED56F064AB16071A418ABE (HashSet_1_t4C4408853DBA73AA631F24AB98ABBA00CF3B00AE* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4C4408853DBA73AA631F24AB98ABBA00CF3B00AE*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void Microsoft.AppCenter.Ingestion.Http.IngestionDecorator::.ctor(Microsoft.AppCenter.Ingestion.IIngestion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngestionDecorator__ctor_m5A7B9CFCC5344C2843529028038860F47B140690 (IngestionDecorator_tFB755D94DE686939DD91160456B8D33547F61857* __this, RuntimeObject* ___decoratedApi0, const RuntimeMethod* method) ;
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.AppCenter.Ingestion.ServiceCall>::.ctor()
inline void List_1__ctor_mCF6C68013E9EEDE20E1461ACDBE498E9C0E6A41C (List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.AppCenter.Ingestion.ServiceCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m1E3DD229B4B5832486C0B15F4503CE6109DCAC46 (List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Microsoft.AppCenter.Ingestion.ServiceCall>::GetEnumerator()
inline Enumerator_t890F7495A9FEBCDBDAB13DA1AC59115DD621AA32 List_1_GetEnumerator_mD0B9443F072815730072E662FF0C2D4DEB834709 (List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t890F7495A9FEBCDBDAB13DA1AC59115DD621AA32 (*) (List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.AppCenter.Ingestion.ServiceCall>::Dispose()
inline void Enumerator_Dispose_m7009053EFD176FAACD4AEE93783EF107EA2FB70F (Enumerator_t890F7495A9FEBCDBDAB13DA1AC59115DD621AA32* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t890F7495A9FEBCDBDAB13DA1AC59115DD621AA32*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Microsoft.AppCenter.Ingestion.ServiceCall>::get_Current()
inline ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* Enumerator_get_Current_m00757EFB48FF97E701B8FA0E15A3FA83EDEE1E67_inline (Enumerator_t890F7495A9FEBCDBDAB13DA1AC59115DD621AA32* __this, const RuntimeMethod* method)
{
	return ((  ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* (*) (Enumerator_t890F7495A9FEBCDBDAB13DA1AC59115DD621AA32*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkStateIngestion::RetryCall(Microsoft.AppCenter.Ingestion.ServiceCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStateIngestion_RetryCall_m3141EB50333BD7728B046CB810DB38C6E6F7762C (NetworkStateIngestion_t3B1209F7E80F7412CE9EF9FB7AAADA7D62244AF8* __this, ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* ___call0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.AppCenter.Ingestion.ServiceCall>::MoveNext()
inline bool Enumerator_MoveNext_m7E0899DECE2A081D7E8285C2B25A1FF33AC61E27 (Enumerator_t890F7495A9FEBCDBDAB13DA1AC59115DD621AA32* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t890F7495A9FEBCDBDAB13DA1AC59115DD621AA32*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkStateIngestion/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mF6884549400EED659FD62563AF79FB315F856F18 (U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA* __this, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Ingestion.ServiceCall::get_AppSecret()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServiceCall_get_AppSecret_m2DDCA78121B81E8DAAE2AAEFD48EF5B9586F6BA8_inline (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) ;
// System.Guid Microsoft.AppCenter.Ingestion.ServiceCall::get_InstallId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t ServiceCall_get_InstallId_m524B190DB0C1F7D08A9A95BA76E5EE6DAE41A01E_inline (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log> Microsoft.AppCenter.Ingestion.ServiceCall::get_Logs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ServiceCall_get_Logs_m6D4C4D4BD45873D66ECD68D6216CF0214760E1A9_inline (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) ;
// Microsoft.AppCenter.Ingestion.IServiceCall Microsoft.AppCenter.Ingestion.Http.IngestionDecorator::Call(System.String,System.Guid,System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IngestionDecorator_Call_m62056680EA499AD35F210AE82FA8FF94055DFED2 (IngestionDecorator_tFB755D94DE686939DD91160456B8D33547F61857* __this, String_t* ___appSecret0, Guid_t ___installId1, RuntimeObject* ___logs2, const RuntimeMethod* method) ;
// System.Void System.Action`1<Microsoft.AppCenter.Ingestion.IServiceCall>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB8D9FA7A9BE0E125095C3B3E5BEFB5D7404619BE (Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.AppCenter.Ingestion.ServiceCall::ContinueWith(System.Action`1<Microsoft.AppCenter.Ingestion.IServiceCall>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCall_ContinueWith_mC2D657EC79A22E85E1269E18F5283DBC7DD5F1F0 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* ___continuationAction0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.ServiceCall::.ctor(System.String,System.Guid,System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCall__ctor_m8A352388C214EB2A5859C63DF4816FFC6C6EF4CF (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, String_t* ___appSecret0, Guid_t ___installId1, RuntimeObject* ___logs2, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkStateIngestion::CancelAllCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStateIngestion_CancelAllCalls_m4D7FFD0AD18073BDD07C18D3CE97FF8A297F0CB8 (NetworkStateIngestion_t3B1209F7E80F7412CE9EF9FB7AAADA7D62244AF8* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Http.IngestionDecorator::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngestionDecorator_Close_m094AC924905E4170E1620A006228184B7572D83A (IngestionDecorator_tFB755D94DE686939DD91160456B8D33547F61857* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Http.IngestionDecorator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngestionDecorator_Dispose_mC1F90990FB8FCBED2202AF7D60F7207D51483FAE (IngestionDecorator_tFB755D94DE686939DD91160456B8D33547F61857* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.AppCenter.Ingestion.ServiceCall>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mEE8E4CAEF186EFA0540E1901BA3965B6AE7C45E1 (List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mC79AA5522096552575D8E68CC2DC3386DA175E23 (U3CU3Ec__DisplayClass8_0_t81B7DBF7C608A675F863D0FBCE96D50FDB389041* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.AppCenter.Ingestion.Http.IngestionHttp::get_IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IngestionHttp_get_IsEnabled_m044CE6D77CD9A0A7B1FC3A807402DBF632E620CA (IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.String> Microsoft.AppCenter.Ingestion.Http.IngestionHttp::CallAsync(System.String,System.Guid,System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* IngestionHttp_CallAsync_m51884E5A70BD2EA1EC258DA014F53775BB94B389 (IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* __this, String_t* ___appSecret0, Guid_t ___installId1, RuntimeObject* ___logs2, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___token3, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.String>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9A99EE412CA28FA3656C2B3CEEEDEA403CF736F1 (Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.String>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_m2976BD674D15E3F3419CF9D4C4C27C863EAAC469 (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* __this, Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B* ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B*, const RuntimeMethod*))Task_1_ContinueWith_mA0846133B2903064AAD1D23FE61AE736A033F866_gshared)(__this, ___continuationAction0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Start<Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<CallAsync>d__9>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3_m4B2CBF4544E17D942BE7F61BD18CDA6E8F5654E2 (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, U3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, U3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3_mADFEFC0F53E1AB82750A4FB557859FE356D238E6_gshared)(__this, ___stateMachine0, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
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
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Models.LogContainer::.ctor(System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogContainer__ctor_mB2A4C429590DA4592E4AD153DC5569C7E9495499 (LogContainer_tBCB89E6BB0DBE4E8EB7FC504CBCDFE546A8EE33D* __this, RuntimeObject* ___logs0, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Ingestion.Models.Serialization.LogSerializer::Serialize(Microsoft.AppCenter.Ingestion.Models.LogContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogSerializer_Serialize_m50968E859AE9AB396D58008FD373202287642DAA (LogContainer_tBCB89E6BB0DBE4E8EB7FC504CBCDFE546A8EE33D* ___logContainer0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.AppCenter.AppCenter::get_PlatformIsNetworkRequestsAllowed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppCenter_get_PlatformIsNetworkRequestsAllowed_m3D8D7C0C2752FF868065DF08846581DC7EF27C3B (const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t51B6205846DFB356B94452702201DD239D44422F* Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.String>::get_Result()
inline String_t* Task_1_get_Result_m75DDCE5DDCDA410C5506E2E7DD257E9E065EBB13 (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.Void System.Threading.CancellationToken::ThrowIfCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Microsoft.AppCenter.Ingestion.Http.IngestionHttp::CreateHeaders(System.String,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IngestionHttp_CreateHeaders_m3554DD03200F865F90963DE0031EA226F3AC2A52 (IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* __this, String_t* ___appSecret0, Guid_t ___installId1, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Ingestion.Http.IngestionHttp::GetRedactedAppSecret(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IngestionHttp_GetRedactedAppSecret_mA8C7F30920F4B6D189C93EB39F59B52C3F3DE1E5 (String_t* ___appSecret0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String Microsoft.AppCenter.Ingestion.Http.IngestionHttp::CreateLogsContent(System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IngestionHttp_CreateLogsContent_m24FAF650F6D388799D107FFC676BAB579B3FFB0A (IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* __this, RuntimeObject* ___logs0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>,Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<CallAsync>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3_m5473A83C72D384F7BBC121D0BBA5E80DB094A9DB (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5* ___awaiter0, U3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5*, U3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3_mD78156E3DFB8994D2E5FF48A775A6160F93EAEB0_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<CallAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallAsyncU3Ed__9_MoveNext_mC67AB500C50CDABFADE164C726B0E702FA3CC840 (U3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<CallAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallAsyncU3Ed__9_SetStateMachine_mC962F22360BA8ED8FD275C3E07FAC25BA9B81FC8 (U3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>::.ctor()
inline void Dictionary_2__ctor_m5DB2F37A92DF25F21D413B2FD5032AE166575E93 (Dictionary_2_tF6E6966F10E61B56845F7774B83ED8BD6E9FAF16* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF6E6966F10E61B56845F7774B83ED8BD6E9FAF16*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m217FDD00673465E62808640D841E5D8BA889F178 (U3CU3Ec__DisplayClass3_0_t98D32386B0EA0CFFDF2A6BA1238E13711A6ED628* __this, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.TimeSpan,System.TimeSpan>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1F49A7C3323CA613E9FF6BB1FED045E0D2BCA3B3 (Func_2_tF4FE852EBF23BF32AA642F02C58B9F2FCED2DE13* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF4FE852EBF23BF32AA642F02C58B9F2FCED2DE13*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m1F49A7C3323CA613E9FF6BB1FED045E0D2BCA3B3_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.TimeSpan,System.TimeSpan>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m1CACB6EA5206C77CFDE019023F5F3D5962A525C6 (RuntimeObject* ___source0, Func_2_tF4FE852EBF23BF32AA642F02C58B9F2FCED2DE13* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF4FE852EBF23BF32AA642F02C58B9F2FCED2DE13*, const RuntimeMethod*))Enumerable_Select_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m1CACB6EA5206C77CFDE019023F5F3D5962A525C6_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.TimeSpan>(System.Collections.Generic.IEnumerable`1<TSource>)
inline TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* Enumerable_ToArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m9BAF0642B14948F0C9FD481375A07EC439843694 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m9BAF0642B14948F0C9FD481375A07EC439843694_gshared)(___source0, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m3B4DD7839DDFC776FAFA64A07D81153064769281 (U3CU3Ec__DisplayClass5_0_t5D82049F904442EA70A5C18B185A6A06A9B0D5A5* __this, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.AppCenterLog::Warn(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCenterLog_Warn_m3FFB62B826353B1FDF29BE9769D5518B1AEA869C (String_t* ___tag0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.Threading.TimerCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerCallback__ctor_mDA748EAAD184861871872C3B672A848AEF2A1E4A (TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Timer::.ctor(System.Threading.TimerCallback,System.Object,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m0B758073AACDB1DC9F64E18F4036E3CDFFC8E970 (Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* __this, TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD* ___callback0, RuntimeObject* ___state1, int32_t ___dueTime2, int32_t ___period3, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mF53B4AAC17BD9AE9E0C0316F10E69E122A29E44E (U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m2F449B332115C8B8FB63A89DB8558D201CAEC511 (U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Timer Microsoft.AppCenter.Ingestion.Http.RetryableIngestion::IntervalCall(System.Int32,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* RetryableIngestion_IntervalCall_mD426D9DE74BF263C5E6695A5C693BCBAE5759790 (RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* __this, int32_t ___retry0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion::RetryCall(Microsoft.AppCenter.Ingestion.ServiceCall,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryableIngestion_RetryCall_m1D05D6F72424C0B59C5B4A11E720E3F8EF30FA92 (RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* __this, ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* ___call0, int32_t ___retry1, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion::CancelAllCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryableIngestion_CancelAllCalls_m26F23C75B28A1255BA6C138B7D6ECFD93E4D24E0 (RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>,Microsoft.AppCenter.Ingestion.ServiceCall>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7A76652BD942562D9823B4D0B51B5BF2CAEAF5C6 (Func_2_t6BBE2A46DEE55390A48A23CDCC5222AD63F5FF8B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6BBE2A46DEE55390A48A23CDCC5222AD63F5FF8B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Collections.Generic.KeyValuePair`2<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>,Microsoft.AppCenter.Ingestion.ServiceCall>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisKeyValuePair_2_tB29ECA52B7B5116B1B8BEE9839440B852F86E651_TisServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D_m57DC7B8DA4D36B1F7EBF75401E9CF4842D1BE14E (RuntimeObject* ___source0, Func_2_t6BBE2A46DEE55390A48A23CDCC5222AD63F5FF8B* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t6BBE2A46DEE55390A48A23CDCC5222AD63F5FF8B*, const RuntimeMethod*))Enumerable_Select_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_m1F10F0C7C29D1C2BE692C38BB8966EBD32326114_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Microsoft.AppCenter.Ingestion.ServiceCall>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4* Enumerable_ToList_TisServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D_mBE49109AB9E55633783C064A19F6E380587160DF (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared)(___source0, method);
}
// System.Void System.Threading.Timer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Dispose_m75A06B0748FE7958C296A5E39849A0FB6EA03C86 (Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromSeconds_mE585CC8180040ED064DC8B6546E6C94A129BFFC5 (double ___value0, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromMinutes_m6A205525E41E41D13637359BA49AC7F3B23F714E (double ___value0, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromMilliseconds_m95DA1C64A7D3111F8451D932CD0F94D608B1EC54 (double ___value0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion::RetryCallContinuation(Microsoft.AppCenter.Ingestion.ServiceCall,Microsoft.AppCenter.Ingestion.IServiceCall,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryableIngestion_RetryCallContinuation_m3E8ABF8A88965ED30FA925B1EDFDF972DDA1A4CE (RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* __this, ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* ___call0, RuntimeObject* ___result1, int32_t ___retry2, const RuntimeMethod* method) ;
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0B7EC62C317AA68A0EE367B51FC63CD2A5321439 (U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>::get_Key()
inline ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* KeyValuePair_2_get_Key_m8FB77AD62AEE27727E7D5C067E307DDB739F8405_inline (KeyValuePair_2_tB29ECA52B7B5116B1B8BEE9839440B852F86E651* __this, const RuntimeMethod* method)
{
	return ((  ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* (*) (KeyValuePair_2_tB29ECA52B7B5116B1B8BEE9839440B852F86E651*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.AppCenter.Utils.Files.File::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File__ctor_m7D0E68136E085277C4F89574A02F7DC204BE520F (File_tA59B16BE432513D1F2E34CE4E5179CD25D2B083B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Utils.Files.File::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File__ctor_m298A7DFA5BCEF5D10B8061D29331BFC5FC645883 (File_tA59B16BE432513D1F2E34CE4E5179CD25D2B083B* __this, String_t* ___filePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___filePath0;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_1 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_1, L_0, NULL);
		File__ctor_m9B098E8FD21A6F0E8257FCC0AFE508E98D294532(__this, L_1, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Utils.Files.File::.ctor(System.IO.FileInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File__ctor_m9B098E8FD21A6F0E8257FCC0AFE508E98D294532 (File_tA59B16BE432513D1F2E34CE4E5179CD25D2B083B* __this, FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* ___fileInfo0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_0 = ___fileInfo0;
		__this->____underlyingFileInfo_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____underlyingFileInfo_0), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Utils.Files.File::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_get_Name_m9F9992E3C90DC57FA40D8AF5A8AD6AD3606E1AC4 (File_tA59B16BE432513D1F2E34CE4E5179CD25D2B083B* __this, const RuntimeMethod* method) 
{
	{
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_0 = __this->____underlyingFileInfo_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.IO.FileSystemInfo::get_Name() */, L_0);
		return L_1;
	}
}
// System.String Microsoft.AppCenter.Utils.Files.File::get_FullName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_get_FullName_m08AA523DDABFFA3D5B59D4F657E60CDEB8DF2BD4 (File_tA59B16BE432513D1F2E34CE4E5179CD25D2B083B* __this, const RuntimeMethod* method) 
{
	{
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_0 = __this->____underlyingFileInfo_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_0);
		return L_1;
	}
}
// System.Void Microsoft.AppCenter.Utils.Files.File::Delete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE0790E1A5295692B3585DCE8C43046C553BB5323 (File_tA59B16BE432513D1F2E34CE4E5179CD25D2B083B* __this, const RuntimeMethod* method) 
{
	{
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_0 = __this->____underlyingFileInfo_0;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(11 /* System.Void System.IO.FileSystemInfo::Delete() */, L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Utils.Files.File::ReadAllText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_m3993620E5C9766628B5AA0BD771352CB52EADFA9 (File_tA59B16BE432513D1F2E34CE4E5179CD25D2B083B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String Microsoft.AppCenter.Utils.Files.File::get_FullName() */, __this);
		String_t* L_1;
		L_1 = File_ReadAllText_m5635BE83C14358AB1721547180F43103F777CEB5(L_0, NULL);
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
// System.Boolean Microsoft.AppCenter.Ingestion.ServiceCall::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServiceCall_get_IsCanceled_mF008C0B6A01B10CC20CBD356ED488E7199B3E7BA (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) 
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0;
		L_0 = ServiceCall_get_CancellationToken_m0B73B27CE998AB3D215672ABDDCD07F3E3E2C890(__this, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&V_0), NULL);
		return L_1;
	}
}
// System.Boolean Microsoft.AppCenter.Ingestion.ServiceCall::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServiceCall_get_IsCompleted_mDAAE68D9056F1450144411C8C2A587B4E49F45C9 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsCompletedU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.ServiceCall::set_IsCompleted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCall_set_IsCompleted_mBB766E67DAF0D7F7D3366A5DB5DACFDED551E964 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean Microsoft.AppCenter.Ingestion.ServiceCall::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServiceCall_get_IsFaulted_mDDCAC6ED0CF9D40E6391982B4DEFCC451AB1A1F6 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0;
		L_0 = ServiceCall_get_Exception_m029A679D68FEB51EDFC4C483B88212CFF8F68F46_inline(__this, NULL);
		return (bool)((!(((RuntimeObject*)(Exception_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.String Microsoft.AppCenter.Ingestion.ServiceCall::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceCall_get_Result_m9AD0A3B8428E1CC2221C530B2327F9E88F2C8BF3 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CResultU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.ServiceCall::set_Result(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCall_set_Result_m500B0356F352254A765BDE7760D26A01B852EA92 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CResultU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Exception Microsoft.AppCenter.Ingestion.ServiceCall::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ServiceCall_get_Exception_m029A679D68FEB51EDFC4C483B88212CFF8F68F46 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->___U3CExceptionU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.ServiceCall::set_Exception(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCall_set_Exception_mE085E786C80C0C82A970A7ED2833E131FA5F3399 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, Exception_t* ___value0, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = ___value0;
		__this->___U3CExceptionU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExceptionU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Threading.CancellationToken Microsoft.AppCenter.Ingestion.ServiceCall::get_CancellationToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ServiceCall_get_CancellationToken_m0B73B27CE998AB3D215672ABDDCD07F3E3E2C890 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) 
{
	{
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_0 = __this->____tokenSource_0;
		NullCheck(L_0);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1;
		L_1 = CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4(L_0, NULL);
		return L_1;
	}
}
// System.String Microsoft.AppCenter.Ingestion.ServiceCall::get_AppSecret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceCall_get_AppSecret_m2DDCA78121B81E8DAAE2AAEFD48EF5B9586F6BA8 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAppSecretU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Guid Microsoft.AppCenter.Ingestion.ServiceCall::get_InstallId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t ServiceCall_get_InstallId_m524B190DB0C1F7D08A9A95BA76E5EE6DAE41A01E (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___U3CInstallIdU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log> Microsoft.AppCenter.Ingestion.ServiceCall::get_Logs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCall_get_Logs_m6D4C4D4BD45873D66ECD68D6216CF0214760E1A9 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CLogsU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.ServiceCall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCall__ctor_mB319DECA32F430E387DD51427C60173A10394C91 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_0 = (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)il2cpp_codegen_object_new(CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C(L_0, NULL);
		__this->____tokenSource_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tokenSource_0), (void*)L_0);
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		__this->____lock_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lock_2), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.ServiceCall::.ctor(System.String,System.Guid,System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCall__ctor_m8A352388C214EB2A5859C63DF4816FFC6C6EF4CF (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, String_t* ___appSecret0, Guid_t ___installId1, RuntimeObject* ___logs2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_0 = (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)il2cpp_codegen_object_new(CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C(L_0, NULL);
		__this->____tokenSource_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tokenSource_0), (void*)L_0);
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		__this->____lock_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lock_2), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_2 = ___appSecret0;
		__this->___U3CAppSecretU3Ek__BackingField_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAppSecretU3Ek__BackingField_7), (void*)L_2);
		Guid_t L_3 = ___installId1;
		__this->___U3CInstallIdU3Ek__BackingField_8 = L_3;
		RuntimeObject* L_4 = ___logs2;
		__this->___U3CLogsU3Ek__BackingField_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLogsU3Ek__BackingField_9), (void*)L_4);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.ServiceCall::ContinueWith(System.Action`1<Microsoft.AppCenter.Ingestion.IServiceCall>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCall_ContinueWith_mC2D657EC79A22E85E1269E18F5283DBC7DD5F1F0 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* ___continuationAction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		bool L_0 = __this->____disposed_3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAC5E714FDB18E61C82391AEAC684008F824FD526)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCall_ContinueWith_mC2D657EC79A22E85E1269E18F5283DBC7DD5F1F0_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____lock_2;
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004f:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_0058;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_4, NULL);
				}

IL_0058:
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
				bool L_6;
				L_6 = ServiceCall_get_IsCompleted_mDAAE68D9056F1450144411C8C2A587B4E49F45C9_inline(__this, NULL);
				if (L_6)
				{
					goto IL_004d_1;
				}
			}
			{
				bool L_7;
				L_7 = ServiceCall_get_IsCanceled_mF008C0B6A01B10CC20CBD356ED488E7199B3E7BA(__this, NULL);
				if (L_7)
				{
					goto IL_004d_1;
				}
			}
			{
				Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* L_8 = __this->____continuationAction_1;
				Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* L_9 = ___continuationAction0;
				Delegate_t* L_10;
				L_10 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_8, L_9, NULL);
				__this->____continuationAction_1 = ((Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6*)Castclass((RuntimeObject*)L_10, Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6_il2cpp_TypeInfo_var));
				Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationAction_1), (void*)((Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6*)Castclass((RuntimeObject*)L_10, Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6_il2cpp_TypeInfo_var)));
				goto IL_0060;
			}

IL_004d_1:
			{
				goto IL_0059;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0059:
	{
		Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* L_11 = ___continuationAction0;
		NullCheck(L_11);
		Action_1_Invoke_mAB24B83D874E28329625FD1E6C1AD175A57D5426_inline(L_11, __this, NULL);
	}

IL_0060:
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.ServiceCall::CopyState(Microsoft.AppCenter.Ingestion.IServiceCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCall_CopyState_m281AC07EFD4E05A8D3E9C8911E633F10390D84AF (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, RuntimeObject* ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____disposed_3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAC5E714FDB18E61C82391AEAC684008F824FD526)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCall_CopyState_m281AC07EFD4E05A8D3E9C8911E633F10390D84AF_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = ___source0;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.AppCenter.Ingestion.IServiceCall::get_IsCanceled() */, IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ServiceCall_Cancel_m3E010F03B685313B1BBEFD6A3CC6C50187FA9AA2(__this, NULL);
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___source0;
		NullCheck(L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Microsoft.AppCenter.Ingestion.IServiceCall::get_IsFaulted() */, IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var, L_4);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_6 = ___source0;
		NullCheck(L_6);
		Exception_t* L_7;
		L_7 = InterfaceFuncInvoker0< Exception_t* >::Invoke(4 /* System.Exception Microsoft.AppCenter.Ingestion.IServiceCall::get_Exception() */, IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var, L_6);
		ServiceCall_SetException_mE0EB108581A7CF084B3E2DF9B59423543EE1EE54(__this, L_7, NULL);
		return;
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___source0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Microsoft.AppCenter.Ingestion.IServiceCall::get_Result() */, IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var, L_8);
		ServiceCall_SetResult_m9B59DF998BF6786119C0490316D28F0B7E936D88(__this, L_9, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.ServiceCall::SetResult(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCall_SetResult_m9B59DF998BF6786119C0490316D28F0B7E936D88 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, String_t* ___result0, const RuntimeMethod* method) 
{
	Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		bool L_0 = __this->____disposed_3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAC5E714FDB18E61C82391AEAC684008F824FD526)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCall_SetResult_m9B59DF998BF6786119C0490316D28F0B7E936D88_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____lock_2;
		V_1 = L_2;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_2;
					if (!L_3)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_4, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_5 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_5, (&V_2), NULL);
				bool L_6;
				L_6 = ServiceCall_get_IsCompleted_mDAAE68D9056F1450144411C8C2A587B4E49F45C9_inline(__this, NULL);
				if (L_6)
				{
					goto IL_0034_1;
				}
			}
			{
				bool L_7;
				L_7 = ServiceCall_get_IsCanceled_mF008C0B6A01B10CC20CBD356ED488E7199B3E7BA(__this, NULL);
				if (!L_7)
				{
					goto IL_0036_1;
				}
			}

IL_0034_1:
			{
				goto IL_0068;
			}

IL_0036_1:
			{
				ServiceCall_set_IsCompleted_mBB766E67DAF0D7F7D3366A5DB5DACFDED551E964_inline(__this, (bool)1, NULL);
				String_t* L_8 = ___result0;
				ServiceCall_set_Result_m500B0356F352254A765BDE7760D26A01B852EA92_inline(__this, L_8, NULL);
				Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* L_9 = __this->____continuationAction_1;
				V_0 = L_9;
				__this->____continuationAction_1 = (Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationAction_1), (void*)(Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6*)NULL);
				goto IL_005e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* L_10 = V_0;
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* L_11 = V_0;
		NullCheck(L_11);
		Action_1_Invoke_mAB24B83D874E28329625FD1E6C1AD175A57D5426_inline(L_11, __this, NULL);
	}

IL_0068:
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.ServiceCall::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCall_SetException_mE0EB108581A7CF084B3E2DF9B59423543EE1EE54 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		bool L_0 = __this->____disposed_3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAC5E714FDB18E61C82391AEAC684008F824FD526)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCall_SetException_mE0EB108581A7CF084B3E2DF9B59423543EE1EE54_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____lock_2;
		V_1 = L_2;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_2;
					if (!L_3)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_4, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_5 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_5, (&V_2), NULL);
				bool L_6;
				L_6 = ServiceCall_get_IsCompleted_mDAAE68D9056F1450144411C8C2A587B4E49F45C9_inline(__this, NULL);
				if (L_6)
				{
					goto IL_0034_1;
				}
			}
			{
				bool L_7;
				L_7 = ServiceCall_get_IsCanceled_mF008C0B6A01B10CC20CBD356ED488E7199B3E7BA(__this, NULL);
				if (!L_7)
				{
					goto IL_0036_1;
				}
			}

IL_0034_1:
			{
				goto IL_0068;
			}

IL_0036_1:
			{
				ServiceCall_set_IsCompleted_mBB766E67DAF0D7F7D3366A5DB5DACFDED551E964_inline(__this, (bool)1, NULL);
				Exception_t* L_8 = ___exception0;
				ServiceCall_set_Exception_mE085E786C80C0C82A970A7ED2833E131FA5F3399_inline(__this, L_8, NULL);
				Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* L_9 = __this->____continuationAction_1;
				V_0 = L_9;
				__this->____continuationAction_1 = (Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationAction_1), (void*)(Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6*)NULL);
				goto IL_005e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* L_10 = V_0;
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* L_11 = V_0;
		NullCheck(L_11);
		Action_1_Invoke_mAB24B83D874E28329625FD1E6C1AD175A57D5426_inline(L_11, __this, NULL);
	}

IL_0068:
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.ServiceCall::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCall_Cancel_m3E010F03B685313B1BBEFD6A3CC6C50187FA9AA2 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) 
{
	Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		bool L_0 = __this->____disposed_3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAC5E714FDB18E61C82391AEAC684008F824FD526)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCall_Cancel_m3E010F03B685313B1BBEFD6A3CC6C50187FA9AA2_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____lock_2;
		V_1 = L_2;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_2;
					if (!L_3)
					{
						goto IL_005a;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_4, NULL);
				}

IL_005a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_5 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_5, (&V_2), NULL);
				bool L_6;
				L_6 = ServiceCall_get_IsCompleted_mDAAE68D9056F1450144411C8C2A587B4E49F45C9_inline(__this, NULL);
				if (L_6)
				{
					goto IL_0034_1;
				}
			}
			{
				bool L_7;
				L_7 = ServiceCall_get_IsCanceled_mF008C0B6A01B10CC20CBD356ED488E7199B3E7BA(__this, NULL);
				if (!L_7)
				{
					goto IL_0036_1;
				}
			}

IL_0034_1:
			{
				goto IL_0065;
			}

IL_0036_1:
			{
				CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_8 = __this->____tokenSource_0;
				NullCheck(L_8);
				CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B(L_8, NULL);
				Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* L_9 = __this->____continuationAction_1;
				V_0 = L_9;
				__this->____continuationAction_1 = (Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationAction_1), (void*)(Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6*)NULL);
				goto IL_005b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* L_10 = V_0;
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* L_11 = V_0;
		NullCheck(L_11);
		Action_1_Invoke_mAB24B83D874E28329625FD1E6C1AD175A57D5426_inline(L_11, __this, NULL);
	}

IL_0065:
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.ServiceCall::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCall_Dispose_mFF9D1EB6F8DC96201C2E1F9628F35BB8C6E903C5 (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposed_3;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		__this->____disposed_3 = (bool)1;
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_1 = __this->____tokenSource_0;
		NullCheck(L_1);
		CancellationTokenSource_Dispose_m5096059D16078E130BB87D268D4871849B53449B(L_1, NULL);
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
// System.Boolean Microsoft.AppCenter.Ingestion.IngestionException::get_IsRecoverable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IngestionException_get_IsRecoverable_m7B2D0462D997E88D136D8B9A10C25F86E4E28CE5 (IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.IngestionException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngestionException__ctor_m58552E494FEF6F3EE6517BC36023F9CE308A8E69 (IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		AppCenterException__ctor_m78865B2F74BDD293543B6CD3BCF5E568215D548D(__this, L_0, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.IngestionException::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngestionException__ctor_m840D302FAF3D1245700A2B440E66A3426B50780C (IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA* __this, Exception_t* ___innerException0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80A41D9F6AF361FC7A56F2BE6B309B938B03B797);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = ___innerException0;
		AppCenterException__ctor_m98752C4D7F658A25A4733F41EB67E83774634A6F(__this, _stringLiteral80A41D9F6AF361FC7A56F2BE6B309B938B03B797, L_0, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.IngestionException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngestionException__ctor_m00B6711624E97269411AE459B2744C7389D5D425 (IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80A41D9F6AF361FC7A56F2BE6B309B938B03B797);
		s_Il2CppMethodInitialized = true;
	}
	{
		AppCenterException__ctor_m78865B2F74BDD293543B6CD3BCF5E568215D548D(__this, _stringLiteral80A41D9F6AF361FC7A56F2BE6B309B938B03B797, NULL);
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
// System.String Microsoft.AppCenter.Ingestion.Models.ValidationException::GetRuleString(Microsoft.AppCenter.Ingestion.Models.ValidationException/Rule,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValidationException_GetRuleString_mE6CB7877146B304F05258A35C542EF228A8C916C (int32_t ___rule0, String_t* ___extraValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06D1EB82798478354C6948DFC5D583DAD2340515);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E39645720F700C5BA8F22492C0E3E15B3C7CCF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38E5FF6FEFB5390BFE4691519F48CAFC6CF1A918);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB05AA4B134D48D0AE3E3006759B599A36E597739);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3A3083FA5F0C79FEA30B5B38204217E3D180B72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAFFCA9E64319DB37AD0AAD6279F0739A06705C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFA92CAEAE5C188E8FB205FED5A693D0E5657C29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC39BEFA6E2364103FE54E7F847E0E38844016692);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF01153B013CC270E68EC619A597A8D4A666327D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDFF7DE977FD5A162C675407A9DFEB07EC1019F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___rule0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_002e;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_0040;
			}
			case 4:
			{
				goto IL_004c;
			}
			case 5:
			{
				goto IL_005d;
			}
			case 6:
			{
				goto IL_0075;
			}
			case 7:
			{
				goto IL_0069;
			}
		}
	}
	{
		goto IL_0081;
	}

IL_0028:
	{
		return _stringLiteral38E5FF6FEFB5390BFE4691519F48CAFC6CF1A918;
	}

IL_002e:
	{
		return _stringLiteralBAFFCA9E64319DB37AD0AAD6279F0739A06705C1;
	}

IL_0034:
	{
		String_t* L_1 = ___extraValue1;
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralF01153B013CC270E68EC619A597A8D4A666327D5, L_1, NULL);
		return L_2;
	}

IL_0040:
	{
		String_t* L_3 = ___extraValue1;
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC39BEFA6E2364103FE54E7F847E0E38844016692, L_3, NULL);
		return L_4;
	}

IL_004c:
	{
		String_t* L_5 = ___extraValue1;
		String_t* L_6;
		L_6 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral06D1EB82798478354C6948DFC5D583DAD2340515, L_5, _stringLiteralBFA92CAEAE5C188E8FB205FED5A693D0E5657C29, NULL);
		return L_6;
	}

IL_005d:
	{
		String_t* L_7 = ___extraValue1;
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB3A3083FA5F0C79FEA30B5B38204217E3D180B72, L_7, NULL);
		return L_8;
	}

IL_0069:
	{
		String_t* L_9 = ___extraValue1;
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralFDFF7DE977FD5A162C675407A9DFEB07EC1019F5, L_9, NULL);
		return L_10;
	}

IL_0075:
	{
		String_t* L_11 = ___extraValue1;
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral0E39645720F700C5BA8F22492C0E3E15B3C7CCF7, L_11, NULL);
		return L_12;
	}

IL_0081:
	{
		return _stringLiteralB05AA4B134D48D0AE3E3006759B599A36E597739;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.ValidationException::GetErrorString(Microsoft.AppCenter.Ingestion.Models.ValidationException/Rule,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValidationException_GetErrorString_m35D26CA80A668ABE524322769B91A738F7440C18 (int32_t ___validationRule0, String_t* ___propertyName1, RuntimeObject* ___detail2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65E915DB1DAD2DE1BAC17CE746EF7796A442D000);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9816E74B93E1C26A72AD4D2196C8A3C7A3C28924);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	String_t* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	{
		String_t* L_0 = ___propertyName1;
		int32_t L_1 = ___validationRule0;
		RuntimeObject* L_2 = ___detail2;
		G_B1_0 = L_1;
		G_B1_1 = _stringLiteral9816E74B93E1C26A72AD4D2196C8A3C7A3C28924;
		G_B1_2 = L_0;
		G_B1_3 = _stringLiteral65E915DB1DAD2DE1BAC17CE746EF7796A442D000;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = _stringLiteral9816E74B93E1C26A72AD4D2196C8A3C7A3C28924;
			G_B2_2 = L_0;
			G_B2_3 = _stringLiteral65E915DB1DAD2DE1BAC17CE746EF7796A442D000;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0018;
	}

IL_0012:
	{
		RuntimeObject* L_3 = ___detail2;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0018:
	{
		String_t* L_5;
		L_5 = ValidationException_GetRuleString_mE6CB7877146B304F05258A35C542EF228A8C916C(G_B3_1, G_B3_0, NULL);
		String_t* L_6;
		L_6 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(G_B3_4, G_B3_3, G_B3_2, L_5, NULL);
		return L_6;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.ValidationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationException__ctor_m981805F2016CA472334E5F2F4A780EC84EA9191F (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03C940DA17D60B8720CC52948255206388CA2ED3);
		s_Il2CppMethodInitialized = true;
	}
	{
		IngestionException__ctor_m58552E494FEF6F3EE6517BC36023F9CE308A8E69(__this, _stringLiteral03C940DA17D60B8720CC52948255206388CA2ED3, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.ValidationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationException__ctor_m2F45FE6E42F45C9AF9835FA29F4B32E2041547DE (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		IngestionException__ctor_m58552E494FEF6F3EE6517BC36023F9CE308A8E69(__this, L_0, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.ValidationException::.ctor(Microsoft.AppCenter.Ingestion.Models.ValidationException/Rule,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationException__ctor_m8044FBF3F2AA8CEC98A9337B4650778C806F3CA0 (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* __this, int32_t ___validationRule0, String_t* ___propertyName1, RuntimeObject* ___detail2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___validationRule0;
		String_t* L_1 = ___propertyName1;
		RuntimeObject* L_2 = ___detail2;
		String_t* L_3;
		L_3 = ValidationException_GetErrorString_m35D26CA80A668ABE524322769B91A738F7440C18(L_0, L_1, L_2, NULL);
		IngestionException__ctor_m58552E494FEF6F3EE6517BC36023F9CE308A8E69(__this, L_3, NULL);
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
// System.Void Microsoft.AppCenter.Ingestion.Models.StartServiceLog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartServiceLog__ctor_mB0C3F92D201242CCDA2059681DF0FED42FECF6D8 (StartServiceLog_t7395E5583F8EE57EB2FC14008CB24A990475234B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Log__ctor_m16C3520A27BD6A7683E73E66EE461E81675E6491(__this, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		StartServiceLog_set_Services_mEA5F99E46599ABD29F874CF420FFADDCF849D020_inline(__this, L_0, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.StartServiceLog::.ctor(Microsoft.AppCenter.Ingestion.Models.Device,System.Nullable`1<System.DateTime>,System.Nullable`1<System.Guid>,System.Collections.Generic.IList`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartServiceLog__ctor_m2B2C23A16E93B8311EE23D025E3445448605E159 (StartServiceLog_t7395E5583F8EE57EB2FC14008CB24A990475234B* __this, Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* ___device0, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___timestamp1, Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___sid2, RuntimeObject* ___services3, const RuntimeMethod* method) 
{
	{
		Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* L_0 = ___device0;
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_1 = ___timestamp1;
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_2 = ___sid2;
		Log__ctor_m9D3FC8BB1D9E05127350E0CD33CE73C480C13BB6(__this, L_0, L_1, L_2, (String_t*)NULL, NULL);
		RuntimeObject* L_3 = ___services3;
		StartServiceLog_set_Services_mEA5F99E46599ABD29F874CF420FFADDCF849D020_inline(__this, L_3, NULL);
		return;
	}
}
// System.Collections.Generic.IList`1<System.String> Microsoft.AppCenter.Ingestion.Models.StartServiceLog::get_Services()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartServiceLog_get_Services_mD297C7CF0F266CE38E585F0315D2B061A52D4507 (StartServiceLog_t7395E5583F8EE57EB2FC14008CB24A990475234B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CServicesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.StartServiceLog::set_Services(System.Collections.Generic.IList`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartServiceLog_set_Services_mEA5F99E46599ABD29F874CF420FFADDCF849D020 (StartServiceLog_t7395E5583F8EE57EB2FC14008CB24A990475234B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CServicesU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServicesU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.StartServiceLog::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartServiceLog_Validate_mE86E1D04071B73F5B6520E1CA56957CD76CDA785 (StartServiceLog_t7395E5583F8EE57EB2FC14008CB24A990475234B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Log_Validate_m06947D5D6A4DEB54521430A714CCBB83C567BA31(__this, NULL);
		RuntimeObject* L_0;
		L_0 = StartServiceLog_get_Services_mD297C7CF0F266CE38E585F0315D2B061A52D4507_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = StartServiceLog_get_Services_mD297C7CF0F266CE38E585F0315D2B061A52D4507_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_1);
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = 1;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* L_5 = (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ValidationException__ctor_m8044FBF3F2AA8CEC98A9337B4650778C806F3CA0(L_5, 3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralED4982B52E882040926EF298B3D48FD767897991)), L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StartServiceLog_Validate_mE86E1D04071B73F5B6520E1CA56957CD76CDA785_RuntimeMethod_var)));
	}

IL_002e:
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
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device__ctor_m9437F2A5F738B4DE1041807415554F75006EC65E (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::.ctor(System.String,System.String,System.String,System.String,System.String,System.Int32,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Nullable`1<System.Int32>,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device__ctor_mD79C92D57BA241E14CBE988D48CD5EA276E84E7A (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___sdkName0, String_t* ___sdkVersion1, String_t* ___osName2, String_t* ___osVersion3, String_t* ___locale4, int32_t ___timeZoneOffset5, String_t* ___appVersion6, String_t* ___appBuild7, String_t* ___wrapperSdkVersion8, String_t* ___wrapperSdkName9, String_t* ___model10, String_t* ___oemName11, String_t* ___osBuild12, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___osApiLevel13, String_t* ___screenSize14, String_t* ___carrierName15, String_t* ___carrierCountry16, String_t* ___appNamespace17, String_t* ___liveUpdateReleaseLabel18, String_t* ___liveUpdateDeploymentKey19, String_t* ___liveUpdatePackageHash20, String_t* ___wrapperRuntimeVersion21, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___sdkName0;
		Device_set_SdkName_mAEE2D89E6F9925D293A2A6B8F7BD00E4A577710E_inline(__this, L_0, NULL);
		String_t* L_1 = ___sdkVersion1;
		Device_set_SdkVersion_mEF60A7D5E795FAB7A76CA1D3B7CAC1263145E738_inline(__this, L_1, NULL);
		String_t* L_2 = ___wrapperSdkVersion8;
		Device_set_WrapperSdkVersion_m541EABE005F436D5082B13970398C833CA316454_inline(__this, L_2, NULL);
		String_t* L_3 = ___wrapperSdkName9;
		Device_set_WrapperSdkName_m5A8FE1E793E2B2E4F2AA0668127CDF4632AA0E87_inline(__this, L_3, NULL);
		String_t* L_4 = ___model10;
		Device_set_Model_m0D8C9743E1B4304C8753AB52C263A29E4C2B4006_inline(__this, L_4, NULL);
		String_t* L_5 = ___oemName11;
		Device_set_OemName_mC2DF112C46BB82F0442B7B24810B48F2D120FDD3_inline(__this, L_5, NULL);
		String_t* L_6 = ___osName2;
		Device_set_OsName_m3708A3408CAD0DD9F40EAB5A8E6FB36F89F34E3E_inline(__this, L_6, NULL);
		String_t* L_7 = ___osVersion3;
		Device_set_OsVersion_mEC4CDCD7DB47D16510C56E670303B9AAD743FC3A_inline(__this, L_7, NULL);
		String_t* L_8 = ___osBuild12;
		Device_set_OsBuild_m778DB9F89D63EE1A042FCB131B18214DE71077A5_inline(__this, L_8, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_9 = ___osApiLevel13;
		Device_set_OsApiLevel_m28DC8D9FEC49918F11916C35D20F091D12615BB8_inline(__this, L_9, NULL);
		String_t* L_10 = ___locale4;
		Device_set_Locale_m97E69C3A8F77013359F9FBF74CFA5BCB87875E94_inline(__this, L_10, NULL);
		int32_t L_11 = ___timeZoneOffset5;
		Device_set_TimeZoneOffset_mD048F1F3150A8FD76F0083CF76506C30AE622B90_inline(__this, L_11, NULL);
		String_t* L_12 = ___screenSize14;
		Device_set_ScreenSize_mB1DC823CD354F05F38615763E7A2509792CF1F2F_inline(__this, L_12, NULL);
		String_t* L_13 = ___appVersion6;
		Device_set_AppVersion_mEC02EBF356393A2A46B874D5DDFFA2B56EAEADD5_inline(__this, L_13, NULL);
		String_t* L_14 = ___carrierName15;
		Device_set_CarrierName_m911D4F0360F37BFD0614EF4BB5BB72434753CC99_inline(__this, L_14, NULL);
		String_t* L_15 = ___carrierCountry16;
		Device_set_CarrierCountry_mECE558BE8F62ED93BBE357F4F8DEB235348F7376_inline(__this, L_15, NULL);
		String_t* L_16 = ___appBuild7;
		Device_set_AppBuild_m99BA217EA93A1FD8841A8C7DAA84E8C7FAD5B4BA_inline(__this, L_16, NULL);
		String_t* L_17 = ___appNamespace17;
		Device_set_AppNamespace_mD3A302B2EF7AD04609C784FEF1C30C2F0F1E27CE_inline(__this, L_17, NULL);
		String_t* L_18 = ___liveUpdateReleaseLabel18;
		Device_set_LiveUpdateReleaseLabel_m163C680D432C0DAE633F1FE187F794182F9E5FE4_inline(__this, L_18, NULL);
		String_t* L_19 = ___liveUpdateDeploymentKey19;
		Device_set_LiveUpdateDeploymentKey_m7E0EF2D6FC2503BBB8F49BF72677B6A9F87AEBEF_inline(__this, L_19, NULL);
		String_t* L_20 = ___liveUpdatePackageHash20;
		Device_set_LiveUpdatePackageHash_mBA5B2AF7634ACB32B9751839C86E58E0648BB0E2_inline(__this, L_20, NULL);
		String_t* L_21 = ___wrapperRuntimeVersion21;
		Device_set_WrapperRuntimeVersion_m536B55177953C6C3BDE6848469F9C114FD416BBE_inline(__this, L_21, NULL);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_SdkName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_SdkName_m61EA3126F54F0A96A3BF3B31BF853A25650064E4 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSdkNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_SdkName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_SdkName_mAEE2D89E6F9925D293A2A6B8F7BD00E4A577710E (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CSdkNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSdkNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_SdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_SdkVersion_mA2A1B16637F535C08E72F06CD29411A57DEAED21 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSdkVersionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_SdkVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_SdkVersion_mEF60A7D5E795FAB7A76CA1D3B7CAC1263145E738 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CSdkVersionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSdkVersionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_WrapperSdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_WrapperSdkVersion_m4A44740D43C24C716B7D4426EADD6688F86838C8 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CWrapperSdkVersionU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_WrapperSdkVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_WrapperSdkVersion_m541EABE005F436D5082B13970398C833CA316454 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CWrapperSdkVersionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWrapperSdkVersionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_WrapperSdkName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_WrapperSdkName_mB5D49BC212A9207E59E3993C0AD8A77FEA1B04FE (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CWrapperSdkNameU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_WrapperSdkName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_WrapperSdkName_m5A8FE1E793E2B2E4F2AA0668127CDF4632AA0E87 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CWrapperSdkNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWrapperSdkNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_Model()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_Model_mECBD7B9EF5732B40A5B485799E074BE97069A431 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CModelU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_Model(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_Model_m0D8C9743E1B4304C8753AB52C263A29E4C2B4006 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CModelU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CModelU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_OemName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_OemName_mE70309E88F48BFF8C408D0CF01853DC7991ED777 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3COemNameU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_OemName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_OemName_mC2DF112C46BB82F0442B7B24810B48F2D120FDD3 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3COemNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COemNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_OsName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_OsName_m453943CE18EF57FFA858034D7765C05511CB4D8D (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3COsNameU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_OsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_OsName_m3708A3408CAD0DD9F40EAB5A8E6FB36F89F34E3E (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3COsNameU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COsNameU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_OsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_OsVersion_m1FCFDAE6C4D62C612962FF8D76F17663231D0752 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3COsVersionU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_OsVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_OsVersion_mEC4CDCD7DB47D16510C56E670303B9AAD743FC3A (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3COsVersionU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COsVersionU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_OsBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_OsBuild_m0A09AB1F1D4A200259E7D830C1FDB3FC97C6C0EC (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3COsBuildU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_OsBuild(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_OsBuild_m778DB9F89D63EE1A042FCB131B18214DE71077A5 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3COsBuildU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COsBuildU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Nullable`1<System.Int32> Microsoft.AppCenter.Ingestion.Models.Device::get_OsApiLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Device_get_OsApiLevel_m81135CCFBF8B01E7FE8F3F607D594E8A61391DC5 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3COsApiLevelU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_OsApiLevel(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_OsApiLevel_m28DC8D9FEC49918F11916C35D20F091D12615BB8 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___value0;
		__this->___U3COsApiLevelU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_Locale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_Locale_mB239F951904366698F8F69911A206E61BD5CCA51 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CLocaleU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_Locale(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_Locale_m97E69C3A8F77013359F9FBF74CFA5BCB87875E94 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CLocaleU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLocaleU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Int32 Microsoft.AppCenter.Ingestion.Models.Device::get_TimeZoneOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Device_get_TimeZoneOffset_m3992117DA557A325832BB1AB23844BFD0E2303C9 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTimeZoneOffsetU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_TimeZoneOffset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_TimeZoneOffset_mD048F1F3150A8FD76F0083CF76506C30AE622B90 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTimeZoneOffsetU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_ScreenSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_ScreenSize_m860F0A28E317E3068679EF9FA47279A8F85810C0 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CScreenSizeU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_ScreenSize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_ScreenSize_mB1DC823CD354F05F38615763E7A2509792CF1F2F (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CScreenSizeU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CScreenSizeU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_AppVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_AppVersion_mEA1A4785A9F83341AC7504472BC6E608DCB6DB75 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAppVersionU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_AppVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_AppVersion_mEC02EBF356393A2A46B874D5DDFFA2B56EAEADD5 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAppVersionU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAppVersionU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_CarrierName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_CarrierName_m47353F5C2C26BF415CC33DDD702D656C0E716237 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCarrierNameU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_CarrierName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_CarrierName_m911D4F0360F37BFD0614EF4BB5BB72434753CC99 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CCarrierNameU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCarrierNameU3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_CarrierCountry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_CarrierCountry_mDFC5AC04BC1AC9ED9B0FD2465B0C77BA3FB99254 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCarrierCountryU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_CarrierCountry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_CarrierCountry_mECE558BE8F62ED93BBE357F4F8DEB235348F7376 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CCarrierCountryU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCarrierCountryU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_AppBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_AppBuild_m2122264D6A01D62B228AEE89C57F9A52456CBEF5 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAppBuildU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_AppBuild(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_AppBuild_m99BA217EA93A1FD8841A8C7DAA84E8C7FAD5B4BA (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAppBuildU3Ek__BackingField_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAppBuildU3Ek__BackingField_16), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_AppNamespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_AppNamespace_mE9793B6FC088A4A45417096D3A3847242E100765 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAppNamespaceU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_AppNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_AppNamespace_mD3A302B2EF7AD04609C784FEF1C30C2F0F1E27CE (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAppNamespaceU3Ek__BackingField_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAppNamespaceU3Ek__BackingField_17), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_LiveUpdateReleaseLabel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_LiveUpdateReleaseLabel_m9CAAD987AA88B65A20900561DD5796B7416B4308 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CLiveUpdateReleaseLabelU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_LiveUpdateReleaseLabel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_LiveUpdateReleaseLabel_m163C680D432C0DAE633F1FE187F794182F9E5FE4 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CLiveUpdateReleaseLabelU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLiveUpdateReleaseLabelU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_LiveUpdateDeploymentKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_LiveUpdateDeploymentKey_m1C393D4A198F58389C172946C609A7218AF4F432 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CLiveUpdateDeploymentKeyU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_LiveUpdateDeploymentKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_LiveUpdateDeploymentKey_m7E0EF2D6FC2503BBB8F49BF72677B6A9F87AEBEF (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CLiveUpdateDeploymentKeyU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLiveUpdateDeploymentKeyU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_LiveUpdatePackageHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_LiveUpdatePackageHash_m51459F9B15D099E28BC828BCE3BA9186FEBDC95C (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CLiveUpdatePackageHashU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_LiveUpdatePackageHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_LiveUpdatePackageHash_mBA5B2AF7634ACB32B9751839C86E58E0648BB0E2 (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CLiveUpdatePackageHashU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLiveUpdatePackageHashU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Device::get_WrapperRuntimeVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_WrapperRuntimeVersion_mEE84B0E3508B14867CFAB28628D28C2A30733C3A (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CWrapperRuntimeVersionU3Ek__BackingField_21;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::set_WrapperRuntimeVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_set_WrapperRuntimeVersion_m536B55177953C6C3BDE6848469F9C114FD416BBE (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CWrapperRuntimeVersionU3Ek__BackingField_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWrapperRuntimeVersionU3Ek__BackingField_21), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Device::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device_Validate_mF697DB62E9092A7575AD739CA70362B6C0E8DA9A (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Device_get_SdkName_m61EA3126F54F0A96A3BF3B31BF853A25650064E4_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* L_1 = (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ValidationException__ctor_m8044FBF3F2AA8CEC98A9337B4650778C806F3CA0(L_1, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral28C657C35606C36B75064A8C71A21A47750B175D)), NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Device_Validate_mF697DB62E9092A7575AD739CA70362B6C0E8DA9A_RuntimeMethod_var)));
	}

IL_0015:
	{
		String_t* L_2;
		L_2 = Device_get_SdkVersion_mA2A1B16637F535C08E72F06CD29411A57DEAED21_inline(__this, NULL);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* L_3 = (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ValidationException__ctor_m8044FBF3F2AA8CEC98A9337B4650778C806F3CA0(L_3, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE47BAF69A9960A55C663C31AEEB05CF0E17A548B)), NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Device_Validate_mF697DB62E9092A7575AD739CA70362B6C0E8DA9A_RuntimeMethod_var)));
	}

IL_002a:
	{
		String_t* L_4;
		L_4 = Device_get_OsName_m453943CE18EF57FFA858034D7765C05511CB4D8D_inline(__this, NULL);
		if (L_4)
		{
			goto IL_003f;
		}
	}
	{
		ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* L_5 = (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ValidationException__ctor_m8044FBF3F2AA8CEC98A9337B4650778C806F3CA0(L_5, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F98028910AABDC27AFC8E97649C19BCD9F34FF)), NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Device_Validate_mF697DB62E9092A7575AD739CA70362B6C0E8DA9A_RuntimeMethod_var)));
	}

IL_003f:
	{
		String_t* L_6;
		L_6 = Device_get_OsVersion_m1FCFDAE6C4D62C612962FF8D76F17663231D0752_inline(__this, NULL);
		if (L_6)
		{
			goto IL_0054;
		}
	}
	{
		ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* L_7 = (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ValidationException__ctor_m8044FBF3F2AA8CEC98A9337B4650778C806F3CA0(L_7, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB723E5FA50CBED75F142D8F9663A11B382CB4D50)), NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Device_Validate_mF697DB62E9092A7575AD739CA70362B6C0E8DA9A_RuntimeMethod_var)));
	}

IL_0054:
	{
		String_t* L_8;
		L_8 = Device_get_Locale_mB239F951904366698F8F69911A206E61BD5CCA51_inline(__this, NULL);
		if (L_8)
		{
			goto IL_0069;
		}
	}
	{
		ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* L_9 = (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ValidationException__ctor_m8044FBF3F2AA8CEC98A9337B4650778C806F3CA0(L_9, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE3E0BC991DA54A4EBC858D968493D0CB4D55810B)), NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Device_Validate_mF697DB62E9092A7575AD739CA70362B6C0E8DA9A_RuntimeMethod_var)));
	}

IL_0069:
	{
		String_t* L_10;
		L_10 = Device_get_AppVersion_mEA1A4785A9F83341AC7504472BC6E608DCB6DB75_inline(__this, NULL);
		if (L_10)
		{
			goto IL_007e;
		}
	}
	{
		ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* L_11 = (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ValidationException__ctor_m8044FBF3F2AA8CEC98A9337B4650778C806F3CA0(L_11, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB82E8094F6C269064FB21EECF4E3877BB41DC47D)), NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Device_Validate_mF697DB62E9092A7575AD739CA70362B6C0E8DA9A_RuntimeMethod_var)));
	}

IL_007e:
	{
		String_t* L_12;
		L_12 = Device_get_AppBuild_m2122264D6A01D62B228AEE89C57F9A52456CBEF5_inline(__this, NULL);
		if (L_12)
		{
			goto IL_0093;
		}
	}
	{
		ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* L_13 = (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ValidationException__ctor_m8044FBF3F2AA8CEC98A9337B4650778C806F3CA0(L_13, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5CE5CC00002D7A6ABFE45CD6E4F8408DD3A993A2)), NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Device_Validate_mF697DB62E9092A7575AD739CA70362B6C0E8DA9A_RuntimeMethod_var)));
	}

IL_0093:
	{
		int32_t L_14;
		L_14 = Device_get_TimeZoneOffset_m3992117DA557A325832BB1AB23844BFD0E2303C9_inline(__this, NULL);
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)840))))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_15 = ((int32_t)840);
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_15);
		ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* L_17 = (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		ValidationException__ctor_m8044FBF3F2AA8CEC98A9337B4650778C806F3CA0(L_17, 7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral959D3E2840A052997AC641B000A87E2F1EDEB519)), L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Device_Validate_mF697DB62E9092A7575AD739CA70362B6C0E8DA9A_RuntimeMethod_var)));
	}

IL_00b6:
	{
		int32_t L_18;
		L_18 = Device_get_TimeZoneOffset_m3992117DA557A325832BB1AB23844BFD0E2303C9_inline(__this, NULL);
		if ((((int32_t)L_18) >= ((int32_t)((int32_t)-840))))
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_19 = ((int32_t)-840);
		RuntimeObject* L_20 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_19);
		ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* L_21 = (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		ValidationException__ctor_m8044FBF3F2AA8CEC98A9337B4650778C806F3CA0(L_21, 6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral959D3E2840A052997AC641B000A87E2F1EDEB519)), L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Device_Validate_mF697DB62E9092A7575AD739CA70362B6C0E8DA9A_RuntimeMethod_var)));
	}

IL_00d9:
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
// System.Void Microsoft.AppCenter.Ingestion.Models.Log::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__ctor_m16C3520A27BD6A7683E73E66EE461E81675E6491 (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Log::.ctor(Microsoft.AppCenter.Ingestion.Models.Device,System.Nullable`1<System.DateTime>,System.Nullable`1<System.Guid>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__ctor_m9D3FC8BB1D9E05127350E0CD33CE73C480C13BB6 (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* ___device0, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___timestamp1, Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___sid2, String_t* ___userId3, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = ___timestamp1;
		Log_set_Timestamp_mA5BB9F65895F5E91AECACB6C433ECC4C20D5F63E_inline(__this, L_0, NULL);
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_1 = ___sid2;
		Log_set_Sid_m84495D0B7FAFB7D41C3DD1AFF5DB8E9D8F553F80_inline(__this, L_1, NULL);
		String_t* L_2 = ___userId3;
		Log_set_UserId_m85FE28C1033CF36C37E42CACE479850B85D97643_inline(__this, L_2, NULL);
		Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* L_3 = ___device0;
		Log_set_Device_m4EC2F2FD10BF9985EE7EAF70012913B7CE45F35B_inline(__this, L_3, NULL);
		return;
	}
}
// System.Nullable`1<System.DateTime> Microsoft.AppCenter.Ingestion.Models.Log::get_Timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC Log_get_Timestamp_m9ED5E25A3D1F03D3DAFD039B76D7C333F1BCAB49 (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = __this->___U3CTimestampU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Log::set_Timestamp(System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_set_Timestamp_mA5BB9F65895F5E91AECACB6C433ECC4C20D5F63E (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = ___value0;
		__this->___U3CTimestampU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Nullable`1<System.Guid> Microsoft.AppCenter.Ingestion.Models.Log::get_Sid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 Log_get_Sid_m96C8062B3420AE8AD0D9D5A7DCA05060B62C5EE4 (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_0 = __this->___U3CSidU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Log::set_Sid(System.Nullable`1<System.Guid>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_set_Sid_m84495D0B7FAFB7D41C3DD1AFF5DB8E9D8F553F80 (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_0 = ___value0;
		__this->___U3CSidU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Log::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Log_get_UserId_m5764C361B2E1C5FC0005CE600656B78CBBEA349A (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CUserIdU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Log::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_set_UserId_m85FE28C1033CF36C37E42CACE479850B85D97643 (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CUserIdU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIdU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Microsoft.AppCenter.Ingestion.Models.Device Microsoft.AppCenter.Ingestion.Models.Log::get_Device()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* Log_get_Device_mD82076B7A498A9A358644DE800320D13CF8605DC (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, const RuntimeMethod* method) 
{
	{
		Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* L_0 = __this->___U3CDeviceU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Log::set_Device(Microsoft.AppCenter.Ingestion.Models.Device)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_set_Device_m4EC2F2FD10BF9985EE7EAF70012913B7CE45F35B (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* ___value0, const RuntimeMethod* method) 
{
	{
		Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* L_0 = ___value0;
		__this->___U3CDeviceU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDeviceU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Log::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Validate_m06947D5D6A4DEB54521430A714CCBB83C567BA31 (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, const RuntimeMethod* method) 
{
	{
		Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* L_0;
		L_0 = Log_get_Device_mD82076B7A498A9A358644DE800320D13CF8605DC_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* L_1 = (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ValidationException__ctor_m8044FBF3F2AA8CEC98A9337B4650778C806F3CA0(L_1, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF67FF52BAD5C543F3623D3051EA5B4ED8BCD0DEB)), NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Log_Validate_m06947D5D6A4DEB54521430A714CCBB83C567BA31_RuntimeMethod_var)));
	}

IL_0015:
	{
		Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* L_2;
		L_2 = Log_get_Device_mD82076B7A498A9A358644DE800320D13CF8605DC_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* L_3;
		L_3 = Log_get_Device_mD82076B7A498A9A358644DE800320D13CF8605DC_inline(__this, NULL);
		NullCheck(L_3);
		VirtualActionInvoker0::Invoke(4 /* System.Void Microsoft.AppCenter.Ingestion.Models.Device::Validate() */, L_3);
	}

IL_0028:
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
// System.Void Microsoft.AppCenter.Ingestion.Models.LogContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogContainer__ctor_mDF81BA3DAFA97B9737D56CFFEAC0650F3C1840CC (LogContainer_tBCB89E6BB0DBE4E8EB7FC504CBCDFE546A8EE33D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.LogContainer::.ctor(System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogContainer__ctor_mB2A4C429590DA4592E4AD153DC5569C7E9495499 (LogContainer_tBCB89E6BB0DBE4E8EB7FC504CBCDFE546A8EE33D* __this, RuntimeObject* ___logs0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___logs0;
		LogContainer_set_Logs_m1D4B7C9F7A8B52FB22D79A72407711763A46829D_inline(__this, L_0, NULL);
		return;
	}
}
// System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log> Microsoft.AppCenter.Ingestion.Models.LogContainer::get_Logs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogContainer_get_Logs_m17AEABAEC28233674902AB7D7E02D90E0C1AE565 (LogContainer_tBCB89E6BB0DBE4E8EB7FC504CBCDFE546A8EE33D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CLogsU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.LogContainer::set_Logs(System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogContainer_set_Logs_m1D4B7C9F7A8B52FB22D79A72407711763A46829D (LogContainer_tBCB89E6BB0DBE4E8EB7FC504CBCDFE546A8EE33D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CLogsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLogsU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.LogContainer::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogContainer_Validate_m6029039B01156FCECF4A03F17C002F80A424A79D (LogContainer_tBCB89E6BB0DBE4E8EB7FC504CBCDFE546A8EE33D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t62F133CC563B92F715599B8B90F36E6A4B6EF345_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tD3860B459ED0E7C76CB2D1BA3E3C43F699423099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t70F2A459AFD5F18F18D91680D57FA5945BF87038_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Log_t716EF1A690F81BB19494869650F9161B1B60E74A* V_1 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = LogContainer_get_Logs_m17AEABAEC28233674902AB7D7E02D90E0C1AE565_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* L_1 = (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ValidationException__ctor_m8044FBF3F2AA8CEC98A9337B4650778C806F3CA0(L_1, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FE9AEDF8344786732D21EDE16BA13968BBA865B)), NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LogContainer_Validate_m6029039B01156FCECF4A03F17C002F80A424A79D_RuntimeMethod_var)));
	}

IL_0015:
	{
		RuntimeObject* L_2;
		L_2 = LogContainer_get_Logs_m17AEABAEC28233674902AB7D7E02D90E0C1AE565_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_006f;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = LogContainer_get_Logs_m17AEABAEC28233674902AB7D7E02D90E0C1AE565_inline(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Microsoft.AppCenter.Ingestion.Models.Log>::get_Count() */, ICollection_1_t62F133CC563B92F715599B8B90F36E6A4B6EF345_il2cpp_TypeInfo_var, L_3);
		if ((((int32_t)L_4) >= ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = 1;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_5);
		ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04* L_7 = (ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValidationException_tED5154C5EFA0B4ECBF0B7520E3C9EEE01E608F04_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ValidationException__ctor_m8044FBF3F2AA8CEC98A9337B4650778C806F3CA0(L_7, 3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FE9AEDF8344786732D21EDE16BA13968BBA865B)), L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LogContainer_Validate_m6029039B01156FCECF4A03F17C002F80A424A79D_RuntimeMethod_var)));
	}

IL_003d:
	{
		RuntimeObject* L_8;
		L_8 = LogContainer_get_Logs_m17AEABAEC28233674902AB7D7E02D90E0C1AE565_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Microsoft.AppCenter.Ingestion.Models.Log>::GetEnumerator() */, IEnumerable_1_tD3860B459ED0E7C76CB2D1BA3E3C43F699423099_il2cpp_TypeInfo_var, L_8);
		V_0 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_0;
					if (!L_10)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_11 = V_0;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_006e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005b_1;
			}

IL_004b_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				Log_t716EF1A690F81BB19494869650F9161B1B60E74A* L_13;
				L_13 = InterfaceFuncInvoker0< Log_t716EF1A690F81BB19494869650F9161B1B60E74A* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Microsoft.AppCenter.Ingestion.Models.Log>::get_Current() */, IEnumerator_1_t70F2A459AFD5F18F18D91680D57FA5945BF87038_il2cpp_TypeInfo_var, L_12);
				V_1 = L_13;
				Log_t716EF1A690F81BB19494869650F9161B1B60E74A* L_14 = V_1;
				if (!L_14)
				{
					goto IL_005b_1;
				}
			}
			{
				Log_t716EF1A690F81BB19494869650F9161B1B60E74A* L_15 = V_1;
				NullCheck(L_15);
				VirtualActionInvoker0::Invoke(4 /* System.Void Microsoft.AppCenter.Ingestion.Models.Log::Validate() */, L_15);
			}

IL_005b_1:
			{
				RuntimeObject* L_16 = V_0;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_004b_1;
				}
			}
			{
				goto IL_006f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
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
// System.Void Microsoft.AppCenter.Ingestion.Models.LogWithProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogWithProperties__ctor_m9B9132D00D83D2282F1E7A28FC94A83CF5AF14B9 (LogWithProperties_t26F7CE0BED8320D2D8DA53E3E6F9DF267140CC53* __this, const RuntimeMethod* method) 
{
	{
		Log__ctor_m16C3520A27BD6A7683E73E66EE461E81675E6491(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.LogWithProperties::.ctor(Microsoft.AppCenter.Ingestion.Models.Device,System.Nullable`1<System.DateTime>,System.Nullable`1<System.Guid>,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogWithProperties__ctor_m3E5D45C556CE93F80AEA01ED7D6D1D20C3422892 (LogWithProperties_t26F7CE0BED8320D2D8DA53E3E6F9DF267140CC53* __this, Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* ___device0, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___timestamp1, Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___sid2, String_t* ___userId3, RuntimeObject* ___properties4, const RuntimeMethod* method) 
{
	{
		Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* L_0 = ___device0;
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_1 = ___timestamp1;
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_2 = ___sid2;
		String_t* L_3 = ___userId3;
		Log__ctor_m9D3FC8BB1D9E05127350E0CD33CE73C480C13BB6(__this, L_0, L_1, L_2, L_3, NULL);
		RuntimeObject* L_4 = ___properties4;
		LogWithProperties_set_Properties_mE869B50E3B86676E05C54D3FD90C1FBF13659D06_inline(__this, L_4, NULL);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> Microsoft.AppCenter.Ingestion.Models.LogWithProperties::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogWithProperties_get_Properties_mE3CF771509ED25DB22389BEBA0C682BA04592949 (LogWithProperties_t26F7CE0BED8320D2D8DA53E3E6F9DF267140CC53* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CPropertiesU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.LogWithProperties::set_Properties(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogWithProperties_set_Properties_mE869B50E3B86676E05C54D3FD90C1FBF13659D06 (LogWithProperties_t26F7CE0BED8320D2D8DA53E3E6F9DF267140CC53* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.LogWithProperties::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogWithProperties_Validate_mA739EC9EF3AFF0FD008027EA12F822D04AAA9AA7 (LogWithProperties_t26F7CE0BED8320D2D8DA53E3E6F9DF267140CC53* __this, const RuntimeMethod* method) 
{
	{
		Log_Validate_m06947D5D6A4DEB54521430A714CCBB83C567BA31(__this, NULL);
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
// System.Void Microsoft.AppCenter.Ingestion.Models.Serialization.LogJsonConverter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogJsonConverter__cctor_mF8BC720AD034EF7ED0AF128376256C245A08964D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_0 = (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*)il2cpp_codegen_object_new(JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonSerializerSettings__ctor_mE1C9A90375BA88DF7F6911F1F96AEEC6A98CD22F(L_0, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_1 = L_0;
		NullCheck(L_1);
		JsonSerializerSettings_set_Formatting_mDDA6BC2622543E93A40D384276E263B201198D8F(L_1, 1, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_2 = L_1;
		NullCheck(L_2);
		JsonSerializerSettings_set_DateFormatHandling_mFBA5ACD80A371C9DD914EEB68ECF88838E9F3E3A(L_2, 0, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_3 = L_2;
		NullCheck(L_3);
		JsonSerializerSettings_set_DateTimeZoneHandling_mBB425C59864C5582F45569DAE3E682AC5AAF58D0(L_3, 1, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_4 = L_3;
		NullCheck(L_4);
		JsonSerializerSettings_set_NullValueHandling_mC389679010477A90BA5F811621B460004710CF16(L_4, 1, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_5 = L_4;
		NullCheck(L_5);
		JsonSerializerSettings_set_ReferenceLoopHandling_m813030F79F8DFFFA2C0C63A5C1C4D2348488CC94(L_5, 2, NULL);
		((LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB_StaticFields*)il2cpp_codegen_static_fields_for(LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB_il2cpp_TypeInfo_var))->___SerializationSettings_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB_StaticFields*)il2cpp_codegen_static_fields_for(LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB_il2cpp_TypeInfo_var))->___SerializationSettings_2), (void*)L_5);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Serialization.LogJsonConverter::AddLogType(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogJsonConverter_AddLogType_m5D2F6AD4F1572601D7DB88F58F42150717360F0F (LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB* __this, String_t* ___typeName0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->____jsonConverterLock_1;
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
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_4 = __this->____logTypes_0;
			String_t* L_5 = ___typeName0;
			Type_t* L_6 = ___type1;
			NullCheck(L_4);
			Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38(L_4, L_5, L_6, Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var);
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		return;
	}
}
// System.Boolean Microsoft.AppCenter.Ingestion.Models.Serialization.LogJsonConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LogJsonConverter_CanConvert_m2D4439C0091DC4A04F11BE3E04E6C2B147ED6797 (LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB* __this, Type_t* ___objectType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t716EF1A690F81BB19494869650F9161B1B60E74A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Log_t716EF1A690F81BB19494869650F9161B1B60E74A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		Type_t* L_2 = ___objectType0;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_2);
		return L_3;
	}
}
// System.Object Microsoft.AppCenter.Ingestion.Models.Serialization.LogJsonConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogJsonConverter_ReadJson_m56D5EE09F62BB82CA685F48DDA4B5939C029BBCD (LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, Type_t* ___objectType1, RuntimeObject* ___existingValue2, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* G_B2_0 = NULL;
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_0 = ___reader0;
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_1;
		L_1 = JObject_Load_m6B2F9403F668469EC086A8240E025F207F0AC9C3(L_0, NULL);
		V_1 = L_1;
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_2 = V_1;
		NullCheck(L_2);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_3;
		L_3 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_2, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0019;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_001e;
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_5;
	}

IL_001e:
	{
		V_2 = G_B3_0;
		RuntimeObject* L_6 = __this->____jsonConverterLock_1;
		V_3 = L_6;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					bool L_7 = V_4;
					if (!L_7)
					{
						goto IL_0072;
					}
				}
				{
					RuntimeObject* L_8 = V_3;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_8, NULL);
				}

IL_0072:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_9 = V_3;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_9, (&V_4), NULL);
				String_t* L_10 = V_2;
				if (!L_10)
				{
					goto IL_0042_1;
				}
			}
			{
				Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_11 = __this->____logTypes_0;
				String_t* L_12 = V_2;
				NullCheck(L_11);
				bool L_13;
				L_13 = Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933(L_11, L_12, Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_004d_1;
				}
			}

IL_0042_1:
			{
				JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_14 = (JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA_il2cpp_TypeInfo_var)));
				NullCheck(L_14);
				JsonReaderException__ctor_mAFE5357FE1357F883559902C116B07650D9583B9(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB53164CA4C459CB05FC00B949BA6C9342B3E0E5C)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LogJsonConverter_ReadJson_m56D5EE09F62BB82CA685F48DDA4B5939C029BBCD_RuntimeMethod_var)));
			}

IL_004d_1:
			{
				Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_15 = __this->____logTypes_0;
				String_t* L_16 = V_2;
				NullCheck(L_15);
				Type_t* L_17;
				L_17 = Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9(L_15, L_16, Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9_RuntimeMethod_var);
				V_0 = L_17;
				JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_18 = V_1;
				NullCheck(L_18);
				bool L_19;
				L_19 = JObject_Remove_m42D8594E735983D401F734BFECA380FE92459AD1(L_18, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
				goto IL_0073;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0073:
	{
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_20 = V_1;
		Type_t* L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22;
		L_22 = JToken_ToObject_m6ADC3E3DA56C6D22F90046C7D25B5D2779E54341(L_20, L_21, NULL);
		return L_22;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Serialization.LogJsonConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogJsonConverter_WriteJson_m5CCC7993C8B038E4D147799AD37840DD7E6A8A90 (LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___value1, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObjectAttribute_tF1A0A8D30875A7ECC57B4B2D52C684D61D2038B9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObjectAttribute_tF1A0A8D30875A7ECC57B4B2D52C684D61D2038B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		s_Il2CppMethodInitialized = true;
	}
	JsonObjectAttribute_tF1A0A8D30875A7ECC57B4B2D52C684D61D2038B9* V_0 = NULL;
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___value1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_2;
		L_2 = IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObjectAttribute_tF1A0A8D30875A7ECC57B4B2D52C684D61D2038B9_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_5;
		L_5 = CustomAttributeExtensions_GetCustomAttribute_mCA56DC0C06E64A07614D1EB2D1B3B10152DFF828(L_2, L_4, NULL);
		V_0 = ((JsonObjectAttribute_tF1A0A8D30875A7ECC57B4B2D52C684D61D2038B9*)IsInstSealed((RuntimeObject*)L_5, JsonObjectAttribute_tF1A0A8D30875A7ECC57B4B2D52C684D61D2038B9_il2cpp_TypeInfo_var));
		JsonObjectAttribute_tF1A0A8D30875A7ECC57B4B2D52C684D61D2038B9* L_6 = V_0;
		if (L_6)
		{
			goto IL_002e;
		}
	}
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_7 = (JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		JsonWriterException__ctor_mE9EA5E8870BA0DD45EA0FF6AFC56646E2965D39E(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1F745EAD59BFB381551AEF9C5A2857D973AAF521)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LogJsonConverter_WriteJson_m5CCC7993C8B038E4D147799AD37840DD7E6A8A90_RuntimeMethod_var)));
	}

IL_002e:
	{
		RuntimeObject* L_8 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB_il2cpp_TypeInfo_var);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_9 = ((LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB_StaticFields*)il2cpp_codegen_static_fields_for(LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB_il2cpp_TypeInfo_var))->___SerializationSettings_2;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = JsonConvert_SerializeObject_m39CAEEF10A134A4A5A39B4A515782CD59B267459(L_8, L_9, NULL);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_11;
		L_11 = JObject_Parse_mAFE39B83D08F5D889D34F83E017661FF28E4D0AC(L_10, NULL);
		V_1 = L_11;
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_12 = V_1;
		JsonObjectAttribute_tF1A0A8D30875A7ECC57B4B2D52C684D61D2038B9* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = JsonContainerAttribute_get_Id_m29622512E031394994ECAB5AE0E26444D5EAA733_inline(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_il2cpp_TypeInfo_var);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_15;
		L_15 = JToken_FromObject_m297D1F60B99E6E6BE29904BF0F7334DBEA087E35(L_14, NULL);
		NullCheck(L_12);
		JObject_Add_m2F15295DA90DA00BDD3C94313C0F3DC4DE3C7A39(L_12, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, L_15, NULL);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_16 = ___writer0;
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(85 /* System.Void Newtonsoft.Json.JsonWriter::WriteRawValue(System.String) */, L_16, L_18);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Serialization.LogJsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogJsonConverter__ctor_m7673BA08A58610C6CDAF0D9FD804AC2677270517 (LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_0 = (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*)il2cpp_codegen_object_new(Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428(L_0, Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var);
		__this->____logTypes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____logTypes_0), (void*)L_0);
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		__this->____jsonConverterLock_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jsonConverterLock_1), (void*)L_1);
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Void Microsoft.AppCenter.Ingestion.Models.Serialization.LogSerializer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogSerializer__cctor_mCE51CC82399C71208672219471ECA1117DA084BD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tBA46B0B91EBAF6B08DED48AF18B2916FC06B7FC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB* L_0 = (LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB*)il2cpp_codegen_object_new(LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogJsonConverter__ctor_m7673BA08A58610C6CDAF0D9FD804AC2677270517(L_0, NULL);
		((LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_StaticFields*)il2cpp_codegen_static_fields_for(LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var))->___Converter_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_StaticFields*)il2cpp_codegen_static_fields_for(LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var))->___Converter_1), (void*)L_0);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_1 = (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*)il2cpp_codegen_object_new(JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonSerializerSettings__ctor_mE1C9A90375BA88DF7F6911F1F96AEEC6A98CD22F(L_1, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_2 = L_1;
		NullCheck(L_2);
		JsonSerializerSettings_set_Formatting_mDDA6BC2622543E93A40D384276E263B201198D8F(L_2, 1, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_3 = L_2;
		NullCheck(L_3);
		JsonSerializerSettings_set_DateFormatHandling_mFBA5ACD80A371C9DD914EEB68ECF88838E9F3E3A(L_3, 0, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_4 = L_3;
		NullCheck(L_4);
		JsonSerializerSettings_set_DateTimeZoneHandling_mBB425C59864C5582F45569DAE3E682AC5AAF58D0(L_4, 1, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_5 = L_4;
		NullCheck(L_5);
		JsonSerializerSettings_set_NullValueHandling_mC389679010477A90BA5F811621B460004710CF16(L_5, 1, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_6 = L_5;
		NullCheck(L_6);
		JsonSerializerSettings_set_ReferenceLoopHandling_m813030F79F8DFFFA2C0C63A5C1C4D2348488CC94(L_6, 2, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_7 = L_6;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = JsonSerializerSettings_get_Converters_mB7EE43E74FA48980B6C0976D7A2160B2174C8FCA_inline(L_7, NULL);
		LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB* L_9 = ((LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_StaticFields*)il2cpp_codegen_static_fields_for(LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var))->___Converter_1;
		NullCheck(L_8);
		InterfaceActionInvoker1< JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Newtonsoft.Json.JsonConverter>::Add(T) */, ICollection_1_tBA46B0B91EBAF6B08DED48AF18B2916FC06B7FC6_il2cpp_TypeInfo_var, L_8, L_9);
		((LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_StaticFields*)il2cpp_codegen_static_fields_for(LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var))->___SerializationSettings_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_StaticFields*)il2cpp_codegen_static_fields_for(LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var))->___SerializationSettings_0), (void*)L_7);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Models.Serialization.LogSerializer::AddLogType(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogSerializer_AddLogType_m534C8EB59FFFCC67625424F9E654020D80C990AF (String_t* ___typeName0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var);
		LogJsonConverter_t4853F344F6F8384AE6818CACCBD16BA7385C32FB* L_0 = ((LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_StaticFields*)il2cpp_codegen_static_fields_for(LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var))->___Converter_1;
		String_t* L_1 = ___typeName0;
		Type_t* L_2 = ___type1;
		NullCheck(L_0);
		LogJsonConverter_AddLogType_m5D2F6AD4F1572601D7DB88F58F42150717360F0F(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Serialization.LogSerializer::Serialize(Microsoft.AppCenter.Ingestion.Models.LogContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogSerializer_Serialize_m50968E859AE9AB396D58008FD373202287642DAA (LogContainer_tBCB89E6BB0DBE4E8EB7FC504CBCDFE546A8EE33D* ___logContainer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogContainer_tBCB89E6BB0DBE4E8EB7FC504CBCDFE546A8EE33D* L_0 = ___logContainer0;
		il2cpp_codegen_runtime_class_init_inline(LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_1 = ((LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_StaticFields*)il2cpp_codegen_static_fields_for(LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var))->___SerializationSettings_0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonConvert_SerializeObject_m39CAEEF10A134A4A5A39B4A515782CD59B267459(L_0, L_1, NULL);
		return L_2;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Models.Serialization.LogSerializer::Serialize(Microsoft.AppCenter.Ingestion.Models.Log)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogSerializer_Serialize_m82347E6699D25EEF8150D546D34686B303C41905 (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* ___log0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Log_t716EF1A690F81BB19494869650F9161B1B60E74A* L_0 = ___log0;
		il2cpp_codegen_runtime_class_init_inline(LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_1 = ((LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_StaticFields*)il2cpp_codegen_static_fields_for(LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var))->___SerializationSettings_0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonConvert_SerializeObject_m39CAEEF10A134A4A5A39B4A515782CD59B267459(L_0, L_1, NULL);
		return L_2;
	}
}
// Microsoft.AppCenter.Ingestion.Models.Log Microsoft.AppCenter.Ingestion.Models.Serialization.LogSerializer::DeserializeLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Log_t716EF1A690F81BB19494869650F9161B1B60E74A* LogSerializer_DeserializeLog_m7FAC8D20CA20E17E9B7AA19AB9125DE1F9ED3A7D (String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisLog_t716EF1A690F81BB19494869650F9161B1B60E74A_m12E2CC448EFF0E44EB4870855A9538BB9C78FE33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___json0;
		il2cpp_codegen_runtime_class_init_inline(LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_1 = ((LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_StaticFields*)il2cpp_codegen_static_fields_for(LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var))->___SerializationSettings_0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		Log_t716EF1A690F81BB19494869650F9161B1B60E74A* L_2;
		L_2 = JsonConvert_DeserializeObject_TisLog_t716EF1A690F81BB19494869650F9161B1B60E74A_m12E2CC448EFF0E44EB4870855A9538BB9C78FE33(L_0, L_1, JsonConvert_DeserializeObject_TisLog_t716EF1A690F81BB19494869650F9161B1B60E74A_m12E2CC448EFF0E44EB4870855A9538BB9C78FE33_RuntimeMethod_var);
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
// Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter/IsNetworkAvailableDelegate Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter::get_IsNetworkAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* NetworkStateAdapter_get_IsNetworkAvailable_mA8752A57DD85AE477D3D2ED6682A9F4E29280DDE (NetworkStateAdapter_t162CDFD808FB548577B4DECD58028CAC271CAD8B* __this, const RuntimeMethod* method) 
{
	{
		IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* L_0 = __this->___U3CIsNetworkAvailableU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter::set_IsNetworkAvailable(Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter/IsNetworkAvailableDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStateAdapter_set_IsNetworkAvailable_mE9612DCE1CA007E3557535EE65D53147A19705EA (NetworkStateAdapter_t162CDFD808FB548577B4DECD58028CAC271CAD8B* __this, IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* ___value0, const RuntimeMethod* method) 
{
	{
		IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* L_0 = ___value0;
		__this->___U3CIsNetworkAvailableU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIsNetworkAvailableU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStateAdapter__ctor_mC9AD6C602C35B4C506EF793D4D0D30E4EEF12230 (NetworkStateAdapter_t162CDFD808FB548577B4DECD58028CAC271CAD8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE58B48BE6085E8F1F25AE070DF5BA7FD6857B90B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkInformation_add_NetworkStatusChanged_m4EE1DF896ACE6D54B090348D73623E4C29ADF644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkInformation_remove_NetworkStatusChanged_m340D00C6A982247F5C2A55B05B8767F7B40378D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStateAdapter_CheckNetworkAvailable_m62EBA984AD02CE35C41977FE9AF2E9DA337E5343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStateAdapter_U3C_ctorU3Eb__5_0_m0CE4B3E669FFF768472BAA5AF805BBBE56EEA109_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStatusChangedEventHandler_t6F8926B863301A8B2873AF7FE3968C729B1FEB4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeMarshal_AddEventHandler_TisNetworkStatusChangedEventHandler_t6F8926B863301A8B2873AF7FE3968C729B1FEB4A_m7237298FED5FBBD2CC0EE67DA82F36892B7E0D8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeMarshal_t2E440B8ECBDEA6D789E5D53780B0D5446578C9D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* L_0 = (IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094*)il2cpp_codegen_object_new(IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		IsNetworkAvailableDelegate__ctor_m1AD46846E1336A15FD0D847917F8E6E3DE110745(L_0, NULL, (intptr_t)((void*)NetworkStateAdapter_CheckNetworkAvailable_m62EBA984AD02CE35C41977FE9AF2E9DA337E5343_RuntimeMethod_var), NULL);
		__this->___U3CIsNetworkAvailableU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIsNetworkAvailableU3Ek__BackingField_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Func_2_tE58B48BE6085E8F1F25AE070DF5BA7FD6857B90B* L_1 = (Func_2_tE58B48BE6085E8F1F25AE070DF5BA7FD6857B90B*)il2cpp_codegen_object_new(Func_2_tE58B48BE6085E8F1F25AE070DF5BA7FD6857B90B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_2__ctor_m4E68B702E00F35BD381DD1FEC330421546B0C525(L_1, NULL, (intptr_t)((void*)NetworkInformation_add_NetworkStatusChanged_m4EE1DF896ACE6D54B090348D73623E4C29ADF644_RuntimeMethod_var), NULL);
		Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* L_2 = (Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722*)il2cpp_codegen_object_new(Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mE59785557489C8127A4B1AF2A7281F701BA8152B(L_2, NULL, (intptr_t)((void*)NetworkInformation_remove_NetworkStatusChanged_m340D00C6A982247F5C2A55B05B8767F7B40378D0_RuntimeMethod_var), NULL);
		NetworkStatusChangedEventHandler_t6F8926B863301A8B2873AF7FE3968C729B1FEB4A* L_3 = (NetworkStatusChangedEventHandler_t6F8926B863301A8B2873AF7FE3968C729B1FEB4A*)il2cpp_codegen_object_new(NetworkStatusChangedEventHandler_t6F8926B863301A8B2873AF7FE3968C729B1FEB4A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		NetworkStatusChangedEventHandler__ctor_mD463CFA0E836E3CC8526994A5B448F19A1FCCAE2(L_3, __this, (intptr_t)((void*)NetworkStateAdapter_U3C_ctorU3Eb__5_0_m0CE4B3E669FFF768472BAA5AF805BBBE56EEA109_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(WindowsRuntimeMarshal_t2E440B8ECBDEA6D789E5D53780B0D5446578C9D0_il2cpp_TypeInfo_var);
		WindowsRuntimeMarshal_AddEventHandler_TisNetworkStatusChangedEventHandler_t6F8926B863301A8B2873AF7FE3968C729B1FEB4A_m7237298FED5FBBD2CC0EE67DA82F36892B7E0D8C(L_1, L_2, L_3, WindowsRuntimeMarshal_AddEventHandler_TisNetworkStatusChangedEventHandler_t6F8926B863301A8B2873AF7FE3968C729B1FEB4A_m7237298FED5FBBD2CC0EE67DA82F36892B7E0D8C_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter::CheckNetworkAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkStateAdapter_CheckNetworkAvailable_m62EBA984AD02CE35C41977FE9AF2E9DA337E5343 (const RuntimeMethod* method) 
{
	ConnectionProfile_t7D38F137CC7E2E3288194F8D9DEF267E0E72EE07* G_B2_0 = NULL;
	ConnectionProfile_t7D38F137CC7E2E3288194F8D9DEF267E0E72EE07* G_B1_0 = NULL;
	{
		ConnectionProfile_t7D38F137CC7E2E3288194F8D9DEF267E0E72EE07* L_0;
		L_0 = NetworkInformation_GetInternetConnectionProfile_mF585D32BF942B4F5B9C916827F3B6651556F6B58(NULL);
		ConnectionProfile_t7D38F137CC7E2E3288194F8D9DEF267E0E72EE07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = ConnectionProfile_GetNetworkConnectivityLevel_m8CF14BDBA2650D6D07957B8EF666F0056ECC0577(G_B2_0, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)3))? 1 : 0);
	}
}
// System.Boolean Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkStateAdapter_get_IsConnected_m8BD5AF4743ABD6609C94F6679FE07C98FA5DA0F9 (NetworkStateAdapter_t162CDFD808FB548577B4DECD58028CAC271CAD8B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* L_0;
		L_0 = NetworkStateAdapter_get_IsNetworkAvailable_mA8752A57DD85AE477D3D2ED6682A9F4E29280DDE_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = IsNetworkAvailableDelegate_Invoke_m0D79327FF89CC5944048CFC5879572B060A33140_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_0023;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var)));
		String_t* L_2;
		L_2 = AppCenterLog_get_LogTag_m4A23B83F7546FD8257D50CB94AA58159AD410A74_inline(NULL);
		Exception_t* L_3 = V_1;
		AppCenterLog_Error_m49FE660A2ECC4A27180A20EAE2B9EF297B14CB9A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9BC5448F801E76297E3357031AF715633F11FAE)), L_3, NULL);
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0023;
	}// end catch (depth: 1)

IL_0023:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter::add_NetworkStatusChanged(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStateAdapter_add_NetworkStatusChanged_m2C29845378D9D820270DDCF599823FC4E9B62531 (NetworkStateAdapter_t162CDFD808FB548577B4DECD58028CAC271CAD8B* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
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
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___NetworkStatusChanged_1;
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
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___NetworkStatusChanged_1);
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
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter::remove_NetworkStatusChanged(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStateAdapter_remove_NetworkStatusChanged_mDA66D539EEB67FC0B7DDCEC7A85A6190C986883E (NetworkStateAdapter_t162CDFD808FB548577B4DECD58028CAC271CAD8B* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
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
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___NetworkStatusChanged_1;
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
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___NetworkStatusChanged_1);
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
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter::<.ctor>b__5_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStateAdapter_U3C_ctorU3Eb__5_0_m0CE4B3E669FFF768472BAA5AF805BBBE56EEA109 (NetworkStateAdapter_t162CDFD808FB548577B4DECD58028CAC271CAD8B* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___NetworkStatusChanged_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
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
		RuntimeObject* L_2 = ___sender0;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_3 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, L_2, L_3, NULL);
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
bool IsNetworkAvailableDelegate_Invoke_m0D79327FF89CC5944048CFC5879572B060A33140_Multicast(IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* currentDelegate = reinterpret_cast<IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool IsNetworkAvailableDelegate_Invoke_m0D79327FF89CC5944048CFC5879572B060A33140_Open(IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* __this, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
bool IsNetworkAvailableDelegate_Invoke_m0D79327FF89CC5944048CFC5879572B060A33140_OpenStaticInvoker(IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< bool >::Invoke(__this->___method_ptr_0, method, NULL);
}
bool IsNetworkAvailableDelegate_Invoke_m0D79327FF89CC5944048CFC5879572B060A33140_ClosedStaticInvoker(IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094 (IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* __this, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return static_cast<bool>(returnValue);
}
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter/IsNetworkAvailableDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsNetworkAvailableDelegate__ctor_m1AD46846E1336A15FD0D847917F8E6E3DE110745 (IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&IsNetworkAvailableDelegate_Invoke_m0D79327FF89CC5944048CFC5879572B060A33140_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&IsNetworkAvailableDelegate_Invoke_m0D79327FF89CC5944048CFC5879572B060A33140_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IsNetworkAvailableDelegate_Invoke_m0D79327FF89CC5944048CFC5879572B060A33140_Open;
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
	__this->___extra_arg_5 = (intptr_t)&IsNetworkAvailableDelegate_Invoke_m0D79327FF89CC5944048CFC5879572B060A33140_Multicast;
}
// System.Boolean Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter/IsNetworkAvailableDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IsNetworkAvailableDelegate_Invoke_m0D79327FF89CC5944048CFC5879572B060A33140 (IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter/IsNetworkAvailableDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IsNetworkAvailableDelegate_BeginInvoke_m2B6844A2B06D12271CE0606DD895F8C6D0F53D94 (IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Boolean Microsoft.AppCenter.Ingestion.Http.NetworkStateAdapter/IsNetworkAvailableDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IsNetworkAvailableDelegate_EndInvoke_mCEAF92F99ED463EB436092B0D3497EFC792CAEDB (IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.String Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpIngestionException_get_Method_m29E81647BC6905032DD6A1A436B0C338C75B2213 (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMethodU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::set_Method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpIngestionException_set_Method_m6B66DB19362950E74BEDEAF0687500E136BF9015 (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CMethodU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
// System.Uri Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::get_RequestUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* HttpIngestionException_get_RequestUri_mF3CC3CDA7245908A9C1F5ECE3C938AB75AD1CAE4 (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, const RuntimeMethod* method) 
{
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = __this->___U3CRequestUriU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::set_RequestUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpIngestionException_set_RequestUri_m82521B9D0A00DA0300DBF991D6C9C32A7559475E (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) 
{
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___value0;
		__this->___U3CRequestUriU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRequestUriU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::get_RequestContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpIngestionException_get_RequestContent_mD363645BEDB0B33E62D53DA00C6DD577C9DF785B (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CRequestContentU3Ek__BackingField_21;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::set_RequestContent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpIngestionException_set_RequestContent_mBA06BA201ECCB28A5EB181B46DD1C6A1CF5F8325 (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CRequestContentU3Ek__BackingField_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRequestContentU3Ek__BackingField_21), (void*)L_0);
		return;
	}
}
// System.Int32 Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::get_StatusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HttpIngestionException_get_StatusCode_m30C6870FEC2EDA6277086CC35EA448EFD6141087 (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStatusCodeU3Ek__BackingField_22;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::set_StatusCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpIngestionException_set_StatusCode_m6F638292B39FC49BF12F0F4687E5C5F9EB366BFA (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CStatusCodeU3Ek__BackingField_22 = L_0;
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::get_ResponseContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpIngestionException_get_ResponseContent_m87A4A921FAD008F828228511F3570713B06586CD (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CResponseContentU3Ek__BackingField_23;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::set_ResponseContent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpIngestionException_set_ResponseContent_m0104916227934F9C78AE4DBF49AA056A47DC0D8F (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CResponseContentU3Ek__BackingField_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResponseContentU3Ek__BackingField_23), (void*)L_0);
		return;
	}
}
// System.Boolean Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::get_IsRecoverable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpIngestionException_get_IsRecoverable_m767BDF918D8DDFBEC84C5AEB533419B4C4FDC743 (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = HttpIngestionException_get_StatusCode_m30C6870FEC2EDA6277086CC35EA448EFD6141087_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)500))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = V_0;
		return (bool)((((int32_t)L_2) == ((int32_t)((int32_t)408)))? 1 : 0);
	}

IL_0018:
	{
		return (bool)1;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpIngestionException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpIngestionException__ctor_m6011F92CA77B8BD836F231C261F91B8461A009DE (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		IngestionException__ctor_m58552E494FEF6F3EE6517BC36023F9CE308A8E69(__this, L_0, NULL);
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
// Microsoft.AppCenter.Ingestion.IIngestion Microsoft.AppCenter.Ingestion.Http.IngestionDecorator::get_DecoratedApi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IngestionDecorator_get_DecoratedApi_m75F50A4CE3791E162C2CA56FD99AB50F47AD3CF5 (IngestionDecorator_tFB755D94DE686939DD91160456B8D33547F61857* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CDecoratedApiU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.IngestionDecorator::.ctor(Microsoft.AppCenter.Ingestion.IIngestion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngestionDecorator__ctor_m5A7B9CFCC5344C2843529028038860F47B140690 (IngestionDecorator_tFB755D94DE686939DD91160456B8D33547F61857* __this, RuntimeObject* ___decoratedApi0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___decoratedApi0;
		__this->___U3CDecoratedApiU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDecoratedApiU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.IngestionDecorator::SetLogUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngestionDecorator_SetLogUrl_m7096046D9C01F3A7E6E0DB03174A0CBD693E233C (IngestionDecorator_tFB755D94DE686939DD91160456B8D33547F61857* __this, String_t* ___logUrl0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIngestion_tA3178197A22BB5839EE548F17E2243F900DE902C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = IngestionDecorator_get_DecoratedApi_m75F50A4CE3791E162C2CA56FD99AB50F47AD3CF5_inline(__this, NULL);
		String_t* L_1 = ___logUrl0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void Microsoft.AppCenter.Ingestion.IIngestion::SetLogUrl(System.String) */, IIngestion_tA3178197A22BB5839EE548F17E2243F900DE902C_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// Microsoft.AppCenter.Ingestion.IServiceCall Microsoft.AppCenter.Ingestion.Http.IngestionDecorator::Call(System.String,System.Guid,System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IngestionDecorator_Call_m62056680EA499AD35F210AE82FA8FF94055DFED2 (IngestionDecorator_tFB755D94DE686939DD91160456B8D33547F61857* __this, String_t* ___appSecret0, Guid_t ___installId1, RuntimeObject* ___logs2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIngestion_tA3178197A22BB5839EE548F17E2243F900DE902C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = IngestionDecorator_get_DecoratedApi_m75F50A4CE3791E162C2CA56FD99AB50F47AD3CF5_inline(__this, NULL);
		String_t* L_1 = ___appSecret0;
		Guid_t L_2 = ___installId1;
		RuntimeObject* L_3 = ___logs2;
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, Guid_t, RuntimeObject* >::Invoke(2 /* Microsoft.AppCenter.Ingestion.IServiceCall Microsoft.AppCenter.Ingestion.IIngestion::Call(System.String,System.Guid,System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log>) */, IIngestion_tA3178197A22BB5839EE548F17E2243F900DE902C_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.IngestionDecorator::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngestionDecorator_Close_m094AC924905E4170E1620A006228184B7572D83A (IngestionDecorator_tFB755D94DE686939DD91160456B8D33547F61857* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIngestion_tA3178197A22BB5839EE548F17E2243F900DE902C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = IngestionDecorator_get_DecoratedApi_m75F50A4CE3791E162C2CA56FD99AB50F47AD3CF5_inline(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Microsoft.AppCenter.Ingestion.IIngestion::Close() */, IIngestion_tA3178197A22BB5839EE548F17E2243F900DE902C_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.IngestionDecorator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngestionDecorator_Dispose_mC1F90990FB8FCBED2202AF7D60F7207D51483FAE (IngestionDecorator_tFB755D94DE686939DD91160456B8D33547F61857* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = IngestionDecorator_get_DecoratedApi_m75F50A4CE3791E162C2CA56FD99AB50F47AD3CF5_inline(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Boolean Microsoft.AppCenter.Ingestion.Http.IngestionDecorator::get_IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IngestionDecorator_get_IsEnabled_mCDF665A104A6175B9E8859AA1BBC560AEE6AAB87 (IngestionDecorator_tFB755D94DE686939DD91160456B8D33547F61857* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIngestion_tA3178197A22BB5839EE548F17E2243F900DE902C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = IngestionDecorator_get_DecoratedApi_m75F50A4CE3791E162C2CA56FD99AB50F47AD3CF5_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Microsoft.AppCenter.Ingestion.IIngestion::get_IsEnabled() */, IIngestion_tA3178197A22BB5839EE548F17E2243F900DE902C_il2cpp_TypeInfo_var, L_0);
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
// System.Boolean Microsoft.AppCenter.Ingestion.Http.NetworkIngestionException::get_IsRecoverable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkIngestionException_get_IsRecoverable_m578636B522F258CC014C9C82A0D3529D20DD38B0 (NetworkIngestionException_t5FF011790FE4837200242574A13EC51BE32F5DD8* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkIngestionException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkIngestionException__ctor_m46BA80EB21F1C8D2413BB74BA5597280E2880C4F (NetworkIngestionException_t5FF011790FE4837200242574A13EC51BE32F5DD8* __this, const RuntimeMethod* method) 
{
	{
		IngestionException__ctor_m00B6711624E97269411AE459B2744C7389D5D425(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkIngestionException::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkIngestionException__ctor_m002DF22ABD280FB225F2D259594893825A3C6CE3 (NetworkIngestionException_t5FF011790FE4837200242574A13EC51BE32F5DD8* __this, Exception_t* ___innerException0, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = ___innerException0;
		IngestionException__ctor_m840D302FAF3D1245700A2B440E66A3426B50780C(__this, L_0, NULL);
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
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpNetworkAdapter__ctor_mA02F9A1103F7B0DB60BD7C37185255650C2F0EDA (HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->____lockObject_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lockObject_2), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter::.ctor(System.Net.Http.HttpClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpNetworkAdapter__ctor_mB01AF872E4E31D7D5971D4B1CD71A3215BD07131 (HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* __this, HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ___httpClient0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->____lockObject_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lockObject_2), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_1 = ___httpClient0;
		__this->____httpClient_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____httpClient_1), (void*)L_1);
		return;
	}
}
// System.Net.Http.HttpClient Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter::get_HttpClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* HttpNetworkAdapter_get_HttpClient_mCBFB6D82A60BE989B4325286BD31DB004F95AAD6 (HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* V_2 = NULL;
	HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* G_B5_0 = NULL;
	HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* G_B4_0 = NULL;
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* G_B6_0 = NULL;
	HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* G_B6_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____lockObject_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0057;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0057:
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
				HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_4 = __this->____httpClient_1;
				if (!L_4)
				{
					goto IL_0022_1;
				}
			}
			{
				HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_5 = __this->____httpClient_1;
				V_2 = L_5;
				goto IL_0058;
			}

IL_0022_1:
			{
				il2cpp_codegen_runtime_class_init_inline(HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE_il2cpp_TypeInfo_var);
				Func_1_t6AF25BB0B2C5568E8B6D37356D94C2B0A4B8D757* L_6 = ((HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE_StaticFields*)il2cpp_codegen_static_fields_for(HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE_il2cpp_TypeInfo_var))->___HttpMessageHandlerOverride_3;
				G_B4_0 = __this;
				if (L_6)
				{
					G_B5_0 = __this;
					goto IL_0031_1;
				}
			}
			{
				HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_7 = (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42*)il2cpp_codegen_object_new(HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				HttpClient__ctor_mD64C48138600CF1398E7BB24BF33EB582ECB1AFD(L_7, NULL);
				G_B6_0 = L_7;
				G_B6_1 = G_B4_0;
				goto IL_0040_1;
			}

IL_0031_1:
			{
				il2cpp_codegen_runtime_class_init_inline(HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE_il2cpp_TypeInfo_var);
				Func_1_t6AF25BB0B2C5568E8B6D37356D94C2B0A4B8D757* L_8 = ((HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE_StaticFields*)il2cpp_codegen_static_fields_for(HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE_il2cpp_TypeInfo_var))->___HttpMessageHandlerOverride_3;
				NullCheck(L_8);
				HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17* L_9;
				L_9 = Func_1_Invoke_m03A0DD87958454CDAEE8EA6CC048933809344B83_inline(L_8, NULL);
				HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_10 = (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42*)il2cpp_codegen_object_new(HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				HttpClient__ctor_m8576B495665CC46BCF2D212052733B50C2F7B597(L_10, L_9, NULL);
				G_B6_0 = L_10;
				G_B6_1 = G_B5_0;
			}

IL_0040_1:
			{
				NullCheck(G_B6_1);
				G_B6_1->____httpClient_1 = G_B6_0;
				Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->____httpClient_1), (void*)G_B6_0);
				HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_11 = __this->____httpClient_1;
				V_2 = L_11;
				goto IL_0058;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0058:
	{
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_12 = V_2;
		return L_12;
	}
}
// System.Threading.Tasks.Task`1<System.String> Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter::SendAsync(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* HttpNetworkAdapter_SendAsync_mACD3218C805A6747A1356190EF8E09B057E49AB4 (HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* __this, String_t* ___uri0, String_t* ___method1, RuntimeObject* ___headers2, String_t* ___jsonContent3, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m4CB15D06286C7AA0BA8318800D23A9D574CBE0E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4_mF933D9071DD1DFC3C8873330EAC341C8BE384CDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m4CB15D06286C7AA0BA8318800D23A9D574CBE0E8(AsyncTaskMethodBuilder_1_Create_m4CB15D06286C7AA0BA8318800D23A9D574CBE0E8_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		String_t* L_1 = ___uri0;
		(&V_0)->___uri_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___uri_3), (void*)L_1);
		String_t* L_2 = ___method1;
		(&V_0)->___method_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___method_4), (void*)L_2);
		RuntimeObject* L_3 = ___headers2;
		(&V_0)->___headers_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___headers_5), (void*)L_3);
		String_t* L_4 = ___jsonContent3;
		(&V_0)->___jsonContent_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___jsonContent_6), (void*)L_4);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = ___cancellationToken4;
		(&V_0)->___cancellationToken_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_7))->____source_0), (void*)NULL);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4_mF933D9071DD1DFC3C8873330EAC341C8BE384CDC(L_6, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4_mF933D9071DD1DFC3C8873330EAC341C8BE384CDC_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_7 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_8;
		L_8 = AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E(L_7, AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var);
		return L_8;
	}
}
// System.Net.Http.HttpRequestMessage Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter::CreateRequest(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* HttpNetworkAdapter_CreateRequest_m34135188FBAB2E096A5C6324D28D7A70EF8FF9EF (HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* __this, String_t* ___uri0, String_t* ___method1, RuntimeObject* ___headers2, String_t* ___jsonContent3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91810B39666B5620FFC9866BF5F431B1CBE0DFD4);
		s_Il2CppMethodInitialized = true;
	}
	HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_0 = (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2*)il2cpp_codegen_object_new(HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HttpRequestMessage__ctor_m672C314A2324A62C47D4AB1F65C88EC1F0781FC6(L_0, NULL);
		HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_1 = L_0;
		String_t* L_2 = ___method1;
		HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* L_3 = (HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E*)il2cpp_codegen_object_new(HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HttpMethod__ctor_m0D28A3D943866C642FC93FDC7F56B25A928B3A4E(L_3, L_2, NULL);
		NullCheck(L_1);
		HttpRequestMessage_set_Method_m61AD45CEAC59C0EE631A33AC8E888AFEB70D3541(L_1, L_3, NULL);
		HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_4 = L_1;
		String_t* L_5 = ___uri0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_6 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_6, L_5, NULL);
		NullCheck(L_4);
		HttpRequestMessage_set_RequestUri_m8F8BF17F6A9BEA510759DB3148563ABB8E7FE9CB(L_4, L_6, NULL);
		V_0 = L_4;
		RuntimeObject* L_7 = ___headers2;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_7);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_1;
					if (!L_9)
					{
						goto IL_005a;
					}
				}
				{
					RuntimeObject* L_10 = V_1;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_005a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0047_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_12;
				L_12 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_11);
				V_2 = L_12;
				HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_13 = V_0;
				NullCheck(L_13);
				HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7* L_14;
				L_14 = HttpRequestMessage_get_Headers_m96F9758D4AA6C78EDFAFEB222FA05767054EE78C(L_13, NULL);
				String_t* L_15;
				L_15 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_16;
				L_16 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_14);
				HttpHeaders_Add_m9F704C4C77ED5BE4FAABEA3138CCF1D3D6732DA8(L_14, L_15, L_16, NULL);
			}

IL_0047_1:
			{
				RuntimeObject* L_17 = V_1;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_005b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_19 = V_0;
		String_t* L_20 = ___jsonContent3;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_21;
		L_21 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9* L_22 = (StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9*)il2cpp_codegen_object_new(StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		StringContent__ctor_m087EE223A359FCC20C728E0B171F4797243CB53B(L_22, L_20, L_21, NULL);
		NullCheck(L_19);
		HttpRequestMessage_set_Content_m522F62E997874DA5A3F77BD4DD7A1C7CA2629DC9_inline(L_19, L_22, NULL);
		HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_23 = V_0;
		NullCheck(L_23);
		HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_24;
		L_24 = HttpRequestMessage_get_Content_m263E0A8B60C6D617144203073CA853A473FA860E_inline(L_23, NULL);
		NullCheck(L_24);
		HttpContentHeaders_t4E2506F081BD682D0538A5CB38ED1D836C2E8C4F* L_25;
		L_25 = HttpContent_get_Headers_m6183562F724ABF57805E94A2AB0D72BF44659DCD(L_24, NULL);
		MediaTypeHeaderValue_t9B713F37D05A4B23FFAFEAE8B988ED7BC46BCEAF* L_26;
		L_26 = MediaTypeHeaderValue_Parse_m296D4860C6E4E2AF3927F6AAC53B87390B5049C5(_stringLiteral91810B39666B5620FFC9866BF5F431B1CBE0DFD4, NULL);
		NullCheck(L_25);
		HttpContentHeaders_set_ContentType_m3990A9596A873AE4AFCE1FEB2FA744136B48D779(L_25, L_26, NULL);
		HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_27 = V_0;
		return L_27;
	}
}
// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter::SendRequestAsync(System.Net.Http.HttpRequestMessage,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* HttpNetworkAdapter_SendRequestAsync_mAE0D3CF9F92A72DCE67BE48426D9EEFCF2F3CDD4 (HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* __this, HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* ___request0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m405223B330A9C7CAEE30F69ED25942A300B8AD8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3_mF130BA2C0B49C95C083ECAD3EEF252256616EC3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m008E78C54F6D07930908411CC2D34FA037CE13F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m405223B330A9C7CAEE30F69ED25942A300B8AD8A(AsyncTaskMethodBuilder_1_Create_m405223B330A9C7CAEE30F69ED25942A300B8AD8A_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_1 = ___request0;
		(&V_0)->___request_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___request_3), (void*)L_1);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___cancellationToken1;
		(&V_0)->___cancellationToken_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_4))->____source_0), (void*)NULL);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3_mF130BA2C0B49C95C083ECAD3EEF252256616EC3B(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3_mF130BA2C0B49C95C083ECAD3EEF252256616EC3B_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_m008E78C54F6D07930908411CC2D34FA037CE13F3(L_4, AsyncTaskMethodBuilder_1_get_Task_m008E78C54F6D07930908411CC2D34FA037CE13F3_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpNetworkAdapter_Dispose_mAA6616BAFC092DEDBF995BD7C8354755BCAC592F (HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* G_B3_0 = NULL;
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* G_B2_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____lockObject_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0034;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0034:
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
				HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_4 = __this->____httpClient_1;
				HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_5 = L_4;
				G_B2_0 = L_5;
				if (L_5)
				{
					G_B3_0 = L_5;
					goto IL_001d_1;
				}
			}
			{
				goto IL_0022_1;
			}

IL_001d_1:
			{
				NullCheck(G_B3_0);
				HttpMessageInvoker_Dispose_m77B4582C70919C6B31CC3805EDE7A9866574BC41(G_B3_0, NULL);
			}

IL_0022_1:
			{
				__this->____httpClient_1 = (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____httpClient_1), (void*)(HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42*)NULL);
				goto IL_0035;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpNetworkAdapter__cctor_m108CBFCAE1CCB23FC9E49A699B02651D3F3FCCF7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tAF29AD7806E5FAD06A2D21AFD04BA59150D73C35____4A0329F6BC6CFCA9A8AB50642D4194DAC746722AB550F113AEC760677EBFD217_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAF29AD7806E5FAD06A2D21AFD04BA59150D73C35____4A0329F6BC6CFCA9A8AB50642D4194DAC746722AB550F113AEC760677EBFD217_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE_StaticFields*)il2cpp_codegen_static_fields_for(HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE_il2cpp_TypeInfo_var))->___NetworkUnavailableCodes_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE_StaticFields*)il2cpp_codegen_static_fields_for(HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE_il2cpp_TypeInfo_var))->___NetworkUnavailableCodes_4), (void*)L_1);
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
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__9_MoveNext_m2A966297E93944E4427565DB81CC1BAC79075C58 (U3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4_m41AFA5F7BC93A89453C37582BB7D8B74C3296C98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4_m08E36D1E5E2C1BCE4F2D497E3BF9CF862A39F2CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisString_t_mFDD6B0338B3884E99F737C0A244064FB65FA15ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpStatusCode_t530B6899270B44ED560C3872DB5F9698FB7D7374_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07FA768FE437DE189178EAA96E5C1DCB97E27D58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31E7183DF529BA540D91817B38D9AA4B46E9D9B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68955AB338790E58AA1D834638DFCE824101EAC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7231943EFA58E6A594D1D4826D9124C7F85E14CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* V_1 = NULL;
	String_t* V_2 = NULL;
	HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* V_3 = NULL;
	ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD V_5;
	memset((&V_5), 0, sizeof(V_5));
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 V_10;
	memset((&V_10), 0, sizeof(V_10));
	ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t* V_12 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)1))))
			{
				goto IL_0036_1;
			}
		}
		{
			HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* L_3 = V_1;
			String_t* L_4 = __this->___uri_3;
			String_t* L_5 = __this->___method_4;
			RuntimeObject* L_6 = __this->___headers_5;
			String_t* L_7 = __this->___jsonContent_6;
			NullCheck(L_3);
			HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_8;
			L_8 = HttpNetworkAdapter_CreateRequest_m34135188FBAB2E096A5C6324D28D7A70EF8FF9EF(L_3, L_4, L_5, L_6, L_7, NULL);
			__this->___U3CrequestU3E5__2_8 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_8), (void*)L_8);
		}

IL_0036_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0297_1:
				{// begin finally (depth: 2)
					{
						int32_t L_9 = V_0;
						if ((((int32_t)L_9) >= ((int32_t)0)))
						{
							goto IL_02ae_1;
						}
					}
					{
						HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_10 = __this->___U3CrequestU3E5__2_8;
						if (!L_10)
						{
							goto IL_02ae_1;
						}
					}
					{
						HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_11 = __this->___U3CrequestU3E5__2_8;
						NullCheck(L_11);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
					}

IL_02ae_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_12 = V_0;
					if (!L_12)
					{
						goto IL_008e_2;
					}
				}
				{
					int32_t L_13 = V_0;
					if ((((int32_t)L_13) == ((int32_t)1)))
					{
						goto IL_00ba_2;
					}
				}
				{
					HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* L_14 = V_1;
					HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_15 = __this->___U3CrequestU3E5__2_8;
					CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_16 = __this->___cancellationToken_7;
					NullCheck(L_14);
					Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* L_17;
					L_17 = HttpNetworkAdapter_SendRequestAsync_mAE0D3CF9F92A72DCE67BE48426D9EEFCF2F3CDD4(L_14, L_15, L_16, NULL);
					NullCheck(L_17);
					ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD L_18;
					L_18 = Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504(L_17, (bool)0, Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504_RuntimeMethod_var);
					V_5 = L_18;
					ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA L_19;
					L_19 = ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_inline((&V_5), ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_RuntimeMethod_var);
					V_4 = L_19;
					bool L_20;
					L_20 = ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249((&V_4), ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249_RuntimeMethod_var);
					if (L_20)
					{
						goto IL_00ab_2;
					}
				}
				{
					int32_t L_21 = 0;
					V_0 = L_21;
					__this->___U3CU3E1__state_0 = L_21;
					ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA L_22 = V_4;
					__this->___U3CU3Eu__1_10 = L_22;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_10))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_23 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4_m08E36D1E5E2C1BCE4F2D497E3BF9CF862A39F2CA(L_23, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4_m08E36D1E5E2C1BCE4F2D497E3BF9CF862A39F2CA_RuntimeMethod_var);
					goto IL_02dc;
				}

IL_008e_2:
				{
					ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA L_24 = __this->___U3CU3Eu__1_10;
					V_4 = L_24;
					ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA* L_25 = (&__this->___U3CU3Eu__1_10);
					il2cpp_codegen_initobj(L_25, sizeof(ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA));
					int32_t L_26 = (-1);
					V_0 = L_26;
					__this->___U3CU3E1__state_0 = L_26;
				}

IL_00ab_2:
				{
					HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_27;
					L_27 = ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A((&V_4), ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A_RuntimeMethod_var);
					V_3 = L_27;
					HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_28 = V_3;
					__this->___U3CresponseU3E5__3_9 = L_28;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresponseU3E5__3_9), (void*)L_28);
				}

IL_00ba_2:
				{
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_027f_2:
						{// begin finally (depth: 3)
							{
								int32_t L_29 = V_0;
								if ((((int32_t)L_29) >= ((int32_t)0)))
								{
									goto IL_0296_2;
								}
							}
							{
								HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_30 = __this->___U3CresponseU3E5__3_9;
								if (!L_30)
								{
									goto IL_0296_2;
								}
							}
							{
								HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_31 = __this->___U3CresponseU3E5__3_9;
								NullCheck(L_31);
								InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
							}

IL_0296_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						{
							int32_t L_32 = V_0;
							if ((((int32_t)L_32) == ((int32_t)1)))
							{
								goto IL_013e_3;
							}
						}
						{
							HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_33 = __this->___U3CresponseU3E5__3_9;
							if (L_33)
							{
								goto IL_00d2_3;
							}
						}
						{
							IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA* L_34 = (IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA_il2cpp_TypeInfo_var)));
							NullCheck(L_34);
							IngestionException__ctor_m58552E494FEF6F3EE6517BC36023F9CE308A8E69(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral940FD4603D8BBE53AEBE9C525A420112DED1C48E)), NULL);
							IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendAsyncU3Ed__9_MoveNext_m2A966297E93944E4427565DB81CC1BAC79075C58_RuntimeMethod_var)));
						}

IL_00d2_3:
						{
							V_6 = _stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31;
							__this->___U3CcontentTypeU3E5__4_11 = (String_t*)NULL;
							Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontentTypeU3E5__4_11), (void*)(String_t*)NULL);
							HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_35 = __this->___U3CresponseU3E5__3_9;
							NullCheck(L_35);
							HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_36;
							L_36 = HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline(L_35, NULL);
							if (!L_36)
							{
								goto IL_018f_3;
							}
						}
						{
							HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_37 = __this->___U3CresponseU3E5__3_9;
							NullCheck(L_37);
							HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_38;
							L_38 = HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline(L_37, NULL);
							NullCheck(L_38);
							Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_39;
							L_39 = HttpContent_ReadAsStringAsync_m69166E8C01E4287FFBA3E8E41805FF068362BF2B(L_38, NULL);
							NullCheck(L_39);
							ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC L_40;
							L_40 = Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8(L_39, (bool)0, Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8_RuntimeMethod_var);
							V_11 = L_40;
							ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 L_41;
							L_41 = ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_inline((&V_11), ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_RuntimeMethod_var);
							V_10 = L_41;
							bool L_42;
							L_42 = ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1((&V_10), ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1_RuntimeMethod_var);
							if (L_42)
							{
								goto IL_015b_3;
							}
						}
						{
							int32_t L_43 = 1;
							V_0 = L_43;
							__this->___U3CU3E1__state_0 = L_43;
							ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 L_44 = V_10;
							__this->___U3CU3Eu__2_12 = L_44;
							Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_12))->___m_task_0), (void*)NULL);
							AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_45 = (&__this->___U3CU3Et__builder_1);
							AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4_m41AFA5F7BC93A89453C37582BB7D8B74C3296C98(L_45, (&V_10), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4_m41AFA5F7BC93A89453C37582BB7D8B74C3296C98_RuntimeMethod_var);
							goto IL_02dc;
						}

IL_013e_3:
						{
							ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 L_46 = __this->___U3CU3Eu__2_12;
							V_10 = L_46;
							ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5* L_47 = (&__this->___U3CU3Eu__2_12);
							il2cpp_codegen_initobj(L_47, sizeof(ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5));
							int32_t L_48 = (-1);
							V_0 = L_48;
							__this->___U3CU3E1__state_0 = L_48;
						}

IL_015b_3:
						{
							String_t* L_49;
							L_49 = ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8((&V_10), ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8_RuntimeMethod_var);
							V_6 = L_49;
							HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_50 = __this->___U3CresponseU3E5__3_9;
							NullCheck(L_50);
							HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_51;
							L_51 = HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline(L_50, NULL);
							NullCheck(L_51);
							HttpContentHeaders_t4E2506F081BD682D0538A5CB38ED1D836C2E8C4F* L_52;
							L_52 = HttpContent_get_Headers_m6183562F724ABF57805E94A2AB0D72BF44659DCD(L_51, NULL);
							NullCheck(L_52);
							bool L_53;
							L_53 = HttpHeaders_TryGetValues_mB5EEDB33F50315E70936E150C63E0E932114C3D2(L_52, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, (&V_9), NULL);
							if (!L_53)
							{
								goto IL_018f_3;
							}
						}
						{
							RuntimeObject* L_54 = V_9;
							String_t* L_55;
							L_55 = Enumerable_FirstOrDefault_TisString_t_mFDD6B0338B3884E99F737C0A244064FB65FA15ED(L_54, Enumerable_FirstOrDefault_TisString_t_mFDD6B0338B3884E99F737C0A244064FB65FA15ED_RuntimeMethod_var);
							__this->___U3CcontentTypeU3E5__4_11 = L_55;
							Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontentTypeU3E5__4_11), (void*)L_55);
						}

IL_018f_3:
						{
							String_t* L_56 = __this->___U3CcontentTypeU3E5__4_11;
							if (!L_56)
							{
								goto IL_01bb_3;
							}
						}
						{
							String_t* L_57 = __this->___U3CcontentTypeU3E5__4_11;
							NullCheck(L_57);
							bool L_58;
							L_58 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_57, _stringLiteral68955AB338790E58AA1D834638DFCE824101EAC2, NULL);
							if (L_58)
							{
								goto IL_01bb_3;
							}
						}
						{
							String_t* L_59 = __this->___U3CcontentTypeU3E5__4_11;
							NullCheck(L_59);
							bool L_60;
							L_60 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_59, _stringLiteral7231943EFA58E6A594D1D4826D9124C7F85E14CA, NULL);
							if (!L_60)
							{
								goto IL_01c1_3;
							}
						}

IL_01bb_3:
						{
							String_t* L_61 = V_6;
							V_7 = L_61;
							goto IL_01c8_3;
						}

IL_01c1_3:
						{
							V_7 = _stringLiteral31E7183DF529BA540D91817B38D9AA4B46E9D9B9;
						}

IL_01c8_3:
						{
							HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_62 = __this->___U3CresponseU3E5__3_9;
							NullCheck(L_62);
							int32_t L_63;
							L_63 = HttpResponseMessage_get_StatusCode_m63BE26E4C79137B35F3066C6BA6A5FF5F3D16AAA_inline(L_62, NULL);
							int32_t L_64 = ((int32_t)L_63);
							RuntimeObject* L_65 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_64);
							HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_66 = __this->___U3CresponseU3E5__3_9;
							NullCheck(L_66);
							int32_t L_67;
							L_67 = HttpResponseMessage_get_StatusCode_m63BE26E4C79137B35F3066C6BA6A5FF5F3D16AAA_inline(L_66, NULL);
							int32_t L_68 = L_67;
							RuntimeObject* L_69 = Box(HttpStatusCode_t530B6899270B44ED560C3872DB5F9698FB7D7374_il2cpp_TypeInfo_var, &L_68);
							String_t* L_70 = V_7;
							String_t* L_71;
							L_71 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral07FA768FE437DE189178EAA96E5C1DCB97E27D58, L_65, L_69, L_70, NULL);
							V_8 = L_71;
							il2cpp_codegen_runtime_class_init_inline(AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
							String_t* L_72;
							L_72 = AppCenterLog_get_LogTag_m4A23B83F7546FD8257D50CB94AA58159AD410A74_inline(NULL);
							String_t* L_73 = V_8;
							AppCenterLog_Verbose_m496FA6FB6D137210518A8D5640776B89442CAA94(L_72, L_73, NULL);
							HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_74 = __this->___U3CresponseU3E5__3_9;
							NullCheck(L_74);
							int32_t L_75;
							L_75 = HttpResponseMessage_get_StatusCode_m63BE26E4C79137B35F3066C6BA6A5FF5F3D16AAA_inline(L_74, NULL);
							if ((((int32_t)L_75) < ((int32_t)((int32_t)200))))
							{
								goto IL_0226_3;
							}
						}
						{
							HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_76 = __this->___U3CresponseU3E5__3_9;
							NullCheck(L_76);
							int32_t L_77;
							L_77 = HttpResponseMessage_get_StatusCode_m63BE26E4C79137B35F3066C6BA6A5FF5F3D16AAA_inline(L_76, NULL);
							if ((((int32_t)L_77) < ((int32_t)((int32_t)300))))
							{
								goto IL_027a_3;
							}
						}

IL_0226_3:
						{
							String_t* L_78 = V_8;
							HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* L_79 = (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB_il2cpp_TypeInfo_var)));
							NullCheck(L_79);
							HttpIngestionException__ctor_m6011F92CA77B8BD836F231C261F91B8461A009DE(L_79, L_78, NULL);
							HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* L_80 = L_79;
							HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_81 = __this->___U3CrequestU3E5__2_8;
							NullCheck(L_81);
							HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* L_82;
							L_82 = HttpRequestMessage_get_Method_m1E2C8323C43F6E09513C58777F2B0D9CD0D2627B_inline(L_81, NULL);
							NullCheck(L_82);
							String_t* L_83;
							L_83 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_82);
							NullCheck(L_80);
							HttpIngestionException_set_Method_m6B66DB19362950E74BEDEAF0687500E136BF9015_inline(L_80, L_83, NULL);
							HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* L_84 = L_80;
							HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_85 = __this->___U3CrequestU3E5__2_8;
							NullCheck(L_85);
							Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_86;
							L_86 = HttpRequestMessage_get_RequestUri_mB71FD84AC5D3AAD3D9E3BA0FB827691F52E235A5_inline(L_85, NULL);
							NullCheck(L_84);
							HttpIngestionException_set_RequestUri_m82521B9D0A00DA0300DBF991D6C9C32A7559475E_inline(L_84, L_86, NULL);
							HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* L_87 = L_84;
							HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_88 = __this->___U3CresponseU3E5__3_9;
							NullCheck(L_88);
							int32_t L_89;
							L_89 = HttpResponseMessage_get_StatusCode_m63BE26E4C79137B35F3066C6BA6A5FF5F3D16AAA_inline(L_88, NULL);
							NullCheck(L_87);
							HttpIngestionException_set_StatusCode_m6F638292B39FC49BF12F0F4687E5C5F9EB366BFA_inline(L_87, L_89, NULL);
							HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* L_90 = L_87;
							String_t* L_91 = __this->___jsonContent_6;
							NullCheck(L_90);
							HttpIngestionException_set_RequestContent_mBA06BA201ECCB28A5EB181B46DD1C6A1CF5F8325_inline(L_90, L_91, NULL);
							HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* L_92 = L_90;
							String_t* L_93 = V_6;
							NullCheck(L_92);
							HttpIngestionException_set_ResponseContent_m0104916227934F9C78AE4DBF49AA056A47DC0D8F_inline(L_92, L_93, NULL);
							IL2CPP_RAISE_MANAGED_EXCEPTION(L_92, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendAsyncU3Ed__9_MoveNext_m2A966297E93944E4427565DB81CC1BAC79075C58_RuntimeMethod_var)));
						}

IL_027a_3:
						{
							String_t* L_94 = V_6;
							V_2 = L_94;
							goto IL_02c8;
						}
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02af;
		}
		throw e;
	}

CATCH_02af:
	{// begin catch(System.Exception)
		V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_95 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_96 = V_12;
		AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C(L_95, L_96, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02dc;
	}// end catch (depth: 1)

IL_02c8:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_97 = (&__this->___U3CU3Et__builder_1);
		String_t* L_98 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E(L_97, L_98, AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var);
	}

IL_02dc:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendAsyncU3Ed__9_MoveNext_m2A966297E93944E4427565DB81CC1BAC79075C58_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4*>(__this + _offset);
	U3CSendAsyncU3Ed__9_MoveNext_m2A966297E93944E4427565DB81CC1BAC79075C58(_thisAdjusted, method);
}
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__9_SetStateMachine_m60088D0B7737FA81ACD6DB31BF13313B11A6D400 (U3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendAsyncU3Ed__9_SetStateMachine_m60088D0B7737FA81ACD6DB31BF13313B11A6D400_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendAsyncU3Ed__9_t14472E2D90C047A45C22F6E8053843DD3671F8B4*>(__this + _offset);
	U3CSendAsyncU3Ed__9_SetStateMachine_m60088D0B7737FA81ACD6DB31BF13313B11A6D400(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mBF31CD9F2A121A0BB5838CD0915BF357361EB37C (U3CU3Ec__DisplayClass11_0_tE3AE9B6AC9346C1BBA66C6207687B82FEEA3B227* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<>c__DisplayClass11_0::<SendRequestAsync>b__0(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass11_0_U3CSendRequestAsyncU3Eb__0_m6CE9B712D9F7838960888F1D603DEBEC1001D221 (U3CU3Ec__DisplayClass11_0_tE3AE9B6AC9346C1BBA66C6207687B82FEEA3B227* __this, uint32_t ___code0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___code0;
		Exception_t* L_1 = __this->___e_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Exception_get_HResult_mBA9CD3C01C2F0C68DFA6ED7824F7371D7E1A4163_inline(L_1, NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
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
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendRequestAsync>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__11_MoveNext_mEB54C0A8B8F3AC9E82BD7CFCA5923C427E266259 (U3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3_m456E846D66F83310D60F047CBE357BE66D1A601E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m26E971C14F1544C9885F24A11904078C58824DD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* V_1 = NULL;
	HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* V_2 = NULL;
	ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CU3Ec__DisplayClass11_0_tE3AE9B6AC9346C1BBA66C6207687B82FEEA3B227* V_5 = NULL;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_0067_2;
				}
			}
			{
				HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE* L_4 = V_1;
				NullCheck(L_4);
				HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_5;
				L_5 = HttpNetworkAdapter_get_HttpClient_mCBFB6D82A60BE989B4325286BD31DB004F95AAD6(L_4, NULL);
				HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_6 = __this->___request_3;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = __this->___cancellationToken_4;
				NullCheck(L_5);
				Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* L_8;
				L_8 = VirtualFuncInvoker2< Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023*, HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(6 /* System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> System.Net.Http.HttpMessageInvoker::SendAsync(System.Net.Http.HttpRequestMessage,System.Threading.CancellationToken) */, L_5, L_6, L_7);
				NullCheck(L_8);
				ConfiguredTaskAwaitable_1_t8CDF4BD8A651B04E9B68A1D1FBA52D4D98B9E9AD L_9;
				L_9 = Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504(L_8, (bool)0, Task_1_ConfigureAwait_m25EFF82BDCE95D202B2F11CEAE4BF1645FD47504_RuntimeMethod_var);
				V_4 = L_9;
				ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA L_10;
				L_10 = ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_inline((&V_4), ConfiguredTaskAwaitable_1_GetAwaiter_m82E11E4D5A7D93F6C6535712CB0D9A19E0B3F1A6_RuntimeMethod_var);
				V_3 = L_10;
				bool L_11;
				L_11 = ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249((&V_3), ConfiguredTaskAwaiter_get_IsCompleted_mAE5B09203993E840EC9B1093F11D767B90D0F249_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0083_2;
				}
			}
			{
				int32_t L_12 = 0;
				V_0 = L_12;
				__this->___U3CU3E1__state_0 = L_12;
				ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA L_13 = V_3;
				__this->___U3CU3Eu__1_5 = L_13;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3* L_14 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3_m456E846D66F83310D60F047CBE357BE66D1A601E(L_14, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA_TisU3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3_m456E846D66F83310D60F047CBE357BE66D1A601E_RuntimeMethod_var);
				goto IL_0100;
			}

IL_0067_2:
			{
				ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA L_15 = __this->___U3CU3Eu__1_5;
				V_3 = L_15;
				ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA* L_16 = (&__this->___U3CU3Eu__1_5);
				il2cpp_codegen_initobj(L_16, sizeof(ConfiguredTaskAwaiter_tFD3E6E496EB1A8A9B04EE800325DC5DC2CA511AA));
				int32_t L_17 = (-1);
				V_0 = L_17;
				__this->___U3CU3E1__state_0 = L_17;
			}

IL_0083_2:
			{
				HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_18;
				L_18 = ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A((&V_3), ConfiguredTaskAwaiter_GetResult_mA6D771EE9708FACC33CA8BFDF2356EB65C51550A_RuntimeMethod_var);
				V_2 = L_18;
				goto IL_00ec;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpRequestException_t4460572C60D2686D9713A867A73B238DB3C1BB40_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_008d_1;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0093_1;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0099_1;
			}
			throw e;
		}

CATCH_008d_1:
		{// begin catch(System.Net.Http.HttpRequestException)
			NetworkIngestionException_t5FF011790FE4837200242574A13EC51BE32F5DD8* L_19 = (NetworkIngestionException_t5FF011790FE4837200242574A13EC51BE32F5DD8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkIngestionException_t5FF011790FE4837200242574A13EC51BE32F5DD8_il2cpp_TypeInfo_var)));
			NullCheck(L_19);
			NetworkIngestionException__ctor_m002DF22ABD280FB225F2D259594893825A3C6CE3(L_19, ((HttpRequestException_t4460572C60D2686D9713A867A73B238DB3C1BB40*)IL2CPP_GET_ACTIVE_EXCEPTION(HttpRequestException_t4460572C60D2686D9713A867A73B238DB3C1BB40*)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendRequestAsyncU3Ed__11_MoveNext_mEB54C0A8B8F3AC9E82BD7CFCA5923C427E266259_RuntimeMethod_var)));
		}// end catch (depth: 2)

CATCH_0093_1:
		{// begin catch(System.InvalidOperationException)
			IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA* L_20 = (IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA_il2cpp_TypeInfo_var)));
			NullCheck(L_20);
			IngestionException__ctor_m840D302FAF3D1245700A2B440E66A3426B50780C(L_20, ((InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendRequestAsyncU3Ed__11_MoveNext_mEB54C0A8B8F3AC9E82BD7CFCA5923C427E266259_RuntimeMethod_var)));
		}// end catch (depth: 2)

CATCH_0099_1:
		{// begin catch(System.Exception)
			{
				U3CU3Ec__DisplayClass11_0_tE3AE9B6AC9346C1BBA66C6207687B82FEEA3B227* L_21 = (U3CU3Ec__DisplayClass11_0_tE3AE9B6AC9346C1BBA66C6207687B82FEEA3B227*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass11_0_tE3AE9B6AC9346C1BBA66C6207687B82FEEA3B227_il2cpp_TypeInfo_var)));
				NullCheck(L_21);
				U3CU3Ec__DisplayClass11_0__ctor_mBF31CD9F2A121A0BB5838CD0915BF357361EB37C(L_21, NULL);
				V_5 = L_21;
				V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				U3CU3Ec__DisplayClass11_0_tE3AE9B6AC9346C1BBA66C6207687B82FEEA3B227* L_22 = V_5;
				Exception_t* L_23 = V_6;
				NullCheck(L_22);
				L_22->___e_0 = L_23;
				Il2CppCodeGenWriteBarrier((void**)(&L_22->___e_0), (void*)L_23);
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE_il2cpp_TypeInfo_var)));
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ((HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpNetworkAdapter_tEE56893D0A3A1A09E85C851B0734103CCFCB39FE_il2cpp_TypeInfo_var))))->___NetworkUnavailableCodes_4;
				U3CU3Ec__DisplayClass11_0_tE3AE9B6AC9346C1BBA66C6207687B82FEEA3B227* L_25 = V_5;
				Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* L_26 = (Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF_il2cpp_TypeInfo_var)));
				NullCheck(L_26);
				Predicate_1__ctor_m191DE04E7B94C1F159CF5893C403D9F6DDA4958F(L_26, L_25, (intptr_t)((void*)((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CSendRequestAsyncU3Eb__0_m6CE9B712D9F7838960888F1D603DEBEC1001D221_RuntimeMethod_var))), NULL);
				bool L_27;
				L_27 = Array_Exists_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m7682788918845A8DAC3D68E9D80B5C2286BAE808(L_24, L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Exists_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m7682788918845A8DAC3D68E9D80B5C2286BAE808_RuntimeMethod_var)));
				if (!L_27)
				{
					goto IL_00d1_1;
				}
			}
			{
				U3CU3Ec__DisplayClass11_0_tE3AE9B6AC9346C1BBA66C6207687B82FEEA3B227* L_28 = V_5;
				NullCheck(L_28);
				Exception_t* L_29 = L_28->___e_0;
				NetworkIngestionException_t5FF011790FE4837200242574A13EC51BE32F5DD8* L_30 = (NetworkIngestionException_t5FF011790FE4837200242574A13EC51BE32F5DD8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkIngestionException_t5FF011790FE4837200242574A13EC51BE32F5DD8_il2cpp_TypeInfo_var)));
				NullCheck(L_30);
				NetworkIngestionException__ctor_m002DF22ABD280FB225F2D259594893825A3C6CE3(L_30, L_29, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendRequestAsyncU3Ed__11_MoveNext_mEB54C0A8B8F3AC9E82BD7CFCA5923C427E266259_RuntimeMethod_var)));
			}

IL_00d1_1:
			{
				IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			}
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d3;
		}
		throw e;
	}

CATCH_00d3:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3* L_31 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_32 = V_6;
		AsyncTaskMethodBuilder_1_SetException_mED939EC41D03B857452EE11F39619C2EBAD738A3(L_31, L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mED939EC41D03B857452EE11F39619C2EBAD738A3_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0100;
	}// end catch (depth: 1)

IL_00ec:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3* L_33 = (&__this->___U3CU3Et__builder_1);
		HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_34 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m26E971C14F1544C9885F24A11904078C58824DD0(L_33, L_34, AsyncTaskMethodBuilder_1_SetResult_m26E971C14F1544C9885F24A11904078C58824DD0_RuntimeMethod_var);
	}

IL_0100:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendRequestAsyncU3Ed__11_MoveNext_mEB54C0A8B8F3AC9E82BD7CFCA5923C427E266259_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3*>(__this + _offset);
	U3CSendRequestAsyncU3Ed__11_MoveNext_mEB54C0A8B8F3AC9E82BD7CFCA5923C427E266259(_thisAdjusted, method);
}
// System.Void Microsoft.AppCenter.Ingestion.Http.HttpNetworkAdapter/<SendRequestAsync>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__11_SetStateMachine_m82C405B6C89623382237611B63126BA1A0161CC1 (U3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m24028EF7BDC5CB458ACD42392CA5D7159051A041_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t1642C22CEE3183438A9EFE5276EDE8A234E719A3* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m24028EF7BDC5CB458ACD42392CA5D7159051A041(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m24028EF7BDC5CB458ACD42392CA5D7159051A041_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendRequestAsyncU3Ed__11_SetStateMachine_m82C405B6C89623382237611B63126BA1A0161CC1_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendRequestAsyncU3Ed__11_tEDCB5DA8F6AC1E8057739A4A276DB8545B6531B3*>(__this + _offset);
	U3CSendRequestAsyncU3Ed__11_SetStateMachine_m82C405B6C89623382237611B63126BA1A0161CC1(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkStateIngestion::.ctor(Microsoft.AppCenter.Ingestion.IIngestion,Microsoft.AppCenter.Ingestion.Http.INetworkStateAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStateIngestion__ctor_m19F1EDCCDCC79825998D935E4188A5107E0A1383 (NetworkStateIngestion_t3B1209F7E80F7412CE9EF9FB7AAADA7D62244AF8* __this, RuntimeObject* ___decoratedApi0, RuntimeObject* ___networkStateAdapter1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m19C7B752431F5A49D7ED56F064AB16071A418ABE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t4C4408853DBA73AA631F24AB98ABBA00CF3B00AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkStateAdapter_t918EFC296ECAE7406AF2D1A808B22DFEB0B5660B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStateIngestion_OnNetworkStateChange_m05909CBDD3FEC79BF109AB9CC3015975D89909DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t4C4408853DBA73AA631F24AB98ABBA00CF3B00AE* L_0 = (HashSet_1_t4C4408853DBA73AA631F24AB98ABBA00CF3B00AE*)il2cpp_codegen_object_new(HashSet_1_t4C4408853DBA73AA631F24AB98ABBA00CF3B00AE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m19C7B752431F5A49D7ED56F064AB16071A418ABE(L_0, HashSet_1__ctor_m19C7B752431F5A49D7ED56F064AB16071A418ABE_RuntimeMethod_var);
		__this->____calls_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____calls_1), (void*)L_0);
		RuntimeObject* L_1 = ___decoratedApi0;
		IngestionDecorator__ctor_m5A7B9CFCC5344C2843529028038860F47B140690(__this, L_1, NULL);
		RuntimeObject* L_2 = ___networkStateAdapter1;
		__this->____networkStateAdapter_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networkStateAdapter_2), (void*)L_2);
		RuntimeObject* L_3 = __this->____networkStateAdapter_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_4 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_4, __this, (intptr_t)((void*)NetworkStateIngestion_OnNetworkStateChange_m05909CBDD3FEC79BF109AB9CC3015975D89909DA_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(1 /* System.Void Microsoft.AppCenter.Ingestion.Http.INetworkStateAdapter::add_NetworkStatusChanged(System.EventHandler) */, INetworkStateAdapter_t918EFC296ECAE7406AF2D1A808B22DFEB0B5660B_il2cpp_TypeInfo_var, L_3, L_4);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkStateIngestion::OnNetworkStateChange(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStateIngestion_OnNetworkStateChange_m05909CBDD3FEC79BF109AB9CC3015975D89909DA (NetworkStateIngestion_t3B1209F7E80F7412CE9EF9FB7AAADA7D62244AF8* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7009053EFD176FAACD4AEE93783EF107EA2FB70F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7E0899DECE2A081D7E8285C2B25A1FF33AC61E27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m00757EFB48FF97E701B8FA0E15A3FA83EDEE1E67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tA1FD6AEBAF7E08FA37B8FDBCA41B3EDEB6E0B4DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkStateAdapter_t918EFC296ECAE7406AF2D1A808B22DFEB0B5660B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m1E3DD229B4B5832486C0B15F4503CE6109DCAC46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD0B9443F072815730072E662FF0C2D4DEB834709_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCF6C68013E9EEDE20E1461ACDBE498E9C0E6A41C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	Enumerator_t890F7495A9FEBCDBDAB13DA1AC59115DD621AA32 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* V_4 = NULL;
	{
		RuntimeObject* L_0 = __this->____networkStateAdapter_2;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.AppCenter.Ingestion.Http.INetworkStateAdapter::get_IsConnected() */, INetworkStateAdapter_t918EFC296ECAE7406AF2D1A808B22DFEB0B5660B_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4* L_2 = (List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4*)il2cpp_codegen_object_new(List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCF6C68013E9EEDE20E1461ACDBE498E9C0E6A41C(L_2, List_1__ctor_mCF6C68013E9EEDE20E1461ACDBE498E9C0E6A41C_RuntimeMethod_var);
		V_0 = L_2;
		RuntimeObject* L_3 = __this->____calls_1;
		V_1 = L_3;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0047;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_5, NULL);
				}

IL_0047:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_6 = V_1;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_6, (&V_2), NULL);
			List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4* L_7 = V_0;
			RuntimeObject* L_8 = __this->____calls_1;
			NullCheck(L_7);
			List_1_AddRange_m1E3DD229B4B5832486C0B15F4503CE6109DCAC46(L_7, L_8, List_1_AddRange_m1E3DD229B4B5832486C0B15F4503CE6109DCAC46_RuntimeMethod_var);
			RuntimeObject* L_9 = __this->____calls_1;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<Microsoft.AppCenter.Ingestion.ServiceCall>::Clear() */, ICollection_1_tA1FD6AEBAF7E08FA37B8FDBCA41B3EDEB6E0B4DB_il2cpp_TypeInfo_var, L_9);
			goto IL_0048;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4* L_10 = V_0;
		NullCheck(L_10);
		Enumerator_t890F7495A9FEBCDBDAB13DA1AC59115DD621AA32 L_11;
		L_11 = List_1_GetEnumerator_mD0B9443F072815730072E662FF0C2D4DEB834709(L_10, List_1_GetEnumerator_mD0B9443F072815730072E662FF0C2D4DEB834709_RuntimeMethod_var);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7009053EFD176FAACD4AEE93783EF107EA2FB70F((&V_3), Enumerator_Dispose_m7009053EFD176FAACD4AEE93783EF107EA2FB70F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0062_1;
			}

IL_0051_1:
			{
				ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_12;
				L_12 = Enumerator_get_Current_m00757EFB48FF97E701B8FA0E15A3FA83EDEE1E67_inline((&V_3), Enumerator_get_Current_m00757EFB48FF97E701B8FA0E15A3FA83EDEE1E67_RuntimeMethod_var);
				V_4 = L_12;
				ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_13 = V_4;
				NetworkStateIngestion_RetryCall_m3141EB50333BD7728B046CB810DB38C6E6F7762C(__this, L_13, NULL);
			}

IL_0062_1:
			{
				bool L_14;
				L_14 = Enumerator_MoveNext_m7E0899DECE2A081D7E8285C2B25A1FF33AC61E27((&V_3), Enumerator_MoveNext_m7E0899DECE2A081D7E8285C2B25A1FF33AC61E27_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_0051_1;
				}
			}
			{
				goto IL_007b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007b:
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkStateIngestion::RetryCall(Microsoft.AppCenter.Ingestion.ServiceCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStateIngestion_RetryCall_m3141EB50333BD7728B046CB810DB38C6E6F7762C (NetworkStateIngestion_t3B1209F7E80F7412CE9EF9FB7AAADA7D62244AF8* __this, ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* ___call0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceCall_CopyState_m281AC07EFD4E05A8D3E9C8911E633F10390D84AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CRetryCallU3Eb__0_mC717B8F18957F7557F830638995354CC280B958D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA* L_0 = (U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_mF6884549400EED659FD62563AF79FB315F856F18(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA* L_1 = V_0;
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_2 = ___call0;
		NullCheck(L_1);
		L_1->___call_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___call_0), (void*)L_2);
		U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA* L_3 = V_0;
		NullCheck(L_3);
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_4 = L_3->___call_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = ServiceCall_get_IsCanceled_mF008C0B6A01B10CC20CBD356ED488E7199B3E7BA(L_4, NULL);
		if (!L_5)
		{
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_001b:
	{
		U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA* L_6 = V_0;
		U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA* L_7 = V_0;
		NullCheck(L_7);
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_8 = L_7->___call_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = ServiceCall_get_AppSecret_m2DDCA78121B81E8DAAE2AAEFD48EF5B9586F6BA8_inline(L_8, NULL);
		U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA* L_10 = V_0;
		NullCheck(L_10);
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_11 = L_10->___call_0;
		NullCheck(L_11);
		Guid_t L_12;
		L_12 = ServiceCall_get_InstallId_m524B190DB0C1F7D08A9A95BA76E5EE6DAE41A01E_inline(L_11, NULL);
		U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA* L_13 = V_0;
		NullCheck(L_13);
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_14 = L_13->___call_0;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = ServiceCall_get_Logs_m6D4C4D4BD45873D66ECD68D6216CF0214760E1A9_inline(L_14, NULL);
		RuntimeObject* L_16;
		L_16 = IngestionDecorator_Call_m62056680EA499AD35F210AE82FA8FF94055DFED2(__this, L_9, L_12, L_15, NULL);
		NullCheck(L_6);
		L_6->___result_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___result_1), (void*)L_16);
		U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA* L_17 = V_0;
		NullCheck(L_17);
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_18 = L_17->___call_0;
		U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA* L_19 = V_0;
		Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* L_20 = (Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6*)il2cpp_codegen_object_new(Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Action_1__ctor_mB8D9FA7A9BE0E125095C3B3E5BEFB5D7404619BE(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CRetryCallU3Eb__0_mC717B8F18957F7557F830638995354CC280B958D_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		ServiceCall_ContinueWith_mC2D657EC79A22E85E1269E18F5283DBC7DD5F1F0(L_18, L_20, NULL);
		U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA* L_21 = V_0;
		NullCheck(L_21);
		RuntimeObject* L_22 = L_21->___result_1;
		U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA* L_23 = V_0;
		NullCheck(L_23);
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_24 = L_23->___call_0;
		Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* L_25 = (Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6*)il2cpp_codegen_object_new(Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Action_1__ctor_mB8D9FA7A9BE0E125095C3B3E5BEFB5D7404619BE(L_25, L_24, (intptr_t)((void*)ServiceCall_CopyState_m281AC07EFD4E05A8D3E9C8911E633F10390D84AF_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* >::Invoke(5 /* System.Void Microsoft.AppCenter.Ingestion.IServiceCall::ContinueWith(System.Action`1<Microsoft.AppCenter.Ingestion.IServiceCall>) */, IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var, L_22, L_25);
		return;
	}
}
// Microsoft.AppCenter.Ingestion.IServiceCall Microsoft.AppCenter.Ingestion.Http.NetworkStateIngestion::Call(System.String,System.Guid,System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkStateIngestion_Call_mA7F12BAED892B4047B1592665C62F5441C59EDD5 (NetworkStateIngestion_t3B1209F7E80F7412CE9EF9FB7AAADA7D62244AF8* __this, String_t* ___appSecret0, Guid_t ___installId1, RuntimeObject* ___logs2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkStateAdapter_t918EFC296ECAE7406AF2D1A808B22DFEB0B5660B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISet_1_tE515514B77EF13FFB1869A693B0FD9633C72E3B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = __this->____networkStateAdapter_2;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.AppCenter.Ingestion.Http.INetworkStateAdapter::get_IsConnected() */, INetworkStateAdapter_t918EFC296ECAE7406AF2D1A808B22DFEB0B5660B_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_2 = ___appSecret0;
		Guid_t L_3 = ___installId1;
		RuntimeObject* L_4 = ___logs2;
		RuntimeObject* L_5;
		L_5 = IngestionDecorator_Call_m62056680EA499AD35F210AE82FA8FF94055DFED2(__this, L_2, L_3, L_4, NULL);
		return L_5;
	}

IL_0017:
	{
		String_t* L_6 = ___appSecret0;
		Guid_t L_7 = ___installId1;
		RuntimeObject* L_8 = ___logs2;
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_9 = (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D*)il2cpp_codegen_object_new(ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ServiceCall__ctor_m8A352388C214EB2A5859C63DF4816FFC6C6EF4CF(L_9, L_6, L_7, L_8, NULL);
		V_0 = L_9;
		RuntimeObject* L_10 = __this->____calls_1;
		V_1 = L_10;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{// begin finally (depth: 1)
				{
					bool L_11 = V_2;
					if (!L_11)
					{
						goto IL_0049;
					}
				}
				{
					RuntimeObject* L_12 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_12, NULL);
				}

IL_0049:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_13 = V_1;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_13, (&V_2), NULL);
			RuntimeObject* L_14 = __this->____calls_1;
			ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_15 = V_0;
			NullCheck(L_14);
			bool L_16;
			L_16 = InterfaceFuncInvoker1< bool, ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* >::Invoke(0 /* System.Boolean System.Collections.Generic.ISet`1<Microsoft.AppCenter.Ingestion.ServiceCall>::Add(T) */, ISet_1_tE515514B77EF13FFB1869A693B0FD9633C72E3B8_il2cpp_TypeInfo_var, L_14, L_15);
			goto IL_004a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_17 = V_0;
		return L_17;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkStateIngestion::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStateIngestion_Close_m53F79EC9CF0D3550AD0A9739CFACA69BCF400C30 (NetworkStateIngestion_t3B1209F7E80F7412CE9EF9FB7AAADA7D62244AF8* __this, const RuntimeMethod* method) 
{
	{
		NetworkStateIngestion_CancelAllCalls_m4D7FFD0AD18073BDD07C18D3CE97FF8A297F0CB8(__this, NULL);
		IngestionDecorator_Close_m094AC924905E4170E1620A006228184B7572D83A(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkStateIngestion::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStateIngestion_Dispose_mE0B09DCD0448787A7E83AB178082D07F426FB32A (NetworkStateIngestion_t3B1209F7E80F7412CE9EF9FB7AAADA7D62244AF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkStateAdapter_t918EFC296ECAE7406AF2D1A808B22DFEB0B5660B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStateIngestion_OnNetworkStateChange_m05909CBDD3FEC79BF109AB9CC3015975D89909DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____networkStateAdapter_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_1, __this, (intptr_t)((void*)NetworkStateIngestion_OnNetworkStateChange_m05909CBDD3FEC79BF109AB9CC3015975D89909DA_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(2 /* System.Void Microsoft.AppCenter.Ingestion.Http.INetworkStateAdapter::remove_NetworkStatusChanged(System.EventHandler) */, INetworkStateAdapter_t918EFC296ECAE7406AF2D1A808B22DFEB0B5660B_il2cpp_TypeInfo_var, L_0, L_1);
		NetworkStateIngestion_CancelAllCalls_m4D7FFD0AD18073BDD07C18D3CE97FF8A297F0CB8(__this, NULL);
		IngestionDecorator_Dispose_mC1F90990FB8FCBED2202AF7D60F7207D51483FAE(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkStateIngestion::CancelAllCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStateIngestion_CancelAllCalls_m4D7FFD0AD18073BDD07C18D3CE97FF8A297F0CB8 (NetworkStateIngestion_t3B1209F7E80F7412CE9EF9FB7AAADA7D62244AF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tA1FD6AEBAF7E08FA37B8FDBCA41B3EDEB6E0B4DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t07CC59C6D34DC1E722725C38281CD25B003389A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t33C586567D256608FCFB51E45779D71DA4E834FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEE8E4CAEF186EFA0540E1901BA3965B6AE7C45E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = __this->____calls_1;
		V_1 = L_0;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_2;
					if (!L_1)
					{
						goto IL_0042;
					}
				}
				{
					RuntimeObject* L_2 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0042:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_2), NULL);
				RuntimeObject* L_4 = __this->____calls_1;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Microsoft.AppCenter.Ingestion.ServiceCall>::get_Count() */, ICollection_1_tA1FD6AEBAF7E08FA37B8FDBCA41B3EDEB6E0B4DB_il2cpp_TypeInfo_var, L_4);
				if (L_5)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_006b;
			}

IL_0020_1:
			{
				RuntimeObject* L_6 = __this->____calls_1;
				List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4* L_7 = (List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4*)il2cpp_codegen_object_new(List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				List_1__ctor_mEE8E4CAEF186EFA0540E1901BA3965B6AE7C45E1(L_7, L_6, List_1__ctor_mEE8E4CAEF186EFA0540E1901BA3965B6AE7C45E1_RuntimeMethod_var);
				V_0 = L_7;
				RuntimeObject* L_8 = __this->____calls_1;
				NullCheck(L_8);
				InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<Microsoft.AppCenter.Ingestion.ServiceCall>::Clear() */, ICollection_1_tA1FD6AEBAF7E08FA37B8FDBCA41B3EDEB6E0B4DB_il2cpp_TypeInfo_var, L_8);
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Microsoft.AppCenter.Ingestion.ServiceCall>::GetEnumerator() */, IEnumerable_1_t07CC59C6D34DC1E722725C38281CD25B003389A3_il2cpp_TypeInfo_var, L_9);
		V_3 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = V_3;
					if (!L_11)
					{
						goto IL_006a;
					}
				}
				{
					RuntimeObject* L_12 = V_3;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_006a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0057_1;
			}

IL_004c_1:
			{
				RuntimeObject* L_13 = V_3;
				NullCheck(L_13);
				ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_14;
				L_14 = InterfaceFuncInvoker0< ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Microsoft.AppCenter.Ingestion.ServiceCall>::get_Current() */, IEnumerator_1_t33C586567D256608FCFB51E45779D71DA4E834FE_il2cpp_TypeInfo_var, L_13);
				NullCheck(L_14);
				ServiceCall_Cancel_m3E010F03B685313B1BBEFD6A3CC6C50187FA9AA2(L_14, NULL);
			}

IL_0057_1:
			{
				RuntimeObject* L_15 = V_3;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_006b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
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
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkStateIngestion/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mF6884549400EED659FD62563AF79FB315F856F18 (U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.NetworkStateIngestion/<>c__DisplayClass4_0::<RetryCall>b__0(Microsoft.AppCenter.Ingestion.IServiceCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CRetryCallU3Eb__0_mC717B8F18957F7557F830638995354CC280B958D (U3CU3Ec__DisplayClass4_0_tEBA1E8BC3429E89A23F532FAAC2EF52335803DAA* __this, RuntimeObject* ____0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_0 = __this->___call_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = ServiceCall_get_IsCanceled_mF008C0B6A01B10CC20CBD356ED488E7199B3E7BA(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_2 = __this->___result_1;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.AppCenter.Ingestion.IServiceCall::get_IsCanceled() */, IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var, L_2);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_4 = __this->___result_1;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(6 /* System.Void Microsoft.AppCenter.Ingestion.IServiceCall::Cancel() */, IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var, L_4);
	}

IL_0025:
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
// System.Void Microsoft.AppCenter.Ingestion.Http.IngestionHttp::.ctor(Microsoft.AppCenter.Ingestion.Http.IHttpNetworkAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngestionHttp__ctor_m60DDF66937FB48E4D050B2416BC08B6F4CD5FA20 (IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* __this, RuntimeObject* ___httpNetwork0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___httpNetwork0;
		__this->____httpNetwork_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____httpNetwork_6), (void*)L_0);
		return;
	}
}
// Microsoft.AppCenter.Ingestion.IServiceCall Microsoft.AppCenter.Ingestion.Http.IngestionHttp::Call(System.String,System.Guid,System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IngestionHttp_Call_m3CE13F2B57B7F4BF4D633E70C30C9E8B9D07F63F (IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* __this, String_t* ___appSecret0, Guid_t ___installId1, RuntimeObject* ___logs2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkIngestionException_t5FF011790FE4837200242574A13EC51BE32F5DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m2976BD674D15E3F3419CF9D4C4C27C863EAAC469_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CCallU3Eb__0_m41FEEDBDF9275B2414CA1E49393F43A9E6AC23C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_t81B7DBF7C608A675F863D0FBCE96D50FDB389041_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3176B77F12772FD8A9BAF3584128DC3E3741D6F5);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t81B7DBF7C608A675F863D0FBCE96D50FDB389041* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_t81B7DBF7C608A675F863D0FBCE96D50FDB389041* L_0 = (U3CU3Ec__DisplayClass8_0_t81B7DBF7C608A675F863D0FBCE96D50FDB389041*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t81B7DBF7C608A675F863D0FBCE96D50FDB389041_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_0__ctor_mC79AA5522096552575D8E68CC2DC3386DA175E23(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_t81B7DBF7C608A675F863D0FBCE96D50FDB389041* L_1 = V_0;
		String_t* L_2 = ___appSecret0;
		Guid_t L_3 = ___installId1;
		RuntimeObject* L_4 = ___logs2;
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_5 = (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D*)il2cpp_codegen_object_new(ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ServiceCall__ctor_m8A352388C214EB2A5859C63DF4816FFC6C6EF4CF(L_5, L_2, L_3, L_4, NULL);
		NullCheck(L_1);
		L_1->___call_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___call_0), (void*)L_5);
		bool L_6;
		L_6 = IngestionHttp_get_IsEnabled_m044CE6D77CD9A0A7B1FC3A807402DBF632E620CA(__this, NULL);
		if (L_6)
		{
			goto IL_003d;
		}
	}
	{
		U3CU3Ec__DisplayClass8_0_t81B7DBF7C608A675F863D0FBCE96D50FDB389041* L_7 = V_0;
		NullCheck(L_7);
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_8 = L_7->___call_0;
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, _stringLiteral3176B77F12772FD8A9BAF3584128DC3E3741D6F5, NULL);
		NetworkIngestionException_t5FF011790FE4837200242574A13EC51BE32F5DD8* L_10 = (NetworkIngestionException_t5FF011790FE4837200242574A13EC51BE32F5DD8*)il2cpp_codegen_object_new(NetworkIngestionException_t5FF011790FE4837200242574A13EC51BE32F5DD8_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		NetworkIngestionException__ctor_m002DF22ABD280FB225F2D259594893825A3C6CE3(L_10, L_9, NULL);
		NullCheck(L_8);
		ServiceCall_SetException_mE0EB108581A7CF084B3E2DF9B59423543EE1EE54(L_8, L_10, NULL);
		U3CU3Ec__DisplayClass8_0_t81B7DBF7C608A675F863D0FBCE96D50FDB389041* L_11 = V_0;
		NullCheck(L_11);
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_12 = L_11->___call_0;
		return L_12;
	}

IL_003d:
	{
		String_t* L_13 = ___appSecret0;
		Guid_t L_14 = ___installId1;
		RuntimeObject* L_15 = ___logs2;
		U3CU3Ec__DisplayClass8_0_t81B7DBF7C608A675F863D0FBCE96D50FDB389041* L_16 = V_0;
		NullCheck(L_16);
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_17 = L_16->___call_0;
		NullCheck(L_17);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_18;
		L_18 = ServiceCall_get_CancellationToken_m0B73B27CE998AB3D215672ABDDCD07F3E3E2C890(L_17, NULL);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_19;
		L_19 = IngestionHttp_CallAsync_m51884E5A70BD2EA1EC258DA014F53775BB94B389(__this, L_13, L_14, L_15, L_18, NULL);
		U3CU3Ec__DisplayClass8_0_t81B7DBF7C608A675F863D0FBCE96D50FDB389041* L_20 = V_0;
		Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B* L_21 = (Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B*)il2cpp_codegen_object_new(Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Action_1__ctor_m9A99EE412CA28FA3656C2B3CEEEDEA403CF736F1(L_21, L_20, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CCallU3Eb__0_m41FEEDBDF9275B2414CA1E49393F43A9E6AC23C0_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_22;
		L_22 = Task_1_ContinueWith_m2976BD674D15E3F3419CF9D4C4C27C863EAAC469(L_19, L_21, Task_1_ContinueWith_m2976BD674D15E3F3419CF9D4C4C27C863EAAC469_RuntimeMethod_var);
		U3CU3Ec__DisplayClass8_0_t81B7DBF7C608A675F863D0FBCE96D50FDB389041* L_23 = V_0;
		NullCheck(L_23);
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_24 = L_23->___call_0;
		return L_24;
	}
}
// System.Threading.Tasks.Task`1<System.String> Microsoft.AppCenter.Ingestion.Http.IngestionHttp::CallAsync(System.String,System.Guid,System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* IngestionHttp_CallAsync_m51884E5A70BD2EA1EC258DA014F53775BB94B389 (IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* __this, String_t* ___appSecret0, Guid_t ___installId1, RuntimeObject* ___logs2, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___token3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m4CB15D06286C7AA0BA8318800D23A9D574CBE0E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3_m4B2CBF4544E17D942BE7F61BD18CDA6E8F5654E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m4CB15D06286C7AA0BA8318800D23A9D574CBE0E8(AsyncTaskMethodBuilder_1_Create_m4CB15D06286C7AA0BA8318800D23A9D574CBE0E8_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		String_t* L_1 = ___appSecret0;
		(&V_0)->___appSecret_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___appSecret_4), (void*)L_1);
		Guid_t L_2 = ___installId1;
		(&V_0)->___installId_5 = L_2;
		RuntimeObject* L_3 = ___logs2;
		(&V_0)->___logs_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___logs_6), (void*)L_3);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___token3;
		(&V_0)->___token_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___token_2))->____source_0), (void*)NULL);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3_m4B2CBF4544E17D942BE7F61BD18CDA6E8F5654E2(L_5, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3_m4B2CBF4544E17D942BE7F61BD18CDA6E8F5654E2_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_7;
		L_7 = AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E(L_6, AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.IngestionHttp::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngestionHttp_Close_mC7ECC5082223E0A81319F6C66C6AFDE7D1FC53EB (IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.IngestionHttp::SetLogUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngestionHttp_SetLogUrl_mA11FDEAB69C1795539DB1967B37D2EC828D3C423 (IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* __this, String_t* ___logUrl0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___logUrl0;
		__this->____baseLogUrl_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____baseLogUrl_5), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Http.IngestionHttp::GetRedactedAppSecret(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IngestionHttp_GetRedactedAppSecret_mA8C7F30920F4B6D189C93EB39F59B52C3F3DE1E5 (String_t* ___appSecret0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___appSecret0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(((int32_t)il2cpp_codegen_subtract(L_1, 8)), 0, NULL);
		V_0 = L_2;
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_2 = 0;
		goto IL_0029;
	}

IL_0019:
	{
		String_t* L_3 = V_1;
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_3, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		V_1 = L_4;
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0029:
	{
		int32_t L_6 = V_2;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_8 = V_1;
		String_t* L_9 = ___appSecret0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_9, L_10, NULL);
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_8, L_11, NULL);
		V_1 = L_12;
		String_t* L_13 = V_1;
		return L_13;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> Microsoft.AppCenter.Ingestion.Http.IngestionHttp::CreateHeaders(System.String,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IngestionHttp_CreateHeaders_m3554DD03200F865F90963DE0031EA226F3AC2A52 (IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* __this, String_t* ___appSecret0, Guid_t ___installId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0608E262A79695944F27DA7EFE397D991672D664);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FD257E451BA9EE5341508F02A19203AA89CE879);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = L_0;
		String_t* L_2 = ___appSecret0;
		NullCheck(L_1);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, _stringLiteral3FD257E451BA9EE5341508F02A19203AA89CE879, L_2, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = L_1;
		String_t* L_4;
		L_4 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&___installId1), NULL);
		NullCheck(L_3);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_3, _stringLiteral0608E262A79695944F27DA7EFE397D991672D664, L_4, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		return L_3;
	}
}
// System.String Microsoft.AppCenter.Ingestion.Http.IngestionHttp::CreateLogsContent(System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IngestionHttp_CreateLogsContent_m24FAF650F6D388799D107FFC676BAB579B3FFB0A (IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* __this, RuntimeObject* ___logs0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogContainer_tBCB89E6BB0DBE4E8EB7FC504CBCDFE546A8EE33D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logs0;
		LogContainer_tBCB89E6BB0DBE4E8EB7FC504CBCDFE546A8EE33D* L_1 = (LogContainer_tBCB89E6BB0DBE4E8EB7FC504CBCDFE546A8EE33D*)il2cpp_codegen_object_new(LogContainer_tBCB89E6BB0DBE4E8EB7FC504CBCDFE546A8EE33D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LogContainer__ctor_mB2A4C429590DA4592E4AD153DC5569C7E9495499(L_1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(LogSerializer_t894CC0B672008CEEEC824303B037F81FE65699C8_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = LogSerializer_Serialize_m50968E859AE9AB396D58008FD373202287642DAA(L_1, NULL);
		return L_2;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.IngestionHttp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngestionHttp_Dispose_m620606AEA7CEF084E8B41FF154AF597C79C08237 (IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____httpNetwork_6;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Boolean Microsoft.AppCenter.Ingestion.Http.IngestionHttp::get_IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IngestionHttp_get_IsEnabled_m044CE6D77CD9A0A7B1FC3A807402DBF632E620CA (IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AppCenter_t18967774C07F0FE5010B5E7034507AEEA01420FC_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AppCenter_get_PlatformIsNetworkRequestsAllowed_m3D8D7C0C2752FF868065DF08846581DC7EF27C3B(NULL);
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
// System.Void Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mC79AA5522096552575D8E68CC2DC3386DA175E23 (U3CU3Ec__DisplayClass8_0_t81B7DBF7C608A675F863D0FBCE96D50FDB389041* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<>c__DisplayClass8_0::<Call>b__0(System.Threading.Tasks.Task`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CCallU3Eb__0_m41FEEDBDF9275B2414CA1E49393F43A9E6AC23C0 (U3CU3Ec__DisplayClass8_0_t81B7DBF7C608A675F863D0FBCE96D50FDB389041* __this, Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m75DDCE5DDCDA410C5506E2E7DD257E9E065EBB13_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AggregateException_t51B6205846DFB356B94452702201DD239D44422F* G_B5_0 = NULL;
	ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* G_B5_1 = NULL;
	AggregateException_t51B6205846DFB356B94452702201DD239D44422F* G_B4_0 = NULL;
	ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* G_B4_1 = NULL;
	Exception_t* G_B6_0 = NULL;
	ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* G_B6_1 = NULL;
	{
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_0 = ___task0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA(L_0, NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_2 = ___task0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_2, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_4 = __this->___call_0;
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_5 = ___task0;
		NullCheck(L_5);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_6;
		L_6 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_5, NULL);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_7 = L_6;
		G_B4_0 = L_7;
		G_B4_1 = L_4;
		if (L_7)
		{
			G_B5_0 = L_7;
			G_B5_1 = L_4;
			goto IL_0024;
		}
	}
	{
		G_B6_0 = ((Exception_t*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_0029;
	}

IL_0024:
	{
		NullCheck(G_B5_0);
		Exception_t* L_8;
		L_8 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(G_B5_0, NULL);
		G_B6_0 = L_8;
		G_B6_1 = G_B5_1;
	}

IL_0029:
	{
		NullCheck(G_B6_1);
		ServiceCall_SetException_mE0EB108581A7CF084B3E2DF9B59423543EE1EE54(G_B6_1, G_B6_0, NULL);
		return;
	}

IL_002f:
	{
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_9 = __this->___call_0;
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_10 = ___task0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Task_1_get_Result_m75DDCE5DDCDA410C5506E2E7DD257E9E065EBB13(L_10, Task_1_get_Result_m75DDCE5DDCDA410C5506E2E7DD257E9E065EBB13_RuntimeMethod_var);
		NullCheck(L_9);
		ServiceCall_SetResult_m9B59DF998BF6786119C0490316D28F0B7E936D88(L_9, L_11, NULL);
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
// System.Void Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<CallAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallAsyncU3Ed__9_MoveNext_mC67AB500C50CDABFADE164C726B0E702FA3CC840 (U3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3_m5473A83C72D384F7BBC121D0BBA5E80DB094A9DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHttpNetworkAdapter_t922D04C876A68235FC8EA168F80908E50F12742E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0608E262A79695944F27DA7EFE397D991672D664);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48218C8D51899E77266A7C390992D9F6E5EB8B0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5146662D3D422BB788AFE1C140592E0D626FAC67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69B5C482F992C91543F99142A06B06404AD2EA29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1D91A54A9D205529046FE855F06CA9F29886FCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCF6CF1CD99E83C31C5EB27488E6D6783FD8666C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	String_t* V_5 = NULL;
	ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 V_6;
	memset((&V_6), 0, sizeof(V_6));
	ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	String_t* G_B5_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0120_1;
			}
		}
		{
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_3 = (&__this->___token_2);
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3(L_3, NULL);
			IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5 = L_4->____baseLogUrl_5;
			bool L_6;
			L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
			if (L_6)
			{
				goto IL_0034_1;
			}
		}
		{
			IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* L_7 = V_1;
			NullCheck(L_7);
			String_t* L_8 = L_7->____baseLogUrl_5;
			G_B5_0 = L_8;
			goto IL_0039_1;
		}

IL_0034_1:
		{
			G_B5_0 = _stringLiteral69B5C482F992C91543F99142A06B06404AD2EA29;
		}

IL_0039_1:
		{
			V_3 = G_B5_0;
			il2cpp_codegen_runtime_class_init_inline(AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
			String_t* L_9;
			L_9 = AppCenterLog_get_LogTag_m4A23B83F7546FD8257D50CB94AA58159AD410A74_inline(NULL);
			String_t* L_10 = V_3;
			String_t* L_11;
			L_11 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralD1D91A54A9D205529046FE855F06CA9F29886FCE, L_10, _stringLiteral5146662D3D422BB788AFE1C140592E0D626FAC67, NULL);
			AppCenterLog_Verbose_m496FA6FB6D137210518A8D5640776B89442CAA94(L_9, L_11, NULL);
			IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* L_12 = V_1;
			String_t* L_13 = __this->___appSecret_4;
			Guid_t L_14 = __this->___installId_5;
			NullCheck(L_12);
			RuntimeObject* L_15;
			L_15 = IngestionHttp_CreateHeaders_m3554DD03200F865F90963DE0031EA226F3AC2A52(L_12, L_13, L_14, NULL);
			V_4 = L_15;
			String_t* L_16;
			L_16 = AppCenterLog_get_LogTag_m4A23B83F7546FD8257D50CB94AA58159AD410A74_inline(NULL);
			String_t* L_17 = __this->___appSecret_4;
			String_t* L_18;
			L_18 = IngestionHttp_GetRedactedAppSecret_mA8C7F30920F4B6D189C93EB39F59B52C3F3DE1E5(L_17, NULL);
			Guid_t L_19 = __this->___installId_5;
			Guid_t L_20 = L_19;
			RuntimeObject* L_21 = Box(Guid_t_il2cpp_TypeInfo_var, &L_20);
			String_t* L_22;
			L_22 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A, _stringLiteral0608E262A79695944F27DA7EFE397D991672D664, L_21, NULL);
			String_t* L_23;
			L_23 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral48218C8D51899E77266A7C390992D9F6E5EB8B0A, L_18, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_22, NULL);
			AppCenterLog_Verbose_m496FA6FB6D137210518A8D5640776B89442CAA94(L_16, L_23, NULL);
			IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* L_24 = V_1;
			RuntimeObject* L_25 = __this->___logs_6;
			NullCheck(L_24);
			String_t* L_26;
			L_26 = IngestionHttp_CreateLogsContent_m24FAF650F6D388799D107FFC676BAB579B3FFB0A(L_24, L_25, NULL);
			V_5 = L_26;
			String_t* L_27;
			L_27 = AppCenterLog_get_LogTag_m4A23B83F7546FD8257D50CB94AA58159AD410A74_inline(NULL);
			String_t* L_28 = V_5;
			AppCenterLog_Verbose_m496FA6FB6D137210518A8D5640776B89442CAA94(L_27, L_28, NULL);
			IngestionHttp_tE4818A5516DF2D3D27C80DB79C9C4A77F81895F6* L_29 = V_1;
			NullCheck(L_29);
			RuntimeObject* L_30 = L_29->____httpNetwork_6;
			String_t* L_31 = V_3;
			String_t* L_32;
			L_32 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_31, _stringLiteralDCF6CF1CD99E83C31C5EB27488E6D6783FD8666C, NULL);
			RuntimeObject* L_33 = V_4;
			String_t* L_34 = V_5;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_35 = __this->___token_2;
			NullCheck(L_30);
			Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_36;
			L_36 = InterfaceFuncInvoker5< Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, String_t*, String_t*, RuntimeObject*, String_t*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* System.Threading.Tasks.Task`1<System.String> Microsoft.AppCenter.Ingestion.Http.IHttpNetworkAdapter::SendAsync(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.Threading.CancellationToken) */, IHttpNetworkAdapter_t922D04C876A68235FC8EA168F80908E50F12742E_il2cpp_TypeInfo_var, L_30, L_32, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, L_33, L_34, L_35);
			NullCheck(L_36);
			ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC L_37;
			L_37 = Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8(L_36, (bool)0, Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8_RuntimeMethod_var);
			V_7 = L_37;
			ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 L_38;
			L_38 = ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_inline((&V_7), ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_RuntimeMethod_var);
			V_6 = L_38;
			bool L_39;
			L_39 = ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1((&V_6), ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1_RuntimeMethod_var);
			if (L_39)
			{
				goto IL_013d_1;
			}
		}
		{
			int32_t L_40 = 0;
			V_0 = L_40;
			__this->___U3CU3E1__state_0 = L_40;
			ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 L_41 = V_6;
			__this->___U3CU3Eu__1_7 = L_41;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_42 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3_m5473A83C72D384F7BBC121D0BBA5E80DB094A9DB(L_42, (&V_6), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3_m5473A83C72D384F7BBC121D0BBA5E80DB094A9DB_RuntimeMethod_var);
			goto IL_0174;
		}

IL_0120_1:
		{
			ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 L_43 = __this->___U3CU3Eu__1_7;
			V_6 = L_43;
			ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5* L_44 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_44, sizeof(ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5));
			int32_t L_45 = (-1);
			V_0 = L_45;
			__this->___U3CU3E1__state_0 = L_45;
		}

IL_013d_1:
		{
			String_t* L_46;
			L_46 = ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8((&V_6), ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8_RuntimeMethod_var);
			V_2 = L_46;
			goto IL_0160;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0147;
		}
		throw e;
	}

CATCH_0147:
	{// begin catch(System.Exception)
		V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_47 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_48 = V_8;
		AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C(L_47, L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0174;
	}// end catch (depth: 1)

IL_0160:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_49 = (&__this->___U3CU3Et__builder_1);
		String_t* L_50 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E(L_49, L_50, AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var);
	}

IL_0174:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCallAsyncU3Ed__9_MoveNext_mC67AB500C50CDABFADE164C726B0E702FA3CC840_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3*>(__this + _offset);
	U3CCallAsyncU3Ed__9_MoveNext_mC67AB500C50CDABFADE164C726B0E702FA3CC840(_thisAdjusted, method);
}
// System.Void Microsoft.AppCenter.Ingestion.Http.IngestionHttp/<CallAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallAsyncU3Ed__9_SetStateMachine_mC962F22360BA8ED8FD275C3E07FAC25BA9B81FC8 (U3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCallAsyncU3Ed__9_SetStateMachine_mC962F22360BA8ED8FD275C3E07FAC25BA9B81FC8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCallAsyncU3Ed__9_tFFD1FE9653572CC79D3E9F038A89A1366867C1A3*>(__this + _offset);
	U3CCallAsyncU3Ed__9_SetStateMachine_mC962F22360BA8ED8FD275C3E07FAC25BA9B81FC8(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion::.ctor(Microsoft.AppCenter.Ingestion.IIngestion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryableIngestion__ctor_m46306DF1016F11FBCE416EEF4FA70A842EA0D80D (RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* __this, RuntimeObject* ___decoratedApi0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5DB2F37A92DF25F21D413B2FD5032AE166575E93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF6E6966F10E61B56845F7774B83ED8BD6E9FAF16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m1CACB6EA5206C77CFDE019023F5F3D5962A525C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m9BAF0642B14948F0C9FD481375A07EC439843694_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF4FE852EBF23BF32AA642F02C58B9F2FCED2DE13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_m35E103C2C949E6743F242D1C918B3B2A6A9D4D80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t98D32386B0EA0CFFDF2A6BA1238E13711A6ED628_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t98D32386B0EA0CFFDF2A6BA1238E13711A6ED628* V_0 = NULL;
	{
		Dictionary_2_tF6E6966F10E61B56845F7774B83ED8BD6E9FAF16* L_0 = (Dictionary_2_tF6E6966F10E61B56845F7774B83ED8BD6E9FAF16*)il2cpp_codegen_object_new(Dictionary_2_tF6E6966F10E61B56845F7774B83ED8BD6E9FAF16_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m5DB2F37A92DF25F21D413B2FD5032AE166575E93(L_0, Dictionary_2__ctor_m5DB2F37A92DF25F21D413B2FD5032AE166575E93_RuntimeMethod_var);
		__this->____calls_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____calls_2), (void*)L_0);
		RuntimeObject* L_1 = ___decoratedApi0;
		IngestionDecorator__ctor_m5A7B9CFCC5344C2843529028038860F47B140690(__this, L_1, NULL);
		U3CU3Ec__DisplayClass3_0_t98D32386B0EA0CFFDF2A6BA1238E13711A6ED628* L_2 = (U3CU3Ec__DisplayClass3_0_t98D32386B0EA0CFFDF2A6BA1238E13711A6ED628*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t98D32386B0EA0CFFDF2A6BA1238E13711A6ED628_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		U3CU3Ec__DisplayClass3_0__ctor_m217FDD00673465E62808640D841E5D8BA889F178(L_2, NULL);
		V_0 = L_2;
		U3CU3Ec__DisplayClass3_0_t98D32386B0EA0CFFDF2A6BA1238E13711A6ED628* L_3 = V_0;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_4 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_4, NULL);
		NullCheck(L_3);
		L_3->___random_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___random_0), (void*)L_4);
		il2cpp_codegen_runtime_class_init_inline(RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86_il2cpp_TypeInfo_var);
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_5 = ((RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86_StaticFields*)il2cpp_codegen_static_fields_for(RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86_il2cpp_TypeInfo_var))->___DefaultIntervals_1;
		U3CU3Ec__DisplayClass3_0_t98D32386B0EA0CFFDF2A6BA1238E13711A6ED628* L_6 = V_0;
		Func_2_tF4FE852EBF23BF32AA642F02C58B9F2FCED2DE13* L_7 = (Func_2_tF4FE852EBF23BF32AA642F02C58B9F2FCED2DE13*)il2cpp_codegen_object_new(Func_2_tF4FE852EBF23BF32AA642F02C58B9F2FCED2DE13_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_2__ctor_m1F49A7C3323CA613E9FF6BB1FED045E0D2BCA3B3(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_m35E103C2C949E6743F242D1C918B3B2A6A9D4D80_RuntimeMethod_var), NULL);
		RuntimeObject* L_8;
		L_8 = Enumerable_Select_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m1CACB6EA5206C77CFDE019023F5F3D5962A525C6((RuntimeObject*)L_5, L_7, Enumerable_Select_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m1CACB6EA5206C77CFDE019023F5F3D5962A525C6_RuntimeMethod_var);
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_9;
		L_9 = Enumerable_ToArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m9BAF0642B14948F0C9FD481375A07EC439843694(L_8, Enumerable_ToArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m9BAF0642B14948F0C9FD481375A07EC439843694_RuntimeMethod_var);
		__this->____retryIntervals_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____retryIntervals_3), (void*)L_9);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion::.ctor(Microsoft.AppCenter.Ingestion.IIngestion,System.TimeSpan[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryableIngestion__ctor_m53209B6C23424208A0CC96F70D6E28327D8AAAA2 (RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* __this, RuntimeObject* ___decoratedApi0, TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* ___retryIntervals1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5DB2F37A92DF25F21D413B2FD5032AE166575E93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF6E6966F10E61B56845F7774B83ED8BD6E9FAF16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* G_B2_0 = NULL;
	RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* G_B2_1 = NULL;
	TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* G_B1_0 = NULL;
	RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* G_B1_1 = NULL;
	{
		Dictionary_2_tF6E6966F10E61B56845F7774B83ED8BD6E9FAF16* L_0 = (Dictionary_2_tF6E6966F10E61B56845F7774B83ED8BD6E9FAF16*)il2cpp_codegen_object_new(Dictionary_2_tF6E6966F10E61B56845F7774B83ED8BD6E9FAF16_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m5DB2F37A92DF25F21D413B2FD5032AE166575E93(L_0, Dictionary_2__ctor_m5DB2F37A92DF25F21D413B2FD5032AE166575E93_RuntimeMethod_var);
		__this->____calls_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____calls_2), (void*)L_0);
		RuntimeObject* L_1 = ___decoratedApi0;
		IngestionDecorator__ctor_m5A7B9CFCC5344C2843529028038860F47B140690(__this, L_1, NULL);
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_2 = ___retryIntervals1;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = __this;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_0023;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral205C6801DE5F298B190ED6D3163ADCF0830786ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RetryableIngestion__ctor_m53209B6C23424208A0CC96F70D6E28327D8AAAA2_RuntimeMethod_var)));
	}

IL_0023:
	{
		NullCheck(G_B2_1);
		G_B2_1->____retryIntervals_3 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->____retryIntervals_3), (void*)G_B2_0);
		return;
	}
}
// System.Threading.Timer Microsoft.AppCenter.Ingestion.Http.RetryableIngestion::IntervalCall(System.Int32,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* RetryableIngestion_IntervalCall_mD426D9DE74BF263C5E6695A5C693BCBAE5759790 (RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* __this, int32_t ___retry0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CIntervalCallU3Eb__0_m45F7E4AA0127A5B0C384DE0B0D2A260F75759EA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t5D82049F904442EA70A5C18B185A6A06A9B0D5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DF2E61E73DABE2E270AEF265BB75BB035003DE3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		U3CU3Ec__DisplayClass5_0_t5D82049F904442EA70A5C18B185A6A06A9B0D5A5* L_0 = (U3CU3Ec__DisplayClass5_0_t5D82049F904442EA70A5C18B185A6A06A9B0D5A5*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t5D82049F904442EA70A5C18B185A6A06A9B0D5A5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m3B4DD7839DDFC776FAFA64A07D81153064769281(L_0, NULL);
		U3CU3Ec__DisplayClass5_0_t5D82049F904442EA70A5C18B185A6A06A9B0D5A5* L_1 = L_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___action1;
		NullCheck(L_1);
		L_1->___action_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___action_0), (void*)L_2);
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_3 = __this->____retryIntervals_3;
		int32_t L_4 = ___retry0;
		NullCheck(L_3);
		double L_5;
		L_5 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF(((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_4, 1))))), NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_5);
		il2cpp_codegen_runtime_class_init_inline(AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = AppCenterLog_get_LogTag_m4A23B83F7546FD8257D50CB94AA58159AD410A74_inline(NULL);
		int32_t L_7 = ___retry0;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral2DF2E61E73DABE2E270AEF265BB75BB035003DE3, L_9, L_12, NULL);
		AppCenterLog_Warn_m3FFB62B826353B1FDF29BE9769D5518B1AEA869C(L_6, L_13, NULL);
		TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD* L_14 = (TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD*)il2cpp_codegen_object_new(TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		TimerCallback__ctor_mDA748EAAD184861871872C3B672A848AEF2A1E4A(L_14, L_1, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CIntervalCallU3Eb__0_m45F7E4AA0127A5B0C384DE0B0D2A260F75759EA1_RuntimeMethod_var), NULL);
		int32_t L_15 = V_0;
		Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* L_16 = (Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00*)il2cpp_codegen_object_new(Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Timer__ctor_m0B758073AACDB1DC9F64E18F4036E3CDFFC8E970(L_16, L_14, NULL, L_15, (-1), NULL);
		return L_16;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion::RetryCall(Microsoft.AppCenter.Ingestion.ServiceCall,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryableIngestion_RetryCall_m1D05D6F72424C0B59C5B4A11E720E3F8EF30FA92 (RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* __this, ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* ___call0, int32_t ___retry1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CRetryCallU3Eb__0_mFB71D58D8D80DC156598A7CD8DA6B82BCE837691_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CRetryCallU3Eb__1_m4236537DD40C0C7CD59E2EFC0B327B397BDF5B7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285* L_0 = (U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0__ctor_mF53B4AAC17BD9AE9E0C0316F10E69E122A29E44E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285* L_1 = V_0;
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_2 = ___call0;
		NullCheck(L_1);
		L_1->___call_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___call_0), (void*)L_2);
		U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285* L_4 = V_0;
		int32_t L_5 = ___retry1;
		NullCheck(L_4);
		L_4->___retry_3 = L_5;
		U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285* L_6 = V_0;
		NullCheck(L_6);
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_7 = L_6->___call_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = ServiceCall_get_IsCanceled_mF008C0B6A01B10CC20CBD356ED488E7199B3E7BA(L_7, NULL);
		if (!L_8)
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285* L_9 = V_0;
		U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285* L_10 = V_0;
		NullCheck(L_10);
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_11 = L_10->___call_0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = ServiceCall_get_AppSecret_m2DDCA78121B81E8DAAE2AAEFD48EF5B9586F6BA8_inline(L_11, NULL);
		U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285* L_13 = V_0;
		NullCheck(L_13);
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_14 = L_13->___call_0;
		NullCheck(L_14);
		Guid_t L_15;
		L_15 = ServiceCall_get_InstallId_m524B190DB0C1F7D08A9A95BA76E5EE6DAE41A01E_inline(L_14, NULL);
		U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285* L_16 = V_0;
		NullCheck(L_16);
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_17 = L_16->___call_0;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = ServiceCall_get_Logs_m6D4C4D4BD45873D66ECD68D6216CF0214760E1A9_inline(L_17, NULL);
		RuntimeObject* L_19;
		L_19 = IngestionDecorator_Call_m62056680EA499AD35F210AE82FA8FF94055DFED2(__this, L_12, L_15, L_18, NULL);
		NullCheck(L_9);
		L_9->___result_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___result_1), (void*)L_19);
		U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285* L_20 = V_0;
		NullCheck(L_20);
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_21 = L_20->___call_0;
		U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285* L_22 = V_0;
		Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* L_23 = (Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6*)il2cpp_codegen_object_new(Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action_1__ctor_mB8D9FA7A9BE0E125095C3B3E5BEFB5D7404619BE(L_23, L_22, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CRetryCallU3Eb__0_mFB71D58D8D80DC156598A7CD8DA6B82BCE837691_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		ServiceCall_ContinueWith_mC2D657EC79A22E85E1269E18F5283DBC7DD5F1F0(L_21, L_23, NULL);
		U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285* L_24 = V_0;
		NullCheck(L_24);
		RuntimeObject* L_25 = L_24->___result_1;
		U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285* L_26 = V_0;
		Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* L_27 = (Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6*)il2cpp_codegen_object_new(Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action_1__ctor_mB8D9FA7A9BE0E125095C3B3E5BEFB5D7404619BE(L_27, L_26, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CRetryCallU3Eb__1_m4236537DD40C0C7CD59E2EFC0B327B397BDF5B7E_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< Action_1_t15990F0724529F8712EB8A36B7CB7388C771E0C6* >::Invoke(5 /* System.Void Microsoft.AppCenter.Ingestion.IServiceCall::ContinueWith(System.Action`1<Microsoft.AppCenter.Ingestion.IServiceCall>) */, IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var, L_25, L_27);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion::RetryCallContinuation(Microsoft.AppCenter.Ingestion.ServiceCall,Microsoft.AppCenter.Ingestion.IServiceCall,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryableIngestion_RetryCallContinuation_m3E8ABF8A88965ED30FA925B1EDFDF972DDA1A4CE (RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* __this, ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* ___call0, RuntimeObject* ___result1, int32_t ___retry2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC91A41F4A2AC2D3D20FF06B627796122AF989592_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CRetryCallContinuationU3Eb__0_m01F522B5D6147CE587D48CC611CF39423DDE5731_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE* V_0 = NULL;
	IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA* V_1 = NULL;
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	int32_t G_B8_0 = 0;
	{
		U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE* L_0 = (U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass7_0__ctor_m2F449B332115C8B8FB63A89DB8558D201CAEC511(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE* L_2 = V_0;
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_3 = ___call0;
		NullCheck(L_2);
		L_2->___call_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___call_1), (void*)L_3);
		U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE* L_4 = V_0;
		int32_t L_5 = ___retry2;
		NullCheck(L_4);
		L_4->___retry_2 = L_5;
		U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE* L_6 = V_0;
		NullCheck(L_6);
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_7 = L_6->___call_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = ServiceCall_get_IsCanceled_mF008C0B6A01B10CC20CBD356ED488E7199B3E7BA(L_7, NULL);
		if (!L_8)
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		RuntimeObject* L_9 = ___result1;
		NullCheck(L_9);
		bool L_10;
		L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.AppCenter.Ingestion.IServiceCall::get_IsCanceled() */, IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var, L_9);
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE* L_11 = V_0;
		NullCheck(L_11);
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_12 = L_11->___call_1;
		NullCheck(L_12);
		ServiceCall_Cancel_m3E010F03B685313B1BBEFD6A3CC6C50187FA9AA2(L_12, NULL);
		return;
	}

IL_003d:
	{
		RuntimeObject* L_13 = ___result1;
		NullCheck(L_13);
		bool L_14;
		L_14 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Microsoft.AppCenter.Ingestion.IServiceCall::get_IsFaulted() */, IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var, L_13);
		if (!L_14)
		{
			goto IL_00d1;
		}
	}
	{
		RuntimeObject* L_15 = ___result1;
		NullCheck(L_15);
		Exception_t* L_16;
		L_16 = InterfaceFuncInvoker0< Exception_t* >::Invoke(4 /* System.Exception Microsoft.AppCenter.Ingestion.IServiceCall::get_Exception() */, IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var, L_15);
		V_1 = ((IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA*)IsInstClass((RuntimeObject*)L_16, IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA_il2cpp_TypeInfo_var));
		IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA* L_17 = V_1;
		if (!L_17)
		{
			goto IL_005f;
		}
	}
	{
		IngestionException_t50B62C4DE643BFF6FC5831A724796A9F5C40FEDA* L_18 = V_1;
		NullCheck(L_18);
		bool L_19;
		L_19 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Microsoft.AppCenter.Ingestion.IngestionException::get_IsRecoverable() */, L_18);
		G_B8_0 = ((int32_t)(L_19));
		goto IL_0060;
	}

IL_005f:
	{
		G_B8_0 = 0;
	}

IL_0060:
	{
		if (!G_B8_0)
		{
			goto IL_0074;
		}
	}
	{
		U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->___retry_2;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_22 = __this->____retryIntervals_3;
		NullCheck(L_22);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1))) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0086;
		}
	}

IL_0074:
	{
		U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE* L_23 = V_0;
		NullCheck(L_23);
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_24 = L_23->___call_1;
		RuntimeObject* L_25 = ___result1;
		NullCheck(L_25);
		Exception_t* L_26;
		L_26 = InterfaceFuncInvoker0< Exception_t* >::Invoke(4 /* System.Exception Microsoft.AppCenter.Ingestion.IServiceCall::get_Exception() */, IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_24);
		ServiceCall_SetException_mE0EB108581A7CF084B3E2DF9B59423543EE1EE54(L_24, L_26, NULL);
		return;
	}

IL_0086:
	{
		U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = L_27->___retry_2;
		U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE* L_29 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_30 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_30, L_29, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CRetryCallContinuationU3Eb__0_m01F522B5D6147CE587D48CC611CF39423DDE5731_RuntimeMethod_var), NULL);
		Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* L_31;
		L_31 = RetryableIngestion_IntervalCall_mD426D9DE74BF263C5E6695A5C693BCBAE5759790(__this, L_28, L_30, NULL);
		V_2 = L_31;
		RuntimeObject* L_32 = __this->____calls_2;
		V_3 = L_32;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c5:
			{// begin finally (depth: 1)
				{
					bool L_33 = V_4;
					if (!L_33)
					{
						goto IL_00cf;
					}
				}
				{
					RuntimeObject* L_34 = V_3;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_34, NULL);
				}

IL_00cf:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_35 = V_3;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_35, (&V_4), NULL);
			RuntimeObject* L_36 = __this->____calls_2;
			U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE* L_37 = V_0;
			NullCheck(L_37);
			ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_38 = L_37->___call_1;
			Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* L_39 = V_2;
			NullCheck(L_36);
			InterfaceActionInvoker2< ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D*, Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>::Add(TKey,TValue) */, IDictionary_2_tC91A41F4A2AC2D3D20FF06B627796122AF989592_il2cpp_TypeInfo_var, L_36, L_38, L_39);
			goto IL_00d0;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d0:
	{
		return;
	}

IL_00d1:
	{
		U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE* L_40 = V_0;
		NullCheck(L_40);
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_41 = L_40->___call_1;
		RuntimeObject* L_42 = ___result1;
		NullCheck(L_42);
		String_t* L_43;
		L_43 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Microsoft.AppCenter.Ingestion.IServiceCall::get_Result() */, IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var, L_42);
		NullCheck(L_41);
		ServiceCall_SetResult_m9B59DF998BF6786119C0490316D28F0B7E936D88(L_41, L_43, NULL);
		return;
	}
}
// Microsoft.AppCenter.Ingestion.IServiceCall Microsoft.AppCenter.Ingestion.Http.RetryableIngestion::Call(System.String,System.Guid,System.Collections.Generic.IList`1<Microsoft.AppCenter.Ingestion.Models.Log>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RetryableIngestion_Call_m570F4F8E19556DD596E27A9371182C3A89DE232E (RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* __this, String_t* ___appSecret0, Guid_t ___installId1, RuntimeObject* ___logs2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* V_0 = NULL;
	{
		String_t* L_0 = ___appSecret0;
		Guid_t L_1 = ___installId1;
		RuntimeObject* L_2 = ___logs2;
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_3 = (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D*)il2cpp_codegen_object_new(ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ServiceCall__ctor_m8A352388C214EB2A5859C63DF4816FFC6C6EF4CF(L_3, L_0, L_1, L_2, NULL);
		V_0 = L_3;
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_4 = V_0;
		RetryableIngestion_RetryCall_m1D05D6F72424C0B59C5B4A11E720E3F8EF30FA92(__this, L_4, 0, NULL);
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_5 = V_0;
		return L_5;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryableIngestion_Close_m7163043E6A6E872600994E1ED5A3461084F5D755 (RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* __this, const RuntimeMethod* method) 
{
	{
		RetryableIngestion_CancelAllCalls_m26F23C75B28A1255BA6C138B7D6ECFD93E4D24E0(__this, NULL);
		IngestionDecorator_Close_m094AC924905E4170E1620A006228184B7572D83A(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryableIngestion_Dispose_m5161DFDECC1E57415B8E82DF21AFAED71DBFF218 (RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* __this, const RuntimeMethod* method) 
{
	{
		RetryableIngestion_CancelAllCalls_m26F23C75B28A1255BA6C138B7D6ECFD93E4D24E0(__this, NULL);
		IngestionDecorator_Dispose_mC1F90990FB8FCBED2202AF7D60F7207D51483FAE(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion::CancelAllCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryableIngestion_CancelAllCalls_m26F23C75B28A1255BA6C138B7D6ECFD93E4D24E0 (RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisKeyValuePair_2_tB29ECA52B7B5116B1B8BEE9839440B852F86E651_TisServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D_m57DC7B8DA4D36B1F7EBF75401E9CF4842D1BE14E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D_mBE49109AB9E55633783C064A19F6E380587160DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t6BBE2A46DEE55390A48A23CDCC5222AD63F5FF8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t34ADF4E4D8642D4A0DF9A59730ED94DD5BBD0408_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC91A41F4A2AC2D3D20FF06B627796122AF989592_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t07CC59C6D34DC1E722725C38281CD25B003389A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tA3E51B391F7C6BFE30CF1028D179344618F8640D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t33C586567D256608FCFB51E45779D71DA4E834FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tC123493C536203F953613BA163ECF81D729F8758_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCancelAllCallsU3Eb__11_0_mF203030FDBB53356B5C6D6D2DAD128FC3DA8A895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Func_2_t6BBE2A46DEE55390A48A23CDCC5222AD63F5FF8B* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Func_2_t6BBE2A46DEE55390A48A23CDCC5222AD63F5FF8B* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____calls_2;
		V_1 = L_0;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0092:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_2;
					if (!L_1)
					{
						goto IL_009b;
					}
				}
				{
					RuntimeObject* L_2 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_009b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_2), NULL);
				RuntimeObject* L_4 = __this->____calls_2;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>>::get_Count() */, ICollection_1_t34ADF4E4D8642D4A0DF9A59730ED94DD5BBD0408_il2cpp_TypeInfo_var, L_4);
				if (L_5)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_00c9;
			}

IL_0023_1:
			{
				RuntimeObject* L_6 = __this->____calls_2;
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D_il2cpp_TypeInfo_var);
				Func_2_t6BBE2A46DEE55390A48A23CDCC5222AD63F5FF8B* L_7 = ((U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1;
				Func_2_t6BBE2A46DEE55390A48A23CDCC5222AD63F5FF8B* L_8 = L_7;
				G_B4_0 = L_8;
				G_B4_1 = L_6;
				if (L_8)
				{
					G_B5_0 = L_8;
					G_B5_1 = L_6;
					goto IL_0048_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D_il2cpp_TypeInfo_var);
				U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D* L_9 = ((U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Func_2_t6BBE2A46DEE55390A48A23CDCC5222AD63F5FF8B* L_10 = (Func_2_t6BBE2A46DEE55390A48A23CDCC5222AD63F5FF8B*)il2cpp_codegen_object_new(Func_2_t6BBE2A46DEE55390A48A23CDCC5222AD63F5FF8B_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				Func_2__ctor_m7A76652BD942562D9823B4D0B51B5BF2CAEAF5C6(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3CCancelAllCallsU3Eb__11_0_mF203030FDBB53356B5C6D6D2DAD128FC3DA8A895_RuntimeMethod_var), NULL);
				Func_2_t6BBE2A46DEE55390A48A23CDCC5222AD63F5FF8B* L_11 = L_10;
				((U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1), (void*)L_11);
				G_B5_0 = L_11;
				G_B5_1 = G_B4_1;
			}

IL_0048_1:
			{
				RuntimeObject* L_12;
				L_12 = Enumerable_Select_TisKeyValuePair_2_tB29ECA52B7B5116B1B8BEE9839440B852F86E651_TisServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D_m57DC7B8DA4D36B1F7EBF75401E9CF4842D1BE14E(G_B5_1, G_B5_0, Enumerable_Select_TisKeyValuePair_2_tB29ECA52B7B5116B1B8BEE9839440B852F86E651_TisServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D_m57DC7B8DA4D36B1F7EBF75401E9CF4842D1BE14E_RuntimeMethod_var);
				List_1_t26EFD06DD0A732E4AFCEB795F11B01216DD118A4* L_13;
				L_13 = Enumerable_ToList_TisServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D_mBE49109AB9E55633783C064A19F6E380587160DF(L_12, Enumerable_ToList_TisServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D_mBE49109AB9E55633783C064A19F6E380587160DF_RuntimeMethod_var);
				V_0 = L_13;
				RuntimeObject* L_14 = __this->____calls_2;
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>::get_Values() */, IDictionary_2_tC91A41F4A2AC2D3D20FF06B627796122AF989592_il2cpp_TypeInfo_var, L_14);
				NullCheck(L_15);
				RuntimeObject* L_16;
				L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Threading.Timer>::GetEnumerator() */, IEnumerable_1_tA3E51B391F7C6BFE30CF1028D179344618F8640D_il2cpp_TypeInfo_var, L_15);
				V_3 = L_16;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_007b_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_17 = V_3;
							if (!L_17)
							{
								goto IL_0084_1;
							}
						}
						{
							RuntimeObject* L_18 = V_3;
							NullCheck(L_18);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
						}

IL_0084_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0071_2;
					}

IL_0066_2:
					{
						RuntimeObject* L_19 = V_3;
						NullCheck(L_19);
						Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* L_20;
						L_20 = InterfaceFuncInvoker0< Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Threading.Timer>::get_Current() */, IEnumerator_1_tC123493C536203F953613BA163ECF81D729F8758_il2cpp_TypeInfo_var, L_19);
						NullCheck(L_20);
						Timer_Dispose_m75A06B0748FE7958C296A5E39849A0FB6EA03C86(L_20, NULL);
					}

IL_0071_2:
					{
						RuntimeObject* L_21 = V_3;
						NullCheck(L_21);
						bool L_22;
						L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_21);
						if (L_22)
						{
							goto IL_0066_2;
						}
					}
					{
						goto IL_0085_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0085_1:
			{
				RuntimeObject* L_23 = __this->____calls_2;
				NullCheck(L_23);
				InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>>::Clear() */, ICollection_1_t34ADF4E4D8642D4A0DF9A59730ED94DD5BBD0408_il2cpp_TypeInfo_var, L_23);
				goto IL_009c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009c:
	{
		RuntimeObject* L_24 = V_0;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Microsoft.AppCenter.Ingestion.ServiceCall>::GetEnumerator() */, IEnumerable_1_t07CC59C6D34DC1E722725C38281CD25B003389A3_il2cpp_TypeInfo_var, L_24);
		V_4 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00bd:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_26 = V_4;
					if (!L_26)
					{
						goto IL_00c8;
					}
				}
				{
					RuntimeObject* L_27 = V_4;
					NullCheck(L_27);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
				}

IL_00c8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b2_1;
			}

IL_00a6_1:
			{
				RuntimeObject* L_28 = V_4;
				NullCheck(L_28);
				ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_29;
				L_29 = InterfaceFuncInvoker0< ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Microsoft.AppCenter.Ingestion.ServiceCall>::get_Current() */, IEnumerator_1_t33C586567D256608FCFB51E45779D71DA4E834FE_il2cpp_TypeInfo_var, L_28);
				NullCheck(L_29);
				ServiceCall_Cancel_m3E010F03B685313B1BBEFD6A3CC6C50187FA9AA2(L_29, NULL);
			}

IL_00b2_1:
			{
				RuntimeObject* L_30 = V_4;
				NullCheck(L_30);
				bool L_31;
				L_31 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_30);
				if (L_31)
				{
					goto IL_00a6_1;
				}
			}
			{
				goto IL_00c9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c9:
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryableIngestion__cctor_m8D87309F2FF1E34072733648454592A7DD49B0E3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_0 = (TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)(TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)SZArrayNew(TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var, (uint32_t)3);
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = TimeSpan_FromSeconds_mE585CC8180040ED064DC8B6546E6C94A129BFFC5((10.0), NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A)L_2);
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_3 = L_1;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = TimeSpan_FromSeconds_mE585CC8180040ED064DC8B6546E6C94A129BFFC5((30.0), NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A)L_4);
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_5 = L_3;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_6;
		L_6 = TimeSpan_FromMinutes_m6A205525E41E41D13637359BA49AC7F3B23F714E((20.0), NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A)L_6);
		((RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86_StaticFields*)il2cpp_codegen_static_fields_for(RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86_il2cpp_TypeInfo_var))->___DefaultIntervals_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86_StaticFields*)il2cpp_codegen_static_fields_for(RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86_il2cpp_TypeInfo_var))->___DefaultIntervals_1), (void*)L_5);
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
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m217FDD00673465E62808640D841E5D8BA889F178 (U3CU3Ec__DisplayClass3_0_t98D32386B0EA0CFFDF2A6BA1238E13711A6ED628* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.TimeSpan Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass3_0::<.ctor>b__0(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_m35E103C2C949E6743F242D1C918B3B2A6A9D4D80 (U3CU3Ec__DisplayClass3_0_t98D32386B0EA0CFFDF2A6BA1238E13711A6ED628* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___defaultInterval0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		double L_0;
		L_0 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&___defaultInterval0), NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)(L_0/(2.0))));
		int32_t L_1 = V_0;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = __this->___random_0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(7 /* System.Int32 System.Random::Next(System.Int32) */, L_2, L_3);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_4));
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_6;
		L_6 = TimeSpan_FromMilliseconds_m95DA1C64A7D3111F8451D932CD0F94D608B1EC54(((double)L_5), NULL);
		return L_6;
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
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m3B4DD7839DDFC776FAFA64A07D81153064769281 (U3CU3Ec__DisplayClass5_0_t5D82049F904442EA70A5C18B185A6A06A9B0D5A5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass5_0::<IntervalCall>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CIntervalCallU3Eb__0_m45F7E4AA0127A5B0C384DE0B0D2A260F75759EA1 (U3CU3Ec__DisplayClass5_0_t5D82049F904442EA70A5C18B185A6A06A9B0D5A5* __this, RuntimeObject* ___state0, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___action_0;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
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
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mF53B4AAC17BD9AE9E0C0316F10E69E122A29E44E (U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass6_0::<RetryCall>b__0(Microsoft.AppCenter.Ingestion.IServiceCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CRetryCallU3Eb__0_mFB71D58D8D80DC156598A7CD8DA6B82BCE837691 (U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285* __this, RuntimeObject* ____0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_0 = __this->___call_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = ServiceCall_get_IsCanceled_mF008C0B6A01B10CC20CBD356ED488E7199B3E7BA(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_2 = __this->___result_1;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.AppCenter.Ingestion.IServiceCall::get_IsCanceled() */, IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var, L_2);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_4 = __this->___result_1;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(6 /* System.Void Microsoft.AppCenter.Ingestion.IServiceCall::Cancel() */, IServiceCall_tDC746A69E1E7F0CCBCE471BD6A5F9C6CB57A6088_il2cpp_TypeInfo_var, L_4);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass6_0::<RetryCall>b__1(Microsoft.AppCenter.Ingestion.IServiceCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CRetryCallU3Eb__1_m4236537DD40C0C7CD59E2EFC0B327B397BDF5B7E (U3CU3Ec__DisplayClass6_0_t82FEF1424C755196088B6CF689819D6C35DD6285* __this, RuntimeObject* ____0, const RuntimeMethod* method) 
{
	{
		RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* L_0 = __this->___U3CU3E4__this_2;
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_1 = __this->___call_0;
		RuntimeObject* L_2 = __this->___result_1;
		int32_t L_3 = __this->___retry_3;
		NullCheck(L_0);
		RetryableIngestion_RetryCallContinuation_m3E8ABF8A88965ED30FA925B1EDFDF972DDA1A4CE(L_0, L_1, L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
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
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m2F449B332115C8B8FB63A89DB8558D201CAEC511 (U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c__DisplayClass7_0::<RetryCallContinuation>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CRetryCallContinuationU3Eb__0_m01F522B5D6147CE587D48CC611CF39423DDE5731 (U3CU3Ec__DisplayClass7_0_tFA704413B82237CAAFCFF634277ADB1FD99F01AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC91A41F4A2AC2D3D20FF06B627796122AF989592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->____calls_2;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				}

IL_003b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_4, (&V_1), NULL);
				RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* L_5 = __this->___U3CU3E4__this_0;
				NullCheck(L_5);
				RuntimeObject* L_6 = L_5->____calls_2;
				ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_7 = __this->___call_1;
				NullCheck(L_6);
				bool L_8;
				L_8 = InterfaceFuncInvoker1< bool, ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>::Remove(TKey) */, IDictionary_2_tC91A41F4A2AC2D3D20FF06B627796122AF989592_il2cpp_TypeInfo_var, L_6, L_7);
				if (L_8)
				{
					goto IL_0030_1;
				}
			}
			{
				goto IL_0053;
			}

IL_0030_1:
			{
				goto IL_003c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		RetryableIngestion_t475DD9CF246F9D5D80AD3344DCB71C6F07895D86* L_9 = __this->___U3CU3E4__this_0;
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_10 = __this->___call_1;
		int32_t L_11 = __this->___retry_2;
		NullCheck(L_9);
		RetryableIngestion_RetryCall_m1D05D6F72424C0B59C5B4A11E720E3F8EF30FA92(L_9, L_10, L_11, NULL);
	}

IL_0053:
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
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFBD6AD64BAF3403E54D49B4EED6F1B58C46F38A7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D* L_0 = (U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D*)il2cpp_codegen_object_new(U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m0B7EC62C317AA68A0EE367B51FC63CD2A5321439(L_0, NULL);
		((U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0B7EC62C317AA68A0EE367B51FC63CD2A5321439 (U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.AppCenter.Ingestion.ServiceCall Microsoft.AppCenter.Ingestion.Http.RetryableIngestion/<>c::<CancelAllCalls>b__11_0(System.Collections.Generic.KeyValuePair`2<Microsoft.AppCenter.Ingestion.ServiceCall,System.Threading.Timer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* U3CU3Ec_U3CCancelAllCallsU3Eb__11_0_mF203030FDBB53356B5C6D6D2DAD128FC3DA8A895 (U3CU3Ec_tC14332A0BCB5A96F95222CF24266C83F850CC20D* __this, KeyValuePair_2_tB29ECA52B7B5116B1B8BEE9839440B852F86E651 ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m8FB77AD62AEE27727E7D5C067E307DDB739F8405_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* L_0;
		L_0 = KeyValuePair_2_get_Key_m8FB77AD62AEE27727E7D5C067E307DDB739F8405_inline((&___i0), KeyValuePair_2_get_Key_m8FB77AD62AEE27727E7D5C067E307DDB739F8405_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* ServiceCall_get_Exception_m029A679D68FEB51EDFC4C483B88212CFF8F68F46_inline (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->___U3CExceptionU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ServiceCall_get_IsCompleted_mDAAE68D9056F1450144411C8C2A587B4E49F45C9_inline (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsCompletedU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServiceCall_set_IsCompleted_mBB766E67DAF0D7F7D3366A5DB5DACFDED551E964_inline (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServiceCall_set_Result_m500B0356F352254A765BDE7760D26A01B852EA92_inline (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CResultU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServiceCall_set_Exception_mE085E786C80C0C82A970A7ED2833E131FA5F3399_inline (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, Exception_t* ___value0, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = ___value0;
		__this->___U3CExceptionU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExceptionU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StartServiceLog_set_Services_mEA5F99E46599ABD29F874CF420FFADDCF849D020_inline (StartServiceLog_t7395E5583F8EE57EB2FC14008CB24A990475234B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CServicesU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServicesU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* StartServiceLog_get_Services_mD297C7CF0F266CE38E585F0315D2B061A52D4507_inline (StartServiceLog_t7395E5583F8EE57EB2FC14008CB24A990475234B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CServicesU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_SdkName_mAEE2D89E6F9925D293A2A6B8F7BD00E4A577710E_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CSdkNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSdkNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_SdkVersion_mEF60A7D5E795FAB7A76CA1D3B7CAC1263145E738_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CSdkVersionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSdkVersionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_WrapperSdkVersion_m541EABE005F436D5082B13970398C833CA316454_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CWrapperSdkVersionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWrapperSdkVersionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_WrapperSdkName_m5A8FE1E793E2B2E4F2AA0668127CDF4632AA0E87_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CWrapperSdkNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWrapperSdkNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_Model_m0D8C9743E1B4304C8753AB52C263A29E4C2B4006_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CModelU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CModelU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_OemName_mC2DF112C46BB82F0442B7B24810B48F2D120FDD3_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3COemNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COemNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_OsName_m3708A3408CAD0DD9F40EAB5A8E6FB36F89F34E3E_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3COsNameU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COsNameU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_OsVersion_mEC4CDCD7DB47D16510C56E670303B9AAD743FC3A_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3COsVersionU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COsVersionU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_OsBuild_m778DB9F89D63EE1A042FCB131B18214DE71077A5_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3COsBuildU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COsBuildU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_OsApiLevel_m28DC8D9FEC49918F11916C35D20F091D12615BB8_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___value0;
		__this->___U3COsApiLevelU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_Locale_m97E69C3A8F77013359F9FBF74CFA5BCB87875E94_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CLocaleU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLocaleU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_TimeZoneOffset_mD048F1F3150A8FD76F0083CF76506C30AE622B90_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CTimeZoneOffsetU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_ScreenSize_mB1DC823CD354F05F38615763E7A2509792CF1F2F_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CScreenSizeU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CScreenSizeU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_AppVersion_mEC02EBF356393A2A46B874D5DDFFA2B56EAEADD5_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAppVersionU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAppVersionU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_CarrierName_m911D4F0360F37BFD0614EF4BB5BB72434753CC99_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CCarrierNameU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCarrierNameU3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_CarrierCountry_mECE558BE8F62ED93BBE357F4F8DEB235348F7376_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CCarrierCountryU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCarrierCountryU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_AppBuild_m99BA217EA93A1FD8841A8C7DAA84E8C7FAD5B4BA_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAppBuildU3Ek__BackingField_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAppBuildU3Ek__BackingField_16), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_AppNamespace_mD3A302B2EF7AD04609C784FEF1C30C2F0F1E27CE_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CAppNamespaceU3Ek__BackingField_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAppNamespaceU3Ek__BackingField_17), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_LiveUpdateReleaseLabel_m163C680D432C0DAE633F1FE187F794182F9E5FE4_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CLiveUpdateReleaseLabelU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLiveUpdateReleaseLabelU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_LiveUpdateDeploymentKey_m7E0EF2D6FC2503BBB8F49BF72677B6A9F87AEBEF_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CLiveUpdateDeploymentKeyU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLiveUpdateDeploymentKeyU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_LiveUpdatePackageHash_mBA5B2AF7634ACB32B9751839C86E58E0648BB0E2_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CLiveUpdatePackageHashU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLiveUpdatePackageHashU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Device_set_WrapperRuntimeVersion_m536B55177953C6C3BDE6848469F9C114FD416BBE_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CWrapperRuntimeVersionU3Ek__BackingField_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWrapperRuntimeVersionU3Ek__BackingField_21), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Device_get_SdkName_m61EA3126F54F0A96A3BF3B31BF853A25650064E4_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSdkNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Device_get_SdkVersion_mA2A1B16637F535C08E72F06CD29411A57DEAED21_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSdkVersionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Device_get_OsName_m453943CE18EF57FFA858034D7765C05511CB4D8D_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3COsNameU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Device_get_OsVersion_m1FCFDAE6C4D62C612962FF8D76F17663231D0752_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3COsVersionU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Device_get_Locale_mB239F951904366698F8F69911A206E61BD5CCA51_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CLocaleU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Device_get_AppVersion_mEA1A4785A9F83341AC7504472BC6E608DCB6DB75_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAppVersionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Device_get_AppBuild_m2122264D6A01D62B228AEE89C57F9A52456CBEF5_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAppBuildU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Device_get_TimeZoneOffset_m3992117DA557A325832BB1AB23844BFD0E2303C9_inline (Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTimeZoneOffsetU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Log_set_Timestamp_mA5BB9F65895F5E91AECACB6C433ECC4C20D5F63E_inline (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___value0, const RuntimeMethod* method) 
{
	{
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = ___value0;
		__this->___U3CTimestampU3Ek__BackingField_0 = L_0;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Log_set_UserId_m85FE28C1033CF36C37E42CACE479850B85D97643_inline (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CUserIdU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIdU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Log_set_Device_m4EC2F2FD10BF9985EE7EAF70012913B7CE45F35B_inline (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* ___value0, const RuntimeMethod* method) 
{
	{
		Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* L_0 = ___value0;
		__this->___U3CDeviceU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDeviceU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* Log_get_Device_mD82076B7A498A9A358644DE800320D13CF8605DC_inline (Log_t716EF1A690F81BB19494869650F9161B1B60E74A* __this, const RuntimeMethod* method) 
{
	{
		Device_tE79786F301018A0E03FDCA514BC2EEE4D3C5D005* L_0 = __this->___U3CDeviceU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogContainer_set_Logs_m1D4B7C9F7A8B52FB22D79A72407711763A46829D_inline (LogContainer_tBCB89E6BB0DBE4E8EB7FC504CBCDFE546A8EE33D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CLogsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLogsU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LogContainer_get_Logs_m17AEABAEC28233674902AB7D7E02D90E0C1AE565_inline (LogContainer_tBCB89E6BB0DBE4E8EB7FC504CBCDFE546A8EE33D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CLogsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogWithProperties_set_Properties_mE869B50E3B86676E05C54D3FD90C1FBF13659D06_inline (LogWithProperties_t26F7CE0BED8320D2D8DA53E3E6F9DF267140CC53* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JsonContainerAttribute_get_Id_m29622512E031394994ECAB5AE0E26444D5EAA733_inline (JsonContainerAttribute_t84168DEA2B41EB84D4BF6C3AF04D6075F4CEB1C7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonSerializerSettings_get_Converters_mB7EE43E74FA48980B6C0976D7A2160B2174C8FCA_inline (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CConvertersU3Ek__BackingField_45;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* NetworkStateAdapter_get_IsNetworkAvailable_mA8752A57DD85AE477D3D2ED6682A9F4E29280DDE_inline (NetworkStateAdapter_t162CDFD808FB548577B4DECD58028CAC271CAD8B* __this, const RuntimeMethod* method) 
{
	{
		IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* L_0 = __this->___U3CIsNetworkAvailableU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IsNetworkAvailableDelegate_Invoke_m0D79327FF89CC5944048CFC5879572B060A33140_inline (IsNetworkAvailableDelegate_tC44C0F7DF1279630D9F86F50061DECC4C0502094* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AppCenterLog_get_LogTag_m4A23B83F7546FD8257D50CB94AA58159AD410A74_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var);
		String_t* L_0 = ((AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_StaticFields*)il2cpp_codegen_static_fields_for(AppCenterLog_tDFEC2D43DE63F24C925A807B7AC246194B16E96D_il2cpp_TypeInfo_var))->___U3CLogTagU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HttpIngestionException_get_StatusCode_m30C6870FEC2EDA6277086CC35EA448EFD6141087_inline (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStatusCodeU3Ek__BackingField_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IngestionDecorator_get_DecoratedApi_m75F50A4CE3791E162C2CA56FD99AB50F47AD3CF5_inline (IngestionDecorator_tFB755D94DE686939DD91160456B8D33547F61857* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CDecoratedApiU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpRequestMessage_set_Content_m522F62E997874DA5A3F77BD4DD7A1C7CA2629DC9_inline (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* __this, HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* ___value0, const RuntimeMethod* method) 
{
	{
		HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_0 = ___value0;
		__this->___U3CContentU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContentU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* HttpRequestMessage_get_Content_m263E0A8B60C6D617144203073CA853A473FA860E_inline (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* __this, const RuntimeMethod* method) 
{
	{
		HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_0 = __this->___U3CContentU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) 
{
	{
		HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_0 = __this->___U3CContentU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HttpResponseMessage_get_StatusCode_m63BE26E4C79137B35F3066C6BA6A5FF5F3D16AAA_inline (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___statusCode_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* HttpRequestMessage_get_Method_m1E2C8323C43F6E09513C58777F2B0D9CD0D2627B_inline (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* __this, const RuntimeMethod* method) 
{
	{
		HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* L_0 = __this->___method_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpIngestionException_set_Method_m6B66DB19362950E74BEDEAF0687500E136BF9015_inline (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CMethodU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* HttpRequestMessage_get_RequestUri_mB71FD84AC5D3AAD3D9E3BA0FB827691F52E235A5_inline (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* __this, const RuntimeMethod* method) 
{
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = __this->___uri_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpIngestionException_set_RequestUri_m82521B9D0A00DA0300DBF991D6C9C32A7559475E_inline (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) 
{
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___value0;
		__this->___U3CRequestUriU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRequestUriU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpIngestionException_set_StatusCode_m6F638292B39FC49BF12F0F4687E5C5F9EB366BFA_inline (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CStatusCodeU3Ek__BackingField_22 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpIngestionException_set_RequestContent_mBA06BA201ECCB28A5EB181B46DD1C6A1CF5F8325_inline (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CRequestContentU3Ek__BackingField_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRequestContentU3Ek__BackingField_21), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpIngestionException_set_ResponseContent_m0104916227934F9C78AE4DBF49AA056A47DC0D8F_inline (HttpIngestionException_t7378A5FA474BE9ED157904FDAAE2829222306EFB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CResponseContentU3Ek__BackingField_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResponseContentU3Ek__BackingField_23), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Exception_get_HResult_mBA9CD3C01C2F0C68DFA6ED7824F7371D7E1A4163_inline (Exception_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____HResult_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServiceCall_get_AppSecret_m2DDCA78121B81E8DAAE2AAEFD48EF5B9586F6BA8_inline (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAppSecretU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t ServiceCall_get_InstallId_m524B190DB0C1F7D08A9A95BA76E5EE6DAE41A01E_inline (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___U3CInstallIdU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ServiceCall_get_Logs_m6D4C4D4BD45873D66ECD68D6216CF0214760E1A9_inline (ServiceCall_tEE0238637C9CEBEC114FA42B350E9FDB26AA4F8D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CLogsU3Ek__BackingField_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->____innerException_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline (ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 L_0 = (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2)__this->___m_configuredTaskAwaiter_0;
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
