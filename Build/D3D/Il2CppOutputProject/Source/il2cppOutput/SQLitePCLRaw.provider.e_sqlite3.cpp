#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		void* params[5] = { &p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2, T3, T4, T5, T6>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		void* params[6] = { p1, &p2, &p3, &p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { &p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3, T4, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		R ret;
		void* params[6] = { &p1, &p2, &p3, &p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2, T3, T4, T5, T6>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		R ret;
		void* params[6] = { p1, &p2, &p3, &p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2, T3, T4, T5, T6, T7>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		R ret;
		void* params[7] = { p1, &p2, &p3, &p4, &p5, &p6, &p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Byte[],System.IDisposable>
struct ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522;
// System.Collections.Concurrent.ConcurrentDictionary`2<SQLitePCL.FuncName,System.IDisposable>
struct ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,SQLitePCL.sqlite3_stmt>
struct ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<SQLitePCL.hook_handles>
struct Func_1_t202B5DFEFBE5BA53985475F7441D184AE39ECE81;
// System.Func`4<System.IntPtr,System.IntPtr,System.Int32,System.Boolean>
struct Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083;
// System.Pinnable`1<System.Byte>
struct Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// SQLitePCL.sqlite3_value[]
struct sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// SQLitePCL.SQLite3Provider_e_sqlite3
struct SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// SQLitePCL.authorizer_hook_info
struct authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A;
// SQLitePCL.collation_hook_info
struct collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98;
// SQLitePCL.commit_hook_info
struct commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78;
// SQLitePCL.delegate_authorizer
struct delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933;
// SQLitePCL.delegate_collation
struct delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF;
// SQLitePCL.delegate_commit
struct delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A;
// SQLitePCL.delegate_exec
struct delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3;
// SQLitePCL.delegate_function_aggregate_final
struct delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0;
// SQLitePCL.delegate_function_aggregate_step
struct delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957;
// SQLitePCL.delegate_function_scalar
struct delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5;
// SQLitePCL.delegate_log
struct delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712;
// SQLitePCL.delegate_profile
struct delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779;
// SQLitePCL.delegate_progress
struct delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710;
// SQLitePCL.delegate_rollback
struct delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174;
// SQLitePCL.delegate_trace
struct delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172;
// SQLitePCL.delegate_update
struct delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80;
// SQLitePCL.exec_hook_info
struct exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8;
// SQLitePCL.function_hook_info
struct function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017;
// SQLitePCL.hook_handle
struct hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC;
// SQLitePCL.hook_handles
struct hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33;
// SQLitePCL.log_hook_info
struct log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116;
// SQLitePCL.profile_hook_info
struct profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34;
// SQLitePCL.progress_hook_info
struct progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641;
// SQLitePCL.rollback_hook_info
struct rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185;
// SQLitePCL.sqlite3
struct sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2;
// SQLitePCL.sqlite3_backup
struct sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30;
// SQLitePCL.sqlite3_blob
struct sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057;
// SQLitePCL.sqlite3_context
struct sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C;
// SQLitePCL.sqlite3_stmt
struct sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F;
// SQLitePCL.trace_hook_info
struct trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4;
// SQLitePCL.update_hook_info
struct update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968;
// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_agg_function_final
struct callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F;
// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_agg_function_step
struct callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED;
// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_authorizer
struct callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696;
// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_collation
struct callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED;
// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_commit
struct callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12;
// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_destroy
struct callback_destroy_t196CAA62B91CAB2FE7AFA98FA27B902DD949A351;
// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_exec
struct callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D;
// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_log
struct callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B;
// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_profile
struct callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4;
// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_progress_handler
struct callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2;
// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_rollback
struct callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7;
// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_scalar_function
struct callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054;
// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_trace
struct callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190;
// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_update
struct callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90;
// SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs/SQLiteDeleteDelegate
struct SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t202B5DFEFBE5BA53985475F7441D184AE39ECE81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1F080C0A268DCE50EA57CD766D6EA437363F3F75;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_m17D448297CDE6CAE9A5755BF9B7190F3DE66F6FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_op_Implicit_m0E04D2F291C8C5075A086E9A53AE241DEA3E9E38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SQLite3Provider_e_sqlite3_U3Cget_hooksU3Eb__3_0_m015E69D41B2E06DDB07F64B1232D53F350223B35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SQLite3Provider_e_sqlite3_agg_function_hook_bridge_final_impl_m38A0C82EC682F505A60E5DAA931251BFB6B1A6CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SQLite3Provider_e_sqlite3_agg_function_hook_bridge_step_impl_m61B6EEBDC2BDC5D21A894F365B62147344B95BD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SQLite3Provider_e_sqlite3_authorizer_hook_bridge_impl_mFEE6286FEF846AAED09B54ADDEFAF7C260256126_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SQLite3Provider_e_sqlite3_collation_hook_bridge_impl_m174901BF60BCC008A372B7D555A6A651B3715244_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SQLite3Provider_e_sqlite3_commit_hook_bridge_impl_m27B12FD7638DC52474BDE95D0CEAF6932C4D2F0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SQLite3Provider_e_sqlite3_exec_hook_bridge_m40C932368A5A7407A41481F05BBB284CBED7B1FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SQLite3Provider_e_sqlite3_log_hook_bridge_impl_mDAA0E7371A73EF6F8CA9663F984CF87F31D9AE53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SQLite3Provider_e_sqlite3_my_streq_m8739278305E4F8F0D3B3A0D51AD0A8AA3FE20EA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SQLite3Provider_e_sqlite3_profile_hook_bridge_impl_mFE69CDE3456BDAF86C4C8EB87D80EFBF68C8D8F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SQLite3Provider_e_sqlite3_progress_hook_bridge_impl_mF78097650158AC2EFF3D94AA7FD337A80DB09224_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SQLite3Provider_e_sqlite3_rollback_hook_bridge_impl_m4A6F1AF0D2E286BF4F593DA037D8BE7E77298A2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SQLite3Provider_e_sqlite3_scalar_function_hook_bridge_impl_m144A96182F913A873EA819562C6FBE535AE06A2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SQLite3Provider_e_sqlite3_trace_hook_bridge_impl_mBA113452171FE3793351D5CCDB0F21ECD313B42A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SQLite3Provider_e_sqlite3_update_hook_bridge_impl_m9E0FE21036273B35DF48081ECD3A75E45E41B50F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_GetPinnableReference_m18012CFE616D70838138CAB962C3902722AD8686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_mECE334B94CE99314781C0D7DFD702221C4ABF7A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* sqlite3_GetOrCreateExtra_Tishook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33_m9D3A3879372BFE12DCDA4ABE6D83D1C197ECE27E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0D73DDDE60939F932DEB15FA30010059624B3BE5 
{
};

// System.Pinnable`1<System.Byte>
struct Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230  : public RuntimeObject
{
	// T System.Pinnable`1::Data
	uint8_t ___Data_0;
};
struct Il2CppArrayBounds;

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// SQLitePCL.SQLite3Provider_e_sqlite3
struct SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3  : public RuntimeObject
{
	// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_commit SQLitePCL.SQLite3Provider_e_sqlite3::commit_hook_bridge
	callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12* ___commit_hook_bridge_1;
	// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_scalar_function SQLitePCL.SQLite3Provider_e_sqlite3::scalar_function_hook_bridge
	callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054* ___scalar_function_hook_bridge_2;
	// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_log SQLitePCL.SQLite3Provider_e_sqlite3::log_hook_bridge
	callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B* ___log_hook_bridge_4;
	// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_agg_function_step SQLitePCL.SQLite3Provider_e_sqlite3::agg_function_hook_bridge_step
	callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED* ___agg_function_hook_bridge_step_5;
	// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_agg_function_final SQLitePCL.SQLite3Provider_e_sqlite3::agg_function_hook_bridge_final
	callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F* ___agg_function_hook_bridge_final_6;
	// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_collation SQLitePCL.SQLite3Provider_e_sqlite3::collation_hook_bridge
	callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED* ___collation_hook_bridge_7;
	// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_update SQLitePCL.SQLite3Provider_e_sqlite3::update_hook_bridge
	callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90* ___update_hook_bridge_8;
	// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_rollback SQLitePCL.SQLite3Provider_e_sqlite3::rollback_hook_bridge
	callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7* ___rollback_hook_bridge_9;
	// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_trace SQLitePCL.SQLite3Provider_e_sqlite3::trace_hook_bridge
	callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190* ___trace_hook_bridge_10;
	// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_profile SQLitePCL.SQLite3Provider_e_sqlite3::profile_hook_bridge
	callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4* ___profile_hook_bridge_11;
	// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_progress_handler SQLitePCL.SQLite3Provider_e_sqlite3::progress_hook_bridge
	callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2* ___progress_hook_bridge_12;
	// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_authorizer SQLitePCL.SQLite3Provider_e_sqlite3::authorizer_hook_bridge
	callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696* ___authorizer_hook_bridge_13;
};

struct SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3_StaticFields
{
	// System.IDisposable SQLitePCL.SQLite3Provider_e_sqlite3::disp_log_hook_handle
	RuntimeObject* ___disp_log_hook_handle_3;
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

// SQLitePCL.authorizer_hook_info
struct authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A  : public RuntimeObject
{
	// SQLitePCL.delegate_authorizer SQLitePCL.authorizer_hook_info::_func
	delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* ____func_0;
	// System.Object SQLitePCL.authorizer_hook_info::_user_data
	RuntimeObject* ____user_data_1;
};

// SQLitePCL.collation_hook_info
struct collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98  : public RuntimeObject
{
	// SQLitePCL.delegate_collation SQLitePCL.collation_hook_info::_func
	delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* ____func_0;
	// System.Object SQLitePCL.collation_hook_info::_user_data
	RuntimeObject* ____user_data_1;
};

// SQLitePCL.commit_hook_info
struct commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78  : public RuntimeObject
{
	// SQLitePCL.delegate_commit SQLitePCL.commit_hook_info::<_func>k__BackingField
	delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* ___U3C_funcU3Ek__BackingField_0;
	// System.Object SQLitePCL.commit_hook_info::<_user_data>k__BackingField
	RuntimeObject* ___U3C_user_dataU3Ek__BackingField_1;
};

// SQLitePCL.exec_hook_info
struct exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8  : public RuntimeObject
{
	// SQLitePCL.delegate_exec SQLitePCL.exec_hook_info::_func
	delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* ____func_0;
	// System.Object SQLitePCL.exec_hook_info::_user_data
	RuntimeObject* ____user_data_1;
};

// SQLitePCL.function_hook_info
struct function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017  : public RuntimeObject
{
	// SQLitePCL.delegate_function_scalar SQLitePCL.function_hook_info::_func_scalar
	delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* ____func_scalar_0;
	// SQLitePCL.delegate_function_aggregate_step SQLitePCL.function_hook_info::_func_step
	delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* ____func_step_1;
	// SQLitePCL.delegate_function_aggregate_final SQLitePCL.function_hook_info::_func_final
	delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* ____func_final_2;
	// System.Object SQLitePCL.function_hook_info::_user_data
	RuntimeObject* ____user_data_3;
};

// SQLitePCL.hook_handles
struct hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Byte[],System.IDisposable> SQLitePCL.hook_handles::collation
	ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522* ___collation_0;
	// System.Collections.Concurrent.ConcurrentDictionary`2<SQLitePCL.FuncName,System.IDisposable> SQLitePCL.hook_handles::scalar
	ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517* ___scalar_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<SQLitePCL.FuncName,System.IDisposable> SQLitePCL.hook_handles::agg
	ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517* ___agg_2;
	// System.IDisposable SQLitePCL.hook_handles::update
	RuntimeObject* ___update_3;
	// System.IDisposable SQLitePCL.hook_handles::rollback
	RuntimeObject* ___rollback_4;
	// System.IDisposable SQLitePCL.hook_handles::commit
	RuntimeObject* ___commit_5;
	// System.IDisposable SQLitePCL.hook_handles::trace
	RuntimeObject* ___trace_6;
	// System.IDisposable SQLitePCL.hook_handles::profile
	RuntimeObject* ___profile_7;
	// System.IDisposable SQLitePCL.hook_handles::progress
	RuntimeObject* ___progress_8;
	// System.IDisposable SQLitePCL.hook_handles::authorizer
	RuntimeObject* ___authorizer_9;
};

// SQLitePCL.log_hook_info
struct log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116  : public RuntimeObject
{
	// SQLitePCL.delegate_log SQLitePCL.log_hook_info::_func
	delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* ____func_0;
	// System.Object SQLitePCL.log_hook_info::_user_data
	RuntimeObject* ____user_data_1;
};

// SQLitePCL.profile_hook_info
struct profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34  : public RuntimeObject
{
	// SQLitePCL.delegate_profile SQLitePCL.profile_hook_info::_func
	delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* ____func_0;
	// System.Object SQLitePCL.profile_hook_info::_user_data
	RuntimeObject* ____user_data_1;
};

// SQLitePCL.progress_hook_info
struct progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641  : public RuntimeObject
{
	// SQLitePCL.delegate_progress SQLitePCL.progress_hook_info::_func
	delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* ____func_0;
	// System.Object SQLitePCL.progress_hook_info::_user_data
	RuntimeObject* ____user_data_1;
};

// SQLitePCL.rollback_hook_info
struct rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185  : public RuntimeObject
{
	// SQLitePCL.delegate_rollback SQLitePCL.rollback_hook_info::_func
	delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* ____func_0;
	// System.Object SQLitePCL.rollback_hook_info::_user_data
	RuntimeObject* ____user_data_1;
};

// SQLitePCL.trace_hook_info
struct trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4  : public RuntimeObject
{
	// SQLitePCL.delegate_trace SQLitePCL.trace_hook_info::_func
	delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* ____func_0;
	// System.Object SQLitePCL.trace_hook_info::_user_data
	RuntimeObject* ____user_data_1;
};

// SQLitePCL.update_hook_info
struct update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968  : public RuntimeObject
{
	// SQLitePCL.delegate_update SQLitePCL.update_hook_info::_func
	delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* ____func_0;
	// System.Object SQLitePCL.update_hook_info::_user_data
	RuntimeObject* ____user_data_1;
};

// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods
struct NativeMethods_tD0A40E17DD3EEDDE815AEFBF51F16F7A928E2A87  : public RuntimeObject
{
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A 
{
	// System.Pinnable`1<T> System.ReadOnlySpan`1::_pinnable
	Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230* ____pinnable_0;
	// System.IntPtr System.ReadOnlySpan`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_2;
};

// System.Span`1<System.Byte>
struct Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01 
{
	// System.Pinnable`1<T> System.Span`1::_pinnable
	Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230* ____pinnable_0;
	// System.IntPtr System.Span`1::_byteOffset
	intptr_t ____byteOffset_1;
	// System.Int32 System.Span`1::_length
	int32_t ____length_2;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs
struct sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801 
{
	// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs::iVersion
	int32_t ___iVersion_0;
	// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs::szOsFile
	int32_t ___szOsFile_1;
	// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs::mxPathname
	int32_t ___mxPathname_2;
	// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs::pNext
	intptr_t ___pNext_3;
	// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs::zName
	intptr_t ___zName_4;
	// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs::pAppData
	intptr_t ___pAppData_5;
	// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs::xOpen
	intptr_t ___xOpen_6;
	// SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs/SQLiteDeleteDelegate SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs::xDelete
	SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826* ___xDelete_7;
	// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs::xAccess
	intptr_t ___xAccess_8;
	// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs::xFullPathname
	intptr_t ___xFullPathname_9;
	// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs::xDlOpen
	intptr_t ___xDlOpen_10;
	// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs::xDlError
	intptr_t ___xDlError_11;
	// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs::xDlSym
	intptr_t ___xDlSym_12;
	// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs::xDlClose
	intptr_t ___xDlClose_13;
	// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs::xRandomness
	intptr_t ___xRandomness_14;
	// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs::xSleep
	intptr_t ___xSleep_15;
	// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs::xCurrentTime
	intptr_t ___xCurrentTime_16;
	// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs::xGetLastError
	intptr_t ___xGetLastError_17;
};
// Native definition for P/Invoke marshalling of SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs
struct sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801_marshaled_pinvoke
{
	int32_t ___iVersion_0;
	int32_t ___szOsFile_1;
	int32_t ___mxPathname_2;
	intptr_t ___pNext_3;
	intptr_t ___zName_4;
	intptr_t ___pAppData_5;
	intptr_t ___xOpen_6;
	Il2CppMethodPointer ___xDelete_7;
	intptr_t ___xAccess_8;
	intptr_t ___xFullPathname_9;
	intptr_t ___xDlOpen_10;
	intptr_t ___xDlError_11;
	intptr_t ___xDlSym_12;
	intptr_t ___xDlClose_13;
	intptr_t ___xRandomness_14;
	intptr_t ___xSleep_15;
	intptr_t ___xCurrentTime_16;
	intptr_t ___xGetLastError_17;
};
// Native definition for COM marshalling of SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs
struct sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801_marshaled_com
{
	int32_t ___iVersion_0;
	int32_t ___szOsFile_1;
	int32_t ___mxPathname_2;
	intptr_t ___pNext_3;
	intptr_t ___zName_4;
	intptr_t ___pAppData_5;
	intptr_t ___xOpen_6;
	Il2CppMethodPointer ___xDelete_7;
	intptr_t ___xAccess_8;
	intptr_t ___xFullPathname_9;
	intptr_t ___xDlOpen_10;
	intptr_t ___xDlError_11;
	intptr_t ___xDlSym_12;
	intptr_t ___xDlClose_13;
	intptr_t ___xRandomness_14;
	intptr_t ___xSleep_15;
	intptr_t ___xCurrentTime_16;
	intptr_t ___xGetLastError_17;
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

// SQLitePCL.SafeGCHandle
struct SafeGCHandle_tE8D8C107E75BFC0FAC19C271622895B407785D3E  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
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

// SQLitePCL.sqlite3
struct sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,SQLitePCL.sqlite3_stmt> SQLitePCL.sqlite3::_stmts
	ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476* ____stmts_6;
	// System.IDisposable SQLitePCL.sqlite3::extra
	RuntimeObject* ___extra_7;
};

// SQLitePCL.sqlite3_backup
struct sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
};

// SQLitePCL.sqlite3_blob
struct sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
};

// SQLitePCL.sqlite3_stmt
struct sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
	// SQLitePCL.sqlite3 SQLitePCL.sqlite3_stmt::_db
	sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ____db_6;
};

// SQLitePCL.utf8z
struct utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 
{
	// System.ReadOnlySpan`1<System.Byte> SQLitePCL.utf8z::sp
	ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___sp_0;
};
// Native definition for P/Invoke marshalling of SQLitePCL.utf8z
struct utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_marshaled_pinvoke
{
	ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___sp_0;
};
// Native definition for COM marshalling of SQLitePCL.utf8z
struct utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_marshaled_com
{
	ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___sp_0;
};

// System.Func`1<SQLitePCL.hook_handles>
struct Func_1_t202B5DFEFBE5BA53985475F7441D184AE39ECE81  : public MulticastDelegate_t
{
};

// System.Func`4<System.IntPtr,System.IntPtr,System.Int32,System.Boolean>
struct Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// SQLitePCL.delegate_authorizer
struct delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933  : public MulticastDelegate_t
{
};

// SQLitePCL.delegate_collation
struct delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF  : public MulticastDelegate_t
{
};

// SQLitePCL.delegate_commit
struct delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A  : public MulticastDelegate_t
{
};

// SQLitePCL.delegate_exec
struct delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3  : public MulticastDelegate_t
{
};

// SQLitePCL.delegate_function_aggregate_final
struct delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0  : public MulticastDelegate_t
{
};

// SQLitePCL.delegate_function_aggregate_step
struct delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957  : public MulticastDelegate_t
{
};

// SQLitePCL.delegate_function_scalar
struct delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5  : public MulticastDelegate_t
{
};

// SQLitePCL.delegate_log
struct delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712  : public MulticastDelegate_t
{
};

// SQLitePCL.delegate_profile
struct delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779  : public MulticastDelegate_t
{
};

// SQLitePCL.delegate_progress
struct delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710  : public MulticastDelegate_t
{
};

// SQLitePCL.delegate_rollback
struct delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174  : public MulticastDelegate_t
{
};

// SQLitePCL.delegate_trace
struct delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172  : public MulticastDelegate_t
{
};

// SQLitePCL.delegate_update
struct delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80  : public MulticastDelegate_t
{
};

// SQLitePCL.hook_handle
struct hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC  : public SafeGCHandle_tE8D8C107E75BFC0FAC19C271622895B407785D3E
{
};

// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_agg_function_final
struct callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F  : public MulticastDelegate_t
{
};

// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_agg_function_step
struct callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED  : public MulticastDelegate_t
{
};

// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_authorizer
struct callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696  : public MulticastDelegate_t
{
};

// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_collation
struct callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED  : public MulticastDelegate_t
{
};

// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_commit
struct callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12  : public MulticastDelegate_t
{
};

// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_destroy
struct callback_destroy_t196CAA62B91CAB2FE7AFA98FA27B902DD949A351  : public MulticastDelegate_t
{
};

// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_exec
struct callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D  : public MulticastDelegate_t
{
};

// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_log
struct callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B  : public MulticastDelegate_t
{
};

// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_profile
struct callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4  : public MulticastDelegate_t
{
};

// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_progress_handler
struct callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2  : public MulticastDelegate_t
{
};

// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_rollback
struct callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7  : public MulticastDelegate_t
{
};

// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_scalar_function
struct callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054  : public MulticastDelegate_t
{
};

// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_trace
struct callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190  : public MulticastDelegate_t
{
};

// SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_update
struct callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90  : public MulticastDelegate_t
{
};

// SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs/SQLiteDeleteDelegate
struct SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T SQLitePCL.sqlite3::GetOrCreateExtra<System.Object>(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* sqlite3_GetOrCreateExtra_TisRuntimeObject_mBEAA607E240266FEE23ACFF03E6E3432ABC8E260_gshared (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___f0, const RuntimeMethod* method) ;
// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Byte>::GetPinnableReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_gshared (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_gshared_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ReadOnlySpan_1_Slice_m17D448297CDE6CAE9A5755BF9B7190F3DE66F6FE_gshared_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9_gshared (const RuntimeMethod* method) ;
// T& System.Span`1<System.Byte>::GetPinnableReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Span_1_GetPinnableReference_m18012CFE616D70838138CAB962C3902722AD8686_gshared (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01* __this, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mECE334B94CE99314781C0D7DFD702221C4ABF7A5_gshared_inline (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_gshared_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::op_Implicit(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ReadOnlySpan_1_op_Implicit_m0E04D2F291C8C5075A086E9A53AE241DEA3E9E38_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.Void System.Func`4<System.IntPtr,System.IntPtr,System.Int32,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_4__ctor_mD903E3907D0CE6F5928A315B41E43525FD88515F_gshared (Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mE4A4D7CDFE83FD0D3386735017109D086F243825_gshared_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230* ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method) ;

// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::exec_hook_bridge(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_exec_hook_bridge_m40C932368A5A7407A41481F05BBB284CBED7B1FE (intptr_t ___p0, int32_t ___n1, intptr_t ___values_ptr2, intptr_t ___names_ptr3, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::commit_hook_bridge_impl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_commit_hook_bridge_impl_m27B12FD7638DC52474BDE95D0CEAF6932C4D2F0D (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::scalar_function_hook_bridge_impl(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_scalar_function_hook_bridge_impl_m144A96182F913A873EA819562C6FBE535AE06A2C (intptr_t ___context0, int32_t ___num_args1, intptr_t ___argsptr2, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::log_hook_bridge_impl(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_log_hook_bridge_impl_mDAA0E7371A73EF6F8CA9663F984CF87F31D9AE53 (intptr_t ___p0, int32_t ___rc1, intptr_t ___s2, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::agg_function_hook_bridge_step_impl(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_agg_function_hook_bridge_step_impl_m61B6EEBDC2BDC5D21A894F365B62147344B95BD4 (intptr_t ___context0, int32_t ___num_args1, intptr_t ___argsptr2, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::agg_function_hook_bridge_final_impl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_agg_function_hook_bridge_final_impl_m38A0C82EC682F505A60E5DAA931251BFB6B1A6CB (intptr_t ___context0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::collation_hook_bridge_impl(System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_collation_hook_bridge_impl_m174901BF60BCC008A372B7D555A6A651B3715244 (intptr_t ___p0, int32_t ___len11, intptr_t ___pv12, int32_t ___len23, intptr_t ___pv24, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::update_hook_bridge_impl(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_update_hook_bridge_impl_m9E0FE21036273B35DF48081ECD3A75E45E41B50F (intptr_t ___p0, int32_t ___typ1, intptr_t ___db2, intptr_t ___tbl3, int64_t ___rowid4, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::rollback_hook_bridge_impl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_rollback_hook_bridge_impl_m4A6F1AF0D2E286BF4F593DA037D8BE7E77298A2D (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::trace_hook_bridge_impl(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_trace_hook_bridge_impl_mBA113452171FE3793351D5CCDB0F21ECD313B42A (intptr_t ___p0, intptr_t ___s1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::profile_hook_bridge_impl(System.IntPtr,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_profile_hook_bridge_impl_mFE69CDE3456BDAF86C4C8EB87D80EFBF68C8D8F1 (intptr_t ___p0, intptr_t ___s1, int64_t ___elapsed2, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::progress_hook_bridge_impl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_progress_hook_bridge_impl_mF78097650158AC2EFF3D94AA7FD337A80DB09224 (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::authorizer_hook_bridge_impl(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_authorizer_hook_bridge_impl_mFEE6286FEF846AAED09B54ADDEFAF7C260256126 (intptr_t ___p0, int32_t ___action_code1, intptr_t ___param02, intptr_t ___param13, intptr_t ___dbName4, intptr_t ___inner_most_trigger_or_view5, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_strnicmp(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_strnicmp_m13B23F1F3609E46F98A1BAB6060398BD2A27FFA5 (intptr_t ___p0, intptr_t ___q1, int32_t ___n2, const RuntimeMethod* method) ;
// System.Void System.Func`1<SQLitePCL.hook_handles>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m5B138A470220E888E073E33BAED7B0551135492F (Func_1_t202B5DFEFBE5BA53985475F7441D184AE39ECE81* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t202B5DFEFBE5BA53985475F7441D184AE39ECE81*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// T SQLitePCL.sqlite3::GetOrCreateExtra<SQLitePCL.hook_handles>(System.Func`1<T>)
inline hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* sqlite3_GetOrCreateExtra_Tishook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33_m9D3A3879372BFE12DCDA4ABE6D83D1C197ECE27E (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* __this, Func_1_t202B5DFEFBE5BA53985475F7441D184AE39ECE81* ___f0, const RuntimeMethod* method)
{
	return ((  hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* (*) (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, Func_1_t202B5DFEFBE5BA53985475F7441D184AE39ECE81*, const RuntimeMethod*))sqlite3_GetOrCreateExtra_TisRuntimeObject_mBEAA607E240266FEE23ACFF03E6E3432ABC8E260_gshared)(__this, ___f0, method);
}
// System.Byte& modreq(System.Runtime.InteropServices.InAttribute) SQLitePCL.utf8z::GetPinnableReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5 (utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* __this, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_open(System.Byte*,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_open_m53B559664482A403D6FF0A5ECB71A907FF52DACB (uint8_t* ___filename0, intptr_t* ___db1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_open_v2(System.Byte*,System.IntPtr&,System.Int32,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_open_v2_m9BBB953EC4BA8243303393BF8DF5BB9D8A2461A5 (uint8_t* ___filename0, intptr_t* ___db1, int32_t ___flags2, uint8_t* ___vfs3, const RuntimeMethod* method) ;
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_vfs_find(System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_vfs_find_m1AA80351BE13AFA6E8AFF9D4FA949C36A85A0360 (uint8_t* ___vfs0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_PtrToStructure_m925D16041CB6ECE051D6D4B15CCCF5BD46561D34 (intptr_t ___ptr0, Type_t* ___structureType1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs/SQLiteDeleteDelegate::Invoke(System.IntPtr,System.Byte*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SQLiteDeleteDelegate_Invoke_m05864E249C3D97BD1CE9D33569AC2607AF36697A_inline (SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826* __this, intptr_t ___pVfs0, uint8_t* ___zName1, int32_t ___syncDir2, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_close_v2(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_close_v2_m18BA71020CDBEC3D48794A67F8D947CCB1954C47 (intptr_t ___db0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_close(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_close_m1AB577CDE304CA366CE852E63B7CD912320D27DD (intptr_t ___db0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_free(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_free_mA01C68AE2AC772DD28E2310BDE36FF8759A95135 (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_stricmp(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_stricmp_m627DD1C702F495B51E201B5405AB3CB8D9ABA0BC (intptr_t ___p0, intptr_t ___q1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_enable_shared_cache(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_enable_shared_cache_mB8DD2BD5B5F2E8BE2E85CEE463B657E461C5F751 (int32_t ___enable0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_interrupt(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_interrupt_m249933B6A4AACF349A03BE946770A3A755548C0F (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) ;
// SQLitePCL.exec_hook_info SQLitePCL.exec_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8* exec_hook_info_from_ptr_mD4CA6C2909CA4BFCFE982D905FC47BB8D70CB95F (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.exec_hook_info::call(System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t exec_hook_info_call_mA713B5044B9732EB1EE735288166504122BFCA77 (exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8* __this, int32_t ___n0, intptr_t ___values_ptr1, intptr_t ___names_ptr2, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_exec::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_exec__ctor_mE3FE6BAA7DB36577FC047933558235EEE1C7B040 (callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.exec_hook_info::.ctor(SQLitePCL.delegate_exec,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void exec_hook_info__ctor_mF44B73FC081E66935ACBC8C8635D85C9E4D3ED24 (exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8* __this, delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.hook_handle::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hook_handle__ctor_m6D8E37A8ADD1DC2ED8DAB0482D5E7212F4BBC524 (hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_exec(SQLitePCL.sqlite3,System.Byte*,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_exec,SQLitePCL.hook_handle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_exec_m4CE3155343AF3114E234F192B59F0B0570AB69DD (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, uint8_t* ___strSql1, callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D* ___cb2, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvParam3, intptr_t* ___errMsg4, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_complete(System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_complete_m41DCE98D30924199CA848FF74A6704518F9BAE78 (uint8_t* ___pSql0, const RuntimeMethod* method) ;
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_compileoption_get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_compileoption_get_m6C55B09A30E4C912F67C1BEFBB22A85D28F16061 (int32_t ___n0, const RuntimeMethod* method) ;
// SQLitePCL.utf8z SQLitePCL.utf8z::FromPtr(System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 utf8z_FromPtr_m8631331880E0D58B680A0CD8E0FA51670576AFBC (uint8_t* ___p0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_compileoption_used(System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_compileoption_used_m739645B1E2850AD9762CBA20B0268D48B02DB5B3 (uint8_t* ___pSql0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_table_column_metadata(SQLitePCL.sqlite3,System.Byte*,System.Byte*,System.Byte*,System.Byte*&,System.Byte*&,System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_table_column_metadata_m3AFDBA6E379081126C71740A363A33CE0F57E885 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, uint8_t* ___dbName1, uint8_t* ___tblName2, uint8_t* ___colName3, uint8_t** ___ptrDataType4, uint8_t** ___ptrCollSeq5, int32_t* ___notNull6, int32_t* ___primaryKey7, int32_t* ___autoInc8, const RuntimeMethod* method) ;
// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Byte>::GetPinnableReference()
inline uint8_t* ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8 (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_gshared)(__this, method);
}
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_gshared_inline)(__this, method);
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_prepare_v2(SQLitePCL.sqlite3,System.Byte*,System.Int32,System.IntPtr&,System.Byte*&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_prepare_v2_m47F3DC300069CA2B4CC210A0FE5EBC4965C57CC9 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, uint8_t* ___pSql1, int32_t ___nBytes2, intptr_t* ___stmt3, uint8_t** ___ptrRemain4, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32,System.Int32)
inline ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ReadOnlySpan_1_Slice_m17D448297CDE6CAE9A5755BF9B7190F3DE66F6FE_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A (*) (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_m17D448297CDE6CAE9A5755BF9B7190F3DE66F6FE_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::get_Empty()
inline ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9 (const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A (*) (const RuntimeMethod*))ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9_gshared)(method);
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_prepare_v3(SQLitePCL.sqlite3,System.Byte*,System.Int32,System.UInt32,System.IntPtr&,System.Byte*&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_prepare_v3_m257AE330808B1998CAF4D541F51338B4E234A22A (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, uint8_t* ___pSql1, int32_t ___nBytes2, uint32_t ___flags3, intptr_t* ___stmt4, uint8_t** ___ptrRemain5, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_db_status(SQLitePCL.sqlite3,System.Int32,System.Int32&,System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_db_status_m1DF667F36C04C7E8EF8DFB403CE0264F44B8A047 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___op1, int32_t* ___current2, int32_t* ___highest3, int32_t ___resetFlg4, const RuntimeMethod* method) ;
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_sql(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_sql_m240AE08BA65D3A839A3FD5CF5CA3D442163FD2D9 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) ;
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_db_handle(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_db_handle_mD9F49A773AAFD638123140A55072749ED81929F5 (intptr_t ___stmt0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_blob_open(SQLitePCL.sqlite3,System.Byte*,System.Byte*,System.Byte*,System.Int64,System.Int32,SQLitePCL.sqlite3_blob&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_blob_open_m44884FAC00BD9B5194AB5BBD4659FADE64B62929 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, uint8_t* ___sdb1, uint8_t* ___table2, uint8_t* ___col3, int64_t ___rowid4, int32_t ___flags5, sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057** ___blob6, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_blob_bytes(SQLitePCL.sqlite3_blob)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_blob_bytes_m6455304E98F531E582689605F40917348405EAD6 (sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* ___blob0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_blob_reopen(SQLitePCL.sqlite3_blob,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_blob_reopen_mCBB7112E8B7ABCF02A97D659F3D5B6F509834D32 (sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* ___blob0, int64_t ___rowid1, const RuntimeMethod* method) ;
// T& System.Span`1<System.Byte>::GetPinnableReference()
inline uint8_t* Span_1_GetPinnableReference_m18012CFE616D70838138CAB962C3902722AD8686 (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01* __this, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01*, const RuntimeMethod*))Span_1_GetPinnableReference_m18012CFE616D70838138CAB962C3902722AD8686_gshared)(__this, method);
}
// System.Int32 System.Span`1<System.Byte>::get_Length()
inline int32_t Span_1_get_Length_mECE334B94CE99314781C0D7DFD702221C4ABF7A5_inline (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01*, const RuntimeMethod*))Span_1_get_Length_mECE334B94CE99314781C0D7DFD702221C4ABF7A5_gshared_inline)(__this, method);
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_blob_read(SQLitePCL.sqlite3_blob,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_blob_read_m5E5B16D8FC7C72378D4A8440C19B71E84A1DF1CB (sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* ___blob0, uint8_t* ___b1, int32_t ___n2, int32_t ___offset3, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_blob_write(SQLitePCL.sqlite3_blob,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_blob_write_mC171C68F3E57279691AF0A83050B641D218D8D92 (sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* ___blob0, uint8_t* ___b1, int32_t ___n2, int32_t ___offset3, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_blob_close(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_blob_close_m1C767C34C81975A41336E398D66CF1F1BD81B725 (intptr_t ___blob0, const RuntimeMethod* method) ;
// SQLitePCL.sqlite3_backup SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_backup_init(SQLitePCL.sqlite3,System.Byte*,SQLitePCL.sqlite3,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* NativeMethods_sqlite3_backup_init_m85DB89F7A09F60AFED58AB79B9C48E66FB2FBB66 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___destDb0, uint8_t* ___zDestName1, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___sourceDb2, uint8_t* ___zSourceName3, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_backup_step(SQLitePCL.sqlite3_backup,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_backup_step_mE41EB93F1B4BC0C97F02BABFEF8DB4082EE11177 (sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* ___backup0, int32_t ___nPage1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_backup_remaining(SQLitePCL.sqlite3_backup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_backup_remaining_m521BAAFA03D3AFD465F2B84F988C826EB83CB182 (sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* ___backup0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_backup_pagecount(SQLitePCL.sqlite3_backup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_backup_pagecount_m49DC2501D7484F658E96C336ECA6B8ACD0B316C8 (sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* ___backup0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_backup_finish(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_backup_finish_m72535B9546171BAE4B8C0108EC04FF0473AC34E7 (intptr_t ___backup0, const RuntimeMethod* method) ;
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_next_stmt(SQLitePCL.sqlite3,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_next_stmt_m9172D0000A32933007FBD97BC637CD018966251E (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, intptr_t ___stmt1, const RuntimeMethod* method) ;
// System.Int64 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_last_insert_rowid(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeMethods_sqlite3_last_insert_rowid_m5218DAC4EAEBEB530BC81A338AC8CF9A940B9243 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_changes(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_changes_m2981DF863835F76EC8513193777B268593A075A0 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_total_changes(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_total_changes_mF78BDDBB54A1FEBFB44A2C9C9747E4F2F06006DC (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_extended_result_codes(SQLitePCL.sqlite3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_extended_result_codes_mF72D6B440E9E60380794D4B6EEBF681DF09C1697 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___onoff1, const RuntimeMethod* method) ;
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_errstr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_errstr_m94BF95DBD723E111FB2870D02F9DE44BF8FB4B91 (int32_t ___rc0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_errcode(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_errcode_m6549377A5C62FF0B83336B3B266D04325374426B (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_extended_errcode(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_extended_errcode_m8711CCEAA8F0228FE4B22EA834EA83483BFD846C (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_busy_timeout(SQLitePCL.sqlite3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_busy_timeout_m6BE9F32A705F97842C8D72AE82179AA5F4B06A29 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___ms1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_get_autocommit(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_get_autocommit_m1B00FE7D177E280A08DAD94DF3A2FF54982DA9D6 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_db_readonly(SQLitePCL.sqlite3,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_db_readonly_mF3564C27552394F046037615CF39F34F631FEA31 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, uint8_t* ___dbName1, const RuntimeMethod* method) ;
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_db_filename(SQLitePCL.sqlite3,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_db_filename_m6F4CF73CF5446915D06E68BA808B6957D0FAAEAA (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, uint8_t* ___att1, const RuntimeMethod* method) ;
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_errmsg(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_errmsg_mA3489AD3BA377B39157C2CB1381421674EAA9638 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) ;
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_libversion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_libversion_m66335CB96A11F9EF190CBD8103BABC51F082A8F4 (const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_libversion_number()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_libversion_number_m1BB30EEFACABDD1E9F05A64183DB18659D35E6E3 (const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_threadsafe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_threadsafe_mB955699D3731EAAE69DBAF631991DF6F9560F16A (const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_config_none(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_config_none_m6D318F1BF78C5A2B92625F22FDCAB98B73A83652 (int32_t ___op0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_config_int(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_config_int_mAAC260F740B6294713D3F9E5D86F911D9C2DD4EB (int32_t ___op0, int32_t ___val1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_initialize_m8A6FFACCE2B0E50A33B2F4DCF972A9FDFCE7C6AC (const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_shutdown_m4B4437C2A802096670337818149E8C3905A7BE3A (const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_enable_load_extension(SQLitePCL.sqlite3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_enable_load_extension_m625A8DEFB41726507DD20ED08711B8E13EF57C78 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___enable1, const RuntimeMethod* method) ;
// SQLitePCL.commit_hook_info SQLitePCL.commit_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* commit_hook_info_from_ptr_mF268F9464334327C9B2D54D1E53BF3FB01922EB5 (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.commit_hook_info::call()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t commit_hook_info_call_mE9C755CD3924D7327451B4E46477242A86EED90A (commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* __this, const RuntimeMethod* method) ;
// SQLitePCL.hook_handles SQLitePCL.SQLite3Provider_e_sqlite3::get_hooks(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* SQLite3Provider_e_sqlite3_get_hooks_m83CB238FC414AD9C7FA99D067B3511568712A72F (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.commit_hook_info::.ctor(SQLitePCL.delegate_commit,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void commit_hook_info__ctor_m4B4EC8FA983EECCEF944C38F087A910E4B85C74C (commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* __this, delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) ;
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_commit_hook(SQLitePCL.sqlite3,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_commit,SQLitePCL.hook_handle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_commit_hook_m623ADE2035D6DB5318AF785037B80AB249DF20CB (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12* ___func1, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvUser2, const RuntimeMethod* method) ;
// System.IDisposable SQLitePCL.hook_handle::ForDispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* hook_handle_ForDispose_m75CB5080133A1EA42368D022BC358117AC9FE588 (hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* __this, const RuntimeMethod* method) ;
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_user_data(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_user_data_mB204A1D40E8B52232D72A2F884C79B11384F06DC (intptr_t ___context0, const RuntimeMethod* method) ;
// SQLitePCL.function_hook_info SQLitePCL.function_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* function_hook_info_from_ptr_mF719AC68B43BA4D0B991245044B83C11213467AD (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.function_hook_info::call_scalar(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void function_hook_info_call_scalar_mAA7975A8E3B3EDBE7C1FCDFC02178C7F72DDD7BB (function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* __this, intptr_t ___context0, int32_t ___num_args1, intptr_t ___argsptr2, const RuntimeMethod* method) ;
// System.Boolean SQLitePCL.hook_handles::RemoveScalarFunction(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool hook_handles_RemoveScalarFunction_m9159BE57F6977DCF622FE30506A7F771739B423F (hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___name0, int32_t ___nargs1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.function_hook_info::.ctor(SQLitePCL.delegate_function_scalar,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void function_hook_info__ctor_m4B1D6B0D2A0FF53B36B2BF437FD87A3BB8B20E86 (function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* __this, delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* ___func_scalar0, RuntimeObject* ___user_data1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_create_function_v2(SQLitePCL.sqlite3,System.Byte[],System.Int32,System.Int32,SQLitePCL.hook_handle,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_scalar_function,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_agg_function_step,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_agg_function_final,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_destroy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_create_function_v2_m357F6C1B571254ED52BE30DDB244E631D6319004 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___strName1, int32_t ___nArgs2, int32_t ___nType3, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvUser4, callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054* ___func5, callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED* ___fstep6, callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F* ___ffinal7, callback_destroy_t196CAA62B91CAB2FE7AFA98FA27B902DD949A351* ___fdestroy8, const RuntimeMethod* method) ;
// System.Void SQLitePCL.hook_handles::AddScalarFunction(System.Byte[],System.Int32,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hook_handles_AddScalarFunction_mD241ED7FC4CFCD555C808E31748100FCAA652047 (hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___name0, int32_t ___nargs1, RuntimeObject* ___d2, const RuntimeMethod* method) ;
// SQLitePCL.log_hook_info SQLitePCL.log_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116* log_hook_info_from_ptr_m1DABE726D0FF1D5EEC222AD631DF38C8CEAC5791 (intptr_t ___p0, const RuntimeMethod* method) ;
// SQLitePCL.utf8z SQLitePCL.utf8z::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 utf8z_FromIntPtr_m7DD6956F80F61F4921C493D207873C9866876CF3 (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.log_hook_info::call(System.Int32,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void log_hook_info_call_mBBD1CECB059D785233952F83C5582786DBEFE694 (log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116* __this, int32_t ___rc0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___msg1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.log_hook_info::.ctor(SQLitePCL.delegate_log,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void log_hook_info__ctor_m72FEA14AC551F530BD79A2442BF002D7237EFDFC (log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116* __this, delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_config_log(System.Int32,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_log,SQLitePCL.hook_handle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_config_log_m9EB86B0F04AC3C146026F288471FF69AB0C6975C (int32_t ___op0, callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B* ___func1, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvUser2, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_log(System.Int32,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_log_m148C6683D4EE3EAD31B07E98AFAC8A65EE6F7C63 (int32_t ___iErrCode0, uint8_t* ___zFormat1, const RuntimeMethod* method) ;
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_aggregate_context(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_aggregate_context_m72B7BFFF3BF9CF27C41627CC93A6095C0C49C6FF (intptr_t ___context0, int32_t ___nBytes1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.function_hook_info::call_step(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void function_hook_info_call_step_m50C9070AFF7A909228C5C298AE3CB348571F9FF9 (function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* __this, intptr_t ___context0, intptr_t ___agg_context1, int32_t ___num_args2, intptr_t ___argsptr3, const RuntimeMethod* method) ;
// System.Void SQLitePCL.function_hook_info::call_final(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void function_hook_info_call_final_m41F22B0B1C88975CAE40BD2E8A8F2ACAB962C76E (function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* __this, intptr_t ___context0, intptr_t ___agg_context1, const RuntimeMethod* method) ;
// System.Boolean SQLitePCL.hook_handles::RemoveAggFunction(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool hook_handles_RemoveAggFunction_mA42A9716C0A6E544449532021405FA05652BE8C0 (hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___name0, int32_t ___nargs1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.function_hook_info::.ctor(SQLitePCL.delegate_function_aggregate_step,SQLitePCL.delegate_function_aggregate_final,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void function_hook_info__ctor_mD469D8E11284B583FA130AFD16FB2EBACB59FDF2 (function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* __this, delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* ___func_step0, delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* ___func_final1, RuntimeObject* ___user_data2, const RuntimeMethod* method) ;
// System.Void SQLitePCL.hook_handles::AddAggFunction(System.Byte[],System.Int32,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hook_handles_AddAggFunction_m81386278C3F4916C5052FD699F25319A978F651A (hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___name0, int32_t ___nargs1, RuntimeObject* ___d2, const RuntimeMethod* method) ;
// SQLitePCL.collation_hook_info SQLitePCL.collation_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98* collation_hook_info_from_ptr_m2461265D0988BBA2AD3C0D4EAC65670F71F999CC (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Void*,System.Int32)
inline void ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_gshared_inline)(__this, ___pointer0, ___length1, method);
}
// System.Int32 SQLitePCL.collation_hook_info::call(System.ReadOnlySpan`1<System.Byte>,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t collation_hook_info_call_m2475E2C71BBFA61C0E5E020143BB111868B4AA6E (collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98* __this, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s10, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s21, const RuntimeMethod* method) ;
// System.Boolean SQLitePCL.hook_handles::RemoveCollation(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool hook_handles_RemoveCollation_mAC3B05DE2CB2A4322F0A035E577FCF6194665012 (hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___name0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.collation_hook_info::.ctor(SQLitePCL.delegate_collation,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void collation_hook_info__ctor_mDB95BB4828C4E65CB57C4BCEE0516A06E6B1CB0A (collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98* __this, delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_create_collation(SQLitePCL.sqlite3,System.Byte[],System.Int32,SQLitePCL.hook_handle,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_collation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_create_collation_mBB19F1BAC7FD1230C48F219E6AACBDE01437018C (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___strName1, int32_t ___nType2, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvUser3, callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED* ___func4, const RuntimeMethod* method) ;
// System.Void SQLitePCL.hook_handles::AddCollation(System.Byte[],System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hook_handles_AddCollation_mFFF6F01B318D1CDF9E0980812744B1251C09343F (hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___name0, RuntimeObject* ___d1, const RuntimeMethod* method) ;
// SQLitePCL.update_hook_info SQLitePCL.update_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968* update_hook_info_from_ptr_m0AE72580290E934AFA1BAC52AE5CCE7E835962D0 (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.update_hook_info::call(System.Int32,SQLitePCL.utf8z,SQLitePCL.utf8z,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void update_hook_info_call_mAF608749DC3EC4FD8EFAF0D535E17C0E99EE5D7F (update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968* __this, int32_t ___typ0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___db1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___tbl2, int64_t ___rowid3, const RuntimeMethod* method) ;
// System.Void SQLitePCL.update_hook_info::.ctor(SQLitePCL.delegate_update,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void update_hook_info__ctor_mA3635FE2E96A5676FE6834AE74D6E18ACBE5206E (update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968* __this, delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) ;
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_update_hook(SQLitePCL.sqlite3,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_update,SQLitePCL.hook_handle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_update_hook_m8B1639DA1B91510EF1EDE4D93CE40B38C05C9E79 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90* ___func1, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvUser2, const RuntimeMethod* method) ;
// SQLitePCL.rollback_hook_info SQLitePCL.rollback_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185* rollback_hook_info_from_ptr_m3F58644FD17DD94EB256D4EE02FB82B6E1885FA9 (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.rollback_hook_info::call()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rollback_hook_info_call_m8CC5F80155D547D5AB32D3C9737E8F0F5E410353 (rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185* __this, const RuntimeMethod* method) ;
// System.Void SQLitePCL.rollback_hook_info::.ctor(SQLitePCL.delegate_rollback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rollback_hook_info__ctor_m13E17137A92C3596FED3261983A9BB4C0ECEF32E (rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185* __this, delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) ;
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_rollback_hook(SQLitePCL.sqlite3,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_rollback,SQLitePCL.hook_handle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_rollback_hook_m9BC94B90A1CE01EF317F888E5F42BAF3C860724F (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7* ___func1, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvUser2, const RuntimeMethod* method) ;
// SQLitePCL.trace_hook_info SQLitePCL.trace_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4* trace_hook_info_from_ptr_mEC05B3CD7BA15874CD9F1479DDD268002A3595ED (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.trace_hook_info::call(SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trace_hook_info_call_mA98E6A93D09DD73D282B0C0C657CBF0DBF741B00 (trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4* __this, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___s0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.trace_hook_info::.ctor(SQLitePCL.delegate_trace,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trace_hook_info__ctor_mA70153D94F7B356F1C59FFF1F66037EC470FA9D0 (trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4* __this, delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) ;
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_trace(SQLitePCL.sqlite3,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_trace,SQLitePCL.hook_handle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_trace_mF63C1FF2F146F919EEF0ADAAF59924649B92C140 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190* ___func1, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvUser2, const RuntimeMethod* method) ;
// SQLitePCL.profile_hook_info SQLitePCL.profile_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34* profile_hook_info_from_ptr_m0BADA22F812D4F70AF5323E6753230ACDA351441 (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.profile_hook_info::call(SQLitePCL.utf8z,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void profile_hook_info_call_m438C34143623CA589DC456BFEBD6EC5499E4BDB0 (profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34* __this, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___s0, int64_t ___elapsed1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.profile_hook_info::.ctor(SQLitePCL.delegate_profile,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void profile_hook_info__ctor_mA79CFEE7D02660A458390BF3C4218C78E22E679E (profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34* __this, delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) ;
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_profile(SQLitePCL.sqlite3,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_profile,SQLitePCL.hook_handle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_profile_mD53D29EFB2669BF94893810D6B0B9843B430EEC0 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4* ___func1, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvUser2, const RuntimeMethod* method) ;
// SQLitePCL.progress_hook_info SQLitePCL.progress_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641* progress_hook_info_from_ptr_m9E78852C9E5A0CCB892E030EF906059E742E7509 (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.progress_hook_info::call()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t progress_hook_info_call_m1DBC36FDEF18460447F83230864D87083BCD6C16 (progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641* __this, const RuntimeMethod* method) ;
// System.Void SQLitePCL.progress_hook_info::.ctor(SQLitePCL.delegate_progress,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void progress_hook_info__ctor_mD9BE365FBD60098A96229B0A7FE561438372B947 (progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641* __this, delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) ;
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_progress_handler(SQLitePCL.sqlite3,System.Int32,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_progress_handler,SQLitePCL.hook_handle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_progress_handler_m24F0BE580E0DB6B9318C92421E2D90F8EB60605A (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___instructions1, callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2* ___func2, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvUser3, const RuntimeMethod* method) ;
// SQLitePCL.authorizer_hook_info SQLitePCL.authorizer_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A* authorizer_hook_info_from_ptr_mC44A09EE9B591911C860012BA7A404E9CDC22E7E (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.authorizer_hook_info::call(System.Int32,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t authorizer_hook_info_call_mF1D0501AEBFE5DFE6FD3DA44EC327A13D0FADCBF (authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A* __this, int32_t ___action_code0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param01, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param12, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName3, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___inner_most_trigger_or_view4, const RuntimeMethod* method) ;
// System.Void SQLitePCL.authorizer_hook_info::.ctor(SQLitePCL.delegate_authorizer,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void authorizer_hook_info__ctor_m356DDFFD020722A4AB519EE7BB5513B56AF063B4 (authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A* __this, delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_set_authorizer(SQLitePCL.sqlite3,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_authorizer,SQLitePCL.hook_handle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_set_authorizer_m03D49E5DBF74171185FE32CC54F98733FC916D38 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696* ___cb1, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvUser2, const RuntimeMethod* method) ;
// System.Int64 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_memory_used()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeMethods_sqlite3_memory_used_mB63790E8C13484C97B12FA03F8EAE89DA0A2DB35 (const RuntimeMethod* method) ;
// System.Int64 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_memory_highwater(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeMethods_sqlite3_memory_highwater_m360074736CAE679D9AE7D0456616EEC6B9B7297D (int32_t ___resetFlag0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_status(System.Int32,System.Int32&,System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_status_m63335BBB95A05F0DB027F9E124450418F58807B2 (int32_t ___op0, int32_t* ___current1, int32_t* ___highwater2, int32_t ___resetFlag3, const RuntimeMethod* method) ;
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_sourceid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_sourceid_mE87D21F7A37600941DC86CCD9A1CAAC9461B0C06 (const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_int64(System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_int64_m08F9EA71167DAA31E323A73919D5F1592A5B63A8 (intptr_t ___context0, int64_t ___val1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_int(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_int_m7BA015182C11F2C94D6760F7B203FE9F08E6A8B3 (intptr_t ___context0, int32_t ___val1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_double(System.IntPtr,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_double_m7A3371A49D9AC8FEB7E135FA830EC1F10B2C46A1 (intptr_t ___context0, double ___val1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_null(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_null_mD8AE1EBC9D51047F30E758A3E98BDF8D57126300 (intptr_t ___context0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_error(System.IntPtr,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_error_mDAC878B366FE0D71E57FEEA354831B10112D70BF (intptr_t ___context0, uint8_t* ___strErr1, int32_t ___nLen2, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7 (intptr_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_text(System.IntPtr,System.Byte*,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_text_m64F973D4C475FF6A82514B645FCFB80973F41F25 (intptr_t ___context0, uint8_t* ___val1, int32_t ___nLen2, intptr_t ___pvReserved3, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE (void* ___value0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_blob(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_blob_m3738BB3BC6F1736EE62BBC29AF0CE075A3CA3315 (intptr_t ___context0, intptr_t ___val1, int32_t ___nSize2, intptr_t ___pvReserved3, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_zeroblob(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_zeroblob_mE15FEBF6140EC0E8402435A8E9FBC62B2788E4CE (intptr_t ___context0, int32_t ___n1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_error_toobig(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_error_toobig_mEA829124A1DD4C4A8952F2365B2D5BDAC0D22F49 (intptr_t ___context0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_error_nomem(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_error_nomem_m4FBA5380D00DA0BC81661D4EDB232EAE7B71727E (intptr_t ___context0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_error_code(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_error_code_mAA7930849DA06F7A0D643F7B9CD06B98CFE28663 (intptr_t ___context0, int32_t ___code1, const RuntimeMethod* method) ;
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_value_blob(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_value_blob_m1973A0CA401632AE2F65C3E4BD6EC63D6AE5CB22 (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::op_Implicit(T[])
inline ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ReadOnlySpan_1_op_Implicit_m0E04D2F291C8C5075A086E9A53AE241DEA3E9E38 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ReadOnlySpan_1_op_Implicit_m0E04D2F291C8C5075A086E9A53AE241DEA3E9E38_gshared)(___array0, method);
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_value_bytes(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_value_bytes_m69179293AB4C95F3725B525846552A023CEF9F98 (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Double SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_value_double(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeMethods_sqlite3_value_double_mF31257FD3796FDBA50DEB0395647E0077DF9489A (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_value_int(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_value_int_m368DDE21892C5937E6242477E5ED7CCC01FD6583 (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Int64 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_value_int64(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeMethods_sqlite3_value_int64_mFB43288331B623AAB024EE8A424722724340B6E3 (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_value_type(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_value_type_mBF04BD76CC69920EFBDBC7AF4C1726AB9BDF8F99 (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_value_text(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_value_text_mD54F4A0D36B2C3E119BCFA4F886A834CD329258F (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_bind_int(SQLitePCL.sqlite3_stmt,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_bind_int_m1D432058DD9798142789DB5BBCF683DC872CE7E3 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, int32_t ___val2, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_bind_int64(SQLitePCL.sqlite3_stmt,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_bind_int64_mD0F23638A4A9A68C56C9D1F3B434F3ECD879837D (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, int64_t ___val2, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_bind_text(SQLitePCL.sqlite3_stmt,System.Int32,System.Byte*,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_bind_text_mAA17E858EFA502693A86BD49585227EC31879767 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, uint8_t* ___val2, int32_t ___nlen3, intptr_t ___pvReserved4, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_bind_double(SQLitePCL.sqlite3_stmt,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_bind_double_mA3AA32FDB55D504B2ABBD9A12F6207BABE7EBE35 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, double ___val2, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_bind_blob(SQLitePCL.sqlite3_stmt,System.Int32,System.Byte*,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_bind_blob_mDFC3555381F1DD2CCB10365322F67C93B9F30D14 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, uint8_t* ___val2, int32_t ___nSize3, intptr_t ___nTransient4, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_bind_zeroblob(SQLitePCL.sqlite3_stmt,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_bind_zeroblob_mF3A5557900228FF234FE26900E1800DF6554894F (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, int32_t ___size2, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_bind_null(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_bind_null_mF7A3AF19B69661633CEC71922A1FCB5EF9809AB8 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_bind_parameter_count(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_bind_parameter_count_mC6AF4476E2D285F57579A79FAF7793B2C9151DC8 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) ;
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_bind_parameter_name(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_bind_parameter_name_mA41869ADD69E8BC04BB2CA18DBE1CA07BA461B1F (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_bind_parameter_index(SQLitePCL.sqlite3_stmt,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_bind_parameter_index_m2B9AA13C036B886577AD9126C3C921595E11D37B (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, uint8_t* ___strName1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_step(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_step_m54E48F06063127E8E43B2725869CA815177FEFDD (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_stmt_busy(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_stmt_busy_m11A70E12356826D95DB03AC4187D768B2B792D7E (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_stmt_readonly(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_stmt_readonly_m6135AB2D4427923474627818BAF22CC13DC9ED1E (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_int(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_column_int_m3F06A1718EFBFEC590D94A35DFFDDD1F96E611C1 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Int64 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_int64(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeMethods_sqlite3_column_int64_mF0AA4334CFC79A9CD3B751EA4B586035B25E8A99 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_text(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_column_text_mD15798ABA24D7FEA86E1266241448B080F3237F6 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_bytes(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_column_bytes_m933C0E3F3410E9EF8156BF59ED0BD77DCF4E276C (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) ;
// SQLitePCL.utf8z SQLitePCL.utf8z::FromPtrLen(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 utf8z_FromPtrLen_mEF49317D152EC1C0300C3366714707B3F091FFC2 (uint8_t* ___p0, int32_t ___len1, const RuntimeMethod* method) ;
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_decltype(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_column_decltype_mE6C718DDE006F6804788F4B04B99042D3771C25F (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Double SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_double(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeMethods_sqlite3_column_double_m0EC8F72C560FC8CDA6E20AD2F75E042CEA956D0A (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) ;
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_blob(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_column_blob_m4CCEF894D2AFAE81911307E2B105F3877938F572 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_type(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_column_type_mC5F06DA7EE7437933596361C3CA937A978B097B0 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_count(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_column_count_m1A0FC37AB55007B24E30C4D5A071049231FA3C6C (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_data_count(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_data_count_m581081CA581D80A23A1DFFF59AACA5BAF558B20E (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) ;
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_name(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_column_name_m92BD5854D99CAAE2A69E218914D943B2926B3198 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_origin_name(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_column_origin_name_mB01713D308C6F1AB620F7D43862C1C9E6FA8A9E1 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_table_name(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_column_table_name_m31214D2D3BCA2379C2A8853E94CA91B0570E203A (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_database_name(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_column_database_name_m531819C1877D9BA29878561661CBB4365DC531E7 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_reset(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_reset_m88C39A2CACDFC1E43BFF8094504D3783D3012F3A (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_clear_bindings(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_clear_bindings_m4410C3BFB6640A0DC38BBC5255993CA02117DCFF (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_stmt_status(SQLitePCL.sqlite3_stmt,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_stmt_status_m004E4D57D42E465337BFF4DAA46559E498B64EF2 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___op1, int32_t ___resetFlg2, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_finalize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_finalize_mDB9DB5DFB67CD41B37E3EC11132C11910D1813B1 (intptr_t ___stmt0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_wal_autocheckpoint(SQLitePCL.sqlite3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_wal_autocheckpoint_m6911FC4305DD705161A0A79BCBD9892C8E396827 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___n1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_wal_checkpoint(SQLitePCL.sqlite3,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_wal_checkpoint_mDBD2A1DCEDE8E5E0DD3C1BC4458B601BE7B1F34B (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, uint8_t* ___dbName1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_wal_checkpoint_v2(SQLitePCL.sqlite3,System.Byte*,System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_wal_checkpoint_v2_mF7004D6FD0DCDE0B2B240FBC1E09D8FF504309CF (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, uint8_t* ___dbName1, int32_t ___eMode2, int32_t* ___logSize3, int32_t* ___framesCheckPointed4, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_commit::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_commit__ctor_mDB4A28C9FFFB6737E5CED81EB1F87B10E8C09322 (callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_scalar_function::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_scalar_function__ctor_mFAB24FB7BD04C8B6DA4F8D7D7F9A1B9AC12DB58F (callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_log::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_log__ctor_m1FB9275EE1F814C65D6BA2A64C164147C1DE7AFC (callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_agg_function_step::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_agg_function_step__ctor_mD9169C85C8988341AA108B7C2713D855B043BF78 (callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_agg_function_final::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_agg_function_final__ctor_m24AD2C75EEF8546805DE08FEA65A74EAF335B788 (callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_collation::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_collation__ctor_mCC4562D044D6941D6F721FA0EFD0EC5B1FE81492 (callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_update::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_update__ctor_m702943B46304E4C1D52A8CB9FF89CD94399396BB (callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_rollback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_rollback__ctor_mAAA9D0128F246165CD4C717D630F69CFAE5DC2B2 (callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_trace::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_trace__ctor_mB7045C1E866EF82F727938567620E2359EA834B5 (callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_profile::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_profile__ctor_mCA3D9C6C318620A09239BF7F76D45C97897AEFA5 (callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_progress_handler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_progress_handler__ctor_mAAED7B981A29A66D7B99E2149A38F7EAC3AD7753 (callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_authorizer::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_authorizer__ctor_mBE07180CDB573196133F892C032B9B366FFD15EA (callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Func`4<System.IntPtr,System.IntPtr,System.Int32,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_4__ctor_mD903E3907D0CE6F5928A315B41E43525FD88515F (Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_4__ctor_mD903E3907D0CE6F5928A315B41E43525FD88515F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void SQLitePCL.hook_handles::.ctor(System.Func`4<System.IntPtr,System.IntPtr,System.Int32,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hook_handles__ctor_m1F7D3F0DEC6B04876796D7A4935396F2CD8DD292 (hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* __this, Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083* ___f0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, bool* ___success0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Void SQLitePCL.sqlite3_backup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqlite3_backup__ctor_m63CDC567578C17953C38ACA2E9FAAE0BFF778F7C (sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* __this, const RuntimeMethod* method) ;
// System.Void SQLitePCL.sqlite3_blob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqlite3_blob__ctor_mF7C7B725FB9FE141587C4BE5A547765610962159 (sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m74D94317452463079D807CDF5D84958A888D42A5 (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Pinnable`1<T>,System.IntPtr,System.Int32)
inline void ReadOnlySpan_1__ctor_mE4A4D7CDFE83FD0D3386735017109D086F243825_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230* ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A*, Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230*, intptr_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mE4A4D7CDFE83FD0D3386735017109D086F243825_gshared_inline)(__this, ___pinnable0, ___byteOffset1, ___length2, method);
}
// System.Void System.ThrowHelper::ThrowArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mC58F29A303530BA42973934E30FFA8DCDE5D9B07 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_close(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_close_v2(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_enable_shared_cache(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_interrupt(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_finalize(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_reset(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_clear_bindings(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_stmt_status(void*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C uint8_t* CDECL sqlite3_bind_parameter_name(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C uint8_t* CDECL sqlite3_column_database_name(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C uint8_t* CDECL sqlite3_column_decltype(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C uint8_t* CDECL sqlite3_column_name(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C uint8_t* CDECL sqlite3_column_origin_name(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C uint8_t* CDECL sqlite3_column_table_name(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C uint8_t* CDECL sqlite3_column_text(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C uint8_t* CDECL sqlite3_errmsg(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_db_readonly(void*, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C uint8_t* CDECL sqlite3_db_filename(void*, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_prepare_v2(void*, uint8_t*, int32_t, intptr_t*, uint8_t**);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_prepare_v3(void*, uint8_t*, int32_t, uint32_t, intptr_t*, uint8_t**);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_db_status(void*, int32_t, int32_t*, int32_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_complete(uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_compileoption_used(uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C uint8_t* CDECL sqlite3_compileoption_get(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_table_column_metadata(void*, uint8_t*, uint8_t*, uint8_t*, uint8_t**, uint8_t**, int32_t*, int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C uint8_t* CDECL sqlite3_value_text(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_enable_load_extension(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_load_extension(void*, uint8_t*, uint8_t*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_initialize();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_shutdown();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C uint8_t* CDECL sqlite3_libversion();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_libversion_number();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_threadsafe();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C uint8_t* CDECL sqlite3_sourceid();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_malloc(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_realloc(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_free(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_stricmp(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_strnicmp(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_open(uint8_t*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_open_v2(uint8_t*, intptr_t*, int32_t, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_vfs_find(uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int64_t CDECL sqlite3_last_insert_rowid(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_changes(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_total_changes(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int64_t CDECL sqlite3_memory_used();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int64_t CDECL sqlite3_memory_highwater(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_status(int32_t, int32_t*, int32_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_busy_timeout(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_blob(void*, int32_t, uint8_t*, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_zeroblob(void*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_double(void*, int32_t, double);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_int(void*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_int64(void*, int32_t, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_null(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_text(void*, int32_t, uint8_t*, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_parameter_count(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_parameter_index(void*, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_column_count(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_data_count(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_step(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C uint8_t* CDECL sqlite3_sql(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C double CDECL sqlite3_column_double(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_column_int(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int64_t CDECL sqlite3_column_int64(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_blob(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_column_bytes(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_column_type(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_aggregate_count(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_value_blob(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_value_bytes(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C double CDECL sqlite3_value_double(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_value_int(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int64_t CDECL sqlite3_value_int64(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_value_type(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_user_data(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_blob(intptr_t, intptr_t, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_double(intptr_t, double);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_error(intptr_t, uint8_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_int(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_int64(intptr_t, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_null(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_text(intptr_t, uint8_t*, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_zeroblob(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_error_toobig(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_error_nomem(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_error_code(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_aggregate_context(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_config(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_create_collation(void*, uint8_t*, int32_t, void*, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_update_hook(void*, Il2CppMethodPointer, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_commit_hook(void*, Il2CppMethodPointer, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_profile(void*, Il2CppMethodPointer, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_progress_handler(void*, int32_t, Il2CppMethodPointer, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_trace(void*, Il2CppMethodPointer, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_rollback_hook(void*, Il2CppMethodPointer, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_db_handle(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_next_stmt(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_stmt_busy(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_stmt_readonly(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_exec(void*, uint8_t*, Il2CppMethodPointer, void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_get_autocommit(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_extended_result_codes(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_errcode(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_extended_errcode(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C uint8_t* CDECL sqlite3_errstr(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_log(int32_t, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_file_control(void*, uint8_t*, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C void* CDECL sqlite3_backup_init(void*, uint8_t*, void*, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_backup_step(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_backup_remaining(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_backup_pagecount(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_backup_finish(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_blob_open(void*, uint8_t*, uint8_t*, uint8_t*, int64_t, int32_t, void**);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_blob_write(void*, uint8_t*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_blob_read(void*, uint8_t*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_blob_bytes(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_blob_reopen(void*, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_blob_close(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_wal_autocheckpoint(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_wal_checkpoint(void*, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_wal_checkpoint_v2(void*, uint8_t*, int32_t, int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_set_authorizer(void*, Il2CppMethodPointer, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_create_function_v2(void*, uint8_t*, int32_t, int32_t, void*, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
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
extern "C" int32_t CDECL ReversePInvokeWrapper_SQLite3Provider_e_sqlite3_exec_hook_bridge_m40C932368A5A7407A41481F05BBB284CBED7B1FE(intptr_t ___p0, int32_t ___n1, intptr_t ___values_ptr2, intptr_t ___names_ptr3)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = SQLite3Provider_e_sqlite3_exec_hook_bridge_m40C932368A5A7407A41481F05BBB284CBED7B1FE(___p0, ___n1, ___values_ptr2, ___names_ptr3, NULL);

	return returnValue;
}
extern "C" int32_t CDECL ReversePInvokeWrapper_SQLite3Provider_e_sqlite3_commit_hook_bridge_impl_m27B12FD7638DC52474BDE95D0CEAF6932C4D2F0D(intptr_t ___p0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = SQLite3Provider_e_sqlite3_commit_hook_bridge_impl_m27B12FD7638DC52474BDE95D0CEAF6932C4D2F0D(___p0, NULL);

	return returnValue;
}
extern "C" void CDECL ReversePInvokeWrapper_SQLite3Provider_e_sqlite3_scalar_function_hook_bridge_impl_m144A96182F913A873EA819562C6FBE535AE06A2C(intptr_t ___context0, int32_t ___num_args1, intptr_t ___argsptr2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SQLite3Provider_e_sqlite3_scalar_function_hook_bridge_impl_m144A96182F913A873EA819562C6FBE535AE06A2C(___context0, ___num_args1, ___argsptr2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SQLite3Provider_e_sqlite3_log_hook_bridge_impl_mDAA0E7371A73EF6F8CA9663F984CF87F31D9AE53(intptr_t ___p0, int32_t ___rc1, intptr_t ___s2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SQLite3Provider_e_sqlite3_log_hook_bridge_impl_mDAA0E7371A73EF6F8CA9663F984CF87F31D9AE53(___p0, ___rc1, ___s2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SQLite3Provider_e_sqlite3_agg_function_hook_bridge_step_impl_m61B6EEBDC2BDC5D21A894F365B62147344B95BD4(intptr_t ___context0, int32_t ___num_args1, intptr_t ___argsptr2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SQLite3Provider_e_sqlite3_agg_function_hook_bridge_step_impl_m61B6EEBDC2BDC5D21A894F365B62147344B95BD4(___context0, ___num_args1, ___argsptr2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SQLite3Provider_e_sqlite3_agg_function_hook_bridge_final_impl_m38A0C82EC682F505A60E5DAA931251BFB6B1A6CB(intptr_t ___context0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SQLite3Provider_e_sqlite3_agg_function_hook_bridge_final_impl_m38A0C82EC682F505A60E5DAA931251BFB6B1A6CB(___context0, NULL);

}
extern "C" int32_t CDECL ReversePInvokeWrapper_SQLite3Provider_e_sqlite3_collation_hook_bridge_impl_m174901BF60BCC008A372B7D555A6A651B3715244(intptr_t ___p0, int32_t ___len11, intptr_t ___pv12, int32_t ___len23, intptr_t ___pv24)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = SQLite3Provider_e_sqlite3_collation_hook_bridge_impl_m174901BF60BCC008A372B7D555A6A651B3715244(___p0, ___len11, ___pv12, ___len23, ___pv24, NULL);

	return returnValue;
}
extern "C" void CDECL ReversePInvokeWrapper_SQLite3Provider_e_sqlite3_update_hook_bridge_impl_m9E0FE21036273B35DF48081ECD3A75E45E41B50F(intptr_t ___p0, int32_t ___typ1, intptr_t ___db2, intptr_t ___tbl3, int64_t ___rowid4)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SQLite3Provider_e_sqlite3_update_hook_bridge_impl_m9E0FE21036273B35DF48081ECD3A75E45E41B50F(___p0, ___typ1, ___db2, ___tbl3, ___rowid4, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SQLite3Provider_e_sqlite3_rollback_hook_bridge_impl_m4A6F1AF0D2E286BF4F593DA037D8BE7E77298A2D(intptr_t ___p0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SQLite3Provider_e_sqlite3_rollback_hook_bridge_impl_m4A6F1AF0D2E286BF4F593DA037D8BE7E77298A2D(___p0, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SQLite3Provider_e_sqlite3_trace_hook_bridge_impl_mBA113452171FE3793351D5CCDB0F21ECD313B42A(intptr_t ___p0, intptr_t ___s1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SQLite3Provider_e_sqlite3_trace_hook_bridge_impl_mBA113452171FE3793351D5CCDB0F21ECD313B42A(___p0, ___s1, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SQLite3Provider_e_sqlite3_profile_hook_bridge_impl_mFE69CDE3456BDAF86C4C8EB87D80EFBF68C8D8F1(intptr_t ___p0, intptr_t ___s1, int64_t ___elapsed2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SQLite3Provider_e_sqlite3_profile_hook_bridge_impl_mFE69CDE3456BDAF86C4C8EB87D80EFBF68C8D8F1(___p0, ___s1, ___elapsed2, NULL);

}
extern "C" int32_t CDECL ReversePInvokeWrapper_SQLite3Provider_e_sqlite3_progress_hook_bridge_impl_mF78097650158AC2EFF3D94AA7FD337A80DB09224(intptr_t ___p0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = SQLite3Provider_e_sqlite3_progress_hook_bridge_impl_mF78097650158AC2EFF3D94AA7FD337A80DB09224(___p0, NULL);

	return returnValue;
}
extern "C" int32_t CDECL ReversePInvokeWrapper_SQLite3Provider_e_sqlite3_authorizer_hook_bridge_impl_mFEE6286FEF846AAED09B54ADDEFAF7C260256126(intptr_t ___p0, int32_t ___action_code1, intptr_t ___param02, intptr_t ___param13, intptr_t ___dbName4, intptr_t ___inner_most_trigger_or_view5)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = SQLite3Provider_e_sqlite3_authorizer_hook_bridge_impl_mFEE6286FEF846AAED09B54ADDEFAF7C260256126(___p0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5, NULL);

	return returnValue;
}
// System.String SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.GetNativeLibraryName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_GetNativeLibraryName_mEE9F8E9B2FF812894590A9BBA3AC2AAB7F612976 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F080C0A268DCE50EA57CD766D6EA437363F3F75);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1F080C0A268DCE50EA57CD766D6EA437363F3F75;
	}
}
// System.Boolean SQLitePCL.SQLite3Provider_e_sqlite3::my_streq(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SQLite3Provider_e_sqlite3_my_streq_m8739278305E4F8F0D3B3A0D51AD0A8AA3FE20EA7 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___p0, intptr_t ___q1, int32_t ___len2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		intptr_t L_1 = ___q1;
		int32_t L_2 = ___len2;
		int32_t L_3;
		L_3 = NativeMethods_sqlite3_strnicmp_m13B23F1F3609E46F98A1BAB6060398BD2A27FFA5(L_0, L_1, L_2, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// SQLitePCL.hook_handles SQLitePCL.SQLite3Provider_e_sqlite3::get_hooks(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* SQLite3Provider_e_sqlite3_get_hooks_m83CB238FC414AD9C7FA99D067B3511568712A72F (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t202B5DFEFBE5BA53985475F7441D184AE39ECE81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLite3Provider_e_sqlite3_U3Cget_hooksU3Eb__3_0_m015E69D41B2E06DDB07F64B1232D53F350223B35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sqlite3_GetOrCreateExtra_Tishook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33_m9D3A3879372BFE12DCDA4ABE6D83D1C197ECE27E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		Func_1_t202B5DFEFBE5BA53985475F7441D184AE39ECE81* L_1 = (Func_1_t202B5DFEFBE5BA53985475F7441D184AE39ECE81*)il2cpp_codegen_object_new(Func_1_t202B5DFEFBE5BA53985475F7441D184AE39ECE81_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_m5B138A470220E888E073E33BAED7B0551135492F(L_1, __this, (intptr_t)((void*)SQLite3Provider_e_sqlite3_U3Cget_hooksU3Eb__3_0_m015E69D41B2E06DDB07F64B1232D53F350223B35_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_2;
		L_2 = sqlite3_GetOrCreateExtra_Tishook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33_m9D3A3879372BFE12DCDA4ABE6D83D1C197ECE27E(L_0, L_1, sqlite3_GetOrCreateExtra_Tishook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33_m9D3A3879372BFE12DCDA4ABE6D83D1C197ECE27E_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_win32_set_directory(System.Int32,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_win32_set_directory_m3BBF070465638589751A9FC66B7D7AC5D8AE7B88 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, int32_t ___typ0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___path1, const RuntimeMethod* method) 
{
	{
		return 1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_open(SQLitePCL.utf8z,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_open_mBF56A39FB4511180E119A033F37216098A6B2536 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___filename0, intptr_t* ___db1, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		uint8_t* L_0;
		L_0 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___filename0), NULL);
		V_0 = L_0;
		uint8_t* L_1 = V_0;
		intptr_t* L_2 = ___db1;
		int32_t L_3;
		L_3 = NativeMethods_sqlite3_open_m53B559664482A403D6FF0A5ECB71A907FF52DACB((uint8_t*)((uintptr_t)L_1), L_2, NULL);
		return L_3;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_open_v2(SQLitePCL.utf8z,System.IntPtr&,System.Int32,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_open_v2_m4504578397FB5AD2A044A04B3BE3B34EBD60268A (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___filename0, intptr_t* ___db1, int32_t ___flags2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___vfs3, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	{
		uint8_t* L_0;
		L_0 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___filename0), NULL);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		uint8_t* L_2;
		L_2 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___vfs3), NULL);
		V_2 = L_2;
		uint8_t* L_3 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_3);
		intptr_t* L_4 = ___db1;
		int32_t L_5 = ___flags2;
		uint8_t* L_6 = V_0;
		int32_t L_7;
		L_7 = NativeMethods_sqlite3_open_v2_m9BBB953EC4BA8243303393BF8DF5BB9D8A2461A5((uint8_t*)((uintptr_t)L_1), L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3__vfs__delete(SQLitePCL.utf8z,SQLitePCL.utf8z,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3__vfs__delete_m86D4718FA8B8FD7F1355C641CB3D1A17C317ED05 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___vfs0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___filename1, int32_t ___syncDir2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		uint8_t* L_0;
		L_0 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___vfs0), NULL);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		uint8_t* L_2;
		L_2 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___filename1), NULL);
		V_2 = L_2;
		uint8_t* L_3 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_3);
		intptr_t L_4;
		L_4 = NativeMethods_sqlite3_vfs_find_m1AA80351BE13AFA6E8AFF9D4FA949C36A85A0360((uint8_t*)((uintptr_t)L_1), NULL);
		V_3 = L_4;
		intptr_t L_5 = V_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = Marshal_PtrToStructure_m925D16041CB6ECE051D6D4B15CCCF5BD46561D34(L_5, L_7, NULL);
		SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826* L_9 = ((*(sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801*)((sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801*)(sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801*)UnBox(L_8, sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801_il2cpp_TypeInfo_var)))).___xDelete_7;
		intptr_t L_10 = V_3;
		uint8_t* L_11 = V_0;
		NullCheck(L_9);
		int32_t L_12;
		L_12 = SQLiteDeleteDelegate_Invoke_m05864E249C3D97BD1CE9D33569AC2607AF36697A_inline(L_9, L_10, L_11, 1, NULL);
		return L_12;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_close_v2(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_close_v2_m9897A119BFA8F844AB2A13A36798CD4DBADFFB0A (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___db0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___db0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_close_v2_m18BA71020CDBEC3D48794A67F8D947CCB1954C47(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_close(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_close_m60A20ED9F45DCC180E9DF8EFAC0CA8201C388168 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___db0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___db0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_close_m1AB577CDE304CA366CE852E63B7CD912320D27DD(L_0, NULL);
		return L_1;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_free(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_free_mACBC19ADC11ECC5133BEB189AB0A51A6081AE0DB (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___p0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		NativeMethods_sqlite3_free_mA01C68AE2AC772DD28E2310BDE36FF8759A95135(L_0, NULL);
		return;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_stricmp(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_stricmp_m6DC469CD86F5BFF2617F696D062FEACB7B4D7FA8 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___p0, intptr_t ___q1, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		intptr_t L_1 = ___q1;
		int32_t L_2;
		L_2 = NativeMethods_sqlite3_stricmp_m627DD1C702F495B51E201B5405AB3CB8D9ABA0BC(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_strnicmp(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_strnicmp_mF6DBFC2DEA1C248D123B5B5F993FF15B72EF735E (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___p0, intptr_t ___q1, int32_t ___n2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		intptr_t L_1 = ___q1;
		int32_t L_2 = ___n2;
		int32_t L_3;
		L_3 = NativeMethods_sqlite3_strnicmp_m13B23F1F3609E46F98A1BAB6060398BD2A27FFA5(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_enable_shared_cache(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_enable_shared_cache_m71AD83DF42A2C29EABEE871B13016DAA244CE88C (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, int32_t ___enable0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___enable0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_enable_shared_cache_mB8DD2BD5B5F2E8BE2E85CEE463B657E461C5F751(L_0, NULL);
		return L_1;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_interrupt(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_interrupt_m9A3127FD1C4C9F1E2D42A85645E930C43129BD7F (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		NativeMethods_sqlite3_interrupt_m249933B6A4AACF349A03BE946770A3A755548C0F(L_0, NULL);
		return;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::exec_hook_bridge(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_exec_hook_bridge_m40C932368A5A7407A41481F05BBB284CBED7B1FE (intptr_t ___p0, int32_t ___n1, intptr_t ___values_ptr2, intptr_t ___names_ptr3, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8* L_1;
		L_1 = exec_hook_info_from_ptr_mD4CA6C2909CA4BFCFE982D905FC47BB8D70CB95F(L_0, NULL);
		int32_t L_2 = ___n1;
		intptr_t L_3 = ___values_ptr2;
		intptr_t L_4 = ___names_ptr3;
		NullCheck(L_1);
		int32_t L_5;
		L_5 = exec_hook_info_call_mA713B5044B9732EB1EE735288166504122BFCA77(L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_exec(SQLitePCL.sqlite3,SQLitePCL.utf8z,SQLitePCL.delegate_exec,System.Object,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_exec_mB33B515A8F155E2E8789BE363E13950098E74AAC (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___sql1, delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* ___func2, RuntimeObject* ___user_data3, intptr_t* ___errMsg4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLite3Provider_e_sqlite3_exec_hook_bridge_m40C932368A5A7407A41481F05BBB284CBED7B1FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D* V_0 = NULL;
	exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8* V_1 = NULL;
	hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* V_2 = NULL;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	{
		delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* L_0 = ___func2;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D* L_1 = (callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D*)il2cpp_codegen_object_new(callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		callback_exec__ctor_mE3FE6BAA7DB36577FC047933558235EEE1C7B040(L_1, NULL, (intptr_t)((void*)SQLite3Provider_e_sqlite3_exec_hook_bridge_m40C932368A5A7407A41481F05BBB284CBED7B1FE_RuntimeMethod_var), NULL);
		V_0 = L_1;
		delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* L_2 = ___func2;
		RuntimeObject* L_3 = ___user_data3;
		exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8* L_4 = (exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8*)il2cpp_codegen_object_new(exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		exec_hook_info__ctor_mF44B73FC081E66935ACBC8C8635D85C9E4D3ED24(L_4, L_2, L_3, NULL);
		V_1 = L_4;
		goto IL_001f;
	}

IL_001b:
	{
		V_0 = (callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D*)NULL;
		V_1 = (exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8*)NULL;
	}

IL_001f:
	{
		exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8* L_5 = V_1;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_6 = (hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC*)il2cpp_codegen_object_new(hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		hook_handle__ctor_m6D8E37A8ADD1DC2ED8DAB0482D5E7212F4BBC524(L_6, L_5, NULL);
		V_2 = L_6;
		uint8_t* L_7;
		L_7 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___sql1), NULL);
		V_4 = L_7;
		uint8_t* L_8 = V_4;
		V_3 = (uint8_t*)((uintptr_t)L_8);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_9 = ___db0;
		uint8_t* L_10 = V_3;
		callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D* L_11 = V_0;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_12 = V_2;
		intptr_t* L_13 = ___errMsg4;
		int32_t L_14;
		L_14 = NativeMethods_sqlite3_exec_m4CE3155343AF3114E234F192B59F0B0570AB69DD(L_9, L_10, L_11, L_12, L_13, NULL);
		V_4 = (uint8_t*)((uintptr_t)0);
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_15 = V_2;
		NullCheck(L_15);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_15, NULL);
		return L_14;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_complete(SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_complete_m3B6C33725954C3ED4CFE64EAA7A52DBDC1004FBE (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___sql0, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		uint8_t* L_0;
		L_0 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___sql0), NULL);
		V_0 = L_0;
		uint8_t* L_1 = V_0;
		int32_t L_2;
		L_2 = NativeMethods_sqlite3_complete_m41DCE98D30924199CA848FF74A6704518F9BAE78((uint8_t*)((uintptr_t)L_1), NULL);
		return L_2;
	}
}
// SQLitePCL.utf8z SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_compileoption_get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_compileoption_get_m4A2D9F08AC8245B17CD87B2302CC4371F44AE7D6 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, int32_t ___n0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___n0;
		uint8_t* L_1;
		L_1 = NativeMethods_sqlite3_compileoption_get_m6C55B09A30E4C912F67C1BEFBB22A85D28F16061(L_0, NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = utf8z_FromPtr_m8631331880E0D58B680A0CD8E0FA51670576AFBC(L_1, NULL);
		return L_2;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_compileoption_used(SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_compileoption_used_m3A2E1AE52636EE6D014206C8C799E3E46F0AF53B (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___s0, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		uint8_t* L_0;
		L_0 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___s0), NULL);
		V_0 = L_0;
		uint8_t* L_1 = V_0;
		int32_t L_2;
		L_2 = NativeMethods_sqlite3_compileoption_used_m739645B1E2850AD9762CBA20B0268D48B02DB5B3((uint8_t*)((uintptr_t)L_1), NULL);
		return L_2;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_table_column_metadata(SQLitePCL.sqlite3,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z&,SQLitePCL.utf8z&,System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_table_column_metadata_mA5F7AB13FC3F26E6A15394DB8F052D9FBF73EBEE (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___tblName2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___colName3, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* ___dataType4, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* ___collSeq5, int32_t* ___notNull6, int32_t* ___primaryKey7, int32_t* ___autoInc8, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	uint8_t* V_7 = NULL;
	{
		uint8_t* L_0;
		L_0 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___dbName1), NULL);
		V_3 = L_0;
		uint8_t* L_1 = V_3;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		uint8_t* L_2;
		L_2 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___tblName2), NULL);
		V_4 = L_2;
		uint8_t* L_3 = V_4;
		V_1 = (uint8_t*)((uintptr_t)L_3);
		uint8_t* L_4;
		L_4 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___colName3), NULL);
		V_5 = L_4;
		uint8_t* L_5 = V_5;
		V_2 = (uint8_t*)((uintptr_t)L_5);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_6 = ___db0;
		uint8_t* L_7 = V_0;
		uint8_t* L_8 = V_1;
		uint8_t* L_9 = V_2;
		int32_t* L_10 = ___notNull6;
		int32_t* L_11 = ___primaryKey7;
		int32_t* L_12 = ___autoInc8;
		int32_t L_13;
		L_13 = NativeMethods_sqlite3_table_column_metadata_m3AFDBA6E379081126C71740A363A33CE0F57E885(L_6, L_7, L_8, L_9, (&V_6), (&V_7), L_10, L_11, L_12, NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* L_14 = ___dataType4;
		uint8_t* L_15 = V_6;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_16;
		L_16 = utf8z_FromPtr_m8631331880E0D58B680A0CD8E0FA51670576AFBC(L_15, NULL);
		*(utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&((&(((utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25*)L_14)->___sp_0))->____pinnable_0), (void*)NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* L_17 = ___collSeq5;
		uint8_t* L_18 = V_7;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_19;
		L_19 = utf8z_FromPtr_m8631331880E0D58B680A0CD8E0FA51670576AFBC(L_18, NULL);
		*(utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25*)L_17 = L_19;
		Il2CppCodeGenWriteBarrier((void**)&((&(((utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25*)L_17)->___sp_0))->____pinnable_0), (void*)NULL);
		return L_13;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_key(SQLitePCL.sqlite3,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_key_mBAC1D9BF56C41139F49E853B69393131249AF4C7 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___k1, const RuntimeMethod* method) 
{
	{
		return 1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_key_v2(SQLitePCL.sqlite3,SQLitePCL.utf8z,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_key_v2_m7AA00F098C30F7BCF683D8C0CC9656D3F9A9DA5E (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___name1, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___k2, const RuntimeMethod* method) 
{
	{
		return 1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_rekey(SQLitePCL.sqlite3,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_rekey_m5FEB39546E700B24E3F0BE927528615990862E82 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___k1, const RuntimeMethod* method) 
{
	{
		return 1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_rekey_v2(SQLitePCL.sqlite3,SQLitePCL.utf8z,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_rekey_v2_m24ABDA106794DC5C0614FBF1C20FB90779E5C9C6 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___name1, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___k2, const RuntimeMethod* method) 
{
	{
		return 1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_prepare_v2(SQLitePCL.sqlite3,System.ReadOnlySpan`1<System.Byte>,System.IntPtr&,System.ReadOnlySpan`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_prepare_v2_m7C1436A7833AF0E34AB1D2A9C73DE451824E3F32 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___sql1, intptr_t* ___stm2, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* ___tail3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m17D448297CDE6CAE9A5755BF9B7190F3DE66F6FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		uint8_t* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8((&___sql1), ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_2 = ___db0;
		uint8_t* L_3 = V_0;
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline((&___sql1), ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		intptr_t* L_5 = ___stm2;
		int32_t L_6;
		L_6 = NativeMethods_sqlite3_prepare_v2_m47F3DC300069CA2B4CC210A0FE5EBC4965C57CC9(L_2, L_3, L_4, L_5, (&V_2), NULL);
		uint8_t* L_7 = V_2;
		uint8_t* L_8 = V_0;
		V_3 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_7, (intptr_t)L_8))/1))));
		int32_t L_9;
		L_9 = ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline((&___sql1), ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_9, L_10));
		int32_t L_11 = V_4;
		G_B1_0 = L_6;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			G_B2_0 = L_6;
			goto IL_0046;
		}
	}
	{
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* L_12 = ___tail3;
		int32_t L_13 = V_3;
		int32_t L_14 = V_4;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_15;
		L_15 = ReadOnlySpan_1_Slice_m17D448297CDE6CAE9A5755BF9B7190F3DE66F6FE_inline((&___sql1), L_13, L_14, ReadOnlySpan_1_Slice_m17D448297CDE6CAE9A5755BF9B7190F3DE66F6FE_RuntimeMethod_var);
		*(ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A*)L_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)&(((ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A*)L_12)->____pinnable_0), (void*)NULL);
		return G_B1_0;
	}

IL_0046:
	{
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* L_16 = ___tail3;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_17;
		L_17 = ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9(ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9_RuntimeMethod_var);
		*(ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A*)L_16 = L_17;
		Il2CppCodeGenWriteBarrier((void**)&(((ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A*)L_16)->____pinnable_0), (void*)NULL);
		return G_B2_0;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_prepare_v2(SQLitePCL.sqlite3,SQLitePCL.utf8z,System.IntPtr&,SQLitePCL.utf8z&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_prepare_v2_mE192D17C8D2A6C7CFDC418A182471B0092943F06 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___sql1, intptr_t* ___stm2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* ___tail3, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	{
		uint8_t* L_0;
		L_0 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___sql1), NULL);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_2 = ___db0;
		uint8_t* L_3 = V_0;
		intptr_t* L_4 = ___stm2;
		int32_t L_5;
		L_5 = NativeMethods_sqlite3_prepare_v2_m47F3DC300069CA2B4CC210A0FE5EBC4965C57CC9(L_2, L_3, (-1), L_4, (&V_2), NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* L_6 = ___tail3;
		uint8_t* L_7 = V_2;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_8;
		L_8 = utf8z_FromPtr_m8631331880E0D58B680A0CD8E0FA51670576AFBC(L_7, NULL);
		*(utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25*)L_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&((&(((utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25*)L_6)->___sp_0))->____pinnable_0), (void*)NULL);
		return L_5;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_prepare_v3(SQLitePCL.sqlite3,System.ReadOnlySpan`1<System.Byte>,System.UInt32,System.IntPtr&,System.ReadOnlySpan`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_prepare_v3_mF13E42DA8953BF7901740841B5E7BD464C9A57F9 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___sql1, uint32_t ___flags2, intptr_t* ___stm3, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* ___tail4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_m17D448297CDE6CAE9A5755BF9B7190F3DE66F6FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		uint8_t* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8((&___sql1), ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_2 = ___db0;
		uint8_t* L_3 = V_0;
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline((&___sql1), ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		uint32_t L_5 = ___flags2;
		intptr_t* L_6 = ___stm3;
		int32_t L_7;
		L_7 = NativeMethods_sqlite3_prepare_v3_m257AE330808B1998CAF4D541F51338B4E234A22A(L_2, L_3, L_4, L_5, L_6, (&V_2), NULL);
		uint8_t* L_8 = V_2;
		uint8_t* L_9 = V_0;
		V_3 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_8, (intptr_t)L_9))/1))));
		int32_t L_10;
		L_10 = ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline((&___sql1), ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		int32_t L_11 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_10, L_11));
		int32_t L_12 = V_4;
		G_B1_0 = L_7;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			G_B2_0 = L_7;
			goto IL_0048;
		}
	}
	{
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* L_13 = ___tail4;
		int32_t L_14 = V_3;
		int32_t L_15 = V_4;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_16;
		L_16 = ReadOnlySpan_1_Slice_m17D448297CDE6CAE9A5755BF9B7190F3DE66F6FE_inline((&___sql1), L_14, L_15, ReadOnlySpan_1_Slice_m17D448297CDE6CAE9A5755BF9B7190F3DE66F6FE_RuntimeMethod_var);
		*(ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A*)L_13 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A*)L_13)->____pinnable_0), (void*)NULL);
		return G_B1_0;
	}

IL_0048:
	{
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* L_17 = ___tail4;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_18;
		L_18 = ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9(ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9_RuntimeMethod_var);
		*(ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A*)L_17 = L_18;
		Il2CppCodeGenWriteBarrier((void**)&(((ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A*)L_17)->____pinnable_0), (void*)NULL);
		return G_B2_0;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_prepare_v3(SQLitePCL.sqlite3,SQLitePCL.utf8z,System.UInt32,System.IntPtr&,SQLitePCL.utf8z&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_prepare_v3_mBDBAE4645CE9F2F0A111BCD9BC4F7F9C6B8667B3 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___sql1, uint32_t ___flags2, intptr_t* ___stm3, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* ___tail4, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	{
		uint8_t* L_0;
		L_0 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___sql1), NULL);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_2 = ___db0;
		uint8_t* L_3 = V_0;
		uint32_t L_4 = ___flags2;
		intptr_t* L_5 = ___stm3;
		int32_t L_6;
		L_6 = NativeMethods_sqlite3_prepare_v3_m257AE330808B1998CAF4D541F51338B4E234A22A(L_2, L_3, (-1), L_4, L_5, (&V_2), NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* L_7 = ___tail4;
		uint8_t* L_8 = V_2;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_9;
		L_9 = utf8z_FromPtr_m8631331880E0D58B680A0CD8E0FA51670576AFBC(L_8, NULL);
		*(utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25*)L_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&((&(((utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25*)L_7)->___sp_0))->____pinnable_0), (void*)NULL);
		return L_6;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_db_status(SQLitePCL.sqlite3,System.Int32,System.Int32&,System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_db_status_m98D5485B11AA66EE178CB3950950120C6CD5EB10 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___op1, int32_t* ___current2, int32_t* ___highest3, int32_t ___resetFlg4, const RuntimeMethod* method) 
{
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		int32_t L_1 = ___op1;
		int32_t* L_2 = ___current2;
		int32_t* L_3 = ___highest3;
		int32_t L_4 = ___resetFlg4;
		int32_t L_5;
		L_5 = NativeMethods_sqlite3_db_status_m1DF667F36C04C7E8EF8DFB403CE0264F44B8A047(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// SQLitePCL.utf8z SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_sql(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_sql_mFB9702302D5D3BAFBD56E10628BCF155E825AC33 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stmt0;
		uint8_t* L_1;
		L_1 = NativeMethods_sqlite3_sql_m240AE08BA65D3A839A3FD5CF5CA3D442163FD2D9(L_0, NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = utf8z_FromPtr_m8631331880E0D58B680A0CD8E0FA51670576AFBC(L_1, NULL);
		return L_2;
	}
}
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_db_handle(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_db_handle_m0AFA4DF15673AA4C5DF4B73C8B8FDB0554198917 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___stmt0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___stmt0;
		intptr_t L_1;
		L_1 = NativeMethods_sqlite3_db_handle_mD9F49A773AAFD638123140A55072749ED81929F5(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_blob_open(SQLitePCL.sqlite3,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z,System.Int64,System.Int32,SQLitePCL.sqlite3_blob&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_blob_open_m6F379A8AB09594757D0BF97328F9C3B8DCABCD15 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___db_utf81, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___table_utf82, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___col_utf83, int64_t ___rowid4, int32_t ___flags5, sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057** ___blob6, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	{
		uint8_t* L_0;
		L_0 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___db_utf81), NULL);
		V_3 = L_0;
		uint8_t* L_1 = V_3;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		uint8_t* L_2;
		L_2 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___table_utf82), NULL);
		V_4 = L_2;
		uint8_t* L_3 = V_4;
		V_1 = (uint8_t*)((uintptr_t)L_3);
		uint8_t* L_4;
		L_4 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___col_utf83), NULL);
		V_5 = L_4;
		uint8_t* L_5 = V_5;
		V_2 = (uint8_t*)((uintptr_t)L_5);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_6 = ___db0;
		uint8_t* L_7 = V_0;
		uint8_t* L_8 = V_1;
		uint8_t* L_9 = V_2;
		int64_t L_10 = ___rowid4;
		int32_t L_11 = ___flags5;
		sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057** L_12 = ___blob6;
		int32_t L_13;
		L_13 = NativeMethods_sqlite3_blob_open_m44884FAC00BD9B5194AB5BBD4659FADE64B62929(L_6, L_7, L_8, L_9, L_10, L_11, L_12, NULL);
		return L_13;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_blob_bytes(SQLitePCL.sqlite3_blob)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_blob_bytes_m38E75125F3BDA1BFFDA366C22DDE388AFBB4E8F6 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* ___blob0, const RuntimeMethod* method) 
{
	{
		sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* L_0 = ___blob0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_blob_bytes_m6455304E98F531E582689605F40917348405EAD6(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_blob_reopen(SQLitePCL.sqlite3_blob,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_blob_reopen_m83FBFEA4ACB2D5DDAB685385DB2C1D15746F47B3 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* ___blob0, int64_t ___rowid1, const RuntimeMethod* method) 
{
	{
		sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* L_0 = ___blob0;
		int64_t L_1 = ___rowid1;
		int32_t L_2;
		L_2 = NativeMethods_sqlite3_blob_reopen_mCBB7112E8B7ABCF02A97D659F3D5B6F509834D32(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_blob_read(SQLitePCL.sqlite3_blob,System.Span`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_blob_read_m36513724060C58BC0C02C0CC36C3C2AEAF13C378 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* ___blob0, Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01 ___b1, int32_t ___offset2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m18012CFE616D70838138CAB962C3902722AD8686_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mECE334B94CE99314781C0D7DFD702221C4ABF7A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint8_t* L_0;
		L_0 = Span_1_GetPinnableReference_m18012CFE616D70838138CAB962C3902722AD8686((&___b1), Span_1_GetPinnableReference_m18012CFE616D70838138CAB962C3902722AD8686_RuntimeMethod_var);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* L_2 = ___blob0;
		uint8_t* L_3 = V_0;
		int32_t L_4;
		L_4 = Span_1_get_Length_mECE334B94CE99314781C0D7DFD702221C4ABF7A5_inline((&___b1), Span_1_get_Length_mECE334B94CE99314781C0D7DFD702221C4ABF7A5_RuntimeMethod_var);
		int32_t L_5 = ___offset2;
		int32_t L_6;
		L_6 = NativeMethods_sqlite3_blob_read_m5E5B16D8FC7C72378D4A8440C19B71E84A1DF1CB(L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_blob_write(SQLitePCL.sqlite3_blob,System.ReadOnlySpan`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_blob_write_mAB9ECABD5B2DAF83F8DA4D84AAF6A5819BDD864A (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* ___blob0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___b1, int32_t ___offset2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint8_t* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8((&___b1), ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* L_2 = ___blob0;
		uint8_t* L_3 = V_0;
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline((&___b1), ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		int32_t L_5 = ___offset2;
		int32_t L_6;
		L_6 = NativeMethods_sqlite3_blob_write_mC171C68F3E57279691AF0A83050B641D218D8D92(L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_blob_close(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_blob_close_mCF30D13F5809AB859210FD5A8386CA4AAC2BC27D (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___blob0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___blob0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_blob_close_m1C767C34C81975A41336E398D66CF1F1BD81B725(L_0, NULL);
		return L_1;
	}
}
// SQLitePCL.sqlite3_backup SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_backup_init(SQLitePCL.sqlite3,SQLitePCL.utf8z,SQLitePCL.sqlite3,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_backup_init_mB45C9D5A8E3BF102365979DA22321511152762D2 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___destDb0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___destName1, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___sourceDb2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___sourceName3, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	{
		uint8_t* L_0;
		L_0 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___destName1), NULL);
		V_2 = L_0;
		uint8_t* L_1 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		uint8_t* L_2;
		L_2 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___sourceName3), NULL);
		V_3 = L_2;
		uint8_t* L_3 = V_3;
		V_1 = (uint8_t*)((uintptr_t)L_3);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_4 = ___destDb0;
		uint8_t* L_5 = V_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_6 = ___sourceDb2;
		uint8_t* L_7 = V_1;
		sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* L_8;
		L_8 = NativeMethods_sqlite3_backup_init_m85DB89F7A09F60AFED58AB79B9C48E66FB2FBB66(L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_backup_step(SQLitePCL.sqlite3_backup,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_backup_step_mCF8F8DF4DF2A3488F12CCA6098F1A31C70338B19 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* ___backup0, int32_t ___nPage1, const RuntimeMethod* method) 
{
	{
		sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* L_0 = ___backup0;
		int32_t L_1 = ___nPage1;
		int32_t L_2;
		L_2 = NativeMethods_sqlite3_backup_step_mE41EB93F1B4BC0C97F02BABFEF8DB4082EE11177(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_backup_remaining(SQLitePCL.sqlite3_backup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_backup_remaining_m84AD7AA511ABFCC9BE6A2FFEF98400A1ABB09622 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* ___backup0, const RuntimeMethod* method) 
{
	{
		sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* L_0 = ___backup0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_backup_remaining_m521BAAFA03D3AFD465F2B84F988C826EB83CB182(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_backup_pagecount(SQLitePCL.sqlite3_backup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_backup_pagecount_m3582BB02AB4EDD5611376D17F67FC53D3CA47829 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* ___backup0, const RuntimeMethod* method) 
{
	{
		sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* L_0 = ___backup0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_backup_pagecount_m49DC2501D7484F658E96C336ECA6B8ACD0B316C8(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_backup_finish(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_backup_finish_mC621B89829595E24653DEFBA255276AC030834E9 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___backup0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___backup0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_backup_finish_m72535B9546171BAE4B8C0108EC04FF0473AC34E7(L_0, NULL);
		return L_1;
	}
}
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_next_stmt(SQLitePCL.sqlite3,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_next_stmt_m62B92B8C4EB695997D298BB6E174EB238A9C4C2E (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, intptr_t ___stmt1, const RuntimeMethod* method) 
{
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		intptr_t L_1 = ___stmt1;
		intptr_t L_2;
		L_2 = NativeMethods_sqlite3_next_stmt_m9172D0000A32933007FBD97BC637CD018966251E(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int64 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_last_insert_rowid(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_last_insert_rowid_m63A43339DA494D3A27E8BC46003CFFFA6180B21C (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		int64_t L_1;
		L_1 = NativeMethods_sqlite3_last_insert_rowid_m5218DAC4EAEBEB530BC81A338AC8CF9A940B9243(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_changes(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_changes_m5AF723F3905B5775A1F47A5334F7B0CA49D43673 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_changes_m2981DF863835F76EC8513193777B268593A075A0(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_total_changes(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_total_changes_mA58BDC1BD63218D1D52090328C3E8D0E7CD96F3D (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_total_changes_mF78BDDBB54A1FEBFB44A2C9C9747E4F2F06006DC(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_extended_result_codes(SQLitePCL.sqlite3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_extended_result_codes_m95F73DA190DE377AB93666939C00F5AE94FDD983 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___onoff1, const RuntimeMethod* method) 
{
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		int32_t L_1 = ___onoff1;
		int32_t L_2;
		L_2 = NativeMethods_sqlite3_extended_result_codes_mF72D6B440E9E60380794D4B6EEBF681DF09C1697(L_0, L_1, NULL);
		return L_2;
	}
}
// SQLitePCL.utf8z SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_errstr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_errstr_m2F65EB92C455A06A5D033672FF338B29575FB789 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, int32_t ___rc0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___rc0;
		uint8_t* L_1;
		L_1 = NativeMethods_sqlite3_errstr_m94BF95DBD723E111FB2870D02F9DE44BF8FB4B91(L_0, NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = utf8z_FromPtr_m8631331880E0D58B680A0CD8E0FA51670576AFBC(L_1, NULL);
		return L_2;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_errcode(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_errcode_m94224A8B294FB20C32C13BED0205C4548AFB81E7 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_errcode_m6549377A5C62FF0B83336B3B266D04325374426B(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_extended_errcode(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_extended_errcode_m45BA2CC755E5C655124D5BF4B9EC0E852EF3459B (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_extended_errcode_m8711CCEAA8F0228FE4B22EA834EA83483BFD846C(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_busy_timeout(SQLitePCL.sqlite3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_busy_timeout_m77B0665498E87AC101D1D1E327F98F20BA80AC2F (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___ms1, const RuntimeMethod* method) 
{
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		int32_t L_1 = ___ms1;
		int32_t L_2;
		L_2 = NativeMethods_sqlite3_busy_timeout_m6BE9F32A705F97842C8D72AE82179AA5F4B06A29(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_get_autocommit(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_get_autocommit_mF83F69DE003771F07EA3149345572D73B847A189 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_get_autocommit_m1B00FE7D177E280A08DAD94DF3A2FF54982DA9D6(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_db_readonly(SQLitePCL.sqlite3,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_db_readonly_mB5F69EFFCC28A1C9596A309D7048BA036CE6A38D (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName1, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint8_t* L_0;
		L_0 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___dbName1), NULL);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_2 = ___db0;
		uint8_t* L_3 = V_0;
		int32_t L_4;
		L_4 = NativeMethods_sqlite3_db_readonly_mF3564C27552394F046037615CF39F34F631FEA31(L_2, L_3, NULL);
		return L_4;
	}
}
// SQLitePCL.utf8z SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_db_filename(SQLitePCL.sqlite3,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_db_filename_m2F3EAEA356C391580427F9BAA3AF8C70CB4294AA (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___att1, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint8_t* L_0;
		L_0 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___att1), NULL);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_2 = ___db0;
		uint8_t* L_3 = V_0;
		uint8_t* L_4;
		L_4 = NativeMethods_sqlite3_db_filename_m6F4CF73CF5446915D06E68BA808B6957D0FAAEAA(L_2, L_3, NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_5;
		L_5 = utf8z_FromPtr_m8631331880E0D58B680A0CD8E0FA51670576AFBC(L_4, NULL);
		return L_5;
	}
}
// SQLitePCL.utf8z SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_errmsg(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_errmsg_m0D6C809CFDCA0C575F4AC2E308BE4C2E670EA5B3 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		uint8_t* L_1;
		L_1 = NativeMethods_sqlite3_errmsg_mA3489AD3BA377B39157C2CB1381421674EAA9638(L_0, NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = utf8z_FromPtr_m8631331880E0D58B680A0CD8E0FA51670576AFBC(L_1, NULL);
		return L_2;
	}
}
// SQLitePCL.utf8z SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_libversion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_libversion_mA4BCC5B2439AF88BCF35DFF90D67A6B309F3DE64 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0;
		L_0 = NativeMethods_sqlite3_libversion_m66335CB96A11F9EF190CBD8103BABC51F082A8F4(NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_1;
		L_1 = utf8z_FromPtr_m8631331880E0D58B680A0CD8E0FA51670576AFBC(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_libversion_number()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_libversion_number_m87F44BC508BAF46E1D54BD7449A5B9DD4709960C (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = NativeMethods_sqlite3_libversion_number_m1BB30EEFACABDD1E9F05A64183DB18659D35E6E3(NULL);
		return L_0;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_threadsafe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_threadsafe_mE8CEF086544C69C9BF1808A9C22CCA173A9B27A9 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = NativeMethods_sqlite3_threadsafe_mB955699D3731EAAE69DBAF631991DF6F9560F16A(NULL);
		return L_0;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_config(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_config_m98D1A5BFE4D7353D91A9DFBD31525C3648BC1E9C (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, int32_t ___op0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___op0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_config_none_m6D318F1BF78C5A2B92625F22FDCAB98B73A83652(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_config(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_config_m70BEC695D7BAA76B0CA93B8933BAFBDC4067E5D0 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, int32_t ___op0, int32_t ___val1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___op0;
		int32_t L_1 = ___val1;
		int32_t L_2;
		L_2 = NativeMethods_sqlite3_config_int_mAAC260F740B6294713D3F9E5D86F911D9C2DD4EB(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_initialize_mB6A6677431B9218C07489B67C098A2E87105D3D3 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = NativeMethods_sqlite3_initialize_m8A6FFACCE2B0E50A33B2F4DCF972A9FDFCE7C6AC(NULL);
		return L_0;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_shutdown_mF0EBC761EF68D468543C2C1949D083FBF491849A (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = NativeMethods_sqlite3_shutdown_m4B4437C2A802096670337818149E8C3905A7BE3A(NULL);
		return L_0;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_enable_load_extension(SQLitePCL.sqlite3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_enable_load_extension_m40A1469BDF79FD177A54F57F278CBFB7F71E3771 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___onoff1, const RuntimeMethod* method) 
{
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		int32_t L_1 = ___onoff1;
		int32_t L_2;
		L_2 = NativeMethods_sqlite3_enable_load_extension_m625A8DEFB41726507DD20ED08711B8E13EF57C78(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::commit_hook_bridge_impl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_commit_hook_bridge_impl_m27B12FD7638DC52474BDE95D0CEAF6932C4D2F0D (intptr_t ___p0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* L_1;
		L_1 = commit_hook_info_from_ptr_mF268F9464334327C9B2D54D1E53BF3FB01922EB5(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = commit_hook_info_call_mE9C755CD3924D7327451B4E46477242A86EED90A(L_1, NULL);
		return L_2;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_commit_hook(SQLitePCL.sqlite3,SQLitePCL.delegate_commit,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_commit_hook_m9A42C727C0E2A01DD029996209EAE906377E9568 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* ___func1, RuntimeObject* ___v2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* V_0 = NULL;
	callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12* V_1 = NULL;
	commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* V_2 = NULL;
	hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* V_3 = NULL;
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_1;
		L_1 = SQLite3Provider_e_sqlite3_get_hooks_m83CB238FC414AD9C7FA99D067B3511568712A72F(__this, L_0, NULL);
		V_0 = L_1;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___commit_5;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___commit_5;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_6 = V_0;
		NullCheck(L_6);
		L_6->___commit_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___commit_5), (void*)(RuntimeObject*)NULL);
	}

IL_0022:
	{
		delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* L_7 = ___func1;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12* L_8 = __this->___commit_hook_bridge_1;
		V_1 = L_8;
		delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* L_9 = ___func1;
		RuntimeObject* L_10 = ___v2;
		commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* L_11 = (commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78*)il2cpp_codegen_object_new(commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		commit_hook_info__ctor_m4B4EC8FA983EECCEF944C38F087A910E4B85C74C(L_11, L_9, L_10, NULL);
		V_2 = L_11;
		goto IL_003a;
	}

IL_0036:
	{
		V_1 = (callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12*)NULL;
		V_2 = (commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78*)NULL;
	}

IL_003a:
	{
		commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* L_12 = V_2;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_13 = (hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC*)il2cpp_codegen_object_new(hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		hook_handle__ctor_m6D8E37A8ADD1DC2ED8DAB0482D5E7212F4BBC524(L_13, L_12, NULL);
		V_3 = L_13;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_14 = ___db0;
		callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12* L_15 = V_1;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_16 = V_3;
		intptr_t L_17;
		L_17 = NativeMethods_sqlite3_commit_hook_m623ADE2035D6DB5318AF785037B80AB249DF20CB(L_14, L_15, L_16, NULL);
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_18 = V_0;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_19 = V_3;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = hook_handle_ForDispose_m75CB5080133A1EA42368D022BC358117AC9FE588(L_19, NULL);
		NullCheck(L_18);
		L_18->___commit_5 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___commit_5), (void*)L_20);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::scalar_function_hook_bridge_impl(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_scalar_function_hook_bridge_impl_m144A96182F913A873EA819562C6FBE535AE06A2C (intptr_t ___context0, int32_t ___num_args1, intptr_t ___argsptr2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___context0;
		intptr_t L_1;
		L_1 = NativeMethods_sqlite3_user_data_mB204A1D40E8B52232D72A2F884C79B11384F06DC(L_0, NULL);
		function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* L_2;
		L_2 = function_hook_info_from_ptr_mF719AC68B43BA4D0B991245044B83C11213467AD(L_1, NULL);
		intptr_t L_3 = ___context0;
		int32_t L_4 = ___num_args1;
		intptr_t L_5 = ___argsptr2;
		NullCheck(L_2);
		function_hook_info_call_scalar_mAA7975A8E3B3EDBE7C1FCDFC02178C7F72DDD7BB(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_create_function(SQLitePCL.sqlite3,System.Byte[],System.Int32,System.Int32,System.Object,SQLitePCL.delegate_function_scalar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_create_function_m2C270844EDF077E6137935A04DB4C6B33C1E99DA (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___name1, int32_t ___nargs2, int32_t ___flags3, RuntimeObject* ___v4, delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* ___func5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* V_0 = NULL;
	int32_t V_1 = 0;
	callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054* V_2 = NULL;
	function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* V_3 = NULL;
	hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* V_4 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B5_0 = 0;
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_1;
		L_1 = SQLite3Provider_e_sqlite3_get_hooks_m83CB238FC414AD9C7FA99D067B3511568712A72F(__this, L_0, NULL);
		V_0 = L_1;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___name1;
		int32_t L_4 = ___nargs2;
		NullCheck(L_2);
		bool L_5;
		L_5 = hook_handles_RemoveScalarFunction_m9159BE57F6977DCF622FE30506A7F771739B423F(L_2, L_3, L_4, NULL);
		int32_t L_6 = ___flags3;
		V_1 = ((int32_t)(1|L_6));
		delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* L_7 = ___func5;
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054* L_8 = __this->___scalar_function_hook_bridge_2;
		V_2 = L_8;
		delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* L_9 = ___func5;
		RuntimeObject* L_10 = ___v4;
		function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* L_11 = (function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017*)il2cpp_codegen_object_new(function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		function_hook_info__ctor_m4B1D6B0D2A0FF53B36B2BF437FD87A3BB8B20E86(L_11, L_9, L_10, NULL);
		V_3 = L_11;
		goto IL_0031;
	}

IL_002d:
	{
		V_2 = (callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054*)NULL;
		V_3 = (function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017*)NULL;
	}

IL_0031:
	{
		function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* L_12 = V_3;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_13 = (hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC*)il2cpp_codegen_object_new(hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		hook_handle__ctor_m6D8E37A8ADD1DC2ED8DAB0482D5E7212F4BBC524(L_13, L_12, NULL);
		V_4 = L_13;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_14 = ___db0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___name1;
		int32_t L_16 = ___nargs2;
		int32_t L_17 = V_1;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_18 = V_4;
		callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054* L_19 = V_2;
		int32_t L_20;
		L_20 = NativeMethods_sqlite3_create_function_v2_m357F6C1B571254ED52BE30DDB244E631D6319004(L_14, L_15, L_16, L_17, L_18, L_19, (callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED*)NULL, (callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F*)NULL, (callback_destroy_t196CAA62B91CAB2FE7AFA98FA27B902DD949A351*)NULL, NULL);
		int32_t L_21 = L_20;
		G_B4_0 = L_21;
		if (L_21)
		{
			G_B6_0 = L_21;
			goto IL_005d;
		}
	}
	{
		callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054* L_22 = V_2;
		G_B5_0 = G_B4_0;
		if (!L_22)
		{
			G_B6_0 = G_B4_0;
			goto IL_005d;
		}
	}
	{
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_23 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___name1;
		int32_t L_25 = ___nargs2;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_26 = V_4;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = hook_handle_ForDispose_m75CB5080133A1EA42368D022BC358117AC9FE588(L_26, NULL);
		NullCheck(L_23);
		hook_handles_AddScalarFunction_mD241ED7FC4CFCD555C808E31748100FCAA652047(L_23, L_24, L_25, L_27, NULL);
		G_B6_0 = G_B5_0;
	}

IL_005d:
	{
		return G_B6_0;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::log_hook_bridge_impl(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_log_hook_bridge_impl_mDAA0E7371A73EF6F8CA9663F984CF87F31D9AE53 (intptr_t ___p0, int32_t ___rc1, intptr_t ___s2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116* L_1;
		L_1 = log_hook_info_from_ptr_m1DABE726D0FF1D5EEC222AD631DF38C8CEAC5791(L_0, NULL);
		int32_t L_2 = ___rc1;
		intptr_t L_3 = ___s2;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_4;
		L_4 = utf8z_FromIntPtr_m7DD6956F80F61F4921C493D207873C9866876CF3(L_3, NULL);
		NullCheck(L_1);
		log_hook_info_call_mBBD1CECB059D785233952F83C5582786DBEFE694(L_1, L_2, L_4, NULL);
		return;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_config_log(SQLitePCL.delegate_log,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_config_log_mD1EF33B045D0664BC51E80216C64AE74BD929C17 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B* V_0 = NULL;
	log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116* V_1 = NULL;
	hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* V_2 = NULL;
	{
		RuntimeObject* L_0 = ((SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3_StaticFields*)il2cpp_codegen_static_fields_for(SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3_il2cpp_TypeInfo_var))->___disp_log_hook_handle_3;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ((SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3_StaticFields*)il2cpp_codegen_static_fields_for(SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3_il2cpp_TypeInfo_var))->___disp_log_hook_handle_3;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
		((SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3_StaticFields*)il2cpp_codegen_static_fields_for(SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3_il2cpp_TypeInfo_var))->___disp_log_hook_handle_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3_StaticFields*)il2cpp_codegen_static_fields_for(SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3_il2cpp_TypeInfo_var))->___disp_log_hook_handle_3), (void*)(RuntimeObject*)NULL);
	}

IL_0017:
	{
		delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* L_2 = ___func0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B* L_3 = __this->___log_hook_bridge_4;
		V_0 = L_3;
		delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* L_4 = ___func0;
		RuntimeObject* L_5 = ___v1;
		log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116* L_6 = (log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116*)il2cpp_codegen_object_new(log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		log_hook_info__ctor_m72FEA14AC551F530BD79A2442BF002D7237EFDFC(L_6, L_4, L_5, NULL);
		V_1 = L_6;
		goto IL_002f;
	}

IL_002b:
	{
		V_0 = (callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B*)NULL;
		V_1 = (log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116*)NULL;
	}

IL_002f:
	{
		log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116* L_7 = V_1;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_8 = (hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC*)il2cpp_codegen_object_new(hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		hook_handle__ctor_m6D8E37A8ADD1DC2ED8DAB0482D5E7212F4BBC524(L_8, L_7, NULL);
		V_2 = L_8;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_9 = V_2;
		((SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3_StaticFields*)il2cpp_codegen_static_fields_for(SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3_il2cpp_TypeInfo_var))->___disp_log_hook_handle_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3_StaticFields*)il2cpp_codegen_static_fields_for(SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3_il2cpp_TypeInfo_var))->___disp_log_hook_handle_3), (void*)L_9);
		callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B* L_10 = V_0;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_11 = V_2;
		int32_t L_12;
		L_12 = NativeMethods_sqlite3_config_log_m9EB86B0F04AC3C146026F288471FF69AB0C6975C(((int32_t)16), L_10, L_11, NULL);
		return L_12;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_log(System.Int32,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_log_m637957B7E793589976B64DA76B6685D3B5FA47AB (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, int32_t ___errcode0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___s1, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint8_t* L_0;
		L_0 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___s1), NULL);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		int32_t L_2 = ___errcode0;
		uint8_t* L_3 = V_0;
		NativeMethods_sqlite3_log_m148C6683D4EE3EAD31B07E98AFAC8A65EE6F7C63(L_2, L_3, NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::agg_function_hook_bridge_step_impl(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_agg_function_hook_bridge_step_impl_m61B6EEBDC2BDC5D21A894F365B62147344B95BD4 (intptr_t ___context0, int32_t ___num_args1, intptr_t ___argsptr2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___context0;
		intptr_t L_1;
		L_1 = NativeMethods_sqlite3_aggregate_context_m72B7BFFF3BF9CF27C41627CC93A6095C0C49C6FF(L_0, 8, NULL);
		V_0 = L_1;
		intptr_t L_2 = ___context0;
		intptr_t L_3;
		L_3 = NativeMethods_sqlite3_user_data_mB204A1D40E8B52232D72A2F884C79B11384F06DC(L_2, NULL);
		function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* L_4;
		L_4 = function_hook_info_from_ptr_mF719AC68B43BA4D0B991245044B83C11213467AD(L_3, NULL);
		intptr_t L_5 = ___context0;
		intptr_t L_6 = V_0;
		int32_t L_7 = ___num_args1;
		intptr_t L_8 = ___argsptr2;
		NullCheck(L_4);
		function_hook_info_call_step_m50C9070AFF7A909228C5C298AE3CB348571F9FF9(L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::agg_function_hook_bridge_final_impl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_agg_function_hook_bridge_final_impl_m38A0C82EC682F505A60E5DAA931251BFB6B1A6CB (intptr_t ___context0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___context0;
		intptr_t L_1;
		L_1 = NativeMethods_sqlite3_aggregate_context_m72B7BFFF3BF9CF27C41627CC93A6095C0C49C6FF(L_0, 8, NULL);
		V_0 = L_1;
		intptr_t L_2 = ___context0;
		intptr_t L_3;
		L_3 = NativeMethods_sqlite3_user_data_mB204A1D40E8B52232D72A2F884C79B11384F06DC(L_2, NULL);
		function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* L_4;
		L_4 = function_hook_info_from_ptr_mF719AC68B43BA4D0B991245044B83C11213467AD(L_3, NULL);
		intptr_t L_5 = ___context0;
		intptr_t L_6 = V_0;
		NullCheck(L_4);
		function_hook_info_call_final_m41F22B0B1C88975CAE40BD2E8A8F2ACAB962C76E(L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_create_function(SQLitePCL.sqlite3,System.Byte[],System.Int32,System.Int32,System.Object,SQLitePCL.delegate_function_aggregate_step,SQLitePCL.delegate_function_aggregate_final)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_create_function_m52AA9EA24AF7340B981F6EAE51451B9BF746AEF8 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___name1, int32_t ___nargs2, int32_t ___flags3, RuntimeObject* ___v4, delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* ___func_step5, delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* ___func_final6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* V_0 = NULL;
	int32_t V_1 = 0;
	callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED* V_2 = NULL;
	callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F* V_3 = NULL;
	function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* V_4 = NULL;
	hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* V_5 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B5_0 = 0;
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_1;
		L_1 = SQLite3Provider_e_sqlite3_get_hooks_m83CB238FC414AD9C7FA99D067B3511568712A72F(__this, L_0, NULL);
		V_0 = L_1;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___name1;
		int32_t L_4 = ___nargs2;
		NullCheck(L_2);
		bool L_5;
		L_5 = hook_handles_RemoveAggFunction_mA42A9716C0A6E544449532021405FA05652BE8C0(L_2, L_3, L_4, NULL);
		int32_t L_6 = ___flags3;
		V_1 = ((int32_t)(1|L_6));
		delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* L_7 = ___func_step5;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED* L_8 = __this->___agg_function_hook_bridge_step_5;
		V_2 = L_8;
		callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F* L_9 = __this->___agg_function_hook_bridge_final_6;
		V_3 = L_9;
		delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* L_10 = ___func_step5;
		delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* L_11 = ___func_final6;
		RuntimeObject* L_12 = ___v4;
		function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* L_13 = (function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017*)il2cpp_codegen_object_new(function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		function_hook_info__ctor_mD469D8E11284B583FA130AFD16FB2EBACB59FDF2(L_13, L_10, L_11, L_12, NULL);
		V_4 = L_13;
		goto IL_003e;
	}

IL_0037:
	{
		V_2 = (callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED*)NULL;
		V_3 = (callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F*)NULL;
		V_4 = (function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017*)NULL;
	}

IL_003e:
	{
		function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* L_14 = V_4;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_15 = (hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC*)il2cpp_codegen_object_new(hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		hook_handle__ctor_m6D8E37A8ADD1DC2ED8DAB0482D5E7212F4BBC524(L_15, L_14, NULL);
		V_5 = L_15;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_16 = ___db0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___name1;
		int32_t L_18 = ___nargs2;
		int32_t L_19 = V_1;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_20 = V_5;
		callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED* L_21 = V_2;
		callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F* L_22 = V_3;
		int32_t L_23;
		L_23 = NativeMethods_sqlite3_create_function_v2_m357F6C1B571254ED52BE30DDB244E631D6319004(L_16, L_17, L_18, L_19, L_20, (callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054*)NULL, L_21, L_22, (callback_destroy_t196CAA62B91CAB2FE7AFA98FA27B902DD949A351*)NULL, NULL);
		int32_t L_24 = L_23;
		G_B4_0 = L_24;
		if (L_24)
		{
			G_B6_0 = L_24;
			goto IL_006b;
		}
	}
	{
		callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED* L_25 = V_2;
		G_B5_0 = G_B4_0;
		if (!L_25)
		{
			G_B6_0 = G_B4_0;
			goto IL_006b;
		}
	}
	{
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_26 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___name1;
		int32_t L_28 = ___nargs2;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_29 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = hook_handle_ForDispose_m75CB5080133A1EA42368D022BC358117AC9FE588(L_29, NULL);
		NullCheck(L_26);
		hook_handles_AddAggFunction_m81386278C3F4916C5052FD699F25319A978F651A(L_26, L_27, L_28, L_30, NULL);
		G_B6_0 = G_B5_0;
	}

IL_006b:
	{
		return G_B6_0;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::collation_hook_bridge_impl(System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_collation_hook_bridge_impl_m174901BF60BCC008A372B7D555A6A651B3715244 (intptr_t ___p0, int32_t ___len11, intptr_t ___pv12, int32_t ___len23, intptr_t ___pv24, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		intptr_t L_0 = ___p0;
		collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98* L_1;
		L_1 = collation_hook_info_from_ptr_m2461265D0988BBA2AD3C0D4EAC65670F71F999CC(L_0, NULL);
		void* L_2;
		L_2 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___pv12), NULL);
		int32_t L_3 = ___len11;
		ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_inline((&V_0), L_2, L_3, ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_RuntimeMethod_var);
		void* L_4;
		L_4 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___pv24), NULL);
		int32_t L_5 = ___len23;
		ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_inline((&V_1), L_4, L_5, ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_RuntimeMethod_var);
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_6 = V_0;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_7 = V_1;
		NullCheck(L_1);
		int32_t L_8;
		L_8 = collation_hook_info_call_m2475E2C71BBFA61C0E5E020143BB111868B4AA6E(L_1, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_create_collation(SQLitePCL.sqlite3,System.Byte[],System.Object,SQLitePCL.delegate_collation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_create_collation_mB582E5677DBB401656B5AE32149B9F00CE19B23D (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___name1, RuntimeObject* ___v2, delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* ___func3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* V_0 = NULL;
	callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED* V_1 = NULL;
	collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98* V_2 = NULL;
	hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* V_3 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B5_0 = 0;
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_1;
		L_1 = SQLite3Provider_e_sqlite3_get_hooks_m83CB238FC414AD9C7FA99D067B3511568712A72F(__this, L_0, NULL);
		V_0 = L_1;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___name1;
		NullCheck(L_2);
		bool L_4;
		L_4 = hook_handles_RemoveCollation_mAC3B05DE2CB2A4322F0A035E577FCF6194665012(L_2, L_3, NULL);
		delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* L_5 = ___func3;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED* L_6 = __this->___collation_hook_bridge_7;
		V_1 = L_6;
		delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* L_7 = ___func3;
		RuntimeObject* L_8 = ___v2;
		collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98* L_9 = (collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98*)il2cpp_codegen_object_new(collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		collation_hook_info__ctor_mDB95BB4828C4E65CB57C4BCEE0516A06E6B1CB0A(L_9, L_7, L_8, NULL);
		V_2 = L_9;
		goto IL_002a;
	}

IL_0026:
	{
		V_1 = (callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED*)NULL;
		V_2 = (collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98*)NULL;
	}

IL_002a:
	{
		collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98* L_10 = V_2;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_11 = (hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC*)il2cpp_codegen_object_new(hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		hook_handle__ctor_m6D8E37A8ADD1DC2ED8DAB0482D5E7212F4BBC524(L_11, L_10, NULL);
		V_3 = L_11;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_12 = ___db0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___name1;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_14 = V_3;
		callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED* L_15 = V_1;
		int32_t L_16;
		L_16 = NativeMethods_sqlite3_create_collation_mBB19F1BAC7FD1230C48F219E6AACBDE01437018C(L_12, L_13, 1, L_14, L_15, NULL);
		int32_t L_17 = L_16;
		G_B4_0 = L_17;
		if (L_17)
		{
			G_B6_0 = L_17;
			goto IL_004e;
		}
	}
	{
		callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED* L_18 = V_1;
		G_B5_0 = G_B4_0;
		if (!L_18)
		{
			G_B6_0 = G_B4_0;
			goto IL_004e;
		}
	}
	{
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_19 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___name1;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_21 = V_3;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = hook_handle_ForDispose_m75CB5080133A1EA42368D022BC358117AC9FE588(L_21, NULL);
		NullCheck(L_19);
		hook_handles_AddCollation_mFFF6F01B318D1CDF9E0980812744B1251C09343F(L_19, L_20, L_22, NULL);
		G_B6_0 = G_B5_0;
	}

IL_004e:
	{
		return G_B6_0;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::update_hook_bridge_impl(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_update_hook_bridge_impl_m9E0FE21036273B35DF48081ECD3A75E45E41B50F (intptr_t ___p0, int32_t ___typ1, intptr_t ___db2, intptr_t ___tbl3, int64_t ___rowid4, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968* L_1;
		L_1 = update_hook_info_from_ptr_m0AE72580290E934AFA1BAC52AE5CCE7E835962D0(L_0, NULL);
		int32_t L_2 = ___typ1;
		intptr_t L_3 = ___db2;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_4;
		L_4 = utf8z_FromIntPtr_m7DD6956F80F61F4921C493D207873C9866876CF3(L_3, NULL);
		intptr_t L_5 = ___tbl3;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_6;
		L_6 = utf8z_FromIntPtr_m7DD6956F80F61F4921C493D207873C9866876CF3(L_5, NULL);
		int64_t L_7 = ___rowid4;
		NullCheck(L_1);
		update_hook_info_call_mAF608749DC3EC4FD8EFAF0D535E17C0E99EE5D7F(L_1, L_2, L_4, L_6, L_7, NULL);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_update_hook(SQLitePCL.sqlite3,SQLitePCL.delegate_update,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_update_hook_m855F95044B6888BE3441904E256AD2821EAE9C7C (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* ___func1, RuntimeObject* ___v2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* V_0 = NULL;
	callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90* V_1 = NULL;
	update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968* V_2 = NULL;
	hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* V_3 = NULL;
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_1;
		L_1 = SQLite3Provider_e_sqlite3_get_hooks_m83CB238FC414AD9C7FA99D067B3511568712A72F(__this, L_0, NULL);
		V_0 = L_1;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___update_3;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___update_3;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_6 = V_0;
		NullCheck(L_6);
		L_6->___update_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___update_3), (void*)(RuntimeObject*)NULL);
	}

IL_0022:
	{
		delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* L_7 = ___func1;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90* L_8 = __this->___update_hook_bridge_8;
		V_1 = L_8;
		delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* L_9 = ___func1;
		RuntimeObject* L_10 = ___v2;
		update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968* L_11 = (update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968*)il2cpp_codegen_object_new(update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		update_hook_info__ctor_mA3635FE2E96A5676FE6834AE74D6E18ACBE5206E(L_11, L_9, L_10, NULL);
		V_2 = L_11;
		goto IL_003a;
	}

IL_0036:
	{
		V_1 = (callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90*)NULL;
		V_2 = (update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968*)NULL;
	}

IL_003a:
	{
		update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968* L_12 = V_2;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_13 = (hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC*)il2cpp_codegen_object_new(hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		hook_handle__ctor_m6D8E37A8ADD1DC2ED8DAB0482D5E7212F4BBC524(L_13, L_12, NULL);
		V_3 = L_13;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_14 = V_0;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_15 = V_3;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = hook_handle_ForDispose_m75CB5080133A1EA42368D022BC358117AC9FE588(L_15, NULL);
		NullCheck(L_14);
		L_14->___update_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___update_3), (void*)L_16);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_17 = ___db0;
		callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90* L_18 = V_1;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_19 = V_3;
		intptr_t L_20;
		L_20 = NativeMethods_sqlite3_update_hook_m8B1639DA1B91510EF1EDE4D93CE40B38C05C9E79(L_17, L_18, L_19, NULL);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::rollback_hook_bridge_impl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_rollback_hook_bridge_impl_m4A6F1AF0D2E286BF4F593DA037D8BE7E77298A2D (intptr_t ___p0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185* L_1;
		L_1 = rollback_hook_info_from_ptr_m3F58644FD17DD94EB256D4EE02FB82B6E1885FA9(L_0, NULL);
		NullCheck(L_1);
		rollback_hook_info_call_m8CC5F80155D547D5AB32D3C9737E8F0F5E410353(L_1, NULL);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_rollback_hook(SQLitePCL.sqlite3,SQLitePCL.delegate_rollback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_rollback_hook_mA16EC6A444CEF2B22AC06FDFB752AEEB5800A69A (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* ___func1, RuntimeObject* ___v2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* V_0 = NULL;
	callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7* V_1 = NULL;
	rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185* V_2 = NULL;
	hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* V_3 = NULL;
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_1;
		L_1 = SQLite3Provider_e_sqlite3_get_hooks_m83CB238FC414AD9C7FA99D067B3511568712A72F(__this, L_0, NULL);
		V_0 = L_1;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___rollback_4;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___rollback_4;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_6 = V_0;
		NullCheck(L_6);
		L_6->___rollback_4 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___rollback_4), (void*)(RuntimeObject*)NULL);
	}

IL_0022:
	{
		delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* L_7 = ___func1;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7* L_8 = __this->___rollback_hook_bridge_9;
		V_1 = L_8;
		delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* L_9 = ___func1;
		RuntimeObject* L_10 = ___v2;
		rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185* L_11 = (rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185*)il2cpp_codegen_object_new(rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		rollback_hook_info__ctor_m13E17137A92C3596FED3261983A9BB4C0ECEF32E(L_11, L_9, L_10, NULL);
		V_2 = L_11;
		goto IL_003a;
	}

IL_0036:
	{
		V_1 = (callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7*)NULL;
		V_2 = (rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185*)NULL;
	}

IL_003a:
	{
		rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185* L_12 = V_2;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_13 = (hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC*)il2cpp_codegen_object_new(hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		hook_handle__ctor_m6D8E37A8ADD1DC2ED8DAB0482D5E7212F4BBC524(L_13, L_12, NULL);
		V_3 = L_13;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_14 = V_0;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_15 = V_3;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = hook_handle_ForDispose_m75CB5080133A1EA42368D022BC358117AC9FE588(L_15, NULL);
		NullCheck(L_14);
		L_14->___rollback_4 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___rollback_4), (void*)L_16);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_17 = ___db0;
		callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7* L_18 = V_1;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_19 = V_3;
		intptr_t L_20;
		L_20 = NativeMethods_sqlite3_rollback_hook_m9BC94B90A1CE01EF317F888E5F42BAF3C860724F(L_17, L_18, L_19, NULL);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::trace_hook_bridge_impl(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_trace_hook_bridge_impl_mBA113452171FE3793351D5CCDB0F21ECD313B42A (intptr_t ___p0, intptr_t ___s1, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4* L_1;
		L_1 = trace_hook_info_from_ptr_mEC05B3CD7BA15874CD9F1479DDD268002A3595ED(L_0, NULL);
		intptr_t L_2 = ___s1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = utf8z_FromIntPtr_m7DD6956F80F61F4921C493D207873C9866876CF3(L_2, NULL);
		NullCheck(L_1);
		trace_hook_info_call_mA98E6A93D09DD73D282B0C0C657CBF0DBF741B00(L_1, L_3, NULL);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_trace(SQLitePCL.sqlite3,SQLitePCL.delegate_trace,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_trace_m6D4EC97B366744255A23CC5207C32858E899EE98 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* ___func1, RuntimeObject* ___v2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* V_0 = NULL;
	callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190* V_1 = NULL;
	trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4* V_2 = NULL;
	hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* V_3 = NULL;
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_1;
		L_1 = SQLite3Provider_e_sqlite3_get_hooks_m83CB238FC414AD9C7FA99D067B3511568712A72F(__this, L_0, NULL);
		V_0 = L_1;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___trace_6;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___trace_6;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_6 = V_0;
		NullCheck(L_6);
		L_6->___trace_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___trace_6), (void*)(RuntimeObject*)NULL);
	}

IL_0022:
	{
		delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* L_7 = ___func1;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190* L_8 = __this->___trace_hook_bridge_10;
		V_1 = L_8;
		delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* L_9 = ___func1;
		RuntimeObject* L_10 = ___v2;
		trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4* L_11 = (trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4*)il2cpp_codegen_object_new(trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		trace_hook_info__ctor_mA70153D94F7B356F1C59FFF1F66037EC470FA9D0(L_11, L_9, L_10, NULL);
		V_2 = L_11;
		goto IL_003a;
	}

IL_0036:
	{
		V_1 = (callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190*)NULL;
		V_2 = (trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4*)NULL;
	}

IL_003a:
	{
		trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4* L_12 = V_2;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_13 = (hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC*)il2cpp_codegen_object_new(hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		hook_handle__ctor_m6D8E37A8ADD1DC2ED8DAB0482D5E7212F4BBC524(L_13, L_12, NULL);
		V_3 = L_13;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_14 = V_0;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_15 = V_3;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = hook_handle_ForDispose_m75CB5080133A1EA42368D022BC358117AC9FE588(L_15, NULL);
		NullCheck(L_14);
		L_14->___trace_6 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___trace_6), (void*)L_16);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_17 = ___db0;
		callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190* L_18 = V_1;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_19 = V_3;
		intptr_t L_20;
		L_20 = NativeMethods_sqlite3_trace_mF63C1FF2F146F919EEF0ADAAF59924649B92C140(L_17, L_18, L_19, NULL);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::profile_hook_bridge_impl(System.IntPtr,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_profile_hook_bridge_impl_mFE69CDE3456BDAF86C4C8EB87D80EFBF68C8D8F1 (intptr_t ___p0, intptr_t ___s1, int64_t ___elapsed2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34* L_1;
		L_1 = profile_hook_info_from_ptr_m0BADA22F812D4F70AF5323E6753230ACDA351441(L_0, NULL);
		intptr_t L_2 = ___s1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = utf8z_FromIntPtr_m7DD6956F80F61F4921C493D207873C9866876CF3(L_2, NULL);
		int64_t L_4 = ___elapsed2;
		NullCheck(L_1);
		profile_hook_info_call_m438C34143623CA589DC456BFEBD6EC5499E4BDB0(L_1, L_3, L_4, NULL);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_profile(SQLitePCL.sqlite3,SQLitePCL.delegate_profile,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_profile_mFEB586946A83C855DAFC62F188B8B4E13CB7D641 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* ___func1, RuntimeObject* ___v2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* V_0 = NULL;
	callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4* V_1 = NULL;
	profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34* V_2 = NULL;
	hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* V_3 = NULL;
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_1;
		L_1 = SQLite3Provider_e_sqlite3_get_hooks_m83CB238FC414AD9C7FA99D067B3511568712A72F(__this, L_0, NULL);
		V_0 = L_1;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___profile_7;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___profile_7;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_6 = V_0;
		NullCheck(L_6);
		L_6->___profile_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___profile_7), (void*)(RuntimeObject*)NULL);
	}

IL_0022:
	{
		delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* L_7 = ___func1;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4* L_8 = __this->___profile_hook_bridge_11;
		V_1 = L_8;
		delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* L_9 = ___func1;
		RuntimeObject* L_10 = ___v2;
		profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34* L_11 = (profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34*)il2cpp_codegen_object_new(profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		profile_hook_info__ctor_mA79CFEE7D02660A458390BF3C4218C78E22E679E(L_11, L_9, L_10, NULL);
		V_2 = L_11;
		goto IL_003a;
	}

IL_0036:
	{
		V_1 = (callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4*)NULL;
		V_2 = (profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34*)NULL;
	}

IL_003a:
	{
		profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34* L_12 = V_2;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_13 = (hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC*)il2cpp_codegen_object_new(hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		hook_handle__ctor_m6D8E37A8ADD1DC2ED8DAB0482D5E7212F4BBC524(L_13, L_12, NULL);
		V_3 = L_13;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_14 = V_0;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_15 = V_3;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = hook_handle_ForDispose_m75CB5080133A1EA42368D022BC358117AC9FE588(L_15, NULL);
		NullCheck(L_14);
		L_14->___profile_7 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___profile_7), (void*)L_16);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_17 = ___db0;
		callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4* L_18 = V_1;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_19 = V_3;
		intptr_t L_20;
		L_20 = NativeMethods_sqlite3_profile_mD53D29EFB2669BF94893810D6B0B9843B430EEC0(L_17, L_18, L_19, NULL);
		return;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::progress_hook_bridge_impl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_progress_hook_bridge_impl_mF78097650158AC2EFF3D94AA7FD337A80DB09224 (intptr_t ___p0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641* L_1;
		L_1 = progress_hook_info_from_ptr_m9E78852C9E5A0CCB892E030EF906059E742E7509(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = progress_hook_info_call_m1DBC36FDEF18460447F83230864D87083BCD6C16(L_1, NULL);
		return L_2;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_progress_handler(SQLitePCL.sqlite3,System.Int32,SQLitePCL.delegate_progress,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_progress_handler_mFA01EACD567A78DC781ADE8EAC8C994B06B5301A (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___instructions1, delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* ___func2, RuntimeObject* ___v3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* V_0 = NULL;
	callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2* V_1 = NULL;
	progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641* V_2 = NULL;
	hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* V_3 = NULL;
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_1;
		L_1 = SQLite3Provider_e_sqlite3_get_hooks_m83CB238FC414AD9C7FA99D067B3511568712A72F(__this, L_0, NULL);
		V_0 = L_1;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___progress_8;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___progress_8;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_6 = V_0;
		NullCheck(L_6);
		L_6->___progress_8 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___progress_8), (void*)(RuntimeObject*)NULL);
	}

IL_0022:
	{
		delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* L_7 = ___func2;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2* L_8 = __this->___progress_hook_bridge_12;
		V_1 = L_8;
		delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* L_9 = ___func2;
		RuntimeObject* L_10 = ___v3;
		progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641* L_11 = (progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641*)il2cpp_codegen_object_new(progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		progress_hook_info__ctor_mD9BE365FBD60098A96229B0A7FE561438372B947(L_11, L_9, L_10, NULL);
		V_2 = L_11;
		goto IL_003b;
	}

IL_0037:
	{
		V_1 = (callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2*)NULL;
		V_2 = (progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641*)NULL;
	}

IL_003b:
	{
		progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641* L_12 = V_2;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_13 = (hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC*)il2cpp_codegen_object_new(hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		hook_handle__ctor_m6D8E37A8ADD1DC2ED8DAB0482D5E7212F4BBC524(L_13, L_12, NULL);
		V_3 = L_13;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_14 = V_0;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_15 = V_3;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = hook_handle_ForDispose_m75CB5080133A1EA42368D022BC358117AC9FE588(L_15, NULL);
		NullCheck(L_14);
		L_14->___progress_8 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___progress_8), (void*)L_16);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_17 = ___db0;
		int32_t L_18 = ___instructions1;
		callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2* L_19 = V_1;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_20 = V_3;
		intptr_t L_21;
		L_21 = NativeMethods_sqlite3_progress_handler_m24F0BE580E0DB6B9318C92421E2D90F8EB60605A(L_17, L_18, L_19, L_20, NULL);
		return;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::authorizer_hook_bridge_impl(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_authorizer_hook_bridge_impl_mFEE6286FEF846AAED09B54ADDEFAF7C260256126 (intptr_t ___p0, int32_t ___action_code1, intptr_t ___param02, intptr_t ___param13, intptr_t ___dbName4, intptr_t ___inner_most_trigger_or_view5, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A* L_1;
		L_1 = authorizer_hook_info_from_ptr_mC44A09EE9B591911C860012BA7A404E9CDC22E7E(L_0, NULL);
		int32_t L_2 = ___action_code1;
		intptr_t L_3 = ___param02;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_4;
		L_4 = utf8z_FromIntPtr_m7DD6956F80F61F4921C493D207873C9866876CF3(L_3, NULL);
		intptr_t L_5 = ___param13;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_6;
		L_6 = utf8z_FromIntPtr_m7DD6956F80F61F4921C493D207873C9866876CF3(L_5, NULL);
		intptr_t L_7 = ___dbName4;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_8;
		L_8 = utf8z_FromIntPtr_m7DD6956F80F61F4921C493D207873C9866876CF3(L_7, NULL);
		intptr_t L_9 = ___inner_most_trigger_or_view5;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_10;
		L_10 = utf8z_FromIntPtr_m7DD6956F80F61F4921C493D207873C9866876CF3(L_9, NULL);
		NullCheck(L_1);
		int32_t L_11;
		L_11 = authorizer_hook_info_call_mF1D0501AEBFE5DFE6FD3DA44EC327A13D0FADCBF(L_1, L_2, L_4, L_6, L_8, L_10, NULL);
		return L_11;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_set_authorizer(SQLitePCL.sqlite3,SQLitePCL.delegate_authorizer,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_set_authorizer_m021EE9C1969A062739FCD24E92314022122A82C5 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* ___func1, RuntimeObject* ___v2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* V_0 = NULL;
	callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696* V_1 = NULL;
	authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A* V_2 = NULL;
	hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* V_3 = NULL;
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_1;
		L_1 = SQLite3Provider_e_sqlite3_get_hooks_m83CB238FC414AD9C7FA99D067B3511568712A72F(__this, L_0, NULL);
		V_0 = L_1;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___authorizer_9;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___authorizer_9;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_6 = V_0;
		NullCheck(L_6);
		L_6->___authorizer_9 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___authorizer_9), (void*)(RuntimeObject*)NULL);
	}

IL_0022:
	{
		delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* L_7 = ___func1;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696* L_8 = __this->___authorizer_hook_bridge_13;
		V_1 = L_8;
		delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* L_9 = ___func1;
		RuntimeObject* L_10 = ___v2;
		authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A* L_11 = (authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A*)il2cpp_codegen_object_new(authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		authorizer_hook_info__ctor_m356DDFFD020722A4AB519EE7BB5513B56AF063B4(L_11, L_9, L_10, NULL);
		V_2 = L_11;
		goto IL_003a;
	}

IL_0036:
	{
		V_1 = (callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696*)NULL;
		V_2 = (authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A*)NULL;
	}

IL_003a:
	{
		authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A* L_12 = V_2;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_13 = (hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC*)il2cpp_codegen_object_new(hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		hook_handle__ctor_m6D8E37A8ADD1DC2ED8DAB0482D5E7212F4BBC524(L_13, L_12, NULL);
		V_3 = L_13;
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_14 = V_0;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_15 = V_3;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = hook_handle_ForDispose_m75CB5080133A1EA42368D022BC358117AC9FE588(L_15, NULL);
		NullCheck(L_14);
		L_14->___authorizer_9 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___authorizer_9), (void*)L_16);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_17 = ___db0;
		callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696* L_18 = V_1;
		hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* L_19 = V_3;
		int32_t L_20;
		L_20 = NativeMethods_sqlite3_set_authorizer_m03D49E5DBF74171185FE32CC54F98733FC916D38(L_17, L_18, L_19, NULL);
		return L_20;
	}
}
// System.Int64 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_memory_used()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_memory_used_m8F6AC8DF5171289EBB79D8BB217026FC505E38C4 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0;
		L_0 = NativeMethods_sqlite3_memory_used_mB63790E8C13484C97B12FA03F8EAE89DA0A2DB35(NULL);
		return L_0;
	}
}
// System.Int64 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_memory_highwater(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_memory_highwater_m76365BDCAEDCDCFA82774C7E38C0525ACCF47221 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, int32_t ___resetFlag0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___resetFlag0;
		int64_t L_1;
		L_1 = NativeMethods_sqlite3_memory_highwater_m360074736CAE679D9AE7D0456616EEC6B9B7297D(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_status(System.Int32,System.Int32&,System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_status_m799979DD9770C42D654930BC60E9273A50176BDC (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, int32_t ___op0, int32_t* ___current1, int32_t* ___highwater2, int32_t ___resetFlag3, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___op0;
		int32_t* L_1 = ___current1;
		int32_t* L_2 = ___highwater2;
		int32_t L_3 = ___resetFlag3;
		int32_t L_4;
		L_4 = NativeMethods_sqlite3_status_m63335BBB95A05F0DB027F9E124450418F58807B2(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// SQLitePCL.utf8z SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_sourceid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_sourceid_mCB9042DE4D9F59FF6569BB149EE589B45ED4D31C (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0;
		L_0 = NativeMethods_sqlite3_sourceid_mE87D21F7A37600941DC86CCD9A1CAAC9461B0C06(NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_1;
		L_1 = utf8z_FromPtr_m8631331880E0D58B680A0CD8E0FA51670576AFBC(L_0, NULL);
		return L_1;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_result_int64(System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_result_int64_mCDA5CF9C3FA1AD5F84E1EE839288EC37529BE728 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___ctx0, int64_t ___val1, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___ctx0;
		int64_t L_1 = ___val1;
		NativeMethods_sqlite3_result_int64_m08F9EA71167DAA31E323A73919D5F1592A5B63A8(L_0, L_1, NULL);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_result_int(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_result_int_m7850E4B6ABF381A314F68BAF36A7B06BB6069A5F (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___ctx0, int32_t ___val1, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___ctx0;
		int32_t L_1 = ___val1;
		NativeMethods_sqlite3_result_int_m7BA015182C11F2C94D6760F7B203FE9F08E6A8B3(L_0, L_1, NULL);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_result_double(System.IntPtr,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_result_double_m21AD9850E728070D1B9FC2999572127800D29F63 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___ctx0, double ___val1, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___ctx0;
		double L_1 = ___val1;
		NativeMethods_sqlite3_result_double_m7A3371A49D9AC8FEB7E135FA830EC1F10B2C46A1(L_0, L_1, NULL);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_result_null(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_result_null_m3A8645D246F2C079D8FAD45445141FDC2EC788BD (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___stm0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___stm0;
		NativeMethods_sqlite3_result_null_mD8AE1EBC9D51047F30E758A3E98BDF8D57126300(L_0, NULL);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_result_error(System.IntPtr,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_result_error_m045CD7206FCF0300B495A8CEADD7F05E84307184 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___ctx0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___val1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint8_t* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8((&___val1), ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		intptr_t L_2 = ___ctx0;
		uint8_t* L_3 = V_0;
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline((&___val1), ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		NativeMethods_sqlite3_result_error_mDAC878B366FE0D71E57FEEA354831B10112D70BF(L_2, L_3, L_4, NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_result_error(System.IntPtr,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_result_error_m091A6F00848408627915176A70E8D29F749DBCEB (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___ctx0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___val1, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint8_t* L_0;
		L_0 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___val1), NULL);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		intptr_t L_2 = ___ctx0;
		uint8_t* L_3 = V_0;
		NativeMethods_sqlite3_result_error_mDAC878B366FE0D71E57FEEA354831B10112D70BF(L_2, L_3, (-1), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_result_text(System.IntPtr,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_result_text_m6A6D2F38634D1666400BE09163A2609872E1E2C4 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___ctx0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___val1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint8_t* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8((&___val1), ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		intptr_t L_2 = ___ctx0;
		uint8_t* L_3 = V_0;
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline((&___val1), ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		intptr_t L_5;
		memset((&L_5), 0, sizeof(L_5));
		IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7((&L_5), (-1), /*hidden argument*/NULL);
		NativeMethods_sqlite3_result_text_m64F973D4C475FF6A82514B645FCFB80973F41F25(L_2, L_3, L_4, L_5, NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_result_text(System.IntPtr,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_result_text_m2C24F6A559485AEE2C62E9A8D5BAD69CA2265D5A (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___ctx0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___val1, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint8_t* L_0;
		L_0 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___val1), NULL);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		intptr_t L_2 = ___ctx0;
		uint8_t* L_3 = V_0;
		intptr_t L_4;
		memset((&L_4), 0, sizeof(L_4));
		IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7((&L_4), (-1), /*hidden argument*/NULL);
		NativeMethods_sqlite3_result_text_m64F973D4C475FF6A82514B645FCFB80973F41F25(L_2, L_3, (-1), L_4, NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_result_blob(System.IntPtr,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_result_blob_m9E9FF02EA501AFF1679D560AA6AB1FA26B889158 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___ctx0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___blob1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint8_t* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8((&___blob1), ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		intptr_t L_2 = ___ctx0;
		uint8_t* L_3 = V_0;
		intptr_t L_4;
		L_4 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE((void*)L_3, NULL);
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline((&___blob1), ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7((&L_6), (-1), /*hidden argument*/NULL);
		NativeMethods_sqlite3_result_blob_m3738BB3BC6F1736EE62BBC29AF0CE075A3CA3315(L_2, L_4, L_5, L_6, NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_result_zeroblob(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_result_zeroblob_mC7A1F2255C165C199C0F54DE94D89180C9B882A8 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___ctx0, int32_t ___n1, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___ctx0;
		int32_t L_1 = ___n1;
		NativeMethods_sqlite3_result_zeroblob_mE15FEBF6140EC0E8402435A8E9FBC62B2788E4CE(L_0, L_1, NULL);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_result_error_toobig(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_result_error_toobig_m531E5E8577337D1ED1E82086D30BA58584D28AAF (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___ctx0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___ctx0;
		NativeMethods_sqlite3_result_error_toobig_mEA829124A1DD4C4A8952F2365B2D5BDAC0D22F49(L_0, NULL);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_result_error_nomem(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_result_error_nomem_m709888D56298313C8A387D41EE68FB95A20D2CEF (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___ctx0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___ctx0;
		NativeMethods_sqlite3_result_error_nomem_m4FBA5380D00DA0BC81661D4EDB232EAE7B71727E(L_0, NULL);
		return;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_result_error_code(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_result_error_code_m3A3C8CD6D10FBAC489175A853B3C755530761C91 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___ctx0, int32_t ___code1, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___ctx0;
		int32_t L_1 = ___code1;
		NativeMethods_sqlite3_result_error_code_mAA7930849DA06F7A0D643F7B9CD06B98CFE28663(L_0, L_1, NULL);
		return;
	}
}
// System.ReadOnlySpan`1<System.Byte> SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_value_blob(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_value_blob_m64ACB417C7DA9BE2AAECCD462DADC451781231B4 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_m0E04D2F291C8C5075A086E9A53AE241DEA3E9E38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		intptr_t L_0 = ___p0;
		intptr_t L_1;
		L_1 = NativeMethods_sqlite3_value_blob_m1973A0CA401632AE2F65C3E4BD6EC63D6AE5CB22(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		bool L_3;
		L_3 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_2, (0), NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_4;
		L_4 = ReadOnlySpan_1_op_Implicit_m0E04D2F291C8C5075A086E9A53AE241DEA3E9E38((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, ReadOnlySpan_1_op_Implicit_m0E04D2F291C8C5075A086E9A53AE241DEA3E9E38_RuntimeMethod_var);
		return L_4;
	}

IL_001b:
	{
		intptr_t L_5 = ___p0;
		int32_t L_6;
		L_6 = NativeMethods_sqlite3_value_bytes_m69179293AB4C95F3725B525846552A023CEF9F98(L_5, NULL);
		V_1 = L_6;
		void* L_7;
		L_7 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_0), NULL);
		int32_t L_8 = V_1;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_9;
		memset((&L_9), 0, sizeof(L_9));
		ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_inline((&L_9), L_7, L_8, /*hidden argument*/ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_RuntimeMethod_var);
		return L_9;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_value_bytes(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_value_bytes_m0AF3CD04056DE410F1750A52D603F2CAAF4435AD (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___p0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_value_bytes_m69179293AB4C95F3725B525846552A023CEF9F98(L_0, NULL);
		return L_1;
	}
}
// System.Double SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_value_double(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_value_double_mEDF03F4DAFFD4D507BF232909170C576BCF93B39 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___p0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		double L_1;
		L_1 = NativeMethods_sqlite3_value_double_mF31257FD3796FDBA50DEB0395647E0077DF9489A(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_value_int(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_value_int_m4069F558A236C3A524CE0CDDF6768DA8AABEEC81 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___p0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_value_int_m368DDE21892C5937E6242477E5ED7CCC01FD6583(L_0, NULL);
		return L_1;
	}
}
// System.Int64 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_value_int64(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_value_int64_mF4A4BF1D01AF903B685C62C6E2BADEF0534AD7DC (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___p0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		int64_t L_1;
		L_1 = NativeMethods_sqlite3_value_int64_mFB43288331B623AAB024EE8A424722724340B6E3(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_value_type(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_value_type_mEF4304BE6530DA07663408E939D54A2F373291B8 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___p0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_value_type_mBF04BD76CC69920EFBDBC7AF4C1726AB9BDF8F99(L_0, NULL);
		return L_1;
	}
}
// SQLitePCL.utf8z SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_value_text(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_value_text_m42644225A96C0F487F0F4B5780EF8CD86A74E406 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___p0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		uint8_t* L_1;
		L_1 = NativeMethods_sqlite3_value_text_mD54F4A0D36B2C3E119BCFA4F886A834CD329258F(L_0, NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = utf8z_FromPtr_m8631331880E0D58B680A0CD8E0FA51670576AFBC(L_1, NULL);
		return L_2;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_bind_int(SQLitePCL.sqlite3_stmt,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_bind_int_m6CDB602683EA0035918F0E5F2B8A96DA0B2E7B44 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___paramIndex1, int32_t ___val2, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1 = ___paramIndex1;
		int32_t L_2 = ___val2;
		int32_t L_3;
		L_3 = NativeMethods_sqlite3_bind_int_m1D432058DD9798142789DB5BBCF683DC872CE7E3(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_bind_int64(SQLitePCL.sqlite3_stmt,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_bind_int64_m599161CEA47FDACA69A94B7AE46606803C5B7F13 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___paramIndex1, int64_t ___val2, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1 = ___paramIndex1;
		int64_t L_2 = ___val2;
		int32_t L_3;
		L_3 = NativeMethods_sqlite3_bind_int64_mD0F23638A4A9A68C56C9D1F3B434F3ECD879837D(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_bind_text(SQLitePCL.sqlite3_stmt,System.Int32,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_bind_text_m87F7FFDDDEEAEE74604E42E8A6CAA80617077BB1 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___paramIndex1, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___t2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint8_t* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8((&___t2), ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_2 = ___stm0;
		int32_t L_3 = ___paramIndex1;
		uint8_t* L_4 = V_0;
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline((&___t2), ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7((&L_6), (-1), /*hidden argument*/NULL);
		int32_t L_7;
		L_7 = NativeMethods_sqlite3_bind_text_mAA17E858EFA502693A86BD49585227EC31879767(L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_bind_text(SQLitePCL.sqlite3_stmt,System.Int32,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_bind_text_mCFF54CE37DE3CB0E2EC6F9A4BE508098154062E8 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___paramIndex1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___t2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint8_t* L_0;
		L_0 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___t2), NULL);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_2 = ___stm0;
		int32_t L_3 = ___paramIndex1;
		uint8_t* L_4 = V_0;
		intptr_t L_5;
		memset((&L_5), 0, sizeof(L_5));
		IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7((&L_5), (-1), /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = NativeMethods_sqlite3_bind_text_mAA17E858EFA502693A86BD49585227EC31879767(L_2, L_3, L_4, (-1), L_5, NULL);
		return L_6;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_bind_double(SQLitePCL.sqlite3_stmt,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_bind_double_m6E0DCA870EA217140259E837616788582CEE0461 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___paramIndex1, double ___val2, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1 = ___paramIndex1;
		double L_2 = ___val2;
		int32_t L_3;
		L_3 = NativeMethods_sqlite3_bind_double_mA3AA32FDB55D504B2ABBD9A12F6207BABE7EBE35(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_bind_blob(SQLitePCL.sqlite3_stmt,System.Int32,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_bind_blob_mB5416E70036FD18CFDA4EE23317E91631F629331 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___paramIndex1, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___blob2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_m0E04D2F291C8C5075A086E9A53AE241DEA3E9E38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline((&___blob2), ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0035;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)42));
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_3;
		L_3 = ReadOnlySpan_1_op_Implicit_m0E04D2F291C8C5075A086E9A53AE241DEA3E9E38(L_2, ReadOnlySpan_1_op_Implicit_m0E04D2F291C8C5075A086E9A53AE241DEA3E9E38_RuntimeMethod_var);
		V_0 = L_3;
		uint8_t* L_4;
		L_4 = ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8((&V_0), ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_1 = (uint8_t*)((uintptr_t)L_5);
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_6 = ___stm0;
		int32_t L_7 = ___paramIndex1;
		uint8_t* L_8 = V_1;
		intptr_t L_9;
		memset((&L_9), 0, sizeof(L_9));
		IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7((&L_9), (-1), /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = NativeMethods_sqlite3_bind_blob_mDFC3555381F1DD2CCB10365322F67C93B9F30D14(L_6, L_7, L_8, 0, L_9, NULL);
		return L_10;
	}

IL_0035:
	{
		uint8_t* L_11;
		L_11 = ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8((&___blob2), ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		V_2 = L_11;
		uint8_t* L_12 = V_2;
		V_3 = (uint8_t*)((uintptr_t)L_12);
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_13 = ___stm0;
		int32_t L_14 = ___paramIndex1;
		uint8_t* L_15 = V_3;
		int32_t L_16;
		L_16 = ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline((&___blob2), ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		intptr_t L_17;
		memset((&L_17), 0, sizeof(L_17));
		IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7((&L_17), (-1), /*hidden argument*/NULL);
		int32_t L_18;
		L_18 = NativeMethods_sqlite3_bind_blob_mDFC3555381F1DD2CCB10365322F67C93B9F30D14(L_13, L_14, L_15, L_16, L_17, NULL);
		return L_18;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_bind_zeroblob(SQLitePCL.sqlite3_stmt,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_bind_zeroblob_m41D58E2062BEB97875094E6C9280D93493E116F0 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___paramIndex1, int32_t ___size2, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1 = ___paramIndex1;
		int32_t L_2 = ___size2;
		int32_t L_3;
		L_3 = NativeMethods_sqlite3_bind_zeroblob_mF3A5557900228FF234FE26900E1800DF6554894F(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_bind_null(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_bind_null_mA41DB7E37B6CE887E4ADE2C79123235A25D08F0B (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___paramIndex1, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1 = ___paramIndex1;
		int32_t L_2;
		L_2 = NativeMethods_sqlite3_bind_null_mF7A3AF19B69661633CEC71922A1FCB5EF9809AB8(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_bind_parameter_count(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_bind_parameter_count_m3BA48B519E04C994A1DF4D5C7535D30924A03289 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_bind_parameter_count_mC6AF4476E2D285F57579A79FAF7793B2C9151DC8(L_0, NULL);
		return L_1;
	}
}
// SQLitePCL.utf8z SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_bind_parameter_name(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_bind_parameter_name_m91349F5C4C051D21D04F8A9BB7B03E5409DF865A (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___paramIndex1, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1 = ___paramIndex1;
		uint8_t* L_2;
		L_2 = NativeMethods_sqlite3_bind_parameter_name_mA41869ADD69E8BC04BB2CA18DBE1CA07BA461B1F(L_0, L_1, NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = utf8z_FromPtr_m8631331880E0D58B680A0CD8E0FA51670576AFBC(L_2, NULL);
		return L_3;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_bind_parameter_index(SQLitePCL.sqlite3_stmt,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_bind_parameter_index_mA5E65F1E71B41729A3F497FC62040213B0FE9B77 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___paramName1, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint8_t* L_0;
		L_0 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___paramName1), NULL);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_2 = ___stm0;
		uint8_t* L_3 = V_0;
		int32_t L_4;
		L_4 = NativeMethods_sqlite3_bind_parameter_index_m2B9AA13C036B886577AD9126C3C921595E11D37B(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_step(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_step_m9F3A00C848CF8E4E8EB256DF6B63944514AFD49E (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_step_m54E48F06063127E8E43B2725869CA815177FEFDD(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_stmt_busy(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_stmt_busy_mCB9D1542F2AE124F9876FB27450FF143A0A540B5 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_stmt_busy_m11A70E12356826D95DB03AC4187D768B2B792D7E(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_stmt_readonly(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_stmt_readonly_m9AB727911A78CBA23589B87223A49DFC6E454F0D (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_stmt_readonly_m6135AB2D4427923474627818BAF22CC13DC9ED1E(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_column_int(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_column_int_m5BFC67A4003A327B80668039C4513619C1997B0D (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___columnIndex1, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1 = ___columnIndex1;
		int32_t L_2;
		L_2 = NativeMethods_sqlite3_column_int_m3F06A1718EFBFEC590D94A35DFFDDD1F96E611C1(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int64 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_column_int64(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_column_int64_mFC1CCFF01D06D19960AE2D30AACF8661749F2C6F (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___columnIndex1, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1 = ___columnIndex1;
		int64_t L_2;
		L_2 = NativeMethods_sqlite3_column_int64_mF0AA4334CFC79A9CD3B751EA4B586035B25E8A99(L_0, L_1, NULL);
		return L_2;
	}
}
// SQLitePCL.utf8z SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_column_text(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_column_text_mC0D5FD3AFDFBF781482C3593CB59ADE7C942E4CB (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___columnIndex1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1 = ___columnIndex1;
		uint8_t* L_2;
		L_2 = NativeMethods_sqlite3_column_text_mD15798ABA24D7FEA86E1266241448B080F3237F6(L_0, L_1, NULL);
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_3 = ___stm0;
		int32_t L_4 = ___columnIndex1;
		int32_t L_5;
		L_5 = NativeMethods_sqlite3_column_bytes_m933C0E3F3410E9EF8156BF59ED0BD77DCF4E276C(L_3, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_7;
		L_7 = utf8z_FromPtrLen_mEF49317D152EC1C0300C3366714707B3F091FFC2(L_2, L_6, NULL);
		return L_7;
	}
}
// SQLitePCL.utf8z SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_column_decltype(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_column_decltype_m723C7034789DBF8FD1433E01D0A21BBB1BB102F4 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___columnIndex1, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1 = ___columnIndex1;
		uint8_t* L_2;
		L_2 = NativeMethods_sqlite3_column_decltype_mE6C718DDE006F6804788F4B04B99042D3771C25F(L_0, L_1, NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = utf8z_FromPtr_m8631331880E0D58B680A0CD8E0FA51670576AFBC(L_2, NULL);
		return L_3;
	}
}
// System.Double SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_column_double(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_column_double_mEC47DDBF28868D72E1CDBD9B28A294C57AA57220 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___columnIndex1, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1 = ___columnIndex1;
		double L_2;
		L_2 = NativeMethods_sqlite3_column_double_m0EC8F72C560FC8CDA6E20AD2F75E042CEA956D0A(L_0, L_1, NULL);
		return L_2;
	}
}
// System.ReadOnlySpan`1<System.Byte> SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_column_blob(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_column_blob_m540208A335641C397C1C1879B1ED2D28A44A7B06 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___columnIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_m0E04D2F291C8C5075A086E9A53AE241DEA3E9E38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1 = ___columnIndex1;
		intptr_t L_2;
		L_2 = NativeMethods_sqlite3_column_blob_m4CCEF894D2AFAE81911307E2B105F3877938F572(L_0, L_1, NULL);
		V_0 = L_2;
		intptr_t L_3 = V_0;
		bool L_4;
		L_4 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_3, (0), NULL);
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_5;
		L_5 = ReadOnlySpan_1_op_Implicit_m0E04D2F291C8C5075A086E9A53AE241DEA3E9E38((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, ReadOnlySpan_1_op_Implicit_m0E04D2F291C8C5075A086E9A53AE241DEA3E9E38_RuntimeMethod_var);
		return L_5;
	}

IL_001c:
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_6 = ___stm0;
		int32_t L_7 = ___columnIndex1;
		int32_t L_8;
		L_8 = NativeMethods_sqlite3_column_bytes_m933C0E3F3410E9EF8156BF59ED0BD77DCF4E276C(L_6, L_7, NULL);
		V_1 = L_8;
		void* L_9;
		L_9 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_0), NULL);
		int32_t L_10 = V_1;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_11;
		memset((&L_11), 0, sizeof(L_11));
		ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_inline((&L_11), L_9, L_10, /*hidden argument*/ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_RuntimeMethod_var);
		return L_11;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_column_type(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_column_type_mC70A1877F670A8CA69E140E94AD158C8AF3529D2 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___columnIndex1, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1 = ___columnIndex1;
		int32_t L_2;
		L_2 = NativeMethods_sqlite3_column_type_mC5F06DA7EE7437933596361C3CA937A978B097B0(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_column_bytes(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_column_bytes_mA2AB7642900EF9EF9160781C66C4F95FB65FCBAE (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___columnIndex1, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1 = ___columnIndex1;
		int32_t L_2;
		L_2 = NativeMethods_sqlite3_column_bytes_m933C0E3F3410E9EF8156BF59ED0BD77DCF4E276C(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_column_count(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_column_count_mCC9FFF998C04F78AA45676D8A2EF67C3CF39D32E (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_column_count_m1A0FC37AB55007B24E30C4D5A071049231FA3C6C(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_data_count(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_data_count_m0F3CC3FE3F6F68A5E306F52C491FE265EF1D06A4 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_data_count_m581081CA581D80A23A1DFFF59AACA5BAF558B20E(L_0, NULL);
		return L_1;
	}
}
// SQLitePCL.utf8z SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_column_name(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_column_name_m7D2112653149AD6B90F434F199ADD7FBB557E22A (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___columnIndex1, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1 = ___columnIndex1;
		uint8_t* L_2;
		L_2 = NativeMethods_sqlite3_column_name_m92BD5854D99CAAE2A69E218914D943B2926B3198(L_0, L_1, NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = utf8z_FromPtr_m8631331880E0D58B680A0CD8E0FA51670576AFBC(L_2, NULL);
		return L_3;
	}
}
// SQLitePCL.utf8z SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_column_origin_name(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_column_origin_name_m030F67182C63B504CFBE803C5F55C0DF143945A6 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___columnIndex1, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1 = ___columnIndex1;
		uint8_t* L_2;
		L_2 = NativeMethods_sqlite3_column_origin_name_mB01713D308C6F1AB620F7D43862C1C9E6FA8A9E1(L_0, L_1, NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = utf8z_FromPtr_m8631331880E0D58B680A0CD8E0FA51670576AFBC(L_2, NULL);
		return L_3;
	}
}
// SQLitePCL.utf8z SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_column_table_name(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_column_table_name_m49499EAE68839D033A57B7146DD4ED2327E082F6 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___columnIndex1, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1 = ___columnIndex1;
		uint8_t* L_2;
		L_2 = NativeMethods_sqlite3_column_table_name_m31214D2D3BCA2379C2A8853E94CA91B0570E203A(L_0, L_1, NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = utf8z_FromPtr_m8631331880E0D58B680A0CD8E0FA51670576AFBC(L_2, NULL);
		return L_3;
	}
}
// SQLitePCL.utf8z SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_column_database_name(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_column_database_name_mC7EC530642E245DA715AF61926F6AD6118CF9B72 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___columnIndex1, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1 = ___columnIndex1;
		uint8_t* L_2;
		L_2 = NativeMethods_sqlite3_column_database_name_m531819C1877D9BA29878561661CBB4365DC531E7(L_0, L_1, NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = utf8z_FromPtr_m8631331880E0D58B680A0CD8E0FA51670576AFBC(L_2, NULL);
		return L_3;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_reset(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_reset_m075611466227BE29655390A35C21344C223B3083 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_reset_m88C39A2CACDFC1E43BFF8094504D3783D3012F3A(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_clear_bindings(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_clear_bindings_m21E44BC384C5326C2545E9491776050268B81EBC (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_clear_bindings_m4410C3BFB6640A0DC38BBC5255993CA02117DCFF(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_stmt_status(SQLitePCL.sqlite3_stmt,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_stmt_status_m40D6BF754BF0A16F6F7050AC47DF0CD22125C8F3 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___op1, int32_t ___resetFlg2, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stm0;
		int32_t L_1 = ___op1;
		int32_t L_2 = ___resetFlg2;
		int32_t L_3;
		L_3 = NativeMethods_sqlite3_stmt_status_m004E4D57D42E465337BFF4DAA46559E498B64EF2(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_finalize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_finalize_m17D10F18FD651BACE53ABFB0412B313DAD238714 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, intptr_t ___stm0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___stm0;
		int32_t L_1;
		L_1 = NativeMethods_sqlite3_finalize_mDB9DB5DFB67CD41B37E3EC11132C11910D1813B1(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_wal_autocheckpoint(SQLitePCL.sqlite3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_wal_autocheckpoint_mF4B214447F114C832261BCE7769A6F608341BF67 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___n1, const RuntimeMethod* method) 
{
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		int32_t L_1 = ___n1;
		int32_t L_2;
		L_2 = NativeMethods_sqlite3_wal_autocheckpoint_m6911FC4305DD705161A0A79BCBD9892C8E396827(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_wal_checkpoint(SQLitePCL.sqlite3,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_wal_checkpoint_mC0F2AC8DBE4470CD4A007B177576FE6939F67E15 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName1, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint8_t* L_0;
		L_0 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___dbName1), NULL);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_2 = ___db0;
		uint8_t* L_3 = V_0;
		int32_t L_4;
		L_4 = NativeMethods_sqlite3_wal_checkpoint_mDBD2A1DCEDE8E5E0DD3C1BC4458B601BE7B1F34B(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3::SQLitePCL.ISQLite3Provider.sqlite3_wal_checkpoint_v2(SQLitePCL.sqlite3,SQLitePCL.utf8z,System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLite3Provider_e_sqlite3_SQLitePCL_ISQLite3Provider_sqlite3_wal_checkpoint_v2_mC95A854B16AEEC851E6898E541EF0E74B82CAA3C (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName1, int32_t ___eMode2, int32_t* ___logSize3, int32_t* ___framesCheckPointed4, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint8_t* L_0;
		L_0 = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5((&___dbName1), NULL);
		V_1 = L_0;
		uint8_t* L_1 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_1);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_2 = ___db0;
		uint8_t* L_3 = V_0;
		int32_t L_4 = ___eMode2;
		int32_t* L_5 = ___logSize3;
		int32_t* L_6 = ___framesCheckPointed4;
		int32_t L_7;
		L_7 = NativeMethods_sqlite3_wal_checkpoint_v2_mF7004D6FD0DCDE0B2B240FBC1E09D8FF504309CF(L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLite3Provider_e_sqlite3__ctor_mE5F67BAD43E60B9AD410C3284B36A219660EF9C7 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLite3Provider_e_sqlite3_agg_function_hook_bridge_final_impl_m38A0C82EC682F505A60E5DAA931251BFB6B1A6CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLite3Provider_e_sqlite3_agg_function_hook_bridge_step_impl_m61B6EEBDC2BDC5D21A894F365B62147344B95BD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLite3Provider_e_sqlite3_authorizer_hook_bridge_impl_mFEE6286FEF846AAED09B54ADDEFAF7C260256126_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLite3Provider_e_sqlite3_collation_hook_bridge_impl_m174901BF60BCC008A372B7D555A6A651B3715244_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLite3Provider_e_sqlite3_commit_hook_bridge_impl_m27B12FD7638DC52474BDE95D0CEAF6932C4D2F0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLite3Provider_e_sqlite3_log_hook_bridge_impl_mDAA0E7371A73EF6F8CA9663F984CF87F31D9AE53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLite3Provider_e_sqlite3_profile_hook_bridge_impl_mFE69CDE3456BDAF86C4C8EB87D80EFBF68C8D8F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLite3Provider_e_sqlite3_progress_hook_bridge_impl_mF78097650158AC2EFF3D94AA7FD337A80DB09224_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLite3Provider_e_sqlite3_rollback_hook_bridge_impl_m4A6F1AF0D2E286BF4F593DA037D8BE7E77298A2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLite3Provider_e_sqlite3_scalar_function_hook_bridge_impl_m144A96182F913A873EA819562C6FBE535AE06A2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLite3Provider_e_sqlite3_trace_hook_bridge_impl_mBA113452171FE3793351D5CCDB0F21ECD313B42A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLite3Provider_e_sqlite3_update_hook_bridge_impl_m9E0FE21036273B35DF48081ECD3A75E45E41B50F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12* L_0 = (callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12*)il2cpp_codegen_object_new(callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		callback_commit__ctor_mDB4A28C9FFFB6737E5CED81EB1F87B10E8C09322(L_0, NULL, (intptr_t)((void*)SQLite3Provider_e_sqlite3_commit_hook_bridge_impl_m27B12FD7638DC52474BDE95D0CEAF6932C4D2F0D_RuntimeMethod_var), NULL);
		__this->___commit_hook_bridge_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___commit_hook_bridge_1), (void*)L_0);
		callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054* L_1 = (callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054*)il2cpp_codegen_object_new(callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		callback_scalar_function__ctor_mFAB24FB7BD04C8B6DA4F8D7D7F9A1B9AC12DB58F(L_1, NULL, (intptr_t)((void*)SQLite3Provider_e_sqlite3_scalar_function_hook_bridge_impl_m144A96182F913A873EA819562C6FBE535AE06A2C_RuntimeMethod_var), NULL);
		__this->___scalar_function_hook_bridge_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scalar_function_hook_bridge_2), (void*)L_1);
		callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B* L_2 = (callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B*)il2cpp_codegen_object_new(callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		callback_log__ctor_m1FB9275EE1F814C65D6BA2A64C164147C1DE7AFC(L_2, NULL, (intptr_t)((void*)SQLite3Provider_e_sqlite3_log_hook_bridge_impl_mDAA0E7371A73EF6F8CA9663F984CF87F31D9AE53_RuntimeMethod_var), NULL);
		__this->___log_hook_bridge_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___log_hook_bridge_4), (void*)L_2);
		callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED* L_3 = (callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED*)il2cpp_codegen_object_new(callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		callback_agg_function_step__ctor_mD9169C85C8988341AA108B7C2713D855B043BF78(L_3, NULL, (intptr_t)((void*)SQLite3Provider_e_sqlite3_agg_function_hook_bridge_step_impl_m61B6EEBDC2BDC5D21A894F365B62147344B95BD4_RuntimeMethod_var), NULL);
		__this->___agg_function_hook_bridge_step_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agg_function_hook_bridge_step_5), (void*)L_3);
		callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F* L_4 = (callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F*)il2cpp_codegen_object_new(callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		callback_agg_function_final__ctor_m24AD2C75EEF8546805DE08FEA65A74EAF335B788(L_4, NULL, (intptr_t)((void*)SQLite3Provider_e_sqlite3_agg_function_hook_bridge_final_impl_m38A0C82EC682F505A60E5DAA931251BFB6B1A6CB_RuntimeMethod_var), NULL);
		__this->___agg_function_hook_bridge_final_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agg_function_hook_bridge_final_6), (void*)L_4);
		callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED* L_5 = (callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED*)il2cpp_codegen_object_new(callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		callback_collation__ctor_mCC4562D044D6941D6F721FA0EFD0EC5B1FE81492(L_5, NULL, (intptr_t)((void*)SQLite3Provider_e_sqlite3_collation_hook_bridge_impl_m174901BF60BCC008A372B7D555A6A651B3715244_RuntimeMethod_var), NULL);
		__this->___collation_hook_bridge_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collation_hook_bridge_7), (void*)L_5);
		callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90* L_6 = (callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90*)il2cpp_codegen_object_new(callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		callback_update__ctor_m702943B46304E4C1D52A8CB9FF89CD94399396BB(L_6, NULL, (intptr_t)((void*)SQLite3Provider_e_sqlite3_update_hook_bridge_impl_m9E0FE21036273B35DF48081ECD3A75E45E41B50F_RuntimeMethod_var), NULL);
		__this->___update_hook_bridge_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___update_hook_bridge_8), (void*)L_6);
		callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7* L_7 = (callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7*)il2cpp_codegen_object_new(callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		callback_rollback__ctor_mAAA9D0128F246165CD4C717D630F69CFAE5DC2B2(L_7, NULL, (intptr_t)((void*)SQLite3Provider_e_sqlite3_rollback_hook_bridge_impl_m4A6F1AF0D2E286BF4F593DA037D8BE7E77298A2D_RuntimeMethod_var), NULL);
		__this->___rollback_hook_bridge_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rollback_hook_bridge_9), (void*)L_7);
		callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190* L_8 = (callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190*)il2cpp_codegen_object_new(callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		callback_trace__ctor_mB7045C1E866EF82F727938567620E2359EA834B5(L_8, NULL, (intptr_t)((void*)SQLite3Provider_e_sqlite3_trace_hook_bridge_impl_mBA113452171FE3793351D5CCDB0F21ECD313B42A_RuntimeMethod_var), NULL);
		__this->___trace_hook_bridge_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trace_hook_bridge_10), (void*)L_8);
		callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4* L_9 = (callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4*)il2cpp_codegen_object_new(callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		callback_profile__ctor_mCA3D9C6C318620A09239BF7F76D45C97897AEFA5(L_9, NULL, (intptr_t)((void*)SQLite3Provider_e_sqlite3_profile_hook_bridge_impl_mFE69CDE3456BDAF86C4C8EB87D80EFBF68C8D8F1_RuntimeMethod_var), NULL);
		__this->___profile_hook_bridge_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___profile_hook_bridge_11), (void*)L_9);
		callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2* L_10 = (callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2*)il2cpp_codegen_object_new(callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		callback_progress_handler__ctor_mAAED7B981A29A66D7B99E2149A38F7EAC3AD7753(L_10, NULL, (intptr_t)((void*)SQLite3Provider_e_sqlite3_progress_hook_bridge_impl_mF78097650158AC2EFF3D94AA7FD337A80DB09224_RuntimeMethod_var), NULL);
		__this->___progress_hook_bridge_12 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___progress_hook_bridge_12), (void*)L_10);
		callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696* L_11 = (callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696*)il2cpp_codegen_object_new(callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		callback_authorizer__ctor_mBE07180CDB573196133F892C032B9B366FFD15EA(L_11, NULL, (intptr_t)((void*)SQLite3Provider_e_sqlite3_authorizer_hook_bridge_impl_mFEE6286FEF846AAED09B54ADDEFAF7C260256126_RuntimeMethod_var), NULL);
		__this->___authorizer_hook_bridge_13 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___authorizer_hook_bridge_13), (void*)L_11);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// SQLitePCL.hook_handles SQLitePCL.SQLite3Provider_e_sqlite3::<get_hooks>b__3_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* SQLite3Provider_e_sqlite3_U3Cget_hooksU3Eb__3_0_m015E69D41B2E06DDB07F64B1232D53F350223B35 (SQLite3Provider_e_sqlite3_t05F535DCB5FC5999DB49D22FF90F9F599AA70BD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLite3Provider_e_sqlite3_my_streq_m8739278305E4F8F0D3B3A0D51AD0A8AA3FE20EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083* L_0 = (Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083*)il2cpp_codegen_object_new(Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_4__ctor_mD903E3907D0CE6F5928A315B41E43525FD88515F(L_0, __this, (intptr_t)((void*)SQLite3Provider_e_sqlite3_my_streq_m8739278305E4F8F0D3B3A0D51AD0A8AA3FE20EA7_RuntimeMethod_var), NULL);
		hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* L_1 = (hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33*)il2cpp_codegen_object_new(hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		hook_handles__ctor_m1F7D3F0DEC6B04876796D7A4935396F2CD8DD292(L_1, L_0, NULL);
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
// Conversion methods for marshalling of: SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs
IL2CPP_EXTERN_C void sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801_marshal_pinvoke(const sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801& unmarshaled, sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801_marshaled_pinvoke& marshaled)
{
	marshaled.___iVersion_0 = unmarshaled.___iVersion_0;
	marshaled.___szOsFile_1 = unmarshaled.___szOsFile_1;
	marshaled.___mxPathname_2 = unmarshaled.___mxPathname_2;
	marshaled.___pNext_3 = unmarshaled.___pNext_3;
	marshaled.___zName_4 = unmarshaled.___zName_4;
	marshaled.___pAppData_5 = unmarshaled.___pAppData_5;
	marshaled.___xOpen_6 = unmarshaled.___xOpen_6;
	marshaled.___xDelete_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___xDelete_7));
	marshaled.___xAccess_8 = unmarshaled.___xAccess_8;
	marshaled.___xFullPathname_9 = unmarshaled.___xFullPathname_9;
	marshaled.___xDlOpen_10 = unmarshaled.___xDlOpen_10;
	marshaled.___xDlError_11 = unmarshaled.___xDlError_11;
	marshaled.___xDlSym_12 = unmarshaled.___xDlSym_12;
	marshaled.___xDlClose_13 = unmarshaled.___xDlClose_13;
	marshaled.___xRandomness_14 = unmarshaled.___xRandomness_14;
	marshaled.___xSleep_15 = unmarshaled.___xSleep_15;
	marshaled.___xCurrentTime_16 = unmarshaled.___xCurrentTime_16;
	marshaled.___xGetLastError_17 = unmarshaled.___xGetLastError_17;
}
IL2CPP_EXTERN_C void sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801_marshal_pinvoke_back(const sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801_marshaled_pinvoke& marshaled, sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshalediVersion_temp_0 = 0;
	unmarshalediVersion_temp_0 = marshaled.___iVersion_0;
	unmarshaled.___iVersion_0 = unmarshalediVersion_temp_0;
	int32_t unmarshaledszOsFile_temp_1 = 0;
	unmarshaledszOsFile_temp_1 = marshaled.___szOsFile_1;
	unmarshaled.___szOsFile_1 = unmarshaledszOsFile_temp_1;
	int32_t unmarshaledmxPathname_temp_2 = 0;
	unmarshaledmxPathname_temp_2 = marshaled.___mxPathname_2;
	unmarshaled.___mxPathname_2 = unmarshaledmxPathname_temp_2;
	intptr_t unmarshaledpNext_temp_3;
	memset((&unmarshaledpNext_temp_3), 0, sizeof(unmarshaledpNext_temp_3));
	unmarshaledpNext_temp_3 = marshaled.___pNext_3;
	unmarshaled.___pNext_3 = unmarshaledpNext_temp_3;
	intptr_t unmarshaledzName_temp_4;
	memset((&unmarshaledzName_temp_4), 0, sizeof(unmarshaledzName_temp_4));
	unmarshaledzName_temp_4 = marshaled.___zName_4;
	unmarshaled.___zName_4 = unmarshaledzName_temp_4;
	intptr_t unmarshaledpAppData_temp_5;
	memset((&unmarshaledpAppData_temp_5), 0, sizeof(unmarshaledpAppData_temp_5));
	unmarshaledpAppData_temp_5 = marshaled.___pAppData_5;
	unmarshaled.___pAppData_5 = unmarshaledpAppData_temp_5;
	intptr_t unmarshaledxOpen_temp_6;
	memset((&unmarshaledxOpen_temp_6), 0, sizeof(unmarshaledxOpen_temp_6));
	unmarshaledxOpen_temp_6 = marshaled.___xOpen_6;
	unmarshaled.___xOpen_6 = unmarshaledxOpen_temp_6;
	unmarshaled.___xDelete_7 = il2cpp_codegen_marshal_function_ptr_to_delegate<SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826>(marshaled.___xDelete_7, SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___xDelete_7), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826>(marshaled.___xDelete_7, SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826_il2cpp_TypeInfo_var));
	intptr_t unmarshaledxAccess_temp_8;
	memset((&unmarshaledxAccess_temp_8), 0, sizeof(unmarshaledxAccess_temp_8));
	unmarshaledxAccess_temp_8 = marshaled.___xAccess_8;
	unmarshaled.___xAccess_8 = unmarshaledxAccess_temp_8;
	intptr_t unmarshaledxFullPathname_temp_9;
	memset((&unmarshaledxFullPathname_temp_9), 0, sizeof(unmarshaledxFullPathname_temp_9));
	unmarshaledxFullPathname_temp_9 = marshaled.___xFullPathname_9;
	unmarshaled.___xFullPathname_9 = unmarshaledxFullPathname_temp_9;
	intptr_t unmarshaledxDlOpen_temp_10;
	memset((&unmarshaledxDlOpen_temp_10), 0, sizeof(unmarshaledxDlOpen_temp_10));
	unmarshaledxDlOpen_temp_10 = marshaled.___xDlOpen_10;
	unmarshaled.___xDlOpen_10 = unmarshaledxDlOpen_temp_10;
	intptr_t unmarshaledxDlError_temp_11;
	memset((&unmarshaledxDlError_temp_11), 0, sizeof(unmarshaledxDlError_temp_11));
	unmarshaledxDlError_temp_11 = marshaled.___xDlError_11;
	unmarshaled.___xDlError_11 = unmarshaledxDlError_temp_11;
	intptr_t unmarshaledxDlSym_temp_12;
	memset((&unmarshaledxDlSym_temp_12), 0, sizeof(unmarshaledxDlSym_temp_12));
	unmarshaledxDlSym_temp_12 = marshaled.___xDlSym_12;
	unmarshaled.___xDlSym_12 = unmarshaledxDlSym_temp_12;
	intptr_t unmarshaledxDlClose_temp_13;
	memset((&unmarshaledxDlClose_temp_13), 0, sizeof(unmarshaledxDlClose_temp_13));
	unmarshaledxDlClose_temp_13 = marshaled.___xDlClose_13;
	unmarshaled.___xDlClose_13 = unmarshaledxDlClose_temp_13;
	intptr_t unmarshaledxRandomness_temp_14;
	memset((&unmarshaledxRandomness_temp_14), 0, sizeof(unmarshaledxRandomness_temp_14));
	unmarshaledxRandomness_temp_14 = marshaled.___xRandomness_14;
	unmarshaled.___xRandomness_14 = unmarshaledxRandomness_temp_14;
	intptr_t unmarshaledxSleep_temp_15;
	memset((&unmarshaledxSleep_temp_15), 0, sizeof(unmarshaledxSleep_temp_15));
	unmarshaledxSleep_temp_15 = marshaled.___xSleep_15;
	unmarshaled.___xSleep_15 = unmarshaledxSleep_temp_15;
	intptr_t unmarshaledxCurrentTime_temp_16;
	memset((&unmarshaledxCurrentTime_temp_16), 0, sizeof(unmarshaledxCurrentTime_temp_16));
	unmarshaledxCurrentTime_temp_16 = marshaled.___xCurrentTime_16;
	unmarshaled.___xCurrentTime_16 = unmarshaledxCurrentTime_temp_16;
	intptr_t unmarshaledxGetLastError_temp_17;
	memset((&unmarshaledxGetLastError_temp_17), 0, sizeof(unmarshaledxGetLastError_temp_17));
	unmarshaledxGetLastError_temp_17 = marshaled.___xGetLastError_17;
	unmarshaled.___xGetLastError_17 = unmarshaledxGetLastError_temp_17;
}
// Conversion method for clean up from marshalling of: SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs
IL2CPP_EXTERN_C void sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801_marshal_pinvoke_cleanup(sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs
IL2CPP_EXTERN_C void sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801_marshal_com(const sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801& unmarshaled, sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801_marshaled_com& marshaled)
{
	marshaled.___iVersion_0 = unmarshaled.___iVersion_0;
	marshaled.___szOsFile_1 = unmarshaled.___szOsFile_1;
	marshaled.___mxPathname_2 = unmarshaled.___mxPathname_2;
	marshaled.___pNext_3 = unmarshaled.___pNext_3;
	marshaled.___zName_4 = unmarshaled.___zName_4;
	marshaled.___pAppData_5 = unmarshaled.___pAppData_5;
	marshaled.___xOpen_6 = unmarshaled.___xOpen_6;
	marshaled.___xDelete_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___xDelete_7));
	marshaled.___xAccess_8 = unmarshaled.___xAccess_8;
	marshaled.___xFullPathname_9 = unmarshaled.___xFullPathname_9;
	marshaled.___xDlOpen_10 = unmarshaled.___xDlOpen_10;
	marshaled.___xDlError_11 = unmarshaled.___xDlError_11;
	marshaled.___xDlSym_12 = unmarshaled.___xDlSym_12;
	marshaled.___xDlClose_13 = unmarshaled.___xDlClose_13;
	marshaled.___xRandomness_14 = unmarshaled.___xRandomness_14;
	marshaled.___xSleep_15 = unmarshaled.___xSleep_15;
	marshaled.___xCurrentTime_16 = unmarshaled.___xCurrentTime_16;
	marshaled.___xGetLastError_17 = unmarshaled.___xGetLastError_17;
}
IL2CPP_EXTERN_C void sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801_marshal_com_back(const sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801_marshaled_com& marshaled, sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshalediVersion_temp_0 = 0;
	unmarshalediVersion_temp_0 = marshaled.___iVersion_0;
	unmarshaled.___iVersion_0 = unmarshalediVersion_temp_0;
	int32_t unmarshaledszOsFile_temp_1 = 0;
	unmarshaledszOsFile_temp_1 = marshaled.___szOsFile_1;
	unmarshaled.___szOsFile_1 = unmarshaledszOsFile_temp_1;
	int32_t unmarshaledmxPathname_temp_2 = 0;
	unmarshaledmxPathname_temp_2 = marshaled.___mxPathname_2;
	unmarshaled.___mxPathname_2 = unmarshaledmxPathname_temp_2;
	intptr_t unmarshaledpNext_temp_3;
	memset((&unmarshaledpNext_temp_3), 0, sizeof(unmarshaledpNext_temp_3));
	unmarshaledpNext_temp_3 = marshaled.___pNext_3;
	unmarshaled.___pNext_3 = unmarshaledpNext_temp_3;
	intptr_t unmarshaledzName_temp_4;
	memset((&unmarshaledzName_temp_4), 0, sizeof(unmarshaledzName_temp_4));
	unmarshaledzName_temp_4 = marshaled.___zName_4;
	unmarshaled.___zName_4 = unmarshaledzName_temp_4;
	intptr_t unmarshaledpAppData_temp_5;
	memset((&unmarshaledpAppData_temp_5), 0, sizeof(unmarshaledpAppData_temp_5));
	unmarshaledpAppData_temp_5 = marshaled.___pAppData_5;
	unmarshaled.___pAppData_5 = unmarshaledpAppData_temp_5;
	intptr_t unmarshaledxOpen_temp_6;
	memset((&unmarshaledxOpen_temp_6), 0, sizeof(unmarshaledxOpen_temp_6));
	unmarshaledxOpen_temp_6 = marshaled.___xOpen_6;
	unmarshaled.___xOpen_6 = unmarshaledxOpen_temp_6;
	unmarshaled.___xDelete_7 = il2cpp_codegen_marshal_function_ptr_to_delegate<SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826>(marshaled.___xDelete_7, SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___xDelete_7), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826>(marshaled.___xDelete_7, SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826_il2cpp_TypeInfo_var));
	intptr_t unmarshaledxAccess_temp_8;
	memset((&unmarshaledxAccess_temp_8), 0, sizeof(unmarshaledxAccess_temp_8));
	unmarshaledxAccess_temp_8 = marshaled.___xAccess_8;
	unmarshaled.___xAccess_8 = unmarshaledxAccess_temp_8;
	intptr_t unmarshaledxFullPathname_temp_9;
	memset((&unmarshaledxFullPathname_temp_9), 0, sizeof(unmarshaledxFullPathname_temp_9));
	unmarshaledxFullPathname_temp_9 = marshaled.___xFullPathname_9;
	unmarshaled.___xFullPathname_9 = unmarshaledxFullPathname_temp_9;
	intptr_t unmarshaledxDlOpen_temp_10;
	memset((&unmarshaledxDlOpen_temp_10), 0, sizeof(unmarshaledxDlOpen_temp_10));
	unmarshaledxDlOpen_temp_10 = marshaled.___xDlOpen_10;
	unmarshaled.___xDlOpen_10 = unmarshaledxDlOpen_temp_10;
	intptr_t unmarshaledxDlError_temp_11;
	memset((&unmarshaledxDlError_temp_11), 0, sizeof(unmarshaledxDlError_temp_11));
	unmarshaledxDlError_temp_11 = marshaled.___xDlError_11;
	unmarshaled.___xDlError_11 = unmarshaledxDlError_temp_11;
	intptr_t unmarshaledxDlSym_temp_12;
	memset((&unmarshaledxDlSym_temp_12), 0, sizeof(unmarshaledxDlSym_temp_12));
	unmarshaledxDlSym_temp_12 = marshaled.___xDlSym_12;
	unmarshaled.___xDlSym_12 = unmarshaledxDlSym_temp_12;
	intptr_t unmarshaledxDlClose_temp_13;
	memset((&unmarshaledxDlClose_temp_13), 0, sizeof(unmarshaledxDlClose_temp_13));
	unmarshaledxDlClose_temp_13 = marshaled.___xDlClose_13;
	unmarshaled.___xDlClose_13 = unmarshaledxDlClose_temp_13;
	intptr_t unmarshaledxRandomness_temp_14;
	memset((&unmarshaledxRandomness_temp_14), 0, sizeof(unmarshaledxRandomness_temp_14));
	unmarshaledxRandomness_temp_14 = marshaled.___xRandomness_14;
	unmarshaled.___xRandomness_14 = unmarshaledxRandomness_temp_14;
	intptr_t unmarshaledxSleep_temp_15;
	memset((&unmarshaledxSleep_temp_15), 0, sizeof(unmarshaledxSleep_temp_15));
	unmarshaledxSleep_temp_15 = marshaled.___xSleep_15;
	unmarshaled.___xSleep_15 = unmarshaledxSleep_temp_15;
	intptr_t unmarshaledxCurrentTime_temp_16;
	memset((&unmarshaledxCurrentTime_temp_16), 0, sizeof(unmarshaledxCurrentTime_temp_16));
	unmarshaledxCurrentTime_temp_16 = marshaled.___xCurrentTime_16;
	unmarshaled.___xCurrentTime_16 = unmarshaledxCurrentTime_temp_16;
	intptr_t unmarshaledxGetLastError_temp_17;
	memset((&unmarshaledxGetLastError_temp_17), 0, sizeof(unmarshaledxGetLastError_temp_17));
	unmarshaledxGetLastError_temp_17 = marshaled.___xGetLastError_17;
	unmarshaled.___xGetLastError_17 = unmarshaledxGetLastError_temp_17;
}
// Conversion method for clean up from marshalling of: SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs
IL2CPP_EXTERN_C void sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801_marshal_com_cleanup(sqlite3_vfs_tE5DAE91C090E1C709EC194893D25A0BF752EF801_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t SQLiteDeleteDelegate_Invoke_m05864E249C3D97BD1CE9D33569AC2607AF36697A_Multicast(SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826* __this, intptr_t ___pVfs0, uint8_t* ___zName1, int32_t ___syncDir2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826* currentDelegate = reinterpret_cast<SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint8_t*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___pVfs0, ___zName1, ___syncDir2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t SQLiteDeleteDelegate_Invoke_m05864E249C3D97BD1CE9D33569AC2607AF36697A_Open(SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826* __this, intptr_t ___pVfs0, uint8_t* ___zName1, int32_t ___syncDir2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint8_t*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pVfs0, ___zName1, ___syncDir2, method);
}
int32_t SQLiteDeleteDelegate_Invoke_m05864E249C3D97BD1CE9D33569AC2607AF36697A_OpenStaticInvoker(SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826* __this, intptr_t ___pVfs0, uint8_t* ___zName1, int32_t ___syncDir2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, uint8_t*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___pVfs0, ___zName1, ___syncDir2);
}
int32_t SQLiteDeleteDelegate_Invoke_m05864E249C3D97BD1CE9D33569AC2607AF36697A_ClosedStaticInvoker(SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826* __this, intptr_t ___pVfs0, uint8_t* ___zName1, int32_t ___syncDir2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, uint8_t*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___pVfs0, ___zName1, ___syncDir2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826 (SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826* __this, intptr_t ___pVfs0, uint8_t* ___zName1, int32_t ___syncDir2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, uint8_t*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pVfs0, ___zName1, ___syncDir2);

	return returnValue;
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs/SQLiteDeleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteDeleteDelegate__ctor_mCA6159A8C54EF2915773E9598CF7006173E981C3 (SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SQLiteDeleteDelegate_Invoke_m05864E249C3D97BD1CE9D33569AC2607AF36697A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SQLiteDeleteDelegate_Invoke_m05864E249C3D97BD1CE9D33569AC2607AF36697A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SQLiteDeleteDelegate_Invoke_m05864E249C3D97BD1CE9D33569AC2607AF36697A_Open;
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
	__this->___extra_arg_5 = (intptr_t)&SQLiteDeleteDelegate_Invoke_m05864E249C3D97BD1CE9D33569AC2607AF36697A_Multicast;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs/SQLiteDeleteDelegate::Invoke(System.IntPtr,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLiteDeleteDelegate_Invoke_m05864E249C3D97BD1CE9D33569AC2607AF36697A (SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826* __this, intptr_t ___pVfs0, uint8_t* ___zName1, int32_t ___syncDir2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint8_t*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pVfs0, ___zName1, ___syncDir2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs/SQLiteDeleteDelegate::BeginInvoke(System.IntPtr,System.Byte*,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SQLiteDeleteDelegate_BeginInvoke_m49A3687AC7C24CD40031ADEEA55F16CD19C7F778 (SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826* __this, intptr_t ___pVfs0, uint8_t* ___zName1, int32_t ___syncDir2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pVfs0);
	__d_args[1] = ___zName1;
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___syncDir2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/sqlite3_vfs/SQLiteDeleteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLiteDeleteDelegate_EndInvoke_m2B83A81BF5DBB76BA75AB3C1D421190598591E0C (SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_close(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_close_m1AB577CDE304CA366CE852E63B7CD912320D27DD (intptr_t ___db0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_close", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_close)(___db0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0);
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_close_v2(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_close_v2_m18BA71020CDBEC3D48794A67F8D947CCB1954C47 (intptr_t ___db0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_close_v2", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_close_v2)(___db0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0);
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_enable_shared_cache(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_enable_shared_cache_mB8DD2BD5B5F2E8BE2E85CEE463B657E461C5F751 (int32_t ___enable0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_enable_shared_cache", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_enable_shared_cache)(___enable0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___enable0);
	#endif

	return returnValue;
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_interrupt(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_interrupt_m249933B6A4AACF349A03BE946770A3A755548C0F (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_interrupt", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_interrupt)(____db0_marshaled);
	#else
	il2cppPInvokeFunc(____db0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_finalize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_finalize_mDB9DB5DFB67CD41B37E3EC11132C11910D1813B1 (intptr_t ___stmt0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_finalize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_finalize)(___stmt0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_reset(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_reset_m88C39A2CACDFC1E43BFF8094504D3783D3012F3A (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_reset", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_reset)(____stmt0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_clear_bindings(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_clear_bindings_m4410C3BFB6640A0DC38BBC5255993CA02117DCFF (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_clear_bindings", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_clear_bindings)(____stmt0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_stmt_status(SQLitePCL.sqlite3_stmt,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_stmt_status_m004E4D57D42E465337BFF4DAA46559E498B64EF2 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stm0, int32_t ___op1, int32_t ___resetFlg2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_stmt_status", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stm0' to native representation
	void* ____stm0_marshaled = NULL;
	if (___stm0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stm"), NULL);
	bool ___safeHandle_reference_incremented_for____stm0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stm0, (&___safeHandle_reference_incremented_for____stm0), NULL);
	____stm0_marshaled = reinterpret_cast<void*>((___stm0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_stmt_status)(____stm0_marshaled, ___op1, ___resetFlg2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stm0_marshaled, ___op1, ___resetFlg2);
	#endif

	// Marshaling cleanup of parameter '___stm0' native representation
	if (___safeHandle_reference_incremented_for____stm0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stm0, NULL);
	}

	return returnValue;
}
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_bind_parameter_name(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_bind_parameter_name_mA41869ADD69E8BC04BB2CA18DBE1CA07BA461B1F (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef uint8_t* (CDECL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_bind_parameter_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	uint8_t* returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_parameter_name)(____stmt0_marshaled, ___index1);
	#else
	uint8_t* returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___index1);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_database_name(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_column_database_name_m531819C1877D9BA29878561661CBB4365DC531E7 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef uint8_t* (CDECL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_column_database_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	uint8_t* returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_database_name)(____stmt0_marshaled, ___index1);
	#else
	uint8_t* returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___index1);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_decltype(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_column_decltype_mE6C718DDE006F6804788F4B04B99042D3771C25F (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef uint8_t* (CDECL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_column_decltype", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	uint8_t* returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_decltype)(____stmt0_marshaled, ___index1);
	#else
	uint8_t* returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___index1);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_name(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_column_name_m92BD5854D99CAAE2A69E218914D943B2926B3198 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef uint8_t* (CDECL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_column_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	uint8_t* returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_name)(____stmt0_marshaled, ___index1);
	#else
	uint8_t* returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___index1);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_origin_name(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_column_origin_name_mB01713D308C6F1AB620F7D43862C1C9E6FA8A9E1 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef uint8_t* (CDECL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_column_origin_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	uint8_t* returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_origin_name)(____stmt0_marshaled, ___index1);
	#else
	uint8_t* returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___index1);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_table_name(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_column_table_name_m31214D2D3BCA2379C2A8853E94CA91B0570E203A (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef uint8_t* (CDECL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_column_table_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	uint8_t* returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_table_name)(____stmt0_marshaled, ___index1);
	#else
	uint8_t* returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___index1);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_text(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_column_text_mD15798ABA24D7FEA86E1266241448B080F3237F6 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef uint8_t* (CDECL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_column_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	uint8_t* returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_text)(____stmt0_marshaled, ___index1);
	#else
	uint8_t* returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___index1);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_errmsg(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_errmsg_mA3489AD3BA377B39157C2CB1381421674EAA9638 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	typedef uint8_t* (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_errmsg", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	uint8_t* returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_errmsg)(____db0_marshaled);
	#else
	uint8_t* returnValue = il2cppPInvokeFunc(____db0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_db_readonly(SQLitePCL.sqlite3,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_db_readonly_mF3564C27552394F046037615CF39F34F631FEA31 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, uint8_t* ___dbName1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint8_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_db_readonly", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_db_readonly)(____db0_marshaled, ___dbName1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ___dbName1);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	return returnValue;
}
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_db_filename(SQLitePCL.sqlite3,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_db_filename_m6F4CF73CF5446915D06E68BA808B6957D0FAAEAA (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, uint8_t* ___att1, const RuntimeMethod* method) 
{
	typedef uint8_t* (CDECL *PInvokeFunc) (void*, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint8_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_db_filename", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	uint8_t* returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_db_filename)(____db0_marshaled, ___att1);
	#else
	uint8_t* returnValue = il2cppPInvokeFunc(____db0_marshaled, ___att1);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_prepare_v2(SQLitePCL.sqlite3,System.Byte*,System.Int32,System.IntPtr&,System.Byte*&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_prepare_v2_m47F3DC300069CA2B4CC210A0FE5EBC4965C57CC9 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, uint8_t* ___pSql1, int32_t ___nBytes2, intptr_t* ___stmt3, uint8_t** ___ptrRemain4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, uint8_t*, int32_t, intptr_t*, uint8_t**);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint8_t*) + sizeof(int32_t) + sizeof(intptr_t*) + sizeof(uint8_t**);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_prepare_v2", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Marshaling of parameter '___ptrRemain4' to native representation
	uint8_t* ____ptrRemain4_empty = NULL;
	uint8_t** ____ptrRemain4_marshaled = &____ptrRemain4_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_prepare_v2)(____db0_marshaled, ___pSql1, ___nBytes2, ___stmt3, ____ptrRemain4_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ___pSql1, ___nBytes2, ___stmt3, ____ptrRemain4_marshaled);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	// Marshaling of parameter '___ptrRemain4' back from native representation
	uint8_t* _____ptrRemain4_marshaled_unmarshaled_dereferenced = NULL;
	_____ptrRemain4_marshaled_unmarshaled_dereferenced = *____ptrRemain4_marshaled;
	*___ptrRemain4 = _____ptrRemain4_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_prepare_v3(SQLitePCL.sqlite3,System.Byte*,System.Int32,System.UInt32,System.IntPtr&,System.Byte*&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_prepare_v3_m257AE330808B1998CAF4D541F51338B4E234A22A (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, uint8_t* ___pSql1, int32_t ___nBytes2, uint32_t ___flags3, intptr_t* ___stmt4, uint8_t** ___ptrRemain5, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, uint8_t*, int32_t, uint32_t, intptr_t*, uint8_t**);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint8_t*) + sizeof(int32_t) + sizeof(uint32_t) + sizeof(intptr_t*) + sizeof(uint8_t**);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_prepare_v3", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Marshaling of parameter '___ptrRemain5' to native representation
	uint8_t* ____ptrRemain5_empty = NULL;
	uint8_t** ____ptrRemain5_marshaled = &____ptrRemain5_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_prepare_v3)(____db0_marshaled, ___pSql1, ___nBytes2, ___flags3, ___stmt4, ____ptrRemain5_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ___pSql1, ___nBytes2, ___flags3, ___stmt4, ____ptrRemain5_marshaled);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	// Marshaling of parameter '___ptrRemain5' back from native representation
	uint8_t* _____ptrRemain5_marshaled_unmarshaled_dereferenced = NULL;
	_____ptrRemain5_marshaled_unmarshaled_dereferenced = *____ptrRemain5_marshaled;
	*___ptrRemain5 = _____ptrRemain5_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_db_status(SQLitePCL.sqlite3,System.Int32,System.Int32&,System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_db_status_m1DF667F36C04C7E8EF8DFB403CE0264F44B8A047 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___op1, int32_t* ___current2, int32_t* ___highest3, int32_t ___resetFlg4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, int32_t, int32_t*, int32_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(int32_t*) + sizeof(int32_t*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_db_status", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_db_status)(____db0_marshaled, ___op1, ___current2, ___highest3, ___resetFlg4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ___op1, ___current2, ___highest3, ___resetFlg4);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_complete(System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_complete_m41DCE98D30924199CA848FF74A6704518F9BAE78 (uint8_t* ___pSql0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint8_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_complete", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_complete)(___pSql0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pSql0);
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_compileoption_used(System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_compileoption_used_m739645B1E2850AD9762CBA20B0268D48B02DB5B3 (uint8_t* ___pSql0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint8_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_compileoption_used", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_compileoption_used)(___pSql0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pSql0);
	#endif

	return returnValue;
}
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_compileoption_get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_compileoption_get_m6C55B09A30E4C912F67C1BEFBB22A85D28F16061 (int32_t ___n0, const RuntimeMethod* method) 
{
	typedef uint8_t* (CDECL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_compileoption_get", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	uint8_t* returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_compileoption_get)(___n0);
	#else
	uint8_t* returnValue = il2cppPInvokeFunc(___n0);
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_table_column_metadata(SQLitePCL.sqlite3,System.Byte*,System.Byte*,System.Byte*,System.Byte*&,System.Byte*&,System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_table_column_metadata_m3AFDBA6E379081126C71740A363A33CE0F57E885 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, uint8_t* ___dbName1, uint8_t* ___tblName2, uint8_t* ___colName3, uint8_t** ___ptrDataType4, uint8_t** ___ptrCollSeq5, int32_t* ___notNull6, int32_t* ___primaryKey7, int32_t* ___autoInc8, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, uint8_t*, uint8_t*, uint8_t*, uint8_t**, uint8_t**, int32_t*, int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint8_t*) + sizeof(uint8_t*) + sizeof(uint8_t*) + sizeof(uint8_t**) + sizeof(uint8_t**) + sizeof(int32_t*) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_table_column_metadata", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Marshaling of parameter '___ptrDataType4' to native representation
	uint8_t* ____ptrDataType4_empty = NULL;
	uint8_t** ____ptrDataType4_marshaled = &____ptrDataType4_empty;

	// Marshaling of parameter '___ptrCollSeq5' to native representation
	uint8_t* ____ptrCollSeq5_empty = NULL;
	uint8_t** ____ptrCollSeq5_marshaled = &____ptrCollSeq5_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_table_column_metadata)(____db0_marshaled, ___dbName1, ___tblName2, ___colName3, ____ptrDataType4_marshaled, ____ptrCollSeq5_marshaled, ___notNull6, ___primaryKey7, ___autoInc8);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ___dbName1, ___tblName2, ___colName3, ____ptrDataType4_marshaled, ____ptrCollSeq5_marshaled, ___notNull6, ___primaryKey7, ___autoInc8);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	// Marshaling of parameter '___ptrDataType4' back from native representation
	uint8_t* _____ptrDataType4_marshaled_unmarshaled_dereferenced = NULL;
	_____ptrDataType4_marshaled_unmarshaled_dereferenced = *____ptrDataType4_marshaled;
	*___ptrDataType4 = _____ptrDataType4_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___ptrCollSeq5' back from native representation
	uint8_t* _____ptrCollSeq5_marshaled_unmarshaled_dereferenced = NULL;
	_____ptrCollSeq5_marshaled_unmarshaled_dereferenced = *____ptrCollSeq5_marshaled;
	*___ptrCollSeq5 = _____ptrCollSeq5_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_value_text(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_value_text_mD54F4A0D36B2C3E119BCFA4F886A834CD329258F (intptr_t ___p0, const RuntimeMethod* method) 
{
	typedef uint8_t* (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_value_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	uint8_t* returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_text)(___p0);
	#else
	uint8_t* returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_enable_load_extension(SQLitePCL.sqlite3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_enable_load_extension_m625A8DEFB41726507DD20ED08711B8E13EF57C78 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___enable1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_enable_load_extension", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_enable_load_extension)(____db0_marshaled, ___enable1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ___enable1);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_load_extension(SQLitePCL.sqlite3,System.Byte[],System.Byte[],System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_load_extension_m45CCBA3D8400225A30FFD65039CBB7858EE50D0D (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fileName1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___procName2, intptr_t* ___pError3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, uint8_t*, uint8_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_load_extension", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Marshaling of parameter '___fileName1' to native representation
	uint8_t* ____fileName1_marshaled = NULL;
	if (___fileName1 != NULL)
	{
		____fileName1_marshaled = reinterpret_cast<uint8_t*>((___fileName1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___procName2' to native representation
	uint8_t* ____procName2_marshaled = NULL;
	if (___procName2 != NULL)
	{
		____procName2_marshaled = reinterpret_cast<uint8_t*>((___procName2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_load_extension)(____db0_marshaled, ____fileName1_marshaled, ____procName2_marshaled, ___pError3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ____fileName1_marshaled, ____procName2_marshaled, ___pError3);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_initialize_m8A6FFACCE2B0E50A33B2F4DCF972A9FDFCE7C6AC (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_initialize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_initialize)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_shutdown_m4B4437C2A802096670337818149E8C3905A7BE3A (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_shutdown", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_shutdown)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_libversion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_libversion_m66335CB96A11F9EF190CBD8103BABC51F082A8F4 (const RuntimeMethod* method) 
{
	typedef uint8_t* (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_libversion", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	uint8_t* returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_libversion)();
	#else
	uint8_t* returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_libversion_number()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_libversion_number_m1BB30EEFACABDD1E9F05A64183DB18659D35E6E3 (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_libversion_number", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_libversion_number)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_threadsafe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_threadsafe_mB955699D3731EAAE69DBAF631991DF6F9560F16A (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_threadsafe", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_threadsafe)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_sourceid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_sourceid_mE87D21F7A37600941DC86CCD9A1CAAC9461B0C06 (const RuntimeMethod* method) 
{
	typedef uint8_t* (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_sourceid", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	uint8_t* returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_sourceid)();
	#else
	uint8_t* returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_malloc(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_malloc_m81CD08E752AA76006B0A0A639D3249489BBC2B26 (int32_t ___n0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_malloc", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_malloc)(___n0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___n0);
	#endif

	return returnValue;
}
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_realloc(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_realloc_m84D1A634F7C0F6E8E8138DE17542A51D4EA1EEF5 (intptr_t ___p0, int32_t ___n1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_realloc", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_realloc)(___p0, ___n1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___p0, ___n1);
	#endif

	return returnValue;
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_free(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_free_mA01C68AE2AC772DD28E2310BDE36FF8759A95135 (intptr_t ___p0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_free", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_free)(___p0);
	#else
	il2cppPInvokeFunc(___p0);
	#endif

}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_stricmp(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_stricmp_m627DD1C702F495B51E201B5405AB3CB8D9ABA0BC (intptr_t ___p0, intptr_t ___q1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_stricmp", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_stricmp)(___p0, ___q1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___p0, ___q1);
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_strnicmp(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_strnicmp_m13B23F1F3609E46F98A1BAB6060398BD2A27FFA5 (intptr_t ___p0, intptr_t ___q1, int32_t ___n2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_strnicmp", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_strnicmp)(___p0, ___q1, ___n2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___p0, ___q1, ___n2);
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_open(System.Byte*,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_open_m53B559664482A403D6FF0A5ECB71A907FF52DACB (uint8_t* ___filename0, intptr_t* ___db1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (uint8_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint8_t*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_open", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_open)(___filename0, ___db1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___filename0, ___db1);
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_open_v2(System.Byte*,System.IntPtr&,System.Int32,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_open_v2_m9BBB953EC4BA8243303393BF8DF5BB9D8A2461A5 (uint8_t* ___filename0, intptr_t* ___db1, int32_t ___flags2, uint8_t* ___vfs3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (uint8_t*, intptr_t*, int32_t, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint8_t*) + sizeof(intptr_t*) + sizeof(int32_t) + sizeof(uint8_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_open_v2", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_open_v2)(___filename0, ___db1, ___flags2, ___vfs3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___filename0, ___db1, ___flags2, ___vfs3);
	#endif

	return returnValue;
}
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_vfs_find(System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_vfs_find_m1AA80351BE13AFA6E8AFF9D4FA949C36A85A0360 (uint8_t* ___vfs0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint8_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_vfs_find", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_vfs_find)(___vfs0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___vfs0);
	#endif

	return returnValue;
}
// System.Int64 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_last_insert_rowid(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeMethods_sqlite3_last_insert_rowid_m5218DAC4EAEBEB530BC81A338AC8CF9A940B9243 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	typedef int64_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_last_insert_rowid", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_last_insert_rowid)(____db0_marshaled);
	#else
	int64_t returnValue = il2cppPInvokeFunc(____db0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_changes(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_changes_m2981DF863835F76EC8513193777B268593A075A0 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_changes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_changes)(____db0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_total_changes(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_total_changes_mF78BDDBB54A1FEBFB44A2C9C9747E4F2F06006DC (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_total_changes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_total_changes)(____db0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	return returnValue;
}
// System.Int64 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_memory_used()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeMethods_sqlite3_memory_used_mB63790E8C13484C97B12FA03F8EAE89DA0A2DB35 (const RuntimeMethod* method) 
{
	typedef int64_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_memory_used", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_memory_used)();
	#else
	int64_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int64 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_memory_highwater(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeMethods_sqlite3_memory_highwater_m360074736CAE679D9AE7D0456616EEC6B9B7297D (int32_t ___resetFlag0, const RuntimeMethod* method) 
{
	typedef int64_t (CDECL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_memory_highwater", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_memory_highwater)(___resetFlag0);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___resetFlag0);
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_status(System.Int32,System.Int32&,System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_status_m63335BBB95A05F0DB027F9E124450418F58807B2 (int32_t ___op0, int32_t* ___current1, int32_t* ___highwater2, int32_t ___resetFlag3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t, int32_t*, int32_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t*) + sizeof(int32_t*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_status", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_status)(___op0, ___current1, ___highwater2, ___resetFlag3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___op0, ___current1, ___highwater2, ___resetFlag3);
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_busy_timeout(SQLitePCL.sqlite3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_busy_timeout_m6BE9F32A705F97842C8D72AE82179AA5F4B06A29 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___ms1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_busy_timeout", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_busy_timeout)(____db0_marshaled, ___ms1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ___ms1);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_bind_blob(SQLitePCL.sqlite3_stmt,System.Int32,System.Byte*,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_bind_blob_mDFC3555381F1DD2CCB10365322F67C93B9F30D14 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, uint8_t* ___val2, int32_t ___nSize3, intptr_t ___nTransient4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, int32_t, uint8_t*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(uint8_t*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_bind_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_blob)(____stmt0_marshaled, ___index1, ___val2, ___nSize3, ___nTransient4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___index1, ___val2, ___nSize3, ___nTransient4);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_bind_zeroblob(SQLitePCL.sqlite3_stmt,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_bind_zeroblob_mF3A5557900228FF234FE26900E1800DF6554894F (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, int32_t ___size2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_bind_zeroblob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_zeroblob)(____stmt0_marshaled, ___index1, ___size2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___index1, ___size2);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_bind_double(SQLitePCL.sqlite3_stmt,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_bind_double_mA3AA32FDB55D504B2ABBD9A12F6207BABE7EBE35 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, double ___val2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, int32_t, double);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_bind_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_double)(____stmt0_marshaled, ___index1, ___val2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___index1, ___val2);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_bind_int(SQLitePCL.sqlite3_stmt,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_bind_int_m1D432058DD9798142789DB5BBCF683DC872CE7E3 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, int32_t ___val2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_bind_int", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_int)(____stmt0_marshaled, ___index1, ___val2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___index1, ___val2);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_bind_int64(SQLitePCL.sqlite3_stmt,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_bind_int64_mD0F23638A4A9A68C56C9D1F3B434F3ECD879837D (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, int64_t ___val2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, int32_t, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_bind_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_int64)(____stmt0_marshaled, ___index1, ___val2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___index1, ___val2);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_bind_null(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_bind_null_mF7A3AF19B69661633CEC71922A1FCB5EF9809AB8 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_bind_null", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_null)(____stmt0_marshaled, ___index1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___index1);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_bind_text(SQLitePCL.sqlite3_stmt,System.Int32,System.Byte*,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_bind_text_mAA17E858EFA502693A86BD49585227EC31879767 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, uint8_t* ___val2, int32_t ___nlen3, intptr_t ___pvReserved4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, int32_t, uint8_t*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(uint8_t*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_bind_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_text)(____stmt0_marshaled, ___index1, ___val2, ___nlen3, ___pvReserved4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___index1, ___val2, ___nlen3, ___pvReserved4);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_bind_parameter_count(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_bind_parameter_count_mC6AF4476E2D285F57579A79FAF7793B2C9151DC8 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_bind_parameter_count", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_parameter_count)(____stmt0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_bind_parameter_index(SQLitePCL.sqlite3_stmt,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_bind_parameter_index_m2B9AA13C036B886577AD9126C3C921595E11D37B (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, uint8_t* ___strName1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint8_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_bind_parameter_index", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_parameter_index)(____stmt0_marshaled, ___strName1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___strName1);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_count(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_column_count_m1A0FC37AB55007B24E30C4D5A071049231FA3C6C (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_column_count", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_count)(____stmt0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_data_count(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_data_count_m581081CA581D80A23A1DFFF59AACA5BAF558B20E (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_data_count", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_data_count)(____stmt0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_step(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_step_m54E48F06063127E8E43B2725869CA815177FEFDD (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_step", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_step)(____stmt0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_sql(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_sql_m240AE08BA65D3A839A3FD5CF5CA3D442163FD2D9 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	typedef uint8_t* (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_sql", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	uint8_t* returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_sql)(____stmt0_marshaled);
	#else
	uint8_t* returnValue = il2cppPInvokeFunc(____stmt0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Double SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_double(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeMethods_sqlite3_column_double_m0EC8F72C560FC8CDA6E20AD2F75E042CEA956D0A (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef double (CDECL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_column_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_double)(____stmt0_marshaled, ___index1);
	#else
	double returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___index1);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_int(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_column_int_m3F06A1718EFBFEC590D94A35DFFDDD1F96E611C1 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_column_int", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_int)(____stmt0_marshaled, ___index1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___index1);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Int64 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_int64(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeMethods_sqlite3_column_int64_mF0AA4334CFC79A9CD3B751EA4B586035B25E8A99 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef int64_t (CDECL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_column_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_int64)(____stmt0_marshaled, ___index1);
	#else
	int64_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___index1);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_blob(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_column_blob_m4CCEF894D2AFAE81911307E2B105F3877938F572 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_column_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_blob)(____stmt0_marshaled, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___index1);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_bytes(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_column_bytes_m933C0E3F3410E9EF8156BF59ED0BD77DCF4E276C (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_column_bytes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_bytes)(____stmt0_marshaled, ___index1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___index1);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_column_type(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_column_type_mC5F06DA7EE7437933596361C3CA937A978B097B0 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_column_type", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_type)(____stmt0_marshaled, ___index1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled, ___index1);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_aggregate_count(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_aggregate_count_m11E6D2D6910B3F57948DBE484EF003CD112C52C4 (intptr_t ___context0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_aggregate_count", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_aggregate_count)(___context0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___context0);
	#endif

	return returnValue;
}
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_value_blob(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_value_blob_m1973A0CA401632AE2F65C3E4BD6EC63D6AE5CB22 (intptr_t ___p0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_value_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_blob)(___p0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_value_bytes(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_value_bytes_m69179293AB4C95F3725B525846552A023CEF9F98 (intptr_t ___p0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_value_bytes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_bytes)(___p0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
// System.Double SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_value_double(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeMethods_sqlite3_value_double_mF31257FD3796FDBA50DEB0395647E0077DF9489A (intptr_t ___p0, const RuntimeMethod* method) 
{
	typedef double (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_value_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_double)(___p0);
	#else
	double returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_value_int(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_value_int_m368DDE21892C5937E6242477E5ED7CCC01FD6583 (intptr_t ___p0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_value_int", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_int)(___p0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
// System.Int64 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_value_int64(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeMethods_sqlite3_value_int64_mFB43288331B623AAB024EE8A424722724340B6E3 (intptr_t ___p0, const RuntimeMethod* method) 
{
	typedef int64_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_value_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_int64)(___p0);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_value_type(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_value_type_mBF04BD76CC69920EFBDBC7AF4C1726AB9BDF8F99 (intptr_t ___p0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_value_type", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_type)(___p0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_user_data(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_user_data_mB204A1D40E8B52232D72A2F884C79B11384F06DC (intptr_t ___context0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_user_data", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_user_data)(___context0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0);
	#endif

	return returnValue;
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_blob(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_blob_m3738BB3BC6F1736EE62BBC29AF0CE075A3CA3315 (intptr_t ___context0, intptr_t ___val1, int32_t ___nSize2, intptr_t ___pvReserved3, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_result_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_blob)(___context0, ___val1, ___nSize2, ___pvReserved3);
	#else
	il2cppPInvokeFunc(___context0, ___val1, ___nSize2, ___pvReserved3);
	#endif

}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_double(System.IntPtr,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_double_m7A3371A49D9AC8FEB7E135FA830EC1F10B2C46A1 (intptr_t ___context0, double ___val1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, double);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_result_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_double)(___context0, ___val1);
	#else
	il2cppPInvokeFunc(___context0, ___val1);
	#endif

}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_error(System.IntPtr,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_error_mDAC878B366FE0D71E57FEEA354831B10112D70BF (intptr_t ___context0, uint8_t* ___strErr1, int32_t ___nLen2, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint8_t*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_result_error", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_error)(___context0, ___strErr1, ___nLen2);
	#else
	il2cppPInvokeFunc(___context0, ___strErr1, ___nLen2);
	#endif

}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_int(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_int_m7BA015182C11F2C94D6760F7B203FE9F08E6A8B3 (intptr_t ___context0, int32_t ___val1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_result_int", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_int)(___context0, ___val1);
	#else
	il2cppPInvokeFunc(___context0, ___val1);
	#endif

}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_int64(System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_int64_m08F9EA71167DAA31E323A73919D5F1592A5B63A8 (intptr_t ___context0, int64_t ___val1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_result_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_int64)(___context0, ___val1);
	#else
	il2cppPInvokeFunc(___context0, ___val1);
	#endif

}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_null(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_null_mD8AE1EBC9D51047F30E758A3E98BDF8D57126300 (intptr_t ___context0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_result_null", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_null)(___context0);
	#else
	il2cppPInvokeFunc(___context0);
	#endif

}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_text(System.IntPtr,System.Byte*,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_text_m64F973D4C475FF6A82514B645FCFB80973F41F25 (intptr_t ___context0, uint8_t* ___val1, int32_t ___nLen2, intptr_t ___pvReserved3, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint8_t*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_result_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_text)(___context0, ___val1, ___nLen2, ___pvReserved3);
	#else
	il2cppPInvokeFunc(___context0, ___val1, ___nLen2, ___pvReserved3);
	#endif

}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_zeroblob(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_zeroblob_mE15FEBF6140EC0E8402435A8E9FBC62B2788E4CE (intptr_t ___context0, int32_t ___n1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_result_zeroblob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_zeroblob)(___context0, ___n1);
	#else
	il2cppPInvokeFunc(___context0, ___n1);
	#endif

}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_error_toobig(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_error_toobig_mEA829124A1DD4C4A8952F2365B2D5BDAC0D22F49 (intptr_t ___context0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_result_error_toobig", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_error_toobig)(___context0);
	#else
	il2cppPInvokeFunc(___context0);
	#endif

}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_error_nomem(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_error_nomem_m4FBA5380D00DA0BC81661D4EDB232EAE7B71727E (intptr_t ___context0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_result_error_nomem", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_error_nomem)(___context0);
	#else
	il2cppPInvokeFunc(___context0);
	#endif

}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_result_error_code(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_result_error_code_mAA7930849DA06F7A0D643F7B9CD06B98CFE28663 (intptr_t ___context0, int32_t ___code1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_result_error_code", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_error_code)(___context0, ___code1);
	#else
	il2cppPInvokeFunc(___context0, ___code1);
	#endif

}
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_aggregate_context(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_aggregate_context_m72B7BFFF3BF9CF27C41627CC93A6095C0C49C6FF (intptr_t ___context0, int32_t ___nBytes1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_aggregate_context", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_aggregate_context)(___context0, ___nBytes1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0, ___nBytes1);
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_config_none(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_config_none_m6D318F1BF78C5A2B92625F22FDCAB98B73A83652 (int32_t ___op0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_config", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_config)(___op0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___op0);
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_config_int(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_config_int_mAAC260F740B6294713D3F9E5D86F911D9C2DD4EB (int32_t ___op0, int32_t ___val1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_config", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_config)(___op0, ___val1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___op0, ___val1);
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_config_log(System.Int32,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_log,SQLitePCL.hook_handle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_config_log_m9EB86B0F04AC3C146026F288471FF69AB0C6975C (int32_t ___op0, callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B* ___func1, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvUser2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t, Il2CppMethodPointer, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_config", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___func1' to native representation
	Il2CppMethodPointer ____func1_marshaled = NULL;
	____func1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func1));

	// Marshaling of parameter '___pvUser2' to native representation
	void* ____pvUser2_marshaled = NULL;
	if (___pvUser2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("pvUser"), NULL);
	bool ___safeHandle_reference_incremented_for____pvUser2 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___pvUser2, (&___safeHandle_reference_incremented_for____pvUser2), NULL);
	____pvUser2_marshaled = reinterpret_cast<void*>((___pvUser2)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_config)(___op0, ____func1_marshaled, ____pvUser2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___op0, ____func1_marshaled, ____pvUser2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___pvUser2' native representation
	if (___safeHandle_reference_incremented_for____pvUser2)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___pvUser2, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_create_collation(SQLitePCL.sqlite3,System.Byte[],System.Int32,SQLitePCL.hook_handle,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_collation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_create_collation_mBB19F1BAC7FD1230C48F219E6AACBDE01437018C (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___strName1, int32_t ___nType2, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvUser3, callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED* ___func4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, uint8_t*, int32_t, void*, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_create_collation", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Marshaling of parameter '___strName1' to native representation
	uint8_t* ____strName1_marshaled = NULL;
	if (___strName1 != NULL)
	{
		____strName1_marshaled = reinterpret_cast<uint8_t*>((___strName1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___pvUser3' to native representation
	void* ____pvUser3_marshaled = NULL;
	if (___pvUser3 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("pvUser"), NULL);
	bool ___safeHandle_reference_incremented_for____pvUser3 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___pvUser3, (&___safeHandle_reference_incremented_for____pvUser3), NULL);
	____pvUser3_marshaled = reinterpret_cast<void*>((___pvUser3)->___handle_0);

	// Marshaling of parameter '___func4' to native representation
	Il2CppMethodPointer ____func4_marshaled = NULL;
	____func4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func4));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_create_collation)(____db0_marshaled, ____strName1_marshaled, ___nType2, ____pvUser3_marshaled, ____func4_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ____strName1_marshaled, ___nType2, ____pvUser3_marshaled, ____func4_marshaled);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	// Marshaling cleanup of parameter '___pvUser3' native representation
	if (___safeHandle_reference_incremented_for____pvUser3)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___pvUser3, NULL);
	}

	return returnValue;
}
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_update_hook(SQLitePCL.sqlite3,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_update,SQLitePCL.hook_handle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_update_hook_m8B1639DA1B91510EF1EDE4D93CE40B38C05C9E79 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90* ___func1, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvUser2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, Il2CppMethodPointer, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_update_hook", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Marshaling of parameter '___func1' to native representation
	Il2CppMethodPointer ____func1_marshaled = NULL;
	____func1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func1));

	// Marshaling of parameter '___pvUser2' to native representation
	void* ____pvUser2_marshaled = NULL;
	if (___pvUser2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("pvUser"), NULL);
	bool ___safeHandle_reference_incremented_for____pvUser2 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___pvUser2, (&___safeHandle_reference_incremented_for____pvUser2), NULL);
	____pvUser2_marshaled = reinterpret_cast<void*>((___pvUser2)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_update_hook)(____db0_marshaled, ____func1_marshaled, ____pvUser2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ____func1_marshaled, ____pvUser2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	// Marshaling cleanup of parameter '___pvUser2' native representation
	if (___safeHandle_reference_incremented_for____pvUser2)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___pvUser2, NULL);
	}

	return returnValue;
}
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_commit_hook(SQLitePCL.sqlite3,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_commit,SQLitePCL.hook_handle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_commit_hook_m623ADE2035D6DB5318AF785037B80AB249DF20CB (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12* ___func1, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvUser2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, Il2CppMethodPointer, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_commit_hook", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Marshaling of parameter '___func1' to native representation
	Il2CppMethodPointer ____func1_marshaled = NULL;
	____func1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func1));

	// Marshaling of parameter '___pvUser2' to native representation
	void* ____pvUser2_marshaled = NULL;
	if (___pvUser2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("pvUser"), NULL);
	bool ___safeHandle_reference_incremented_for____pvUser2 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___pvUser2, (&___safeHandle_reference_incremented_for____pvUser2), NULL);
	____pvUser2_marshaled = reinterpret_cast<void*>((___pvUser2)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_commit_hook)(____db0_marshaled, ____func1_marshaled, ____pvUser2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ____func1_marshaled, ____pvUser2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	// Marshaling cleanup of parameter '___pvUser2' native representation
	if (___safeHandle_reference_incremented_for____pvUser2)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___pvUser2, NULL);
	}

	return returnValue;
}
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_profile(SQLitePCL.sqlite3,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_profile,SQLitePCL.hook_handle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_profile_mD53D29EFB2669BF94893810D6B0B9843B430EEC0 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4* ___func1, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvUser2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, Il2CppMethodPointer, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_profile", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Marshaling of parameter '___func1' to native representation
	Il2CppMethodPointer ____func1_marshaled = NULL;
	____func1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func1));

	// Marshaling of parameter '___pvUser2' to native representation
	void* ____pvUser2_marshaled = NULL;
	if (___pvUser2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("pvUser"), NULL);
	bool ___safeHandle_reference_incremented_for____pvUser2 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___pvUser2, (&___safeHandle_reference_incremented_for____pvUser2), NULL);
	____pvUser2_marshaled = reinterpret_cast<void*>((___pvUser2)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_profile)(____db0_marshaled, ____func1_marshaled, ____pvUser2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ____func1_marshaled, ____pvUser2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	// Marshaling cleanup of parameter '___pvUser2' native representation
	if (___safeHandle_reference_incremented_for____pvUser2)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___pvUser2, NULL);
	}

	return returnValue;
}
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_progress_handler(SQLitePCL.sqlite3,System.Int32,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_progress_handler,SQLitePCL.hook_handle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_progress_handler_m24F0BE580E0DB6B9318C92421E2D90F8EB60605A (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___instructions1, callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2* ___func2, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvUser3, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, int32_t, Il2CppMethodPointer, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_progress_handler", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Marshaling of parameter '___func2' to native representation
	Il2CppMethodPointer ____func2_marshaled = NULL;
	____func2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func2));

	// Marshaling of parameter '___pvUser3' to native representation
	void* ____pvUser3_marshaled = NULL;
	if (___pvUser3 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("pvUser"), NULL);
	bool ___safeHandle_reference_incremented_for____pvUser3 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___pvUser3, (&___safeHandle_reference_incremented_for____pvUser3), NULL);
	____pvUser3_marshaled = reinterpret_cast<void*>((___pvUser3)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_progress_handler)(____db0_marshaled, ___instructions1, ____func2_marshaled, ____pvUser3_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ___instructions1, ____func2_marshaled, ____pvUser3_marshaled);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	// Marshaling cleanup of parameter '___pvUser3' native representation
	if (___safeHandle_reference_incremented_for____pvUser3)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___pvUser3, NULL);
	}

	return returnValue;
}
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_trace(SQLitePCL.sqlite3,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_trace,SQLitePCL.hook_handle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_trace_mF63C1FF2F146F919EEF0ADAAF59924649B92C140 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190* ___func1, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvUser2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, Il2CppMethodPointer, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_trace", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Marshaling of parameter '___func1' to native representation
	Il2CppMethodPointer ____func1_marshaled = NULL;
	____func1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func1));

	// Marshaling of parameter '___pvUser2' to native representation
	void* ____pvUser2_marshaled = NULL;
	if (___pvUser2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("pvUser"), NULL);
	bool ___safeHandle_reference_incremented_for____pvUser2 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___pvUser2, (&___safeHandle_reference_incremented_for____pvUser2), NULL);
	____pvUser2_marshaled = reinterpret_cast<void*>((___pvUser2)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_trace)(____db0_marshaled, ____func1_marshaled, ____pvUser2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ____func1_marshaled, ____pvUser2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	// Marshaling cleanup of parameter '___pvUser2' native representation
	if (___safeHandle_reference_incremented_for____pvUser2)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___pvUser2, NULL);
	}

	return returnValue;
}
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_rollback_hook(SQLitePCL.sqlite3,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_rollback,SQLitePCL.hook_handle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_rollback_hook_m9BC94B90A1CE01EF317F888E5F42BAF3C860724F (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7* ___func1, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvUser2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, Il2CppMethodPointer, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_rollback_hook", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Marshaling of parameter '___func1' to native representation
	Il2CppMethodPointer ____func1_marshaled = NULL;
	____func1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func1));

	// Marshaling of parameter '___pvUser2' to native representation
	void* ____pvUser2_marshaled = NULL;
	if (___pvUser2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("pvUser"), NULL);
	bool ___safeHandle_reference_incremented_for____pvUser2 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___pvUser2, (&___safeHandle_reference_incremented_for____pvUser2), NULL);
	____pvUser2_marshaled = reinterpret_cast<void*>((___pvUser2)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_rollback_hook)(____db0_marshaled, ____func1_marshaled, ____pvUser2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ____func1_marshaled, ____pvUser2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	// Marshaling cleanup of parameter '___pvUser2' native representation
	if (___safeHandle_reference_incremented_for____pvUser2)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___pvUser2, NULL);
	}

	return returnValue;
}
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_db_handle(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_db_handle_mD9F49A773AAFD638123140A55072749ED81929F5 (intptr_t ___stmt0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_db_handle", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_db_handle)(___stmt0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0);
	#endif

	return returnValue;
}
// System.IntPtr SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_next_stmt(SQLitePCL.sqlite3,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_sqlite3_next_stmt_m9172D0000A32933007FBD97BC637CD018966251E (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, intptr_t ___stmt1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_next_stmt", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_next_stmt)(____db0_marshaled, ___stmt1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ___stmt1);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_stmt_busy(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_stmt_busy_m11A70E12356826D95DB03AC4187D768B2B792D7E (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_stmt_busy", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_stmt_busy)(____stmt0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_stmt_readonly(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_stmt_readonly_m6135AB2D4427923474627818BAF22CC13DC9ED1E (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_stmt_readonly", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stmt0' to native representation
	void* ____stmt0_marshaled = NULL;
	if (___stmt0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stmt"), NULL);
	bool ___safeHandle_reference_incremented_for____stmt0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___stmt0, (&___safeHandle_reference_incremented_for____stmt0), NULL);
	____stmt0_marshaled = reinterpret_cast<void*>((___stmt0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_stmt_readonly)(____stmt0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stmt0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___stmt0' native representation
	if (___safeHandle_reference_incremented_for____stmt0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___stmt0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_exec(SQLitePCL.sqlite3,System.Byte*,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_exec,SQLitePCL.hook_handle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_exec_m4CE3155343AF3114E234F192B59F0B0570AB69DD (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, uint8_t* ___strSql1, callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D* ___cb2, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvParam3, intptr_t* ___errMsg4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, uint8_t*, Il2CppMethodPointer, void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint8_t*) + sizeof(void*) + sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_exec", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Marshaling of parameter '___cb2' to native representation
	Il2CppMethodPointer ____cb2_marshaled = NULL;
	____cb2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb2));

	// Marshaling of parameter '___pvParam3' to native representation
	void* ____pvParam3_marshaled = NULL;
	if (___pvParam3 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("pvParam"), NULL);
	bool ___safeHandle_reference_incremented_for____pvParam3 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___pvParam3, (&___safeHandle_reference_incremented_for____pvParam3), NULL);
	____pvParam3_marshaled = reinterpret_cast<void*>((___pvParam3)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_exec)(____db0_marshaled, ___strSql1, ____cb2_marshaled, ____pvParam3_marshaled, ___errMsg4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ___strSql1, ____cb2_marshaled, ____pvParam3_marshaled, ___errMsg4);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	// Marshaling cleanup of parameter '___pvParam3' native representation
	if (___safeHandle_reference_incremented_for____pvParam3)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___pvParam3, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_get_autocommit(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_get_autocommit_m1B00FE7D177E280A08DAD94DF3A2FF54982DA9D6 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_get_autocommit", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_get_autocommit)(____db0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_extended_result_codes(SQLitePCL.sqlite3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_extended_result_codes_mF72D6B440E9E60380794D4B6EEBF681DF09C1697 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___onoff1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_extended_result_codes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_extended_result_codes)(____db0_marshaled, ___onoff1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ___onoff1);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_errcode(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_errcode_m6549377A5C62FF0B83336B3B266D04325374426B (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_errcode", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_errcode)(____db0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_extended_errcode(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_extended_errcode_m8711CCEAA8F0228FE4B22EA834EA83483BFD846C (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_extended_errcode", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_extended_errcode)(____db0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	return returnValue;
}
// System.Byte* SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_errstr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NativeMethods_sqlite3_errstr_m94BF95DBD723E111FB2870D02F9DE44BF8FB4B91 (int32_t ___rc0, const RuntimeMethod* method) 
{
	typedef uint8_t* (CDECL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_errstr", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	uint8_t* returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_errstr)(___rc0);
	#else
	uint8_t* returnValue = il2cppPInvokeFunc(___rc0);
	#endif

	return returnValue;
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_log(System.Int32,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_sqlite3_log_m148C6683D4EE3EAD31B07E98AFAC8A65EE6F7C63 (int32_t ___iErrCode0, uint8_t* ___zFormat1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (int32_t, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(uint8_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_log", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_log)(___iErrCode0, ___zFormat1);
	#else
	il2cppPInvokeFunc(___iErrCode0, ___zFormat1);
	#endif

}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_file_control(SQLitePCL.sqlite3,System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_file_control_mC3BB4FA07F240795B6F19558D0FECE6379B5C248 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___zDbName1, int32_t ___op2, intptr_t ___pArg3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, uint8_t*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_file_control", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Marshaling of parameter '___zDbName1' to native representation
	uint8_t* ____zDbName1_marshaled = NULL;
	if (___zDbName1 != NULL)
	{
		____zDbName1_marshaled = reinterpret_cast<uint8_t*>((___zDbName1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_file_control)(____db0_marshaled, ____zDbName1_marshaled, ___op2, ___pArg3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ____zDbName1_marshaled, ___op2, ___pArg3);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	return returnValue;
}
// SQLitePCL.sqlite3_backup SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_backup_init(SQLitePCL.sqlite3,System.Byte*,SQLitePCL.sqlite3,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* NativeMethods_sqlite3_backup_init_m85DB89F7A09F60AFED58AB79B9C48E66FB2FBB66 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___destDb0, uint8_t* ___zDestName1, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___sourceDb2, uint8_t* ___zSourceName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (CDECL *PInvokeFunc) (void*, uint8_t*, void*, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint8_t*) + sizeof(void*) + sizeof(uint8_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_backup_init", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___destDb0' to native representation
	void* ____destDb0_marshaled = NULL;
	if (___destDb0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("destDb"), NULL);
	bool ___safeHandle_reference_incremented_for____destDb0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___destDb0, (&___safeHandle_reference_incremented_for____destDb0), NULL);
	____destDb0_marshaled = reinterpret_cast<void*>((___destDb0)->___handle_0);

	// Marshaling of parameter '___sourceDb2' to native representation
	void* ____sourceDb2_marshaled = NULL;
	if (___sourceDb2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("sourceDb"), NULL);
	bool ___safeHandle_reference_incremented_for____sourceDb2 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___sourceDb2, (&___safeHandle_reference_incremented_for____sourceDb2), NULL);
	____sourceDb2_marshaled = reinterpret_cast<void*>((___sourceDb2)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_backup_init)(____destDb0_marshaled, ___zDestName1, ____sourceDb2_marshaled, ___zSourceName3);
	#else
	void* returnValue = il2cppPInvokeFunc(____destDb0_marshaled, ___zDestName1, ____sourceDb2_marshaled, ___zSourceName3);
	#endif

	// Marshaling of return value back from native representation
	sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* _returnValue_unmarshaled = (sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30*)il2cpp_codegen_object_new(sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30_il2cpp_TypeInfo_var);
	sqlite3_backup__ctor_m63CDC567578C17953C38ACA2E9FAAE0BFF778F7C(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	// Marshaling cleanup of parameter '___destDb0' native representation
	if (___safeHandle_reference_incremented_for____destDb0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___destDb0, NULL);
	}

	// Marshaling cleanup of parameter '___sourceDb2' native representation
	if (___safeHandle_reference_incremented_for____sourceDb2)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___sourceDb2, NULL);
	}

	return _returnValue_unmarshaled;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_backup_step(SQLitePCL.sqlite3_backup,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_backup_step_mE41EB93F1B4BC0C97F02BABFEF8DB4082EE11177 (sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* ___backup0, int32_t ___nPage1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_backup_step", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___backup0' to native representation
	void* ____backup0_marshaled = NULL;
	if (___backup0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("backup"), NULL);
	bool ___safeHandle_reference_incremented_for____backup0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___backup0, (&___safeHandle_reference_incremented_for____backup0), NULL);
	____backup0_marshaled = reinterpret_cast<void*>((___backup0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_backup_step)(____backup0_marshaled, ___nPage1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____backup0_marshaled, ___nPage1);
	#endif

	// Marshaling cleanup of parameter '___backup0' native representation
	if (___safeHandle_reference_incremented_for____backup0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___backup0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_backup_remaining(SQLitePCL.sqlite3_backup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_backup_remaining_m521BAAFA03D3AFD465F2B84F988C826EB83CB182 (sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* ___backup0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_backup_remaining", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___backup0' to native representation
	void* ____backup0_marshaled = NULL;
	if (___backup0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("backup"), NULL);
	bool ___safeHandle_reference_incremented_for____backup0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___backup0, (&___safeHandle_reference_incremented_for____backup0), NULL);
	____backup0_marshaled = reinterpret_cast<void*>((___backup0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_backup_remaining)(____backup0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____backup0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___backup0' native representation
	if (___safeHandle_reference_incremented_for____backup0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___backup0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_backup_pagecount(SQLitePCL.sqlite3_backup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_backup_pagecount_m49DC2501D7484F658E96C336ECA6B8ACD0B316C8 (sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* ___backup0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_backup_pagecount", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___backup0' to native representation
	void* ____backup0_marshaled = NULL;
	if (___backup0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("backup"), NULL);
	bool ___safeHandle_reference_incremented_for____backup0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___backup0, (&___safeHandle_reference_incremented_for____backup0), NULL);
	____backup0_marshaled = reinterpret_cast<void*>((___backup0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_backup_pagecount)(____backup0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____backup0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___backup0' native representation
	if (___safeHandle_reference_incremented_for____backup0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___backup0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_backup_finish(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_backup_finish_m72535B9546171BAE4B8C0108EC04FF0473AC34E7 (intptr_t ___backup0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_backup_finish", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_backup_finish)(___backup0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___backup0);
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_blob_open(SQLitePCL.sqlite3,System.Byte*,System.Byte*,System.Byte*,System.Int64,System.Int32,SQLitePCL.sqlite3_blob&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_blob_open_m44884FAC00BD9B5194AB5BBD4659FADE64B62929 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, uint8_t* ___sdb1, uint8_t* ___table2, uint8_t* ___col3, int64_t ___rowid4, int32_t ___flags5, sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057** ___blob6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef int32_t (CDECL *PInvokeFunc) (void*, uint8_t*, uint8_t*, uint8_t*, int64_t, int32_t, void**);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint8_t*) + sizeof(uint8_t*) + sizeof(uint8_t*) + sizeof(int64_t) + sizeof(int32_t) + sizeof(void**);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_blob_open", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Marshaling of parameter '___blob6' to native representation
	void* ____blob6_empty = NULL;
	void** ____blob6_marshaled = &____blob6_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_blob_open)(____db0_marshaled, ___sdb1, ___table2, ___col3, ___rowid4, ___flags5, ____blob6_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ___sdb1, ___table2, ___col3, ___rowid4, ___flags5, ____blob6_marshaled);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	// Marshaling of parameter '___blob6' back from native representation
	sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* _____blob6_marshaled_unmarshaled_dereferenced = (sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057*)il2cpp_codegen_object_new(sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057_il2cpp_TypeInfo_var);
	sqlite3_blob__ctor_mF7C7B725FB9FE141587C4BE5A547765610962159(_____blob6_marshaled_unmarshaled_dereferenced, NULL);
	intptr_t _____blob6_marshaled_unmarshaled_dereferenced_handle_temp;
	_____blob6_marshaled_unmarshaled_dereferenced_handle_temp = (intptr_t)*____blob6_marshaled;
	(_____blob6_marshaled_unmarshaled_dereferenced)->___handle_0 = _____blob6_marshaled_unmarshaled_dereferenced_handle_temp;
	*___blob6 = _____blob6_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)___blob6, (void*)____blob6_marshaled);

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_blob_write(SQLitePCL.sqlite3_blob,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_blob_write_mC171C68F3E57279691AF0A83050B641D218D8D92 (sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* ___blob0, uint8_t* ___b1, int32_t ___n2, int32_t ___offset3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, uint8_t*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint8_t*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_blob_write", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___blob0' to native representation
	void* ____blob0_marshaled = NULL;
	if (___blob0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("blob"), NULL);
	bool ___safeHandle_reference_incremented_for____blob0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___blob0, (&___safeHandle_reference_incremented_for____blob0), NULL);
	____blob0_marshaled = reinterpret_cast<void*>((___blob0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_blob_write)(____blob0_marshaled, ___b1, ___n2, ___offset3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____blob0_marshaled, ___b1, ___n2, ___offset3);
	#endif

	// Marshaling cleanup of parameter '___blob0' native representation
	if (___safeHandle_reference_incremented_for____blob0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___blob0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_blob_read(SQLitePCL.sqlite3_blob,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_blob_read_m5E5B16D8FC7C72378D4A8440C19B71E84A1DF1CB (sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* ___blob0, uint8_t* ___b1, int32_t ___n2, int32_t ___offset3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, uint8_t*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint8_t*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_blob_read", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___blob0' to native representation
	void* ____blob0_marshaled = NULL;
	if (___blob0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("blob"), NULL);
	bool ___safeHandle_reference_incremented_for____blob0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___blob0, (&___safeHandle_reference_incremented_for____blob0), NULL);
	____blob0_marshaled = reinterpret_cast<void*>((___blob0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_blob_read)(____blob0_marshaled, ___b1, ___n2, ___offset3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____blob0_marshaled, ___b1, ___n2, ___offset3);
	#endif

	// Marshaling cleanup of parameter '___blob0' native representation
	if (___safeHandle_reference_incremented_for____blob0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___blob0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_blob_bytes(SQLitePCL.sqlite3_blob)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_blob_bytes_m6455304E98F531E582689605F40917348405EAD6 (sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* ___blob0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_blob_bytes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___blob0' to native representation
	void* ____blob0_marshaled = NULL;
	if (___blob0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("blob"), NULL);
	bool ___safeHandle_reference_incremented_for____blob0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___blob0, (&___safeHandle_reference_incremented_for____blob0), NULL);
	____blob0_marshaled = reinterpret_cast<void*>((___blob0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_blob_bytes)(____blob0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____blob0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___blob0' native representation
	if (___safeHandle_reference_incremented_for____blob0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___blob0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_blob_reopen(SQLitePCL.sqlite3_blob,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_blob_reopen_mCBB7112E8B7ABCF02A97D659F3D5B6F509834D32 (sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* ___blob0, int64_t ___rowid1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_blob_reopen", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___blob0' to native representation
	void* ____blob0_marshaled = NULL;
	if (___blob0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("blob"), NULL);
	bool ___safeHandle_reference_incremented_for____blob0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___blob0, (&___safeHandle_reference_incremented_for____blob0), NULL);
	____blob0_marshaled = reinterpret_cast<void*>((___blob0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_blob_reopen)(____blob0_marshaled, ___rowid1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____blob0_marshaled, ___rowid1);
	#endif

	// Marshaling cleanup of parameter '___blob0' native representation
	if (___safeHandle_reference_incremented_for____blob0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___blob0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_blob_close(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_blob_close_m1C767C34C81975A41336E398D66CF1F1BD81B725 (intptr_t ___blob0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_blob_close", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_blob_close)(___blob0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___blob0);
	#endif

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_wal_autocheckpoint(SQLitePCL.sqlite3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_wal_autocheckpoint_m6911FC4305DD705161A0A79BCBD9892C8E396827 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___n1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_wal_autocheckpoint", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_wal_autocheckpoint)(____db0_marshaled, ___n1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ___n1);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_wal_checkpoint(SQLitePCL.sqlite3,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_wal_checkpoint_mDBD2A1DCEDE8E5E0DD3C1BC4458B601BE7B1F34B (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, uint8_t* ___dbName1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint8_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_wal_checkpoint", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_wal_checkpoint)(____db0_marshaled, ___dbName1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ___dbName1);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_wal_checkpoint_v2(SQLitePCL.sqlite3,System.Byte*,System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_wal_checkpoint_v2_mF7004D6FD0DCDE0B2B240FBC1E09D8FF504309CF (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, uint8_t* ___dbName1, int32_t ___eMode2, int32_t* ___logSize3, int32_t* ___framesCheckPointed4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, uint8_t*, int32_t, int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint8_t*) + sizeof(int32_t) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_wal_checkpoint_v2", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_wal_checkpoint_v2)(____db0_marshaled, ___dbName1, ___eMode2, ___logSize3, ___framesCheckPointed4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ___dbName1, ___eMode2, ___logSize3, ___framesCheckPointed4);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_set_authorizer(SQLitePCL.sqlite3,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_authorizer,SQLitePCL.hook_handle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_set_authorizer_m03D49E5DBF74171185FE32CC54F98733FC916D38 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696* ___cb1, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvUser2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, Il2CppMethodPointer, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_set_authorizer", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Marshaling of parameter '___cb1' to native representation
	Il2CppMethodPointer ____cb1_marshaled = NULL;
	____cb1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb1));

	// Marshaling of parameter '___pvUser2' to native representation
	void* ____pvUser2_marshaled = NULL;
	if (___pvUser2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("pvUser"), NULL);
	bool ___safeHandle_reference_incremented_for____pvUser2 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___pvUser2, (&___safeHandle_reference_incremented_for____pvUser2), NULL);
	____pvUser2_marshaled = reinterpret_cast<void*>((___pvUser2)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_set_authorizer)(____db0_marshaled, ____cb1_marshaled, ____pvUser2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ____cb1_marshaled, ____pvUser2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	// Marshaling cleanup of parameter '___pvUser2' native representation
	if (___safeHandle_reference_incremented_for____pvUser2)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___pvUser2, NULL);
	}

	return returnValue;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods::sqlite3_create_function_v2(SQLitePCL.sqlite3,System.Byte[],System.Int32,System.Int32,SQLitePCL.hook_handle,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_scalar_function,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_agg_function_step,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_agg_function_final,SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_destroy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_sqlite3_create_function_v2_m357F6C1B571254ED52BE30DDB244E631D6319004 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___strName1, int32_t ___nArgs2, int32_t ___nType3, hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* ___pvUser4, callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054* ___func5, callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED* ___fstep6, callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F* ___ffinal7, callback_destroy_t196CAA62B91CAB2FE7AFA98FA27B902DD949A351* ___fdestroy8, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, uint8_t*, int32_t, int32_t, void*, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_e_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("e_sqlite3"), "sqlite3_create_function_v2", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___db0' to native representation
	void* ____db0_marshaled = NULL;
	if (___db0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("db"), NULL);
	bool ___safeHandle_reference_incremented_for____db0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___db0, (&___safeHandle_reference_incremented_for____db0), NULL);
	____db0_marshaled = reinterpret_cast<void*>((___db0)->___handle_0);

	// Marshaling of parameter '___strName1' to native representation
	uint8_t* ____strName1_marshaled = NULL;
	if (___strName1 != NULL)
	{
		____strName1_marshaled = reinterpret_cast<uint8_t*>((___strName1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___pvUser4' to native representation
	void* ____pvUser4_marshaled = NULL;
	if (___pvUser4 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("pvUser"), NULL);
	bool ___safeHandle_reference_incremented_for____pvUser4 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___pvUser4, (&___safeHandle_reference_incremented_for____pvUser4), NULL);
	____pvUser4_marshaled = reinterpret_cast<void*>((___pvUser4)->___handle_0);

	// Marshaling of parameter '___func5' to native representation
	Il2CppMethodPointer ____func5_marshaled = NULL;
	____func5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func5));

	// Marshaling of parameter '___fstep6' to native representation
	Il2CppMethodPointer ____fstep6_marshaled = NULL;
	____fstep6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___fstep6));

	// Marshaling of parameter '___ffinal7' to native representation
	Il2CppMethodPointer ____ffinal7_marshaled = NULL;
	____ffinal7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ffinal7));

	// Marshaling of parameter '___fdestroy8' to native representation
	Il2CppMethodPointer ____fdestroy8_marshaled = NULL;
	____fdestroy8_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___fdestroy8));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_e_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_create_function_v2)(____db0_marshaled, ____strName1_marshaled, ___nArgs2, ___nType3, ____pvUser4_marshaled, ____func5_marshaled, ____fstep6_marshaled, ____ffinal7_marshaled, ____fdestroy8_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____db0_marshaled, ____strName1_marshaled, ___nArgs2, ___nType3, ____pvUser4_marshaled, ____func5_marshaled, ____fstep6_marshaled, ____ffinal7_marshaled, ____fdestroy8_marshaled);
	#endif

	// Marshaling cleanup of parameter '___db0' native representation
	if (___safeHandle_reference_incremented_for____db0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___db0, NULL);
	}

	// Marshaling cleanup of parameter '___pvUser4' native representation
	if (___safeHandle_reference_incremented_for____pvUser4)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___pvUser4, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void callback_log_Invoke_mCC53A07020C73947172FA70A1E193DEE478BBD73_Multicast(callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B* __this, intptr_t ___pUserData0, int32_t ___errorCode1, intptr_t ___pMessage2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B* currentDelegate = reinterpret_cast<callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___pUserData0, ___errorCode1, ___pMessage2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void callback_log_Invoke_mCC53A07020C73947172FA70A1E193DEE478BBD73_Open(callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B* __this, intptr_t ___pUserData0, int32_t ___errorCode1, intptr_t ___pMessage2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___pUserData0, ___errorCode1, ___pMessage2, method);
}
void callback_log_Invoke_mCC53A07020C73947172FA70A1E193DEE478BBD73_OpenStaticInvoker(callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B* __this, intptr_t ___pUserData0, int32_t ___errorCode1, intptr_t ___pMessage2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___pUserData0, ___errorCode1, ___pMessage2);
}
void callback_log_Invoke_mCC53A07020C73947172FA70A1E193DEE478BBD73_ClosedStaticInvoker(callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B* __this, intptr_t ___pUserData0, int32_t ___errorCode1, intptr_t ___pMessage2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___pUserData0, ___errorCode1, ___pMessage2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B (callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B* __this, intptr_t ___pUserData0, int32_t ___errorCode1, intptr_t ___pMessage2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___pUserData0, ___errorCode1, ___pMessage2);

}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_log::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_log__ctor_m1FB9275EE1F814C65D6BA2A64C164147C1DE7AFC (callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_log_Invoke_mCC53A07020C73947172FA70A1E193DEE478BBD73_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&callback_log_Invoke_mCC53A07020C73947172FA70A1E193DEE478BBD73_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_log_Invoke_mCC53A07020C73947172FA70A1E193DEE478BBD73_Open;
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
	__this->___extra_arg_5 = (intptr_t)&callback_log_Invoke_mCC53A07020C73947172FA70A1E193DEE478BBD73_Multicast;
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_log::Invoke(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_log_Invoke_mCC53A07020C73947172FA70A1E193DEE478BBD73 (callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B* __this, intptr_t ___pUserData0, int32_t ___errorCode1, intptr_t ___pMessage2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pUserData0, ___errorCode1, ___pMessage2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_log::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* callback_log_BeginInvoke_mD407B4C3C09A024DC1D43873095B3FB9EBAEA350 (callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B* __this, intptr_t ___pUserData0, int32_t ___errorCode1, intptr_t ___pMessage2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pUserData0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___errorCode1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pMessage2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_log::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_log_EndInvoke_mCCF0EE18DC76D0870997ED5FD50E83F1B20DA569 (callback_log_t8787B292D5B69DD3FF3FE62744DF346AC72E327B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void callback_scalar_function_Invoke_mC4D933FCC06483E42A0BDCEF97416AC6F763EBBA_Multicast(callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054* currentDelegate = reinterpret_cast<callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___context0, ___nArgs1, ___argsptr2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void callback_scalar_function_Invoke_mC4D933FCC06483E42A0BDCEF97416AC6F763EBBA_Open(callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___context0, ___nArgs1, ___argsptr2, method);
}
void callback_scalar_function_Invoke_mC4D933FCC06483E42A0BDCEF97416AC6F763EBBA_OpenStaticInvoker(callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___context0, ___nArgs1, ___argsptr2);
}
void callback_scalar_function_Invoke_mC4D933FCC06483E42A0BDCEF97416AC6F763EBBA_ClosedStaticInvoker(callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___context0, ___nArgs1, ___argsptr2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054 (callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___context0, ___nArgs1, ___argsptr2);

}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_scalar_function::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_scalar_function__ctor_mFAB24FB7BD04C8B6DA4F8D7D7F9A1B9AC12DB58F (callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_scalar_function_Invoke_mC4D933FCC06483E42A0BDCEF97416AC6F763EBBA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&callback_scalar_function_Invoke_mC4D933FCC06483E42A0BDCEF97416AC6F763EBBA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_scalar_function_Invoke_mC4D933FCC06483E42A0BDCEF97416AC6F763EBBA_Open;
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
	__this->___extra_arg_5 = (intptr_t)&callback_scalar_function_Invoke_mC4D933FCC06483E42A0BDCEF97416AC6F763EBBA_Multicast;
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_scalar_function::Invoke(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_scalar_function_Invoke_mC4D933FCC06483E42A0BDCEF97416AC6F763EBBA (callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___context0, ___nArgs1, ___argsptr2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_scalar_function::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* callback_scalar_function_BeginInvoke_m75AD8B58A4A57FD2016F9492C01D38B07E3734F3 (callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___nArgs1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___argsptr2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_scalar_function::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_scalar_function_EndInvoke_m811B261F0E1AFEE1DC2D2DCDDA69E852B87840E6 (callback_scalar_function_tBF6A62A55E8AF47428E5F47D597F0D28F245B054* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void callback_agg_function_step_Invoke_m7994E830BD7088EE1008725FEC7F1FF59A00EAF3_Multicast(callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED* currentDelegate = reinterpret_cast<callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___context0, ___nArgs1, ___argsptr2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void callback_agg_function_step_Invoke_m7994E830BD7088EE1008725FEC7F1FF59A00EAF3_Open(callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___context0, ___nArgs1, ___argsptr2, method);
}
void callback_agg_function_step_Invoke_m7994E830BD7088EE1008725FEC7F1FF59A00EAF3_OpenStaticInvoker(callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___context0, ___nArgs1, ___argsptr2);
}
void callback_agg_function_step_Invoke_m7994E830BD7088EE1008725FEC7F1FF59A00EAF3_ClosedStaticInvoker(callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___context0, ___nArgs1, ___argsptr2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED (callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___context0, ___nArgs1, ___argsptr2);

}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_agg_function_step::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_agg_function_step__ctor_mD9169C85C8988341AA108B7C2713D855B043BF78 (callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_agg_function_step_Invoke_m7994E830BD7088EE1008725FEC7F1FF59A00EAF3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&callback_agg_function_step_Invoke_m7994E830BD7088EE1008725FEC7F1FF59A00EAF3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_agg_function_step_Invoke_m7994E830BD7088EE1008725FEC7F1FF59A00EAF3_Open;
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
	__this->___extra_arg_5 = (intptr_t)&callback_agg_function_step_Invoke_m7994E830BD7088EE1008725FEC7F1FF59A00EAF3_Multicast;
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_agg_function_step::Invoke(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_agg_function_step_Invoke_m7994E830BD7088EE1008725FEC7F1FF59A00EAF3 (callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___context0, ___nArgs1, ___argsptr2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_agg_function_step::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* callback_agg_function_step_BeginInvoke_m13D11BDBA04BBDAC2DF2E36CF46F092473D29F5A (callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___nArgs1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___argsptr2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_agg_function_step::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_agg_function_step_EndInvoke_mF3F724C851786E8C007AFB6A1197D66B4803C703 (callback_agg_function_step_t6631228D4986D5DAD1D773B550882D13FED65CED* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void callback_agg_function_final_Invoke_m7F5815ED66834AF16E3A62679F05C5D73A5556EC_Multicast(callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F* __this, intptr_t ___context0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F* currentDelegate = reinterpret_cast<callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___context0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void callback_agg_function_final_Invoke_m7F5815ED66834AF16E3A62679F05C5D73A5556EC_Open(callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F* __this, intptr_t ___context0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___context0, method);
}
void callback_agg_function_final_Invoke_m7F5815ED66834AF16E3A62679F05C5D73A5556EC_OpenStaticInvoker(callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F* __this, intptr_t ___context0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___context0);
}
void callback_agg_function_final_Invoke_m7F5815ED66834AF16E3A62679F05C5D73A5556EC_ClosedStaticInvoker(callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F* __this, intptr_t ___context0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___context0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F (callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F* __this, intptr_t ___context0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___context0);

}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_agg_function_final::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_agg_function_final__ctor_m24AD2C75EEF8546805DE08FEA65A74EAF335B788 (callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&callback_agg_function_final_Invoke_m7F5815ED66834AF16E3A62679F05C5D73A5556EC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&callback_agg_function_final_Invoke_m7F5815ED66834AF16E3A62679F05C5D73A5556EC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_agg_function_final_Invoke_m7F5815ED66834AF16E3A62679F05C5D73A5556EC_Open;
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
	__this->___extra_arg_5 = (intptr_t)&callback_agg_function_final_Invoke_m7F5815ED66834AF16E3A62679F05C5D73A5556EC_Multicast;
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_agg_function_final::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_agg_function_final_Invoke_m7F5815ED66834AF16E3A62679F05C5D73A5556EC (callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F* __this, intptr_t ___context0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___context0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_agg_function_final::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* callback_agg_function_final_BeginInvoke_mA88324AA2D34EC351B58A86CFF07EEC97DE7A1CC (callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F* __this, intptr_t ___context0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_agg_function_final::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_agg_function_final_EndInvoke_m55642A0F9B19928ED9D3F75FAC1FE0F1790A5BC2 (callback_agg_function_final_tBB6A7A6C560305F199E1A66DA41FDBCE4965B43F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void callback_destroy_Invoke_mD611BA5D5BBE40FB606FC3AC697901E8E1BA4AAF_Multicast(callback_destroy_t196CAA62B91CAB2FE7AFA98FA27B902DD949A351* __this, intptr_t ___p0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		callback_destroy_t196CAA62B91CAB2FE7AFA98FA27B902DD949A351* currentDelegate = reinterpret_cast<callback_destroy_t196CAA62B91CAB2FE7AFA98FA27B902DD949A351*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___p0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void callback_destroy_Invoke_mD611BA5D5BBE40FB606FC3AC697901E8E1BA4AAF_Open(callback_destroy_t196CAA62B91CAB2FE7AFA98FA27B902DD949A351* __this, intptr_t ___p0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___p0, method);
}
void callback_destroy_Invoke_mD611BA5D5BBE40FB606FC3AC697901E8E1BA4AAF_OpenStaticInvoker(callback_destroy_t196CAA62B91CAB2FE7AFA98FA27B902DD949A351* __this, intptr_t ___p0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___p0);
}
void callback_destroy_Invoke_mD611BA5D5BBE40FB606FC3AC697901E8E1BA4AAF_ClosedStaticInvoker(callback_destroy_t196CAA62B91CAB2FE7AFA98FA27B902DD949A351* __this, intptr_t ___p0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___p0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_callback_destroy_t196CAA62B91CAB2FE7AFA98FA27B902DD949A351 (callback_destroy_t196CAA62B91CAB2FE7AFA98FA27B902DD949A351* __this, intptr_t ___p0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___p0);

}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_destroy::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_destroy__ctor_m1286A18C4EFEBB0293414CC02AB277F4D8D87EAF (callback_destroy_t196CAA62B91CAB2FE7AFA98FA27B902DD949A351* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&callback_destroy_Invoke_mD611BA5D5BBE40FB606FC3AC697901E8E1BA4AAF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&callback_destroy_Invoke_mD611BA5D5BBE40FB606FC3AC697901E8E1BA4AAF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_destroy_Invoke_mD611BA5D5BBE40FB606FC3AC697901E8E1BA4AAF_Open;
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
	__this->___extra_arg_5 = (intptr_t)&callback_destroy_Invoke_mD611BA5D5BBE40FB606FC3AC697901E8E1BA4AAF_Multicast;
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_destroy::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_destroy_Invoke_mD611BA5D5BBE40FB606FC3AC697901E8E1BA4AAF (callback_destroy_t196CAA62B91CAB2FE7AFA98FA27B902DD949A351* __this, intptr_t ___p0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___p0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_destroy::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* callback_destroy_BeginInvoke_m2B5A7329B40BB22FEFC212B016E71A5F7C622F72 (callback_destroy_t196CAA62B91CAB2FE7AFA98FA27B902DD949A351* __this, intptr_t ___p0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___p0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_destroy::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_destroy_EndInvoke_mE9ECAF11CAB26B6766448B389768DF8D84B70A03 (callback_destroy_t196CAA62B91CAB2FE7AFA98FA27B902DD949A351* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
int32_t callback_collation_Invoke_m5976D6716588157AC0D16E0987CE5F8EC173D5EA_Multicast(callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED* __this, intptr_t ___puser0, int32_t ___len11, intptr_t ___pv12, int32_t ___len23, intptr_t ___pv24, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED* currentDelegate = reinterpret_cast<callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___puser0, ___len11, ___pv12, ___len23, ___pv24, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t callback_collation_Invoke_m5976D6716588157AC0D16E0987CE5F8EC173D5EA_Open(callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED* __this, intptr_t ___puser0, int32_t ___len11, intptr_t ___pv12, int32_t ___len23, intptr_t ___pv24, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___puser0, ___len11, ___pv12, ___len23, ___pv24, method);
}
int32_t callback_collation_Invoke_m5976D6716588157AC0D16E0987CE5F8EC173D5EA_OpenStaticInvoker(callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED* __this, intptr_t ___puser0, int32_t ___len11, intptr_t ___pv12, int32_t ___len23, intptr_t ___pv24, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, intptr_t, int32_t, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___puser0, ___len11, ___pv12, ___len23, ___pv24);
}
int32_t callback_collation_Invoke_m5976D6716588157AC0D16E0987CE5F8EC173D5EA_ClosedStaticInvoker(callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED* __this, intptr_t ___puser0, int32_t ___len11, intptr_t ___pv12, int32_t ___len23, intptr_t ___pv24, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< int32_t, RuntimeObject*, intptr_t, int32_t, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___puser0, ___len11, ___pv12, ___len23, ___pv24);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED (callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED* __this, intptr_t ___puser0, int32_t ___len11, intptr_t ___pv12, int32_t ___len23, intptr_t ___pv24, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___puser0, ___len11, ___pv12, ___len23, ___pv24);

	return returnValue;
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_collation::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_collation__ctor_mCC4562D044D6941D6F721FA0EFD0EC5B1FE81492 (callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_collation_Invoke_m5976D6716588157AC0D16E0987CE5F8EC173D5EA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&callback_collation_Invoke_m5976D6716588157AC0D16E0987CE5F8EC173D5EA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_collation_Invoke_m5976D6716588157AC0D16E0987CE5F8EC173D5EA_Open;
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
	__this->___extra_arg_5 = (intptr_t)&callback_collation_Invoke_m5976D6716588157AC0D16E0987CE5F8EC173D5EA_Multicast;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_collation::Invoke(System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t callback_collation_Invoke_m5976D6716588157AC0D16E0987CE5F8EC173D5EA (callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED* __this, intptr_t ___puser0, int32_t ___len11, intptr_t ___pv12, int32_t ___len23, intptr_t ___pv24, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___puser0, ___len11, ___pv12, ___len23, ___pv24, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_collation::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* callback_collation_BeginInvoke_m793E7EE8B341CFBD37D9BB1A5E4409999192A7B7 (callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED* __this, intptr_t ___puser0, int32_t ___len11, intptr_t ___pv12, int32_t ___len23, intptr_t ___pv24, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback5, RuntimeObject* ___object6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___puser0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___len11);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pv12);
	__d_args[3] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___len23);
	__d_args[4] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pv24);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_collation::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t callback_collation_EndInvoke_m1C7E6CE729469EC07EB67AC8F0E8D40A853990DA (callback_collation_t09FDA630B6F3715072981DC6AA234B0CE61943ED* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void callback_update_Invoke_mE282153826547104535F334F329320703B15EEEA_Multicast(callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90* __this, intptr_t ___p0, int32_t ___typ1, intptr_t ___db2, intptr_t ___tbl3, int64_t ___rowid4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90* currentDelegate = reinterpret_cast<callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, int64_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___p0, ___typ1, ___db2, ___tbl3, ___rowid4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void callback_update_Invoke_mE282153826547104535F334F329320703B15EEEA_Open(callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90* __this, intptr_t ___p0, int32_t ___typ1, intptr_t ___db2, intptr_t ___tbl3, int64_t ___rowid4, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t, intptr_t, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___p0, ___typ1, ___db2, ___tbl3, ___rowid4, method);
}
void callback_update_Invoke_mE282153826547104535F334F329320703B15EEEA_OpenStaticInvoker(callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90* __this, intptr_t ___p0, int32_t ___typ1, intptr_t ___db2, intptr_t ___tbl3, int64_t ___rowid4, const RuntimeMethod* method)
{
	InvokerActionInvoker5< intptr_t, int32_t, intptr_t, intptr_t, int64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___p0, ___typ1, ___db2, ___tbl3, ___rowid4);
}
void callback_update_Invoke_mE282153826547104535F334F329320703B15EEEA_ClosedStaticInvoker(callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90* __this, intptr_t ___p0, int32_t ___typ1, intptr_t ___db2, intptr_t ___tbl3, int64_t ___rowid4, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, int64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___p0, ___typ1, ___db2, ___tbl3, ___rowid4);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90 (callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90* __this, intptr_t ___p0, int32_t ___typ1, intptr_t ___db2, intptr_t ___tbl3, int64_t ___rowid4, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t, intptr_t, int64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___p0, ___typ1, ___db2, ___tbl3, ___rowid4);

}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_update::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_update__ctor_m702943B46304E4C1D52A8CB9FF89CD94399396BB (callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_update_Invoke_mE282153826547104535F334F329320703B15EEEA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&callback_update_Invoke_mE282153826547104535F334F329320703B15EEEA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_update_Invoke_mE282153826547104535F334F329320703B15EEEA_Open;
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
	__this->___extra_arg_5 = (intptr_t)&callback_update_Invoke_mE282153826547104535F334F329320703B15EEEA_Multicast;
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_update::Invoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_update_Invoke_mE282153826547104535F334F329320703B15EEEA (callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90* __this, intptr_t ___p0, int32_t ___typ1, intptr_t ___db2, intptr_t ___tbl3, int64_t ___rowid4, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___p0, ___typ1, ___db2, ___tbl3, ___rowid4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_update::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.Int64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* callback_update_BeginInvoke_mC80EED44E1B2D358ED0690F8ACA602B86B5D26FB (callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90* __this, intptr_t ___p0, int32_t ___typ1, intptr_t ___db2, intptr_t ___tbl3, int64_t ___rowid4, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback5, RuntimeObject* ___object6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___p0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___typ1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___db2);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___tbl3);
	__d_args[4] = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &___rowid4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_update::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_update_EndInvoke_m018DD31D36A7D89D9D08D351B603C4FB31969358 (callback_update_t7CF3339C3A0702F0B772A5406AEA1BE3C8AD1C90* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
int32_t callback_commit_Invoke_m5E78D7E26617156BA10479235AB35BD4D9DD6603_Multicast(callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12* currentDelegate = reinterpret_cast<callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___puser0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t callback_commit_Invoke_m5E78D7E26617156BA10479235AB35BD4D9DD6603_Open(callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___puser0, method);
}
int32_t callback_commit_Invoke_m5E78D7E26617156BA10479235AB35BD4D9DD6603_OpenStaticInvoker(callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___puser0);
}
int32_t callback_commit_Invoke_m5E78D7E26617156BA10479235AB35BD4D9DD6603_ClosedStaticInvoker(callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___puser0);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12 (callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___puser0);

	return returnValue;
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_commit::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_commit__ctor_mDB4A28C9FFFB6737E5CED81EB1F87B10E8C09322 (callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&callback_commit_Invoke_m5E78D7E26617156BA10479235AB35BD4D9DD6603_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&callback_commit_Invoke_m5E78D7E26617156BA10479235AB35BD4D9DD6603_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_commit_Invoke_m5E78D7E26617156BA10479235AB35BD4D9DD6603_Open;
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
	__this->___extra_arg_5 = (intptr_t)&callback_commit_Invoke_m5E78D7E26617156BA10479235AB35BD4D9DD6603_Multicast;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_commit::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t callback_commit_Invoke_m5E78D7E26617156BA10479235AB35BD4D9DD6603 (callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12* __this, intptr_t ___puser0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___puser0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_commit::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* callback_commit_BeginInvoke_m74C8FE3974E6DAB691C34432BED94F5838EC1721 (callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12* __this, intptr_t ___puser0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___puser0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_commit::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t callback_commit_EndInvoke_m681D7B05160B75B31D6A404304E04283C13C82C4 (callback_commit_t203B983F579B2FF81A83F1759DDCDE929DBBEA12* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void callback_profile_Invoke_m9C127DDC4FABA990639F98E4BF73C46FAE5B3FF8_Multicast(callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4* __this, intptr_t ___puser0, intptr_t ___statement1, int64_t ___elapsed2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4* currentDelegate = reinterpret_cast<callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, int64_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___puser0, ___statement1, ___elapsed2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void callback_profile_Invoke_m9C127DDC4FABA990639F98E4BF73C46FAE5B3FF8_Open(callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4* __this, intptr_t ___puser0, intptr_t ___statement1, int64_t ___elapsed2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___puser0, ___statement1, ___elapsed2, method);
}
void callback_profile_Invoke_m9C127DDC4FABA990639F98E4BF73C46FAE5B3FF8_OpenStaticInvoker(callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4* __this, intptr_t ___puser0, intptr_t ___statement1, int64_t ___elapsed2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, intptr_t, int64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___puser0, ___statement1, ___elapsed2);
}
void callback_profile_Invoke_m9C127DDC4FABA990639F98E4BF73C46FAE5B3FF8_ClosedStaticInvoker(callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4* __this, intptr_t ___puser0, intptr_t ___statement1, int64_t ___elapsed2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, intptr_t, int64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___puser0, ___statement1, ___elapsed2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4 (callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4* __this, intptr_t ___puser0, intptr_t ___statement1, int64_t ___elapsed2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, int64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___puser0, ___statement1, ___elapsed2);

}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_profile::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_profile__ctor_mCA3D9C6C318620A09239BF7F76D45C97897AEFA5 (callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_profile_Invoke_m9C127DDC4FABA990639F98E4BF73C46FAE5B3FF8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&callback_profile_Invoke_m9C127DDC4FABA990639F98E4BF73C46FAE5B3FF8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_profile_Invoke_m9C127DDC4FABA990639F98E4BF73C46FAE5B3FF8_Open;
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
	__this->___extra_arg_5 = (intptr_t)&callback_profile_Invoke_m9C127DDC4FABA990639F98E4BF73C46FAE5B3FF8_Multicast;
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_profile::Invoke(System.IntPtr,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_profile_Invoke_m9C127DDC4FABA990639F98E4BF73C46FAE5B3FF8 (callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4* __this, intptr_t ___puser0, intptr_t ___statement1, int64_t ___elapsed2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___puser0, ___statement1, ___elapsed2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_profile::BeginInvoke(System.IntPtr,System.IntPtr,System.Int64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* callback_profile_BeginInvoke_m50F8D140747BBD915194268DD02011E535065D55 (callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4* __this, intptr_t ___puser0, intptr_t ___statement1, int64_t ___elapsed2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___puser0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___statement1);
	__d_args[2] = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &___elapsed2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_profile::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_profile_EndInvoke_m46C00518363DE34792FA0024A20F71CA2B83D6BD (callback_profile_tF975A629CD8D6A2339D430EA65A3661AEFE2F9F4* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
int32_t callback_progress_handler_Invoke_m93EBED9F8E05CA1B3373EA2639185F4B51A5B317_Multicast(callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2* currentDelegate = reinterpret_cast<callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___puser0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t callback_progress_handler_Invoke_m93EBED9F8E05CA1B3373EA2639185F4B51A5B317_Open(callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___puser0, method);
}
int32_t callback_progress_handler_Invoke_m93EBED9F8E05CA1B3373EA2639185F4B51A5B317_OpenStaticInvoker(callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___puser0);
}
int32_t callback_progress_handler_Invoke_m93EBED9F8E05CA1B3373EA2639185F4B51A5B317_ClosedStaticInvoker(callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___puser0);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2 (callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___puser0);

	return returnValue;
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_progress_handler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_progress_handler__ctor_mAAED7B981A29A66D7B99E2149A38F7EAC3AD7753 (callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&callback_progress_handler_Invoke_m93EBED9F8E05CA1B3373EA2639185F4B51A5B317_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&callback_progress_handler_Invoke_m93EBED9F8E05CA1B3373EA2639185F4B51A5B317_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_progress_handler_Invoke_m93EBED9F8E05CA1B3373EA2639185F4B51A5B317_Open;
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
	__this->___extra_arg_5 = (intptr_t)&callback_progress_handler_Invoke_m93EBED9F8E05CA1B3373EA2639185F4B51A5B317_Multicast;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_progress_handler::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t callback_progress_handler_Invoke_m93EBED9F8E05CA1B3373EA2639185F4B51A5B317 (callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2* __this, intptr_t ___puser0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___puser0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_progress_handler::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* callback_progress_handler_BeginInvoke_m753AA0AEC0F4971625A2EFD1FAE3FC5E2540FF54 (callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2* __this, intptr_t ___puser0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___puser0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_progress_handler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t callback_progress_handler_EndInvoke_mFFEBCF02F436C816657771A961710F818ADEB34A (callback_progress_handler_tD1711E43931A200E3A0B623C0157337603CFDEE2* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t callback_authorizer_Invoke_m21F3CBD72EA36244A244FEB6475B94549C47B021_Multicast(callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696* __this, intptr_t ___puser0, int32_t ___action_code1, intptr_t ___param02, intptr_t ___param13, intptr_t ___dbName4, intptr_t ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696* currentDelegate = reinterpret_cast<callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___puser0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t callback_authorizer_Invoke_m21F3CBD72EA36244A244FEB6475B94549C47B021_Open(callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696* __this, intptr_t ___puser0, int32_t ___action_code1, intptr_t ___param02, intptr_t ___param13, intptr_t ___dbName4, intptr_t ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___puser0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5, method);
}
int32_t callback_authorizer_Invoke_m21F3CBD72EA36244A244FEB6475B94549C47B021_OpenStaticInvoker(callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696* __this, intptr_t ___puser0, int32_t ___action_code1, intptr_t ___param02, intptr_t ___param13, intptr_t ___dbName4, intptr_t ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< int32_t, intptr_t, int32_t, intptr_t, intptr_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___puser0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5);
}
int32_t callback_authorizer_Invoke_m21F3CBD72EA36244A244FEB6475B94549C47B021_ClosedStaticInvoker(callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696* __this, intptr_t ___puser0, int32_t ___action_code1, intptr_t ___param02, intptr_t ___param13, intptr_t ___dbName4, intptr_t ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	return InvokerFuncInvoker7< int32_t, RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___puser0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696 (callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696* __this, intptr_t ___puser0, int32_t ___action_code1, intptr_t ___param02, intptr_t ___param13, intptr_t ___dbName4, intptr_t ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t, intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___puser0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5);

	return returnValue;
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_authorizer::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_authorizer__ctor_mBE07180CDB573196133F892C032B9B366FFD15EA (callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 6;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_authorizer_Invoke_m21F3CBD72EA36244A244FEB6475B94549C47B021_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&callback_authorizer_Invoke_m21F3CBD72EA36244A244FEB6475B94549C47B021_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_authorizer_Invoke_m21F3CBD72EA36244A244FEB6475B94549C47B021_Open;
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
	__this->___extra_arg_5 = (intptr_t)&callback_authorizer_Invoke_m21F3CBD72EA36244A244FEB6475B94549C47B021_Multicast;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_authorizer::Invoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t callback_authorizer_Invoke_m21F3CBD72EA36244A244FEB6475B94549C47B021 (callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696* __this, intptr_t ___puser0, int32_t ___action_code1, intptr_t ___param02, intptr_t ___param13, intptr_t ___dbName4, intptr_t ___inner_most_trigger_or_view5, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___puser0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_authorizer::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* callback_authorizer_BeginInvoke_m56066294A8EEFD349E47C7DB6BCC506595AC3021 (callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696* __this, intptr_t ___puser0, int32_t ___action_code1, intptr_t ___param02, intptr_t ___param13, intptr_t ___dbName4, intptr_t ___inner_most_trigger_or_view5, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback6, RuntimeObject* ___object7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___puser0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___action_code1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___param02);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___param13);
	__d_args[4] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___dbName4);
	__d_args[5] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___inner_most_trigger_or_view5);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_authorizer::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t callback_authorizer_EndInvoke_m21A8A565ABD67444540FB53C8E89FE8DEED780DC (callback_authorizer_tE18988B4BAECAF786D1F2ED56B9AEC01944D5696* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void callback_trace_Invoke_m857676219023A7B8DA01441728461AE6DF317199_Multicast(callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190* __this, intptr_t ___puser0, intptr_t ___statement1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190* currentDelegate = reinterpret_cast<callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___puser0, ___statement1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void callback_trace_Invoke_m857676219023A7B8DA01441728461AE6DF317199_Open(callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190* __this, intptr_t ___puser0, intptr_t ___statement1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___puser0, ___statement1, method);
}
void callback_trace_Invoke_m857676219023A7B8DA01441728461AE6DF317199_OpenStaticInvoker(callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190* __this, intptr_t ___puser0, intptr_t ___statement1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___puser0, ___statement1);
}
void callback_trace_Invoke_m857676219023A7B8DA01441728461AE6DF317199_ClosedStaticInvoker(callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190* __this, intptr_t ___puser0, intptr_t ___statement1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___puser0, ___statement1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190 (callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190* __this, intptr_t ___puser0, intptr_t ___statement1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___puser0, ___statement1);

}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_trace::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_trace__ctor_mB7045C1E866EF82F727938567620E2359EA834B5 (callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&callback_trace_Invoke_m857676219023A7B8DA01441728461AE6DF317199_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&callback_trace_Invoke_m857676219023A7B8DA01441728461AE6DF317199_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_trace_Invoke_m857676219023A7B8DA01441728461AE6DF317199_Open;
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
	__this->___extra_arg_5 = (intptr_t)&callback_trace_Invoke_m857676219023A7B8DA01441728461AE6DF317199_Multicast;
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_trace::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_trace_Invoke_m857676219023A7B8DA01441728461AE6DF317199 (callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190* __this, intptr_t ___puser0, intptr_t ___statement1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___puser0, ___statement1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_trace::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* callback_trace_BeginInvoke_m4D9A087716E2CAD6FE013BCFF481A0F8A0A1023E (callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190* __this, intptr_t ___puser0, intptr_t ___statement1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___puser0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___statement1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_trace::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_trace_EndInvoke_m413A152DD4AF1347321AC5275E2CDB20B48A64CA (callback_trace_t8BCD9E021AF886FC5CC9DCA10205D2888C793190* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void callback_rollback_Invoke_mB29E3CF0F5BF0B91FF71367FD25D1CA5D227735F_Multicast(callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7* currentDelegate = reinterpret_cast<callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___puser0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void callback_rollback_Invoke_mB29E3CF0F5BF0B91FF71367FD25D1CA5D227735F_Open(callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___puser0, method);
}
void callback_rollback_Invoke_mB29E3CF0F5BF0B91FF71367FD25D1CA5D227735F_OpenStaticInvoker(callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___puser0);
}
void callback_rollback_Invoke_mB29E3CF0F5BF0B91FF71367FD25D1CA5D227735F_ClosedStaticInvoker(callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___puser0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7 (callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___puser0);

}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_rollback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_rollback__ctor_mAAA9D0128F246165CD4C717D630F69CFAE5DC2B2 (callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&callback_rollback_Invoke_mB29E3CF0F5BF0B91FF71367FD25D1CA5D227735F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&callback_rollback_Invoke_mB29E3CF0F5BF0B91FF71367FD25D1CA5D227735F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_rollback_Invoke_mB29E3CF0F5BF0B91FF71367FD25D1CA5D227735F_Open;
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
	__this->___extra_arg_5 = (intptr_t)&callback_rollback_Invoke_mB29E3CF0F5BF0B91FF71367FD25D1CA5D227735F_Multicast;
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_rollback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_rollback_Invoke_mB29E3CF0F5BF0B91FF71367FD25D1CA5D227735F (callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7* __this, intptr_t ___puser0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___puser0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_rollback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* callback_rollback_BeginInvoke_mD1346ABEE81F24D0EA42A9CA8AE8E1291B99B582 (callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7* __this, intptr_t ___puser0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___puser0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_rollback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_rollback_EndInvoke_mD8C53191874880D75C9435644E251BC3BCAC5AD0 (callback_rollback_t72B37645B1E2DC395C0573FEE41AFF7469CED3E7* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
int32_t callback_exec_Invoke_m5E8F650FE7E2A5228095D9831529F736F8F12C8F_Multicast(callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D* __this, intptr_t ___db0, int32_t ___n1, intptr_t ___values2, intptr_t ___names3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D* currentDelegate = reinterpret_cast<callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___db0, ___n1, ___values2, ___names3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t callback_exec_Invoke_m5E8F650FE7E2A5228095D9831529F736F8F12C8F_Open(callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D* __this, intptr_t ___db0, int32_t ___n1, intptr_t ___values2, intptr_t ___names3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___db0, ___n1, ___values2, ___names3, method);
}
int32_t callback_exec_Invoke_m5E8F650FE7E2A5228095D9831529F736F8F12C8F_OpenStaticInvoker(callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D* __this, intptr_t ___db0, int32_t ___n1, intptr_t ___values2, intptr_t ___names3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, intptr_t, int32_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___db0, ___n1, ___values2, ___names3);
}
int32_t callback_exec_Invoke_m5E8F650FE7E2A5228095D9831529F736F8F12C8F_ClosedStaticInvoker(callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D* __this, intptr_t ___db0, int32_t ___n1, intptr_t ___values2, intptr_t ___names3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___db0, ___n1, ___values2, ___names3);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D (callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D* __this, intptr_t ___db0, int32_t ___n1, intptr_t ___values2, intptr_t ___names3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0, ___n1, ___values2, ___names3);

	return returnValue;
}
// System.Void SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_exec::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void callback_exec__ctor_mE3FE6BAA7DB36577FC047933558235EEE1C7B040 (callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_exec_Invoke_m5E8F650FE7E2A5228095D9831529F736F8F12C8F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&callback_exec_Invoke_m5E8F650FE7E2A5228095D9831529F736F8F12C8F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&callback_exec_Invoke_m5E8F650FE7E2A5228095D9831529F736F8F12C8F_Open;
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
	__this->___extra_arg_5 = (intptr_t)&callback_exec_Invoke_m5E8F650FE7E2A5228095D9831529F736F8F12C8F_Multicast;
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_exec::Invoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t callback_exec_Invoke_m5E8F650FE7E2A5228095D9831529F736F8F12C8F (callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D* __this, intptr_t ___db0, int32_t ___n1, intptr_t ___values2, intptr_t ___names3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___db0, ___n1, ___values2, ___names3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_exec::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* callback_exec_BeginInvoke_m480A0DE46C69F4DD727D9B6D059A0893D2AE2B63 (callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D* __this, intptr_t ___db0, int32_t ___n1, intptr_t ___values2, intptr_t ___names3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___db0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___n1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___values2);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___names3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Int32 SQLitePCL.SQLite3Provider_e_sqlite3/NativeMethods/callback_exec::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t callback_exec_EndInvoke_m8B2FE6D24E99AA2B2798F196ECF4545C8EA9F79A (callback_exec_tA4B00F28CA7B7800454DE74E5D9BCF8FAECDFD5D* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SQLiteDeleteDelegate_Invoke_m05864E249C3D97BD1CE9D33569AC2607AF36697A_inline (SQLiteDeleteDelegate_t73C62C6E66D9D335B31C419EC44EC3D7D8378826* __this, intptr_t ___pVfs0, uint8_t* ___zName1, int32_t ___syncDir2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint8_t*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pVfs0, ___zName1, ___syncDir2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_gshared_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ReadOnlySpan_1_Slice_m17D448297CDE6CAE9A5755BF9B7190F3DE66F6FE_gshared_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_2;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___length1;
		int32_t L_3 = (int32_t)__this->____length_2;
		int32_t L_4 = ___start0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_001a;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m74D94317452463079D807CDF5D84958A888D42A5((int32_t)1, NULL);
	}

IL_001a:
	{
		intptr_t L_5 = (intptr_t)__this->____byteOffset_1;
		int32_t L_6 = ___start0;
		intptr_t L_7;
		L_7 = ((  intptr_t (*) (intptr_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)))(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		V_0 = L_7;
		Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230* L_8 = (Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230*)__this->____pinnable_0;
		intptr_t L_9 = V_0;
		int32_t L_10 = ___length1;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_11;
		memset((&L_11), 0, sizeof(L_11));
		ReadOnlySpan_1__ctor_mE4A4D7CDFE83FD0D3386735017109D086F243825_inline((&L_11), L_8, L_9, L_10, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mECE334B94CE99314781C0D7DFD702221C4ABF7A5_gshared_inline (Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_gshared_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 4)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mC58F29A303530BA42973934E30FFA8DCDE5D9B07(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___length1;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m74D94317452463079D807CDF5D84958A888D42A5((int32_t)1, NULL);
	}

IL_0020:
	{
		int32_t L_4 = ___length1;
		__this->____length_2 = L_4;
		__this->____pinnable_0 = (Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinnable_0), (void*)(Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230*)NULL);
		void* L_5 = ___pointer0;
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_6), L_5, /*hidden argument*/NULL);
		__this->____byteOffset_1 = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mE4A4D7CDFE83FD0D3386735017109D086F243825_gshared_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230* ___pinnable0, intptr_t ___byteOffset1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___length2;
		__this->____length_2 = L_0;
		Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230* L_1 = ___pinnable0;
		__this->____pinnable_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinnable_0), (void*)L_1);
		intptr_t L_2 = ___byteOffset1;
		__this->____byteOffset_1 = L_2;
		return;
	}
}
