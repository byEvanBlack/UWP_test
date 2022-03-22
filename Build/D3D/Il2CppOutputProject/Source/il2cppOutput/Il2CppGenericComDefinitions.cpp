#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Windows.Graphics.Display.DisplayInformation
struct DisplayInformation_tA3C16F881CB97C79173FCDF788268AC47A05794E;
// Windows.Graphics.Display.IDisplayInformationStatics
struct IDisplayInformationStatics_tAD130708BC7CD99614730A0528A27023D7A07A04;
// Windows.ApplicationModel.LeavingBackgroundEventArgs
struct LeavingBackgroundEventArgs_t04CEB47F7783EF035FA543E7F570E8C5428945E1;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Windows.ApplicationModel.SuspendingEventArgs
struct SuspendingEventArgs_tD52B367DECB8B493C7B8BE814840B9B8F815216B;
// Windows.ApplicationModel.Core.UnhandledErrorDetectedEventArgs
struct UnhandledErrorDetectedEventArgs_t553D526D636C68DEB224F111162978710A2A61E9;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct IDisplayInformation_tB4E7BF810A3D086124E68E2B97D0203D6E811123;
struct ILeavingBackgroundEventArgs_tEFE302B95E618D58B3C93C6E075ADE7327291CF0;
struct ISuspendingEventArgs_t8E4CFA4D6949DE178A90043E7DB9A2BFBFD1F248;
struct ITypedEventHandler_2_t2C45579084BDEC56FB4D9CAFDB4F6A90579E47CE_ComCallableWrapper;
struct IUnhandledErrorDetectedEventArgs_tFEC0F7FE2428632C6FCE01CB5C5B9143F26184A2;
struct IUnhandledError_tF95A2F7520431D7CF109F7D7BBF89210D88E0BDC;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Graphics.Display.IDisplayInformationStatics
struct NOVTABLE IDisplayInformationStatics_tAD130708BC7CD99614730A0528A27023D7A07A04 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDisplayInformationStatics_GetForCurrentView_m846B4CA78EFE9F6126AA7D3F191B7767237835F4(IDisplayInformation_tB4E7BF810A3D086124E68E2B97D0203D6E811123** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDisplayInformationStatics_U24__Stripped0_get_AutoRotationPreferences_mDD80A4A0DF5FBD797B7306D25123367E540936B7() = 0;
	virtual il2cpp_hresult_t STDCALL IDisplayInformationStatics_U24__Stripped1_put_AutoRotationPreferences_m1F96E404721421A2C93B899FCA26B522590A2CC1() = 0;
	virtual il2cpp_hresult_t STDCALL IDisplayInformationStatics_U24__Stripped2_add_DisplayContentsInvalidated_m1FAA5D92A8C0D6FCDF7935AB8086ED241B83FBCA() = 0;
	virtual il2cpp_hresult_t STDCALL IDisplayInformationStatics_U24__Stripped3_remove_DisplayContentsInvalidated_mDE2C4E3CC3C7088C5CACC8780849429373B7FD18() = 0;
};
// Windows.ApplicationModel.ILeavingBackgroundEventArgs
struct NOVTABLE ILeavingBackgroundEventArgs_tEFE302B95E618D58B3C93C6E075ADE7327291CF0 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ILeavingBackgroundEventArgs_U24__Stripped0_GetDeferral_m408288908CCE5B9540B07B6DC71CB452CB57E670() = 0;
};
// Windows.ApplicationModel.ISuspendingEventArgs
struct NOVTABLE ISuspendingEventArgs_t8E4CFA4D6949DE178A90043E7DB9A2BFBFD1F248 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISuspendingEventArgs_U24__Stripped0_get_SuspendingOperation_mBD42A366FA10ECC7CF416DE722CD41960AC67D96() = 0;
};
// Windows.ApplicationModel.Core.IUnhandledErrorDetectedEventArgs
struct NOVTABLE IUnhandledErrorDetectedEventArgs_tFEC0F7FE2428632C6FCE01CB5C5B9143F26184A2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUnhandledErrorDetectedEventArgs_get_UnhandledError_mE97A061B29B1806CF6E64B914FB98C0CD83F5381(IUnhandledError_tF95A2F7520431D7CF109F7D7BBF89210D88E0BDC** comReturnValue) = 0;
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

// Windows.Graphics.Display.DisplayInformation
struct DisplayInformation_tA3C16F881CB97C79173FCDF788268AC47A05794E  : public Il2CppComObject
{
};

struct DisplayInformation_tA3C16F881CB97C79173FCDF788268AC47A05794E_StaticFields
{
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Graphics.Display.IDisplayInformationStatics
	IDisplayInformationStatics_tAD130708BC7CD99614730A0528A27023D7A07A04* ____idisplayInformationStatics_tAD130708BC7CD99614730A0528A27023D7A07A04;
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Graphics.Display.DisplayInformation"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IDisplayInformationStatics_tAD130708BC7CD99614730A0528A27023D7A07A04* get_____idisplayInformationStatics_tAD130708BC7CD99614730A0528A27023D7A07A04()
	{
		IDisplayInformationStatics_tAD130708BC7CD99614730A0528A27023D7A07A04* returnValue = ____idisplayInformationStatics_tAD130708BC7CD99614730A0528A27023D7A07A04;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDisplayInformationStatics_tAD130708BC7CD99614730A0528A27023D7A07A04::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____idisplayInformationStatics_tAD130708BC7CD99614730A0528A27023D7A07A04), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idisplayInformationStatics_tAD130708BC7CD99614730A0528A27023D7A07A04;
			}
		}
		return returnValue;
	}
};

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B 
{
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;
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

// Windows.ApplicationModel.LeavingBackgroundEventArgs
struct LeavingBackgroundEventArgs_t04CEB47F7783EF035FA543E7F570E8C5428945E1  : public Il2CppComObject
{
};

// Windows.ApplicationModel.SuspendingEventArgs
struct SuspendingEventArgs_tD52B367DECB8B493C7B8BE814840B9B8F815216B  : public Il2CppComObject
{
};

// Windows.ApplicationModel.Core.UnhandledErrorDetectedEventArgs
struct UnhandledErrorDetectedEventArgs_t553D526D636C68DEB224F111162978710A2A61E9  : public Il2CppComObject
{
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
// Windows.Graphics.Display.IDisplayInformation
struct NOVTABLE IDisplayInformation_tB4E7BF810A3D086124E68E2B97D0203D6E811123 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDisplayInformation_U24__Stripped0_get_CurrentOrientation_m9854E8065430FF6DF7EFB55C4721C19D50BC8FC7() = 0;
	virtual il2cpp_hresult_t STDCALL IDisplayInformation_U24__Stripped1_get_NativeOrientation_m1EFDA766F59A5488EDE475AD2EB905DBF3B5E4A2() = 0;
	virtual il2cpp_hresult_t STDCALL IDisplayInformation_add_OrientationChanged_mFC0426723E4CBDE8A97BB53774F666D734B630A2(ITypedEventHandler_2_t2C45579084BDEC56FB4D9CAFDB4F6A90579E47CE_ComCallableWrapper* ___handler0, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDisplayInformation_remove_OrientationChanged_mC4AF68D33CAD3F9C14E82340122C0A16AA03608A(EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___token0) = 0;
	virtual il2cpp_hresult_t STDCALL IDisplayInformation_U24__Stripped2_get_ResolutionScale_m81ED381ABED074D14EE43AD8DE2F9784755A2D51() = 0;
	virtual il2cpp_hresult_t STDCALL IDisplayInformation_U24__Stripped3_get_LogicalDpi_m5439C4A807CC77F927FFDF07FC5D1F618E89B93A() = 0;
	virtual il2cpp_hresult_t STDCALL IDisplayInformation_U24__Stripped4_get_RawDpiX_mD7DEC46BF4E1CB720959A3D9444CB2E2A2CF2889() = 0;
	virtual il2cpp_hresult_t STDCALL IDisplayInformation_U24__Stripped5_get_RawDpiY_m793D85ED3E85A40BFEAF2680AC1AD732BB6CA18A() = 0;
	virtual il2cpp_hresult_t STDCALL IDisplayInformation_add_DpiChanged_mD442E02CAA6BCC3BB55A23F653FA492927B8FD68(ITypedEventHandler_2_t2C45579084BDEC56FB4D9CAFDB4F6A90579E47CE_ComCallableWrapper* ___handler0, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDisplayInformation_remove_DpiChanged_m5F5B88ED4B93FA2DBD18443B8590E538FF55798E(EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___token0) = 0;
	virtual il2cpp_hresult_t STDCALL IDisplayInformation_U24__Stripped6_get_StereoEnabled_mED5B9B37AC5443990327B87E2DBA86A6D473CE4C() = 0;
	virtual il2cpp_hresult_t STDCALL IDisplayInformation_U24__Stripped7_add_StereoEnabledChanged_m4A51572ECC47BB708C9F2462D1DE9CD267865214() = 0;
	virtual il2cpp_hresult_t STDCALL IDisplayInformation_U24__Stripped8_remove_StereoEnabledChanged_m6B0615B1AD75A73F1EEA96B3BEDC9A95A58A5CE8() = 0;
	virtual il2cpp_hresult_t STDCALL IDisplayInformation_U24__Stripped9_GetColorProfileAsync_m839C0E4C67DBF77D81ED63ECE1A7BF64008368D0() = 0;
	virtual il2cpp_hresult_t STDCALL IDisplayInformation_add_ColorProfileChanged_m2B45E243DF962EFED840C259DFD1D95E718B258B(ITypedEventHandler_2_t2C45579084BDEC56FB4D9CAFDB4F6A90579E47CE_ComCallableWrapper* ___handler0, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDisplayInformation_remove_ColorProfileChanged_mB3F1BC453F87D31A8DB2A30EBFE8A996FE425E03(EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___token0) = 0;
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

// System.EventHandler`1<Windows.ApplicationModel.LeavingBackgroundEventArgs>
struct EventHandler_1_t5882BA7A4D4AFF0EA4EB4B346919B2F27CC6B1E4  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for System.EventHandler`1<Windows.ApplicationModel.LeavingBackgroundEventArgs>
struct IEventHandler_1_t5882BA7A4D4AFF0EA4EB4B346919B2F27CC6B1E4_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, ILeavingBackgroundEventArgs_tEFE302B95E618D58B3C93C6E075ADE7327291CF0* ___e1) = 0;
};


// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for System.EventHandler`1<System.Object>
struct IEventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___e1) = 0;
};


// System.EventHandler`1<Windows.ApplicationModel.SuspendingEventArgs>
struct EventHandler_1_tB1CA659FCA4084BB132D1956DD2FC06D366F156B  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for System.EventHandler`1<Windows.ApplicationModel.SuspendingEventArgs>
struct IEventHandler_1_tB1CA659FCA4084BB132D1956DD2FC06D366F156B_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, ISuspendingEventArgs_t8E4CFA4D6949DE178A90043E7DB9A2BFBFD1F248* ___e1) = 0;
};


// System.EventHandler`1<Windows.ApplicationModel.Core.UnhandledErrorDetectedEventArgs>
struct EventHandler_1_t63E82E606FAFC495A59453BB45FF7FD3E72EF882  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for System.EventHandler`1<Windows.ApplicationModel.Core.UnhandledErrorDetectedEventArgs>
struct IEventHandler_1_t63E82E606FAFC495A59453BB45FF7FD3E72EF882_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, IUnhandledErrorDetectedEventArgs_tFEC0F7FE2428632C6FCE01CB5C5B9143F26184A2* ___e1) = 0;
};


// Windows.Foundation.EventHandler`1<Windows.ApplicationModel.LeavingBackgroundEventArgs>
struct EventHandler_1_tCC5F660B7EE113576EC902D315679EC21E90816F  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.EventHandler`1<Windows.ApplicationModel.LeavingBackgroundEventArgs>
struct IEventHandler_1_tCC5F660B7EE113576EC902D315679EC21E90816F_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, ILeavingBackgroundEventArgs_tEFE302B95E618D58B3C93C6E075ADE7327291CF0* ___args1) = 0;
};


// Windows.Foundation.EventHandler`1<System.Object>
struct EventHandler_1_t140E1D20D33985BC84B47E79E30DAD9DFA833BE2  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.EventHandler`1<System.Object>
struct IEventHandler_1_t140E1D20D33985BC84B47E79E30DAD9DFA833BE2_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___args1) = 0;
};


// Windows.Foundation.EventHandler`1<Windows.ApplicationModel.SuspendingEventArgs>
struct EventHandler_1_t2458288DBD3540C0CE70E411C6A20C0D5B4C088E  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.EventHandler`1<Windows.ApplicationModel.SuspendingEventArgs>
struct IEventHandler_1_t2458288DBD3540C0CE70E411C6A20C0D5B4C088E_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, ISuspendingEventArgs_t8E4CFA4D6949DE178A90043E7DB9A2BFBFD1F248* ___args1) = 0;
};


// Windows.Foundation.EventHandler`1<Windows.ApplicationModel.Core.UnhandledErrorDetectedEventArgs>
struct EventHandler_1_t16C7931056C5E27C87C6483C5D3745A6FA58FBE6  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.EventHandler`1<Windows.ApplicationModel.Core.UnhandledErrorDetectedEventArgs>
struct IEventHandler_1_t16C7931056C5E27C87C6483C5D3745A6FA58FBE6_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, IUnhandledErrorDetectedEventArgs_tFEC0F7FE2428632C6FCE01CB5C5B9143F26184A2* ___args1) = 0;
};


// Windows.Foundation.TypedEventHandler`2<Windows.Graphics.Display.DisplayInformation,System.Object>
struct TypedEventHandler_2_t2C45579084BDEC56FB4D9CAFDB4F6A90579E47CE  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<Windows.Graphics.Display.DisplayInformation,System.Object>
struct ITypedEventHandler_2_t2C45579084BDEC56FB4D9CAFDB4F6A90579E47CE_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IDisplayInformation_tB4E7BF810A3D086124E68E2B97D0203D6E811123* ___sender0, Il2CppIInspectable* ___args1) = 0;
};


// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct TypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct ITypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___args1) = 0;
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



const Il2CppGuid IEventHandler_1_t5882BA7A4D4AFF0EA4EB4B346919B2F27CC6B1E4_ComCallableWrapper::IID = { 0x9b6171c2, 0xabb2, 0x5194, 0xaf, 0xc0, 0xce, 0xf1, 0x67, 0xc4, 0x24, 0xeb };
// Native invoker for System.EventHandler`1<Windows.ApplicationModel.LeavingBackgroundEventArgs>
IL2CPP_EXTERN_C  void EventHandler_1_Invoke_mA96D4149C7C1E467C515BD34360CFC2D9A4F0973_NativeInvoker (Il2CppComObject* __this, RuntimeObject* ___sender0, LeavingBackgroundEventArgs_t04CEB47F7783EF035FA543E7F570E8C5428945E1* ___e1, const RuntimeMethod* method)
{
	IEventHandler_1_t5882BA7A4D4AFF0EA4EB4B346919B2F27CC6B1E4_ComCallableWrapper* ____eventHandler_1_t5882BA7A4D4AFF0EA4EB4B346919B2F27CC6B1E4 = il2cpp_codegen_com_query_interface<IEventHandler_1_t5882BA7A4D4AFF0EA4EB4B346919B2F27CC6B1E4_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	Il2CppIInspectable* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___sender0))
		{
			____sender0_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___sender0));
			(____sender0_marshaled)->AddRef();
		}
		else
		{
			____sender0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___sender0);
		}
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___e1' to native representation
	ILeavingBackgroundEventArgs_tEFE302B95E618D58B3C93C6E075ADE7327291CF0* ____e1_marshaled = NULL;
	if (___e1 != NULL)
	{
		____e1_marshaled = il2cpp_codegen_com_query_interface<ILeavingBackgroundEventArgs_tEFE302B95E618D58B3C93C6E075ADE7327291CF0>(static_cast<Il2CppComObject*>(___e1));
	}
	else
	{
		____e1_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____eventHandler_1_t5882BA7A4D4AFF0EA4EB4B346919B2F27CC6B1E4->Invoke(____sender0_marshaled, ____e1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___sender0' native representation
	if (____sender0_marshaled != NULL)
	{
		(____sender0_marshaled)->Release();
		____sender0_marshaled = NULL;
	}

}
const Il2CppGuid IEventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746_ComCallableWrapper::IID = { 0xc50898f6, 0xc536, 0x5f47, 0x85, 0x83, 0x8b, 0x2c, 0x24, 0x38, 0xa1, 0x3b };
// Native invoker for System.EventHandler`1<System.Object>
IL2CPP_EXTERN_C  void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_NativeInvoker (Il2CppComObject* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method)
{
	IEventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746_ComCallableWrapper* ____eventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746 = il2cpp_codegen_com_query_interface<IEventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	Il2CppIInspectable* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___sender0))
		{
			____sender0_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___sender0));
			(____sender0_marshaled)->AddRef();
		}
		else
		{
			____sender0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___sender0);
		}
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___e1' to native representation
	Il2CppIInspectable* ____e1_marshaled = NULL;
	if (___e1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___e1))
		{
			____e1_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___e1));
			(____e1_marshaled)->AddRef();
		}
		else
		{
			____e1_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___e1);
		}
	}
	else
	{
		____e1_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____eventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746->Invoke(____sender0_marshaled, ____e1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___sender0' native representation
	if (____sender0_marshaled != NULL)
	{
		(____sender0_marshaled)->Release();
		____sender0_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___e1' native representation
	if (____e1_marshaled != NULL)
	{
		(____e1_marshaled)->Release();
		____e1_marshaled = NULL;
	}

}
const Il2CppGuid IEventHandler_1_tB1CA659FCA4084BB132D1956DD2FC06D366F156B_ComCallableWrapper::IID = { 0x338579bf, 0x1a35, 0x5cc4, 0xa6, 0x22, 0xa6, 0xf3, 0x84, 0xfd, 0x89, 0x2c };
// Native invoker for System.EventHandler`1<Windows.ApplicationModel.SuspendingEventArgs>
IL2CPP_EXTERN_C  void EventHandler_1_Invoke_mC6B65D7529121A2748B766E041659E479885BFD8_NativeInvoker (Il2CppComObject* __this, RuntimeObject* ___sender0, SuspendingEventArgs_tD52B367DECB8B493C7B8BE814840B9B8F815216B* ___e1, const RuntimeMethod* method)
{
	IEventHandler_1_tB1CA659FCA4084BB132D1956DD2FC06D366F156B_ComCallableWrapper* ____eventHandler_1_tB1CA659FCA4084BB132D1956DD2FC06D366F156B = il2cpp_codegen_com_query_interface<IEventHandler_1_tB1CA659FCA4084BB132D1956DD2FC06D366F156B_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	Il2CppIInspectable* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___sender0))
		{
			____sender0_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___sender0));
			(____sender0_marshaled)->AddRef();
		}
		else
		{
			____sender0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___sender0);
		}
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___e1' to native representation
	ISuspendingEventArgs_t8E4CFA4D6949DE178A90043E7DB9A2BFBFD1F248* ____e1_marshaled = NULL;
	if (___e1 != NULL)
	{
		____e1_marshaled = il2cpp_codegen_com_query_interface<ISuspendingEventArgs_t8E4CFA4D6949DE178A90043E7DB9A2BFBFD1F248>(static_cast<Il2CppComObject*>(___e1));
	}
	else
	{
		____e1_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____eventHandler_1_tB1CA659FCA4084BB132D1956DD2FC06D366F156B->Invoke(____sender0_marshaled, ____e1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___sender0' native representation
	if (____sender0_marshaled != NULL)
	{
		(____sender0_marshaled)->Release();
		____sender0_marshaled = NULL;
	}

}
const Il2CppGuid IEventHandler_1_t63E82E606FAFC495A59453BB45FF7FD3E72EF882_ComCallableWrapper::IID = { 0xf68bc421, 0x6b54, 0x559b, 0x9c, 0xdd, 0x48, 0x9a, 0xad, 0xb, 0xd4, 0x1d };
// Native invoker for System.EventHandler`1<Windows.ApplicationModel.Core.UnhandledErrorDetectedEventArgs>
IL2CPP_EXTERN_C  void EventHandler_1_Invoke_m73951CDAE092B7D38D3CA0E023C15E937DC9BB73_NativeInvoker (Il2CppComObject* __this, RuntimeObject* ___sender0, UnhandledErrorDetectedEventArgs_t553D526D636C68DEB224F111162978710A2A61E9* ___e1, const RuntimeMethod* method)
{
	IEventHandler_1_t63E82E606FAFC495A59453BB45FF7FD3E72EF882_ComCallableWrapper* ____eventHandler_1_t63E82E606FAFC495A59453BB45FF7FD3E72EF882 = il2cpp_codegen_com_query_interface<IEventHandler_1_t63E82E606FAFC495A59453BB45FF7FD3E72EF882_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	Il2CppIInspectable* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___sender0))
		{
			____sender0_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___sender0));
			(____sender0_marshaled)->AddRef();
		}
		else
		{
			____sender0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___sender0);
		}
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___e1' to native representation
	IUnhandledErrorDetectedEventArgs_tFEC0F7FE2428632C6FCE01CB5C5B9143F26184A2* ____e1_marshaled = NULL;
	if (___e1 != NULL)
	{
		____e1_marshaled = il2cpp_codegen_com_query_interface<IUnhandledErrorDetectedEventArgs_tFEC0F7FE2428632C6FCE01CB5C5B9143F26184A2>(static_cast<Il2CppComObject*>(___e1));
	}
	else
	{
		____e1_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____eventHandler_1_t63E82E606FAFC495A59453BB45FF7FD3E72EF882->Invoke(____sender0_marshaled, ____e1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___sender0' native representation
	if (____sender0_marshaled != NULL)
	{
		(____sender0_marshaled)->Release();
		____sender0_marshaled = NULL;
	}

}
const Il2CppGuid IEventHandler_1_tCC5F660B7EE113576EC902D315679EC21E90816F_ComCallableWrapper::IID = { 0x9b6171c2, 0xabb2, 0x5194, 0xaf, 0xc0, 0xce, 0xf1, 0x67, 0xc4, 0x24, 0xeb };
// Native invoker for Windows.Foundation.EventHandler`1<Windows.ApplicationModel.LeavingBackgroundEventArgs>
IL2CPP_EXTERN_C  void EventHandler_1_Invoke_m8E274B9B56F284F8ABCF1D56A474D491D5D996DA_NativeInvoker (Il2CppComObject* __this, RuntimeObject* ___sender0, LeavingBackgroundEventArgs_t04CEB47F7783EF035FA543E7F570E8C5428945E1* ___args1, const RuntimeMethod* method)
{
	IEventHandler_1_tCC5F660B7EE113576EC902D315679EC21E90816F_ComCallableWrapper* ____eventHandler_1_tCC5F660B7EE113576EC902D315679EC21E90816F = il2cpp_codegen_com_query_interface<IEventHandler_1_tCC5F660B7EE113576EC902D315679EC21E90816F_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	Il2CppIInspectable* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___sender0))
		{
			____sender0_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___sender0));
			(____sender0_marshaled)->AddRef();
		}
		else
		{
			____sender0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___sender0);
		}
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___args1' to native representation
	ILeavingBackgroundEventArgs_tEFE302B95E618D58B3C93C6E075ADE7327291CF0* ____args1_marshaled = NULL;
	if (___args1 != NULL)
	{
		____args1_marshaled = il2cpp_codegen_com_query_interface<ILeavingBackgroundEventArgs_tEFE302B95E618D58B3C93C6E075ADE7327291CF0>(static_cast<Il2CppComObject*>(___args1));
	}
	else
	{
		____args1_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____eventHandler_1_tCC5F660B7EE113576EC902D315679EC21E90816F->Invoke(____sender0_marshaled, ____args1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___sender0' native representation
	if (____sender0_marshaled != NULL)
	{
		(____sender0_marshaled)->Release();
		____sender0_marshaled = NULL;
	}

}
const Il2CppGuid IEventHandler_1_t140E1D20D33985BC84B47E79E30DAD9DFA833BE2_ComCallableWrapper::IID = { 0xc50898f6, 0xc536, 0x5f47, 0x85, 0x83, 0x8b, 0x2c, 0x24, 0x38, 0xa1, 0x3b };
// Native invoker for Windows.Foundation.EventHandler`1<System.Object>
IL2CPP_EXTERN_C  void EventHandler_1_Invoke_m26F831D890BF925224784AB3B4D062BFA7501B09_NativeInvoker (Il2CppComObject* __this, RuntimeObject* ___sender0, RuntimeObject* ___args1, const RuntimeMethod* method)
{
	IEventHandler_1_t140E1D20D33985BC84B47E79E30DAD9DFA833BE2_ComCallableWrapper* ____eventHandler_1_t140E1D20D33985BC84B47E79E30DAD9DFA833BE2 = il2cpp_codegen_com_query_interface<IEventHandler_1_t140E1D20D33985BC84B47E79E30DAD9DFA833BE2_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	Il2CppIInspectable* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___sender0))
		{
			____sender0_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___sender0));
			(____sender0_marshaled)->AddRef();
		}
		else
		{
			____sender0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___sender0);
		}
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___args1' to native representation
	Il2CppIInspectable* ____args1_marshaled = NULL;
	if (___args1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___args1))
		{
			____args1_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___args1));
			(____args1_marshaled)->AddRef();
		}
		else
		{
			____args1_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___args1);
		}
	}
	else
	{
		____args1_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____eventHandler_1_t140E1D20D33985BC84B47E79E30DAD9DFA833BE2->Invoke(____sender0_marshaled, ____args1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___sender0' native representation
	if (____sender0_marshaled != NULL)
	{
		(____sender0_marshaled)->Release();
		____sender0_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___args1' native representation
	if (____args1_marshaled != NULL)
	{
		(____args1_marshaled)->Release();
		____args1_marshaled = NULL;
	}

}
const Il2CppGuid IEventHandler_1_t2458288DBD3540C0CE70E411C6A20C0D5B4C088E_ComCallableWrapper::IID = { 0x338579bf, 0x1a35, 0x5cc4, 0xa6, 0x22, 0xa6, 0xf3, 0x84, 0xfd, 0x89, 0x2c };
// Native invoker for Windows.Foundation.EventHandler`1<Windows.ApplicationModel.SuspendingEventArgs>
IL2CPP_EXTERN_C  void EventHandler_1_Invoke_m36152F0C99CC0087B4CC07563098C1E8CDE0A6A1_NativeInvoker (Il2CppComObject* __this, RuntimeObject* ___sender0, SuspendingEventArgs_tD52B367DECB8B493C7B8BE814840B9B8F815216B* ___args1, const RuntimeMethod* method)
{
	IEventHandler_1_t2458288DBD3540C0CE70E411C6A20C0D5B4C088E_ComCallableWrapper* ____eventHandler_1_t2458288DBD3540C0CE70E411C6A20C0D5B4C088E = il2cpp_codegen_com_query_interface<IEventHandler_1_t2458288DBD3540C0CE70E411C6A20C0D5B4C088E_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	Il2CppIInspectable* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___sender0))
		{
			____sender0_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___sender0));
			(____sender0_marshaled)->AddRef();
		}
		else
		{
			____sender0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___sender0);
		}
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___args1' to native representation
	ISuspendingEventArgs_t8E4CFA4D6949DE178A90043E7DB9A2BFBFD1F248* ____args1_marshaled = NULL;
	if (___args1 != NULL)
	{
		____args1_marshaled = il2cpp_codegen_com_query_interface<ISuspendingEventArgs_t8E4CFA4D6949DE178A90043E7DB9A2BFBFD1F248>(static_cast<Il2CppComObject*>(___args1));
	}
	else
	{
		____args1_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____eventHandler_1_t2458288DBD3540C0CE70E411C6A20C0D5B4C088E->Invoke(____sender0_marshaled, ____args1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___sender0' native representation
	if (____sender0_marshaled != NULL)
	{
		(____sender0_marshaled)->Release();
		____sender0_marshaled = NULL;
	}

}
const Il2CppGuid IEventHandler_1_t16C7931056C5E27C87C6483C5D3745A6FA58FBE6_ComCallableWrapper::IID = { 0xf68bc421, 0x6b54, 0x559b, 0x9c, 0xdd, 0x48, 0x9a, 0xad, 0xb, 0xd4, 0x1d };
// Native invoker for Windows.Foundation.EventHandler`1<Windows.ApplicationModel.Core.UnhandledErrorDetectedEventArgs>
IL2CPP_EXTERN_C  void EventHandler_1_Invoke_mA9E81D0A873474ECE5DCAB5F0F8759DD08B99B87_NativeInvoker (Il2CppComObject* __this, RuntimeObject* ___sender0, UnhandledErrorDetectedEventArgs_t553D526D636C68DEB224F111162978710A2A61E9* ___args1, const RuntimeMethod* method)
{
	IEventHandler_1_t16C7931056C5E27C87C6483C5D3745A6FA58FBE6_ComCallableWrapper* ____eventHandler_1_t16C7931056C5E27C87C6483C5D3745A6FA58FBE6 = il2cpp_codegen_com_query_interface<IEventHandler_1_t16C7931056C5E27C87C6483C5D3745A6FA58FBE6_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	Il2CppIInspectable* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___sender0))
		{
			____sender0_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___sender0));
			(____sender0_marshaled)->AddRef();
		}
		else
		{
			____sender0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___sender0);
		}
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___args1' to native representation
	IUnhandledErrorDetectedEventArgs_tFEC0F7FE2428632C6FCE01CB5C5B9143F26184A2* ____args1_marshaled = NULL;
	if (___args1 != NULL)
	{
		____args1_marshaled = il2cpp_codegen_com_query_interface<IUnhandledErrorDetectedEventArgs_tFEC0F7FE2428632C6FCE01CB5C5B9143F26184A2>(static_cast<Il2CppComObject*>(___args1));
	}
	else
	{
		____args1_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____eventHandler_1_t16C7931056C5E27C87C6483C5D3745A6FA58FBE6->Invoke(____sender0_marshaled, ____args1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___sender0' native representation
	if (____sender0_marshaled != NULL)
	{
		(____sender0_marshaled)->Release();
		____sender0_marshaled = NULL;
	}

}
const Il2CppGuid ITypedEventHandler_2_t2C45579084BDEC56FB4D9CAFDB4F6A90579E47CE_ComCallableWrapper::IID = { 0x86c4f619, 0x67b6, 0x51c7, 0xb3, 0xd, 0xd8, 0xcf, 0x13, 0x62, 0x53, 0x27 };
// Native invoker for Windows.Foundation.TypedEventHandler`2<Windows.Graphics.Display.DisplayInformation,System.Object>
IL2CPP_EXTERN_C  void TypedEventHandler_2_Invoke_mC662044FD37B4157F90FB9984E58A115F6B9EB8B_NativeInvoker (Il2CppComObject* __this, DisplayInformation_tA3C16F881CB97C79173FCDF788268AC47A05794E* ___sender0, RuntimeObject* ___args1, const RuntimeMethod* method)
{
	ITypedEventHandler_2_t2C45579084BDEC56FB4D9CAFDB4F6A90579E47CE_ComCallableWrapper* ____typedEventHandler_2_t2C45579084BDEC56FB4D9CAFDB4F6A90579E47CE = il2cpp_codegen_com_query_interface<ITypedEventHandler_2_t2C45579084BDEC56FB4D9CAFDB4F6A90579E47CE_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	IDisplayInformation_tB4E7BF810A3D086124E68E2B97D0203D6E811123* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		____sender0_marshaled = il2cpp_codegen_com_query_interface<IDisplayInformation_tB4E7BF810A3D086124E68E2B97D0203D6E811123>(static_cast<Il2CppComObject*>(___sender0));
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___args1' to native representation
	Il2CppIInspectable* ____args1_marshaled = NULL;
	if (___args1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___args1))
		{
			____args1_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___args1));
			(____args1_marshaled)->AddRef();
		}
		else
		{
			____args1_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___args1);
		}
	}
	else
	{
		____args1_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____typedEventHandler_2_t2C45579084BDEC56FB4D9CAFDB4F6A90579E47CE->Invoke(____sender0_marshaled, ____args1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___args1' native representation
	if (____args1_marshaled != NULL)
	{
		(____args1_marshaled)->Release();
		____args1_marshaled = NULL;
	}

}
const Il2CppGuid ITypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83_ComCallableWrapper::IID = { 0xc7e65ce2, 0xfad5, 0x5e3b, 0x9c, 0x58, 0x18, 0x6c, 0xa8, 0xc1, 0xdd, 0x57 };
// Native invoker for Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
IL2CPP_EXTERN_C  void TypedEventHandler_2_Invoke_m21CBC8780368C07950C29A9155026BFC53770835_NativeInvoker (Il2CppComObject* __this, RuntimeObject* ___sender0, RuntimeObject* ___args1, const RuntimeMethod* method)
{
	ITypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83_ComCallableWrapper* ____typedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83 = il2cpp_codegen_com_query_interface<ITypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	Il2CppIInspectable* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___sender0))
		{
			____sender0_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___sender0));
			(____sender0_marshaled)->AddRef();
		}
		else
		{
			____sender0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___sender0);
		}
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___args1' to native representation
	Il2CppIInspectable* ____args1_marshaled = NULL;
	if (___args1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___args1))
		{
			____args1_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___args1));
			(____args1_marshaled)->AddRef();
		}
		else
		{
			____args1_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___args1);
		}
	}
	else
	{
		____args1_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____typedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83->Invoke(____sender0_marshaled, ____args1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___sender0' native representation
	if (____sender0_marshaled != NULL)
	{
		(____sender0_marshaled)->Release();
		____sender0_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___args1' native representation
	if (____args1_marshaled != NULL)
	{
		(____args1_marshaled)->Release();
		____args1_marshaled = NULL;
	}

}
