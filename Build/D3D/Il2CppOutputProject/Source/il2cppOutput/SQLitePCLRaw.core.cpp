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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct GenericVirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InterfaceFuncInvoker9
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
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
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4)
	{
		void* params[4] = { p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3*, T4*, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4, T5 p5)
	{
		void* params[5] = { p1, &p2, p3, p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2*, T3, T4, T5, T6>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		void* params[6] = { p1, p2, &p3, &p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2*, T3, T4*, T5*, T6>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4, T5* p5, T6 p6)
	{
		void* params[6] = { p1, p2, &p3, p4, p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
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
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2, T3*, T4*, T5*, T6*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		R ret;
		void* params[6] = { p1, &p2, p3, p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2*, T3, T4, T5, T6, T7>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		R ret;
		void* params[7] = { p1, p2, &p3, &p4, &p5, &p6, &p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2*, T3, T4*, T5*, T6*, T7*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		R ret;
		void* params[7] = { p1, p2, &p3, p4, p5, p6, p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Byte[],System.IDisposable>
struct ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522;
// System.Collections.Concurrent.ConcurrentDictionary`2<SQLitePCL.FuncName,System.IDisposable>
struct ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.Object>
struct ConcurrentDictionary_2_t211FFBACF3ECB80F94746F5D14A5187C12AC7E96;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,SQLitePCL.sqlite3_stmt>
struct ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.EqualityComparer`1<System.Byte[]>
struct EqualityComparer_1_tE29394521901AC9A533E45B9990C0246B75F11E0;
// System.Collections.Generic.EqualityComparer`1<SQLitePCL.FuncName>
struct EqualityComparer_1_t622E93DC712395AAC84C30749F11878E251A358F;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
// System.Func`4<System.IntPtr,System.IntPtr,System.Int32,System.Boolean>
struct Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083;
// System.Collections.Generic.ICollection`1<System.IDisposable>
struct ICollection_1_t3F13F61A78BE3BD019937B11A562337BB8F30736;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
// System.Collections.Generic.IEqualityComparer`1<System.Byte[]>
struct IEqualityComparer_1_tED581F2C423FD1B93E069AFE7AA4483EF32AF8DB;
// System.Collections.Generic.IEqualityComparer`1<SQLitePCL.FuncName>
struct IEqualityComparer_1_t3991A111A74746C3ABFB18C32691649F882EF67F;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t0C62219A7981BC3254B9E9404B17F934FE7D7908;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Pinnable`1<System.Byte>
struct Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Byte[],System.IDisposable>
struct Tables_t35D24A3F197F5DF6339E865510D977E346348C2E;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<SQLitePCL.FuncName,System.IDisposable>
struct Tables_t8C1D30AC376005522595773E928AB9B1BC8510B1;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.IntPtr,SQLitePCL.sqlite3_stmt>
struct Tables_tF8B692A39CCD1172C63C26932872799C325C1612;
// System.Collections.Generic.KeyValuePair`2<System.Byte[],System.IDisposable>[]
struct KeyValuePair_2U5BU5D_tA4E5920EB77328443FF447F3D9752258408E93EB;
// System.Collections.Generic.KeyValuePair`2<SQLitePCL.FuncName,System.IDisposable>[]
struct KeyValuePair_2U5BU5D_t34EC4B9FDB0AB82E0FBD7603757C05475234B170;
// System.Collections.Generic.KeyValuePair`2<System.IntPtr,SQLitePCL.sqlite3_stmt>[]
struct KeyValuePair_2U5BU5D_t70BA81F7DD7CDE54D27420EDD10D4DE3E86BBDA1;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// SQLitePCL.sqlite3_value[]
struct sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// SQLitePCL.CompareBuf
struct CompareBuf_t27F605DCD52963E50AAF359FF0792B5EF7FC04EA;
// SQLitePCL.CompareFuncName
struct CompareFuncName_tDD5FD56A7AAA8A632A4B49F594E21250BFB40795;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tA4674B43E8DDF11FB95382E2DF287778F940BFBA;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// SQLitePCL.EntryPointAttribute
struct EntryPointAttribute_t153F60F730CBAB2CE127F07F09554695F9B9D075;
// System.Exception
struct Exception_t;
// SQLitePCL.FuncName
struct FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// SQLitePCL.ISQLite3Provider
struct ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7;
// System.Runtime.CompilerServices.IsByRefLikeAttribute
struct IsByRefLikeAttribute_tE3DF4234BFCF4858A0D7C555BB5DC3A332D72370;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tB8CFB53741972E7671A35C8614A6613F318DBB0A;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// SQLitePCL.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t17BE665B3D7CD95379096445F10A2E7124970063;
// SQLitePCL.PreserveAttribute
struct PreserveAttribute_t684A021602CCD4E643B8148B5315F6EDDCCD0D12;
// SQLitePCL.SafeGCHandle
struct SafeGCHandle_tE8D8C107E75BFC0FAC19C271622895B407785D3E;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
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
// SQLitePCL.sqlite3_value
struct sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD;
// SQLitePCL.strdelegate_authorizer
struct strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29;
// SQLitePCL.strdelegate_collation
struct strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E;
// SQLitePCL.strdelegate_exec
struct strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583;
// SQLitePCL.strdelegate_log
struct strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1;
// SQLitePCL.strdelegate_profile
struct strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C;
// SQLitePCL.strdelegate_trace
struct strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7;
// SQLitePCL.strdelegate_update
struct strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886;
// SQLitePCL.trace_hook_info
struct trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4;
// SQLitePCL.update_hook_info
struct update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968;
// SQLitePCL.function_hook_info/agg_sqlite3_context
struct agg_sqlite3_context_t7AF70002EDC01CAA770CE2E2C7DE817FEBCEBE07;
// SQLitePCL.function_hook_info/scalar_sqlite3_context
struct scalar_sqlite3_context_t520AE3E6198561DEF6B32657E820E9B8FBDE0509;
// SQLitePCL.raw/<>c__DisplayClass226_0
struct U3CU3Ec__DisplayClass226_0_t4A5A9270B5ABBDD4FE82B7325920FCAD7A653B69;
// SQLitePCL.raw/<>c__DisplayClass232_0
struct U3CU3Ec__DisplayClass232_0_t838D8309C6E5622A939C813FB0CE2B1C640B62EF;
// SQLitePCL.raw/<>c__DisplayClass234_0
struct U3CU3Ec__DisplayClass234_0_t747F31218868C8520EF94BBFFC80D59BA3312B30;
// SQLitePCL.raw/<>c__DisplayClass237_0
struct U3CU3Ec__DisplayClass237_0_t2A0DCC483EE166D297FE81DFE52453F10AE5610B;
// SQLitePCL.raw/<>c__DisplayClass238_0
struct U3CU3Ec__DisplayClass238_0_t28AFD70323281419F99ABE6BC2FB9B400677BFEB;
// SQLitePCL.raw/<>c__DisplayClass287_0
struct U3CU3Ec__DisplayClass287_0_tE8EC7F43BC9B3DA9B57BC1007C2CC730F64AE9B2;
// SQLitePCL.raw/<>c__DisplayClass376_0
struct U3CU3Ec__DisplayClass376_0_t9B54378AED76759BA7EB8974E76F27BA23A51221;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompareBuf_t27F605DCD52963E50AAF359FF0792B5EF7FC04EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompareFuncName_tDD5FD56A7AAA8A632A4B49F594E21250BFB40795_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tB6F68D35F9622A77D895A483A02F4DC2907BBAEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tAA6EEADDF0E7FE9E72FAC727374287C9627ADF3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_1_tED581F2C423FD1B93E069AFE7AA4483EF32AF8DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass226_0_t4A5A9270B5ABBDD4FE82B7325920FCAD7A653B69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass232_0_t838D8309C6E5622A939C813FB0CE2B1C640B62EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass234_0_t747F31218868C8520EF94BBFFC80D59BA3312B30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass237_0_t2A0DCC483EE166D297FE81DFE52453F10AE5610B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass238_0_t28AFD70323281419F99ABE6BC2FB9B400677BFEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass287_0_tE8EC7F43BC9B3DA9B57BC1007C2CC730F64AE9B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass376_0_t9B54378AED76759BA7EB8974E76F27BA23A51221_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* agg_sqlite3_context_t7AF70002EDC01CAA770CE2E2C7DE817FEBCEBE07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* scalar_sqlite3_context_t520AE3E6198561DEF6B32657E820E9B8FBDE0509_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5F8F7F20A301184F38050D40710A390698DAEC1D;
IL2CPP_EXTERN_C String_t* _stringLiteral929AB203C6C048DBA2C6EA10E47D89A2FDE3F41A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryRemove_m1782697D740431D81873A6F2B420EBBDD4FED32D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryRemove_m8220F91E42BAB284E34184616737AAB2A4C9FEF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryRemove_m8C588451D72CA78D8618557F8A75D35324158B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2__ctor_m738B333B82DBBF304A15728C98883F5163204374_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2__ctor_mC0BBBB7D4FBDEA79D4636FBDB872E0AC54E2C776_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2__ctor_mD8C0B49C9BC53C925E6FAB2B37BADF318BAA208B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_get_Item_mE58842628CBB5BB71F07874570EC30E7FC721445_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_get_Values_m2C4385FFCDA16FF0FB436BE7E6127E2F473040FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_get_Values_mF2008A5617C18F3F234996E8F3070D5C9F7ABC10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_set_Item_m0A8DC29085CC370BCE112BE5175D0766C86B5121_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_set_Item_m0B68193309F23091AEE40F02FBB000FAFB452DF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_set_Item_mB18463C3EF5A1B49665FDDC7A7418F69CA3F69F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_m98FB31E1349FDCF9F0A3BD1891F322A1AC6CFBC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_mF420C788DC290244A73738F4BC6F567E4B8B065D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Item_mD58E12F152DAF67682BD56218B9EC5A0CC3CC1A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_op_Implicit_m0E04D2F291C8C5075A086E9A53AE241DEA3E9E38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass226_0_U3Csqlite3_config_logU3Eb__0_m26F32F9E2374FC8B0797F483716049E0BC8A915D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass232_0_U3Csqlite3_traceU3Eb__0_mE4F8F6801710A554C17482F07EC82C78431C405F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass234_0_U3Csqlite3_profileU3Eb__0_m8DF2072D68DEB046137A16CA78707BDB673F2BD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass237_0_U3Csqlite3_update_hookU3Eb__0_m6DE23FBE7CD85295CA402EFA6CBFED72F5D02FC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass238_0_U3Csqlite3_create_collationU3Eb__0_m8377610D91204FBAF180DFAC4F9B10241ADACB41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass287_0_U3Csqlite3_execU3Eb__0_m76107EDF69E2254611FBDCF9E0C22E25FA56FD6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass376_0_U3Csqlite3_set_authorizerU3Eb__0_mF842E6434D82B58D2D228ACC239DD0872ED8293C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* sqlite3_find_stmt_m6DB56FD791338E8E5524252CE51E90D7D6624FE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* utf8z_FromSpan_m4CEB98E168F53A64EBBB53697BE8BA9B7266F95B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IntPtr_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCBD14DE722393F9659B3BDB279FE71652AA529B2 
{
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Byte[],System.IDisposable>
struct ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t35D24A3F197F5DF6339E865510D977E346348C2E* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_tA4E5920EB77328443FF447F3D9752258408E93EB* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<SQLitePCL.FuncName,System.IDisposable>
struct ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t8C1D30AC376005522595773E928AB9B1BC8510B1* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_t34EC4B9FDB0AB82E0FBD7603757C05475234B170* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,SQLitePCL.sqlite3_stmt>
struct ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tF8B692A39CCD1172C63C26932872799C325C1612* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_t70BA81F7DD7CDE54D27420EDD10D4DE3E86BBDA1* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Generic.EqualityComparer`1<System.Byte[]>
struct EqualityComparer_1_tE29394521901AC9A533E45B9990C0246B75F11E0  : public RuntimeObject
{
};

struct EqualityComparer_1_tE29394521901AC9A533E45B9990C0246B75F11E0_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tE29394521901AC9A533E45B9990C0246B75F11E0* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<SQLitePCL.FuncName>
struct EqualityComparer_1_t622E93DC712395AAC84C30749F11878E251A358F  : public RuntimeObject
{
};

struct EqualityComparer_1_t622E93DC712395AAC84C30749F11878E251A358F_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t622E93DC712395AAC84C30749F11878E251A358F* ___defaultComparer_0;
};

// System.Pinnable`1<System.Byte>
struct Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230  : public RuntimeObject
{
	// T System.Pinnable`1::Data
	uint8_t ___Data_0;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
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

// SQLitePCL.FuncName
struct FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A  : public RuntimeObject
{
	// System.Byte[] SQLitePCL.FuncName::<name>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CnameU3Ek__BackingField_0;
	// System.Int32 SQLitePCL.FuncName::<n>k__BackingField
	int32_t ___U3CnU3Ek__BackingField_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// SQLitePCL.raw
struct raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C  : public RuntimeObject
{
};

struct raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields
{
	// SQLitePCL.ISQLite3Provider SQLitePCL.raw::_imp
	RuntimeObject* ____imp_0;
	// System.Boolean SQLitePCL.raw::_frozen
	bool ____frozen_1;
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

// SQLitePCL.util
struct util_tBD9E5F8A2316101B2B01B75A0B74AC4328007C08  : public RuntimeObject
{
};

// SQLitePCL.raw/<>c__DisplayClass226_0
struct U3CU3Ec__DisplayClass226_0_t4A5A9270B5ABBDD4FE82B7325920FCAD7A653B69  : public RuntimeObject
{
	// SQLitePCL.strdelegate_log SQLitePCL.raw/<>c__DisplayClass226_0::f
	strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1* ___f_0;
};

// SQLitePCL.raw/<>c__DisplayClass232_0
struct U3CU3Ec__DisplayClass232_0_t838D8309C6E5622A939C813FB0CE2B1C640B62EF  : public RuntimeObject
{
	// SQLitePCL.strdelegate_trace SQLitePCL.raw/<>c__DisplayClass232_0::f
	strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7* ___f_0;
	// System.Object SQLitePCL.raw/<>c__DisplayClass232_0::v
	RuntimeObject* ___v_1;
};

// SQLitePCL.raw/<>c__DisplayClass234_0
struct U3CU3Ec__DisplayClass234_0_t747F31218868C8520EF94BBFFC80D59BA3312B30  : public RuntimeObject
{
	// SQLitePCL.strdelegate_profile SQLitePCL.raw/<>c__DisplayClass234_0::f
	strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C* ___f_0;
	// System.Object SQLitePCL.raw/<>c__DisplayClass234_0::v
	RuntimeObject* ___v_1;
};

// SQLitePCL.raw/<>c__DisplayClass237_0
struct U3CU3Ec__DisplayClass237_0_t2A0DCC483EE166D297FE81DFE52453F10AE5610B  : public RuntimeObject
{
	// SQLitePCL.strdelegate_update SQLitePCL.raw/<>c__DisplayClass237_0::f
	strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886* ___f_0;
};

// SQLitePCL.raw/<>c__DisplayClass238_0
struct U3CU3Ec__DisplayClass238_0_t28AFD70323281419F99ABE6BC2FB9B400677BFEB  : public RuntimeObject
{
	// SQLitePCL.strdelegate_collation SQLitePCL.raw/<>c__DisplayClass238_0::f
	strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E* ___f_0;
};

// SQLitePCL.raw/<>c__DisplayClass287_0
struct U3CU3Ec__DisplayClass287_0_tE8EC7F43BC9B3DA9B57BC1007C2CC730F64AE9B2  : public RuntimeObject
{
	// SQLitePCL.strdelegate_exec SQLitePCL.raw/<>c__DisplayClass287_0::callback
	strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583* ___callback_0;
};

// SQLitePCL.raw/<>c__DisplayClass376_0
struct U3CU3Ec__DisplayClass376_0_t9B54378AED76759BA7EB8974E76F27BA23A51221  : public RuntimeObject
{
	// SQLitePCL.strdelegate_authorizer SQLitePCL.raw/<>c__DisplayClass376_0::f
	strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29* ___f_0;
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

// SQLitePCL.CompareBuf
struct CompareBuf_t27F605DCD52963E50AAF359FF0792B5EF7FC04EA  : public EqualityComparer_1_tE29394521901AC9A533E45B9990C0246B75F11E0
{
	// System.Func`4<System.IntPtr,System.IntPtr,System.Int32,System.Boolean> SQLitePCL.CompareBuf::_f
	Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083* ____f_1;
};

// SQLitePCL.CompareFuncName
struct CompareFuncName_tDD5FD56A7AAA8A632A4B49F594E21250BFB40795  : public EqualityComparer_1_t622E93DC712395AAC84C30749F11878E251A358F
{
	// System.Collections.Generic.IEqualityComparer`1<System.Byte[]> SQLitePCL.CompareFuncName::_ptrlencmp
	RuntimeObject* ____ptrlencmp_1;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tA4674B43E8DDF11FB95382E2DF287778F940BFBA  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// SQLitePCL.EntryPointAttribute
struct EntryPointAttribute_t153F60F730CBAB2CE127F07F09554695F9B9D075  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String SQLitePCL.EntryPointAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
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

// System.Runtime.CompilerServices.IsByRefLikeAttribute
struct IsByRefLikeAttribute_tE3DF4234BFCF4858A0D7C555BB5DC3A332D72370  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tB8CFB53741972E7671A35C8614A6613F318DBB0A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// SQLitePCL.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t17BE665B3D7CD95379096445F10A2E7124970063  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// SQLitePCL.PreserveAttribute
struct PreserveAttribute_t684A021602CCD4E643B8148B5315F6EDDCCD0D12  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean SQLitePCL.PreserveAttribute::AllMembers
	bool ___AllMembers_0;
	// System.Boolean SQLitePCL.PreserveAttribute::Conditional
	bool ___Conditional_1;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
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

// SQLitePCL.sqlite3_context
struct sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C  : public RuntimeObject
{
	// System.IntPtr SQLitePCL.sqlite3_context::_p
	intptr_t ____p_0;
	// System.Object SQLitePCL.sqlite3_context::_user_data
	RuntimeObject* ____user_data_1;
	// System.Object SQLitePCL.sqlite3_context::state
	RuntimeObject* ___state_2;
};

// SQLitePCL.sqlite3_value
struct sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD  : public RuntimeObject
{
	// System.IntPtr SQLitePCL.sqlite3_value::_p
	intptr_t ____p_0;
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

// SQLitePCL.function_hook_info/agg_sqlite3_context
struct agg_sqlite3_context_t7AF70002EDC01CAA770CE2E2C7DE817FEBCEBE07  : public sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C
{
};

// SQLitePCL.function_hook_info/scalar_sqlite3_context
struct scalar_sqlite3_context_t520AE3E6198561DEF6B32657E820E9B8FBDE0509  : public sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C
{
};

// System.Func`4<System.IntPtr,System.IntPtr,System.Int32,System.Boolean>
struct Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083  : public MulticastDelegate_t
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

// SQLitePCL.strdelegate_authorizer
struct strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29  : public MulticastDelegate_t
{
};

// SQLitePCL.strdelegate_collation
struct strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E  : public MulticastDelegate_t
{
};

// SQLitePCL.strdelegate_exec
struct strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583  : public MulticastDelegate_t
{
};

// SQLitePCL.strdelegate_log
struct strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1  : public MulticastDelegate_t
{
};

// SQLitePCL.strdelegate_profile
struct strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C  : public MulticastDelegate_t
{
};

// SQLitePCL.strdelegate_trace
struct strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7  : public MulticastDelegate_t
{
};

// SQLitePCL.strdelegate_update
struct strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886  : public MulticastDelegate_t
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
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832  : public RuntimeArray
{
	ALIGN_FIELD (8) intptr_t m_Items[1];

	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
// SQLitePCL.sqlite3_value[]
struct sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894  : public RuntimeArray
{
	ALIGN_FIELD (8) sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* m_Items[1];

	inline sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_gshared_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, const RuntimeMethod* method) ;
// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Byte>::GetPinnableReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_gshared (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m3F802FBA00F30B243C47564955D979C118A3AE42_gshared (ConcurrentDictionary_2_t211FFBACF3ECB80F94746F5D14A5187C12AC7E96* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_set_Item_m7899BE85AED1813DBD60E9E0423FD5C5B0406347_gshared (ConcurrentDictionary_2_t211FFBACF3ECB80F94746F5D14A5187C12AC7E96* __this, intptr_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_get_Item_m6549195719E0E1D6562A3D8B62B89AA678051F0B_gshared (ConcurrentDictionary_2_t211FFBACF3ECB80F94746F5D14A5187C12AC7E96* __this, intptr_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.Object>::TryRemove(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemove_m648714D9DFA663DE5F768C6908B6BAEE52A0018E_gshared (ConcurrentDictionary_2_t211FFBACF3ECB80F94746F5D14A5187C12AC7E96* __this, intptr_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Byte>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* ReadOnlySpan_1_get_Item_mD58E12F152DAF67682BD56218B9EC5A0CC3CC1A7_gshared_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9_gshared (const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::op_Implicit(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ReadOnlySpan_1_op_Implicit_m0E04D2F291C8C5075A086E9A53AE241DEA3E9E38_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_gshared_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mA0D5DF71A4976E2FD4C77C93A93720BEBCBE0DCE_gshared (EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* __this, const RuntimeMethod* method) ;
// TResult System.Func`4<System.IntPtr,System.IntPtr,System.Int32,System.Boolean>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_4_Invoke_mF686DB15C7046521DFA2350715743471581C6580_gshared_inline (Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083* __this, intptr_t ___arg10, intptr_t ___arg21, int32_t ___arg32, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m2D937986F9495D8AF5A1FEB1217D83A3AA3FF6D8_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::TryRemove(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemove_m24DC33BB549CD9414E0782A591303A484D2BA255_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_set_Item_m95DD60ECF2EBCA55F2EC3B0AC122FE0C0D7D4E39_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_get_Values_m53F5365206C49EF5FD2E74C06F3E7F945CC28946_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// SQLitePCL.sqlite3 SQLitePCL.sqlite3::New(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* sqlite3_New_m4AF72342C8DBAD56760AD10A9D730D9EC80FB1C9 (intptr_t ___p0, const RuntimeMethod* method) ;
// SQLitePCL.utf8z SQLitePCL.util::to_utf8z(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD (String_t* ___s0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::sqlite3_open(SQLitePCL.utf8z,SQLitePCL.sqlite3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_open_m6F0160C534C3480B4A19E832622C14037D7184E7 (utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___filename0, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2** ___db1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::sqlite3_open_v2(SQLitePCL.utf8z,SQLitePCL.sqlite3&,System.Int32,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_open_v2_m78EB0522EB1E15E93A4071695B590DF98EF51179 (utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___filename0, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2** ___db1, int32_t ___flags2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___vfs3, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::sqlite3__vfs__delete(SQLitePCL.utf8z,SQLitePCL.utf8z,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3__vfs__delete_m91B70C6EF1BA309F7D97965AA9ACAF467A3DAC41 (utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___vfs0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___pathname1, int32_t ___syncdir2, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.sqlite3::manual_close_v2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t sqlite3_manual_close_v2_m9913465FCFAA3E200B65FC3E7396D23B00D5351C (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* __this, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.sqlite3::manual_close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t sqlite3_manual_close_m385D8CE62C53FB890E5878C8FC353A95485514CC (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* __this, const RuntimeMethod* method) ;
// System.Void SQLitePCL.raw/<>c__DisplayClass226_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass226_0__ctor_m9564EB56D4FA4F63C21FA995AF16A460FBA8D37E (U3CU3Ec__DisplayClass226_0_t4A5A9270B5ABBDD4FE82B7325920FCAD7A653B69* __this, const RuntimeMethod* method) ;
// System.Void SQLitePCL.delegate_log::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_log__ctor_m90FE70F302D363779BDD720CE99A7B2A6B07E02A (delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::sqlite3_config_log(SQLitePCL.delegate_log,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_config_log_m0A0F2CA1CBA01D0B5DC0D6720E3CBB42544799AF (delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* ___f0, RuntimeObject* ___v1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.raw::sqlite3_log(System.Int32,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_log_m08B9354BD085A2B4C37BFCAB478451A3048E78B9 (int32_t ___errcode0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___s1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.raw/<>c__DisplayClass232_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass232_0__ctor_m620499771C11ED7DAE428E57C7104248921364AE (U3CU3Ec__DisplayClass232_0_t838D8309C6E5622A939C813FB0CE2B1C640B62EF* __this, const RuntimeMethod* method) ;
// System.Void SQLitePCL.delegate_trace::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_trace__ctor_m363F86F59BCE053BF974338A6E05C69C95C8D189 (delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.raw::sqlite3_trace(SQLitePCL.sqlite3,SQLitePCL.delegate_trace,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_trace_m247AD053E77D350B12227DC306678570E3BA6A35 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* ___f1, RuntimeObject* ___v2, const RuntimeMethod* method) ;
// System.Void SQLitePCL.raw/<>c__DisplayClass234_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass234_0__ctor_m77533514D4847F355E28FEEE9ACFD78AB8D056AD (U3CU3Ec__DisplayClass234_0_t747F31218868C8520EF94BBFFC80D59BA3312B30* __this, const RuntimeMethod* method) ;
// System.Void SQLitePCL.delegate_profile::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_profile__ctor_mACA8FE55EFC53A98950C22BD55D8B8C0A3F6CEDA (delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.raw::sqlite3_profile(SQLitePCL.sqlite3,SQLitePCL.delegate_profile,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_profile_m7A05E057D5ECEA3BD7ABF21DAE9527F6B45A5A71 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* ___f1, RuntimeObject* ___v2, const RuntimeMethod* method) ;
// System.Void SQLitePCL.raw/<>c__DisplayClass237_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass237_0__ctor_m733A68B0C5388A210975309A07AF33D78B7970B3 (U3CU3Ec__DisplayClass237_0_t2A0DCC483EE166D297FE81DFE52453F10AE5610B* __this, const RuntimeMethod* method) ;
// System.Void SQLitePCL.delegate_update::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_update__ctor_m17032A8DE0B56F6F7EEB38252AA6FF345689EE93 (delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.raw::sqlite3_update_hook(SQLitePCL.sqlite3,SQLitePCL.delegate_update,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_update_hook_mBB462BCA7FD65D0B7D2A35FC74353E52718F2349 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* ___f1, RuntimeObject* ___v2, const RuntimeMethod* method) ;
// System.Void SQLitePCL.raw/<>c__DisplayClass238_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass238_0__ctor_mAB023B9700651578079226B73102E10002DB2105 (U3CU3Ec__DisplayClass238_0_t28AFD70323281419F99ABE6BC2FB9B400677BFEB* __this, const RuntimeMethod* method) ;
// System.Byte[] SQLitePCL.util::to_utf8_with_z(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* util_to_utf8_with_z_mF0006630D3F60F4AFB8C6D7892AF46A7F897CCA6 (String_t* ___sourceText0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.delegate_collation::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_collation__ctor_mF884888642B63BD696BC37E898161379BDAA85AB (delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::sqlite3_create_function(SQLitePCL.sqlite3,System.String,System.Int32,System.Int32,System.Object,SQLitePCL.delegate_function_scalar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_create_function_m0E9E37065C3D24AB70A03DC3FEA8A150106176E0 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, String_t* ___name1, int32_t ___nArg2, int32_t ___flags3, RuntimeObject* ___v4, delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* ___func5, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::sqlite3_create_function(SQLitePCL.sqlite3,System.String,System.Int32,System.Int32,System.Object,SQLitePCL.delegate_function_aggregate_step,SQLitePCL.delegate_function_aggregate_final)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_create_function_mCEF073A616D75D1858F9D927EC11ED5AF3165360 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, String_t* ___name1, int32_t ___nArg2, int32_t ___flags3, RuntimeObject* ___v4, delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* ___func_step5, delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* ___func_final6, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_gshared_inline)(__this, method);
}
// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Byte>::GetPinnableReference()
inline uint8_t* ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8 (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_gshared)(__this, method);
}
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.String System.Text.Encoding::GetString(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Encoding_GetString_m42BFF0862341DCD5289A7D75B5D7A22CE9690EAD (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* __this, uint8_t* ___bytes0, int32_t ___byteCount1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::sqlite3_db_readonly(SQLitePCL.sqlite3,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_db_readonly_m269CA4AAF36C451C4E639FE3DE9AA1AB5BD0B82E (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName1, const RuntimeMethod* method) ;
// SQLitePCL.utf8z SQLitePCL.raw::sqlite3_db_filename(SQLitePCL.sqlite3,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 raw_sqlite3_db_filename_mC3081CF5E24E98876E5D453B2B5EE4ADCB776F19 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___att1, const RuntimeMethod* method) ;
// SQLitePCL.sqlite3_stmt SQLitePCL.sqlite3_stmt::From(System.IntPtr,SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* sqlite3_stmt_From_m3442F22D163799397D67AD7DF86FCB6CF71448C2 (intptr_t ___p0, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::sqlite3_prepare_v2(SQLitePCL.sqlite3,SQLitePCL.utf8z,SQLitePCL.sqlite3_stmt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_prepare_v2_mC1F6DDBFC0628E83A3D80432D26D60B6812CEECE (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___sql1, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** ___stmt2, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::sqlite3_prepare_v2(SQLitePCL.sqlite3,SQLitePCL.utf8z,SQLitePCL.sqlite3_stmt&,SQLitePCL.utf8z&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_prepare_v2_m5791AC8F5AB0A7C88BF04424E55D64D1F9CFB813 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___sql1, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** ___stmt2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* ___tail3, const RuntimeMethod* method) ;
// System.String SQLitePCL.utf8z::utf8_to_string()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* utf8z_utf8_to_string_m580270DDB4AE9B6A5AAC5C4FA552263D9C29C90A (utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* __this, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::sqlite3_prepare_v3(SQLitePCL.sqlite3,SQLitePCL.utf8z,System.UInt32,SQLitePCL.sqlite3_stmt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_prepare_v3_m38C47F45202D4D9630C6DA64A86493562F02EF2C (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___sql1, uint32_t ___flags2, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** ___stmt3, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::sqlite3_prepare_v3(SQLitePCL.sqlite3,SQLitePCL.utf8z,System.UInt32,SQLitePCL.sqlite3_stmt&,SQLitePCL.utf8z&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_prepare_v3_mADF43E991012F79828D7F99D23FD3DB99DF3DBAC (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___sql1, uint32_t ___flags2, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** ___stmt3, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* ___tail4, const RuntimeMethod* method) ;
// System.Void SQLitePCL.raw/<>c__DisplayClass287_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass287_0__ctor_m9652DF4C60F5ECEAFF2AE0DB1D3C8ED318772C4A (U3CU3Ec__DisplayClass287_0_tE8EC7F43BC9B3DA9B57BC1007C2CC730F64AE9B2* __this, const RuntimeMethod* method) ;
// System.Void SQLitePCL.delegate_exec::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_exec__ctor_m64682E5DA3B842E47174CB722B43977DFCF5AE5B (delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.String SQLitePCL.util::from_utf8_z(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* util_from_utf8_z_mC688C6FF1F44637723FC3C17C471003B03CD3D78 (intptr_t ___nativeString0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.sqlite3_stmt::manual_close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t sqlite3_stmt_manual_close_m3A3C2F6C6782CB371A60EA7B5372F9CCA721577A (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* __this, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::sqlite3_complete(SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_complete_mB03919CD9F742E408620D8523C31AC6E4563B6E4 (utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___sql0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::sqlite3_compileoption_used(SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_compileoption_used_m61475847AF55FDAD9C4E0A78E33A050CA8FDB182 (utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___s0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::sqlite3_table_column_metadata(SQLitePCL.sqlite3,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z&,SQLitePCL.utf8z&,System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_table_column_metadata_m3B189D0EBA910461493655883830AAD5FC875FD8 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___tblName2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___colName3, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* ___dataType4, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* ___collSeq5, int32_t* ___notNull6, int32_t* ___primaryKey7, int32_t* ___autoInc8, const RuntimeMethod* method) ;
// SQLitePCL.sqlite3 SQLitePCL.sqlite3_stmt::get_db()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* sqlite3_stmt_get_db_m31DCFD46B918941ED21CAD5F953201B59EF259CF_inline (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* __this, const RuntimeMethod* method) ;
// System.IntPtr SQLitePCL.sqlite3_stmt::get_ptr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t sqlite3_stmt_get_ptr_mF5030B60EB110512D248A632A61AE2F899580B58_inline (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* __this, const RuntimeMethod* method) ;
// SQLitePCL.sqlite3_stmt SQLitePCL.sqlite3::find_stmt(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* sqlite3_find_stmt_m6DB56FD791338E8E5524252CE51E90D7D6624FE3 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* __this, intptr_t ___p0, const RuntimeMethod* method) ;
// System.Object SQLitePCL.sqlite3_context::get_user_data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* sqlite3_context_get_user_data_m2B56AA945EBDDC7B032007BA993E2B0D6311E609_inline (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* __this, const RuntimeMethod* method) ;
// System.IntPtr SQLitePCL.sqlite3_context::get_ptr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t sqlite3_context_get_ptr_m12CD2A3168656A686B6D7455A6A8251F31149259_inline (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* __this, const RuntimeMethod* method) ;
// System.Void SQLitePCL.raw::sqlite3_result_error(SQLitePCL.sqlite3_context,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_result_error_mCF3BB13419BDFAF7FE1A06BE455F8E78D8A496C6 (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___context0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___val1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.raw::sqlite3_result_text(SQLitePCL.sqlite3_context,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_result_text_mF07DE758C90B3CD62E834E26C71421197A17C9C9 (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___context0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___val1, const RuntimeMethod* method) ;
// System.IntPtr SQLitePCL.sqlite3_value::get_ptr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t sqlite3_value_get_ptr_mAF588DD3703B49533D61586741960A38A4515AD9_inline (sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* __this, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::sqlite3_bind_text(SQLitePCL.sqlite3_stmt,System.Int32,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_bind_text_mA109AE51F46957D6F56FA7F016A03B9F932493E4 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___val2, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::sqlite3_bind_parameter_index(SQLitePCL.sqlite3_stmt,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_bind_parameter_index_m3B57DC88DC95B77F49AECE313649A2C579CA7640 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___strName1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.sqlite3_backup::manual_close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t sqlite3_backup_manual_close_m16BBF17DEA8FFABBE26C4A1668815FA624897244 (sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* __this, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::sqlite3_blob_open(SQLitePCL.sqlite3,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z,System.Int64,System.Int32,SQLitePCL.sqlite3_blob&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_blob_open_m28BDB381FBFB05DCF2847873AFB839ADCF7685EB (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___db_utf81, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___table_utf82, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___col_utf83, int64_t ___rowid4, int32_t ___flags5, sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057** ___blob6, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.sqlite3_blob::manual_close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t sqlite3_blob_manual_close_m32537CD8CDCC89D1CBAD7832CFA559A05C61BA5F (sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* __this, const RuntimeMethod* method) ;
// System.Void SQLitePCL.raw/<>c__DisplayClass376_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass376_0__ctor_m2266973E0A0C1CD44FEBB04B65AFE3CCCE6B7E95 (U3CU3Ec__DisplayClass376_0_t9B54378AED76759BA7EB8974E76F27BA23A51221* __this, const RuntimeMethod* method) ;
// System.Void SQLitePCL.delegate_authorizer::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_authorizer__ctor_m4F3DB7EAF151377921A14384AB7CB7E379B497E2 (delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::sqlite3_set_authorizer(SQLitePCL.sqlite3,SQLitePCL.delegate_authorizer,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_set_authorizer_m295E60E304450D6D1DB1EBAAD223B696EBA62839 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* ___f1, RuntimeObject* ___user_data2, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void SQLitePCL.strdelegate_log::Invoke(System.Object,System.Int32,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B_inline (strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, String_t* ___msg2, const RuntimeMethod* method) ;
// System.Void SQLitePCL.strdelegate_trace::Invoke(System.Object,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779_inline (strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7* __this, RuntimeObject* ___user_data0, String_t* ___s1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.strdelegate_profile::Invoke(System.Object,System.String,System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4_inline (strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C* __this, RuntimeObject* ___user_data0, String_t* ___statement1, int64_t ___ns2, const RuntimeMethod* method) ;
// System.Void SQLitePCL.strdelegate_update::Invoke(System.Object,System.Int32,System.String,System.String,System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1_inline (strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886* __this, RuntimeObject* ___user_data0, int32_t ___type1, String_t* ___database2, String_t* ___table3, int64_t ___rowid4, const RuntimeMethod* method) ;
// System.String SQLitePCL.raw::utf8_span_to_string(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* raw_utf8_span_to_string_m42B7194C8F5E548DA785C3249BDD5EB2DA794024 (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___p0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.strdelegate_collation::Invoke(System.Object,System.String,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537_inline (strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E* __this, RuntimeObject* ___user_data0, String_t* ___s11, String_t* ___s22, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.strdelegate_exec::Invoke(System.Object,System.String[],System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6_inline (strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583* __this, RuntimeObject* ___user_data0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names2, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.strdelegate_authorizer::Invoke(System.Object,System.Int32,System.String,System.String,System.String,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34_inline (strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, String_t* ___param02, String_t* ___param13, String_t* ___dbName4, String_t* ___inner_most_trigger_or_view5, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___invalidHandleValue0, bool ___ownsHandle1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::internal_sqlite3_backup_finish(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_internal_sqlite3_backup_finish_mE0275B95B1CCB4CE7B8FA6F9DE0A17860E723446 (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::internal_sqlite3_blob_close(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_internal_sqlite3_blob_close_m39CEAEE53333DACA116E82A5A36AEF7E3E92B547 (intptr_t ___blob0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.sqlite3_stmt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqlite3_stmt__ctor_m8274DE84D8B25F50A07FA11BDB40CA18880774B3 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___handle0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.sqlite3::add_stmt(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqlite3_add_stmt_mD2483B53A00B53DE52B70C40C475EC191199C73B (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::internal_sqlite3_finalize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_internal_sqlite3_finalize_mB8E88A3432B14F60BDAA959F4188BAB00B1AA0F5 (intptr_t ___stmt0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.sqlite3::remove_stmt(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqlite3_remove_stmt_m4388870B666E82A70AE88284E79AADD62C321BA6 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___s0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::internal_sqlite3_close_v2(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_internal_sqlite3_close_v2_mCE5CD4ED10FD8ACCA988D4AD708FBFD8815C499D (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.sqlite3::dispose_extra()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqlite3_dispose_extra_m353F2CCE56ADF182709E81FEEEC40854E41F807B (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* __this, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.raw::internal_sqlite3_close(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_internal_sqlite3_close_mE779057FC6194468638B64928D67BAEF0BE69E5F (intptr_t ___p0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.sqlite3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqlite3__ctor_m9665E7B91BF88357F8083A085B576DCC73A40B93 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,SQLitePCL.sqlite3_stmt>::.ctor()
inline void ConcurrentDictionary_2__ctor_m738B333B82DBBF304A15728C98883F5163204374 (ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476*, const RuntimeMethod*))ConcurrentDictionary_2__ctor_m3F802FBA00F30B243C47564955D979C118A3AE42_gshared)(__this, method);
}
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,SQLitePCL.sqlite3_stmt>::set_Item(TKey,TValue)
inline void ConcurrentDictionary_2_set_Item_m0B68193309F23091AEE40F02FBB000FAFB452DF8 (ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476* __this, intptr_t ___key0, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476*, intptr_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, const RuntimeMethod*))ConcurrentDictionary_2_set_Item_m7899BE85AED1813DBD60E9E0423FD5C5B0406347_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,SQLitePCL.sqlite3_stmt>::get_Item(TKey)
inline sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ConcurrentDictionary_2_get_Item_mE58842628CBB5BB71F07874570EC30E7FC721445 (ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476* __this, intptr_t ___key0, const RuntimeMethod* method)
{
	return ((  sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* (*) (ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476*, intptr_t, const RuntimeMethod*))ConcurrentDictionary_2_get_Item_m6549195719E0E1D6562A3D8B62B89AA678051F0B_gshared)(__this, ___key0, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,SQLitePCL.sqlite3_stmt>::TryRemove(TKey,TValue&)
inline bool ConcurrentDictionary_2_TryRemove_m8C588451D72CA78D8618557F8A75D35324158B5D (ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476* __this, intptr_t ___key0, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476*, intptr_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F**, const RuntimeMethod*))ConcurrentDictionary_2_TryRemove_m648714D9DFA663DE5F768C6908B6BAEE52A0018E_gshared)(__this, ___key0, ___value1, method);
}
// SQLitePCL.utf8z SQLitePCL.utf8z::FromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 utf8z_FromString_mA76BFB6422CAE32F06C01EF5BD54B372BB6C72E8 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Marshal_ReadByte_mA7C912B2234E3E400C4C95273F8DAB1922C1ADDA (intptr_t ___ptr0, int32_t ___ofs1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.util::my_strlen(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t util_my_strlen_mAB01752C85F3A0D38160E9A74979376E28D27EBE (intptr_t ___nativeString0, const RuntimeMethod* method) ;
// System.String SQLitePCL.util::from_utf8(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* util_from_utf8_m0D62271CF37284079749D9DB598FC7F41D843D54 (intptr_t ___nativeString0, int32_t ___size1, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.Byte& modreq(System.Runtime.InteropServices.InAttribute) SQLitePCL.utf8z::GetPinnableReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5 (utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* __this, const RuntimeMethod* method) ;
// System.Void SQLitePCL.utf8z::.ctor(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void utf8z__ctor_m64264B0A6C4180B53CC206E21F3C5642074A919B_inline (utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* __this, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___a0, const RuntimeMethod* method) ;
// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Byte>::get_Item(System.Int32)
inline uint8_t* ReadOnlySpan_1_get_Item_mD58E12F152DAF67682BD56218B9EC5A0CC3CC1A7_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_get_Item_mD58E12F152DAF67682BD56218B9EC5A0CC3CC1A7_gshared_inline)(__this, ___index0, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::get_Empty()
inline ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9 (const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A (*) (const RuntimeMethod*))ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9_gshared)(method);
}
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::op_Implicit(T[])
inline ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ReadOnlySpan_1_op_Implicit_m0E04D2F291C8C5075A086E9A53AE241DEA3E9E38 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ReadOnlySpan_1_op_Implicit_m0E04D2F291C8C5075A086E9A53AE241DEA3E9E38_gshared)(___array0, method);
}
// System.Int64 SQLitePCL.utf8z::my_strlen(System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t utf8z_my_strlen_mEBE82F21999DC67AC61D1E3A25D0E7C6902D8204 (uint8_t* ___p0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Void*,System.Int32)
inline void ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_gshared_inline)(__this, ___pointer0, ___length1, method);
}
// System.ReadOnlySpan`1<System.Byte> SQLitePCL.utf8z::find_zero_terminator(System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A utf8z_find_zero_terminator_mB4E159A1046CA6A00E8A3DCEE01B1212A7E1D5C8 (uint8_t* ___p0, const RuntimeMethod* method) ;
// SQLitePCL.utf8z SQLitePCL.utf8z::FromSpan(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 utf8z_FromSpan_m4CEB98E168F53A64EBBB53697BE8BA9B7266F95B (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___a0, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075 (RuntimeObject* ___value0, int32_t ___type1, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mB3E9C10177B3A0986B72C44D7E123F60125824DF (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void SQLitePCL.SafeGCHandle::.ctor(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeGCHandle__ctor_mB8C029FD49878D0939689FF0B31B855D9279196E (SafeGCHandle_tE8D8C107E75BFC0FAC19C271622895B407785D3E* __this, RuntimeObject* ___v0, int32_t ___typ1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Byte[]>::.ctor()
inline void EqualityComparer_1__ctor_m98FB31E1349FDCF9F0A3BD1891F322A1AC6CFBC6 (EqualityComparer_1_tE29394521901AC9A533E45B9990C0246B75F11E0* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tE29394521901AC9A533E45B9990C0246B75F11E0*, const RuntimeMethod*))EqualityComparer_1__ctor_mA0D5DF71A4976E2FD4C77C93A93720BEBCBE0DCE_gshared)(__this, method);
}
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// TResult System.Func`4<System.IntPtr,System.IntPtr,System.Int32,System.Boolean>::Invoke(T1,T2,T3)
inline bool Func_4_Invoke_mF686DB15C7046521DFA2350715743471581C6580_inline (Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083* __this, intptr_t ___arg10, intptr_t ___arg21, int32_t ___arg32, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083*, intptr_t, intptr_t, int32_t, const RuntimeMethod*))Func_4_Invoke_mF686DB15C7046521DFA2350715743471581C6580_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Void SQLitePCL.FuncName::set_name(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FuncName_set_name_m2E558A596C0258BE6EE151C469BCD07A6426A937_inline (FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.FuncName::set_n(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FuncName_set_n_mBBC1FE0A2863C200708D2CE3BAB22423DA29259E_inline (FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<SQLitePCL.FuncName>::.ctor()
inline void EqualityComparer_1__ctor_mF420C788DC290244A73738F4BC6F567E4B8B065D (EqualityComparer_1_t622E93DC712395AAC84C30749F11878E251A358F* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t622E93DC712395AAC84C30749F11878E251A358F*, const RuntimeMethod*))EqualityComparer_1__ctor_mA0D5DF71A4976E2FD4C77C93A93720BEBCBE0DCE_gshared)(__this, method);
}
// System.Int32 SQLitePCL.FuncName::get_n()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FuncName_get_n_m91D9E17080DD4D1D59BD9879BE61EBCF5C88E0C4_inline (FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* __this, const RuntimeMethod* method) ;
// System.Byte[] SQLitePCL.FuncName::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FuncName_get_name_mB74437A157D3DF6F5D2A693DC4B2C5DC3E47D648_inline (FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* __this, const RuntimeMethod* method) ;
// System.Void SQLitePCL.CompareBuf::.ctor(System.Func`4<System.IntPtr,System.IntPtr,System.Int32,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompareBuf__ctor_m6C58AEB15ADFE4A32C2EC9DDDA455E5A929F92E0 (CompareBuf_t27F605DCD52963E50AAF359FF0792B5EF7FC04EA* __this, Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083* ___f0, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Byte[],System.IDisposable>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void ConcurrentDictionary_2__ctor_mD8C0B49C9BC53C925E6FAB2B37BADF318BAA208B (ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522*, RuntimeObject*, const RuntimeMethod*))ConcurrentDictionary_2__ctor_m2D937986F9495D8AF5A1FEB1217D83A3AA3FF6D8_gshared)(__this, ___comparer0, method);
}
// System.Void SQLitePCL.CompareFuncName::.ctor(System.Collections.Generic.IEqualityComparer`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompareFuncName__ctor_m286F43C4A7064F1D2822AFA93BD4950F6158E24B (CompareFuncName_tDD5FD56A7AAA8A632A4B49F594E21250BFB40795* __this, RuntimeObject* ___ptrlencmp0, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<SQLitePCL.FuncName,System.IDisposable>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void ConcurrentDictionary_2__ctor_mC0BBBB7D4FBDEA79D4636FBDB872E0AC54E2C776 (ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517*, RuntimeObject*, const RuntimeMethod*))ConcurrentDictionary_2__ctor_m2D937986F9495D8AF5A1FEB1217D83A3AA3FF6D8_gshared)(__this, ___comparer0, method);
}
// System.Void SQLitePCL.FuncName::.ctor(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FuncName__ctor_m7E7689C95B8E84D185844712A71EAE817A2FF240 (FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____name0, int32_t ____n1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<SQLitePCL.FuncName,System.IDisposable>::TryRemove(TKey,TValue&)
inline bool ConcurrentDictionary_2_TryRemove_m1782697D740431D81873A6F2B420EBBDD4FED32D (ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517* __this, FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517*, FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A*, RuntimeObject**, const RuntimeMethod*))ConcurrentDictionary_2_TryRemove_m24DC33BB549CD9414E0782A591303A484D2BA255_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<SQLitePCL.FuncName,System.IDisposable>::set_Item(TKey,TValue)
inline void ConcurrentDictionary_2_set_Item_mB18463C3EF5A1B49665FDDC7A7418F69CA3F69F0 (ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517* __this, FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517*, FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A*, RuntimeObject*, const RuntimeMethod*))ConcurrentDictionary_2_set_Item_m95DD60ECF2EBCA55F2EC3B0AC122FE0C0D7D4E39_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Byte[],System.IDisposable>::TryRemove(TKey,TValue&)
inline bool ConcurrentDictionary_2_TryRemove_m8220F91E42BAB284E34184616737AAB2A4C9FEF6 (ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject**, const RuntimeMethod*))ConcurrentDictionary_2_TryRemove_m24DC33BB549CD9414E0782A591303A484D2BA255_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Byte[],System.IDisposable>::set_Item(TKey,TValue)
inline void ConcurrentDictionary_2_set_Item_m0A8DC29085CC370BCE112BE5175D0766C86B5121 (ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, const RuntimeMethod*))ConcurrentDictionary_2_set_Item_m95DD60ECF2EBCA55F2EC3B0AC122FE0C0D7D4E39_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Concurrent.ConcurrentDictionary`2<System.Byte[],System.IDisposable>::get_Values()
inline RuntimeObject* ConcurrentDictionary_2_get_Values_m2C4385FFCDA16FF0FB436BE7E6127E2F473040FC (ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522*, const RuntimeMethod*))ConcurrentDictionary_2_get_Values_m53F5365206C49EF5FD2E74C06F3E7F945CC28946_gshared)(__this, method);
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Concurrent.ConcurrentDictionary`2<SQLitePCL.FuncName,System.IDisposable>::get_Values()
inline RuntimeObject* ConcurrentDictionary_2_get_Values_mF2008A5617C18F3F234996E8F3070D5C9F7ABC10 (ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517*, const RuntimeMethod*))ConcurrentDictionary_2_get_Values_m53F5365206C49EF5FD2E74C06F3E7F945CC28946_gshared)(__this, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_op_Explicit_m500B99BF54D923E624C5235A4B370A37C8B7050C (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void SQLitePCL.delegate_log::Invoke(System.Object,System.Int32,SQLitePCL.utf8z)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19_inline (delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___msg2, const RuntimeMethod* method) ;
// System.Void SQLitePCL.commit_hook_info::set__func(SQLitePCL.delegate_commit)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void commit_hook_info_set__func_m2283E27CCE511047C4028072A7FCC50E1354A281_inline (commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* __this, delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* ___value0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.commit_hook_info::set__user_data(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void commit_hook_info_set__user_data_mA2C1CEA31C422E0678A0176851D9623090CFE266_inline (commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// SQLitePCL.delegate_commit SQLitePCL.commit_hook_info::get__func()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* commit_hook_info_get__func_m05BEEED3611D2441FE7BB1D3FA2DC7B53F14B46D_inline (commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* __this, const RuntimeMethod* method) ;
// System.Object SQLitePCL.commit_hook_info::get__user_data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* commit_hook_info_get__user_data_mD65F8F042015B81A6FD9D5CB216FF346F0AB68C6_inline (commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* __this, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.delegate_commit::Invoke(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8_inline (delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.delegate_rollback::Invoke(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8_inline (delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.delegate_trace::Invoke(System.Object,SQLitePCL.utf8z)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E_inline (delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.delegate_profile::Invoke(System.Object,SQLitePCL.utf8z,System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1_inline (delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, int64_t ___ns2, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.delegate_progress::Invoke(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218_inline (delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.delegate_update::Invoke(System.Object,System.Int32,SQLitePCL.utf8z,SQLitePCL.utf8z,System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349_inline (delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* __this, RuntimeObject* ___user_data0, int32_t ___type1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___database2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___table3, int64_t ___rowid4, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.delegate_collation::Invoke(System.Object,System.ReadOnlySpan`1<System.Byte>,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C_inline (delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* __this, RuntimeObject* ___user_data0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s11, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s22, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_mA7461E70E172F97FDCA69F23C727E6966D1B32F9 (Type_t* ___t0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::ReadIntPtr(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_ReadIntPtr_mFC19D4C04BF9018E1BF846CF5185EAF4B7A25D97 (intptr_t ___ptr0, int32_t ___ofs1, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.delegate_exec::Invoke(System.Object,System.IntPtr[],System.IntPtr[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B_inline (delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* __this, RuntimeObject* ___user_data0, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___values1, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___names2, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::ReadIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_ReadIntPtr_mFFEE0F8AA606A53DB0BB3B6CE5E6A0A5E1673E4E (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.function_hook_info/agg_sqlite3_context::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void agg_sqlite3_context__ctor_m2FD4EE33CC38CC17ADF6466615FE093912A8C168 (agg_sqlite3_context_t7AF70002EDC01CAA770CE2E2C7DE817FEBCEBE07* __this, RuntimeObject* ___v0, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m74B02418DDB89BF52FA0F7412D14E6D19E1949C6 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::op_Explicit(System.Runtime.InteropServices.GCHandle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GCHandle_op_Explicit_m67A1C3E8BC6C8163C5775AE62A514000D00CD9B6_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::WriteIntPtr(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_WriteIntPtr_m40CFE4DF95A6939333EE6454F9973B193FC459CC (intptr_t ___ptr0, intptr_t ___val1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.function_hook_info/agg_sqlite3_context::fix_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void agg_sqlite3_context_fix_ptr_m1A20B24DEF5D9E1199E5A60A31376373947B024E (agg_sqlite3_context_t7AF70002EDC01CAA770CE2E2C7DE817FEBCEBE07* __this, intptr_t ___p0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.function_hook_info/scalar_sqlite3_context::.ctor(System.IntPtr,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scalar_sqlite3_context__ctor_mE4C296D9999B1489512214B36C283EFBBA65B72F (scalar_sqlite3_context_t520AE3E6198561DEF6B32657E820E9B8FBDE0509* __this, intptr_t ___p0, RuntimeObject* ___v1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.sqlite3_value::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqlite3_value__ctor_m653B23B5B2873FC7E8AB166AAE5E00151A929676 (sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* __this, intptr_t ___p0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.delegate_function_scalar::Invoke(SQLitePCL.sqlite3_context,System.Object,SQLitePCL.sqlite3_value[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D_inline (delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method) ;
// SQLitePCL.sqlite3_context SQLitePCL.function_hook_info::get_context(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* function_hook_info_get_context_mAB02E6F7CA2611530E05A39863DBD6FE1CF323B5 (function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* __this, intptr_t ___context0, intptr_t ___agg_context1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.delegate_function_aggregate_step::Invoke(SQLitePCL.sqlite3_context,System.Object,SQLitePCL.sqlite3_value[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511_inline (delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method) ;
// System.Void SQLitePCL.delegate_function_aggregate_final::Invoke(SQLitePCL.sqlite3_context,System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98_inline (delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, const RuntimeMethod* method) ;
// System.Void SQLitePCL.sqlite3_context::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqlite3_context__ctor_mD3A1FF371768B7E9C88EC86EFE32952B8D89D71F (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method) ;
// System.Void SQLitePCL.sqlite3_context::set_context_ptr(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void sqlite3_context_set_context_ptr_m75037F45D04497B679E79EF821D191289E5917A3_inline (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* __this, intptr_t ___p0, const RuntimeMethod* method) ;
// System.Int32 SQLitePCL.delegate_authorizer::Invoke(System.Object,System.Int32,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F_inline (delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param02, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param13, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName4, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___inner_most_trigger_or_view5, const RuntimeMethod* method) ;
// System.Void SQLitePCL.EntryPointAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EntryPointAttribute_set_Name_m865E8DAD340EDE93960B660C46F3CA0602439808_inline (EntryPointAttribute_t153F60F730CBAB2CE127F07F09554695F9B9D075* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowIndexOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m46AF5939C05FD5C1B41793773BB5AD23228DC4C0 (const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentException_InvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_InvalidTypeWithPointersNotSupported_mC58F29A303530BA42973934E30FFA8DCDE5D9B07 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m74D94317452463079D807CDF5D84958A888D42A5 (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) ;
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m04352FA10E125A83975C61DBB73A183DE5C24402 (EmbeddedAttribute_tA4674B43E8DDF11FB95382E2DF287778F940BFBA* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m49B040BAE122324446D79070C07C7DC866FB36A9 (IsReadOnlyAttribute_tB8CFB53741972E7671A35C8614A6613F318DBB0A* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.IsByRefLikeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsByRefLikeAttribute__ctor_mB685E19152B9E8C4703D7C87C80289435E9ADC98 (IsByRefLikeAttribute_tE3DF4234BFCF4858A0D7C555BB5DC3A332D72370* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
int32_t strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537_Multicast(strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E* __this, RuntimeObject* ___user_data0, String_t* ___s11, String_t* ___s22, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E* currentDelegate = reinterpret_cast<strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___user_data0, ___s11, ___s22, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537_Open(strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E* __this, RuntimeObject* ___user_data0, String_t* ___s11, String_t* ___s22, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___user_data0, ___s11, ___s22, method);
}
int32_t strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537_OpenStaticInvoker(strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E* __this, RuntimeObject* ___user_data0, String_t* ___s11, String_t* ___s22, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___user_data0, ___s11, ___s22);
}
int32_t strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537_ClosedStaticInvoker(strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E* __this, RuntimeObject* ___user_data0, String_t* ___s11, String_t* ___s22, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, RuntimeObject*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___user_data0, ___s11, ___s22);
}
int32_t strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537_OpenVirtual(strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E* __this, RuntimeObject* ___user_data0, String_t* ___s11, String_t* ___s22, const RuntimeMethod* method)
{
	return VirtualFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___user_data0, ___s11, ___s22);
}
int32_t strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537_OpenInterface(strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E* __this, RuntimeObject* ___user_data0, String_t* ___s11, String_t* ___s22, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___user_data0, ___s11, ___s22);
}
int32_t strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537_OpenGenericVirtual(strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E* __this, RuntimeObject* ___user_data0, String_t* ___s11, String_t* ___s22, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(method, ___user_data0, ___s11, ___s22);
}
int32_t strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537_OpenGenericInterface(strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E* __this, RuntimeObject* ___user_data0, String_t* ___s11, String_t* ___s22, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(method, ___user_data0, ___s11, ___s22);
}
// System.Void SQLitePCL.strdelegate_collation::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void strdelegate_collation__ctor_mF581AF9E79F16A5F984001D7024B78323A305D77 (strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537_Multicast;
}
// System.Int32 SQLitePCL.strdelegate_collation::Invoke(System.Object,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537 (strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E* __this, RuntimeObject* ___user_data0, String_t* ___s11, String_t* ___s22, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___s11, ___s22, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.strdelegate_collation::BeginInvoke(System.Object,System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* strdelegate_collation_BeginInvoke_m69631D4A6411BC93DD99EA58E463AE3454037C6E (strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E* __this, RuntimeObject* ___user_data0, String_t* ___s11, String_t* ___s22, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___user_data0;
	__d_args[1] = ___s11;
	__d_args[2] = ___s22;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 SQLitePCL.strdelegate_collation::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t strdelegate_collation_EndInvoke_mA712FEDF069F219CA199B7E07BF6A220764CFF60 (strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1_Multicast(strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886* __this, RuntimeObject* ___user_data0, int32_t ___type1, String_t* ___database2, String_t* ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886* currentDelegate = reinterpret_cast<strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, String_t*, String_t*, int64_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___user_data0, ___type1, ___database2, ___table3, ___rowid4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1_Open(strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886* __this, RuntimeObject* ___user_data0, int32_t ___type1, String_t* ___database2, String_t* ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, String_t*, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___user_data0, ___type1, ___database2, ___table3, ___rowid4, method);
}
void strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1_OpenStaticInvoker(strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886* __this, RuntimeObject* ___user_data0, int32_t ___type1, String_t* ___database2, String_t* ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, int32_t, String_t*, String_t*, int64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___user_data0, ___type1, ___database2, ___table3, ___rowid4);
}
void strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1_ClosedStaticInvoker(strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886* __this, RuntimeObject* ___user_data0, int32_t ___type1, String_t* ___database2, String_t* ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, RuntimeObject*, int32_t, String_t*, String_t*, int64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___user_data0, ___type1, ___database2, ___table3, ___rowid4);
}
void strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1_OpenVirtual(strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886* __this, RuntimeObject* ___user_data0, int32_t ___type1, String_t* ___database2, String_t* ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	VirtualActionInvoker4< int32_t, String_t*, String_t*, int64_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___user_data0, ___type1, ___database2, ___table3, ___rowid4);
}
void strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1_OpenInterface(strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886* __this, RuntimeObject* ___user_data0, int32_t ___type1, String_t* ___database2, String_t* ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	InterfaceActionInvoker4< int32_t, String_t*, String_t*, int64_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___user_data0, ___type1, ___database2, ___table3, ___rowid4);
}
void strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1_OpenGenericVirtual(strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886* __this, RuntimeObject* ___user_data0, int32_t ___type1, String_t* ___database2, String_t* ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker4< int32_t, String_t*, String_t*, int64_t >::Invoke(method, ___user_data0, ___type1, ___database2, ___table3, ___rowid4);
}
void strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1_OpenGenericInterface(strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886* __this, RuntimeObject* ___user_data0, int32_t ___type1, String_t* ___database2, String_t* ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker4< int32_t, String_t*, String_t*, int64_t >::Invoke(method, ___user_data0, ___type1, ___database2, ___table3, ___rowid4);
}
// System.Void SQLitePCL.strdelegate_update::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void strdelegate_update__ctor_m6DAB4AF442BA9C4A359D5892DC9F9022D0D6B164 (strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1_Multicast;
}
// System.Void SQLitePCL.strdelegate_update::Invoke(System.Object,System.Int32,System.String,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1 (strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886* __this, RuntimeObject* ___user_data0, int32_t ___type1, String_t* ___database2, String_t* ___table3, int64_t ___rowid4, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, String_t*, String_t*, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___type1, ___database2, ___table3, ___rowid4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.strdelegate_update::BeginInvoke(System.Object,System.Int32,System.String,System.String,System.Int64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* strdelegate_update_BeginInvoke_m8554D2A1EEA5064ABC7BC7FCAD5271FBA8EC2714 (strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886* __this, RuntimeObject* ___user_data0, int32_t ___type1, String_t* ___database2, String_t* ___table3, int64_t ___rowid4, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback5, RuntimeObject* ___object6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___user_data0;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___type1);
	__d_args[2] = ___database2;
	__d_args[3] = ___table3;
	__d_args[4] = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &___rowid4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Void SQLitePCL.strdelegate_update::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void strdelegate_update_EndInvoke_m7B63A257022A1CF7A035C9F0490FC5D55886DAD0 (strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B_Multicast(strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, String_t* ___msg2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1* currentDelegate = reinterpret_cast<strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___user_data0, ___errorCode1, ___msg2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B_Open(strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___user_data0, ___errorCode1, ___msg2, method);
}
void strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B_OpenStaticInvoker(strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, String_t* ___msg2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___user_data0, ___errorCode1, ___msg2);
}
void strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B_ClosedStaticInvoker(strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, String_t* ___msg2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___user_data0, ___errorCode1, ___msg2);
}
void strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B_OpenVirtual(strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, String_t* ___msg2, const RuntimeMethod* method)
{
	VirtualActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___user_data0, ___errorCode1, ___msg2);
}
void strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B_OpenInterface(strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, String_t* ___msg2, const RuntimeMethod* method)
{
	InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___user_data0, ___errorCode1, ___msg2);
}
void strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B_OpenGenericVirtual(strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, String_t* ___msg2, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker2< int32_t, String_t* >::Invoke(method, ___user_data0, ___errorCode1, ___msg2);
}
void strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B_OpenGenericInterface(strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, String_t* ___msg2, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(method, ___user_data0, ___errorCode1, ___msg2);
}
// System.Void SQLitePCL.strdelegate_log::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void strdelegate_log__ctor_mA6A776E3FA150594008BA77EEBAA045F18E13A61 (strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B_Multicast;
}
// System.Void SQLitePCL.strdelegate_log::Invoke(System.Object,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B (strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, String_t* ___msg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___errorCode1, ___msg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.strdelegate_log::BeginInvoke(System.Object,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* strdelegate_log_BeginInvoke_mAE707A55CAD1915A09BAF20361BE7470BEA98AD8 (strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, String_t* ___msg2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___user_data0;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___errorCode1);
	__d_args[2] = ___msg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void SQLitePCL.strdelegate_log::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void strdelegate_log_EndInvoke_mCABD24A69C4952CDE4C1103182FFA6553A5F5A55 (strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
int32_t strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34_Multicast(strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, String_t* ___param02, String_t* ___param13, String_t* ___dbName4, String_t* ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29* currentDelegate = reinterpret_cast<strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___user_data0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34_Open(strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, String_t* ___param02, String_t* ___param13, String_t* ___dbName4, String_t* ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___user_data0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5, method);
}
int32_t strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34_OpenStaticInvoker(strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, String_t* ___param02, String_t* ___param13, String_t* ___dbName4, String_t* ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< int32_t, RuntimeObject*, int32_t, String_t*, String_t*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___user_data0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5);
}
int32_t strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34_ClosedStaticInvoker(strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, String_t* ___param02, String_t* ___param13, String_t* ___dbName4, String_t* ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	return InvokerFuncInvoker7< int32_t, RuntimeObject*, RuntimeObject*, int32_t, String_t*, String_t*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___user_data0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5);
}
int32_t strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34_OpenVirtual(strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, String_t* ___param02, String_t* ___param13, String_t* ___dbName4, String_t* ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	return VirtualFuncInvoker5< int32_t, int32_t, String_t*, String_t*, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___user_data0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5);
}
int32_t strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34_OpenInterface(strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, String_t* ___param02, String_t* ___param13, String_t* ___dbName4, String_t* ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker5< int32_t, int32_t, String_t*, String_t*, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___user_data0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5);
}
int32_t strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34_OpenGenericVirtual(strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, String_t* ___param02, String_t* ___param13, String_t* ___dbName4, String_t* ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker5< int32_t, int32_t, String_t*, String_t*, String_t*, String_t* >::Invoke(method, ___user_data0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5);
}
int32_t strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34_OpenGenericInterface(strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, String_t* ___param02, String_t* ___param13, String_t* ___dbName4, String_t* ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker5< int32_t, int32_t, String_t*, String_t*, String_t*, String_t* >::Invoke(method, ___user_data0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5);
}
// System.Void SQLitePCL.strdelegate_authorizer::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void strdelegate_authorizer__ctor_mC310945C34FFB1A7E592B316C21170BF9D6EFEBF (strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34_Multicast;
}
// System.Int32 SQLitePCL.strdelegate_authorizer::Invoke(System.Object,System.Int32,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34 (strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, String_t* ___param02, String_t* ___param13, String_t* ___dbName4, String_t* ___inner_most_trigger_or_view5, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.strdelegate_authorizer::BeginInvoke(System.Object,System.Int32,System.String,System.String,System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* strdelegate_authorizer_BeginInvoke_mA29CB4EBE0BE427BBD07A270A286A59F841D7B39 (strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, String_t* ___param02, String_t* ___param13, String_t* ___dbName4, String_t* ___inner_most_trigger_or_view5, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback6, RuntimeObject* ___object7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = ___user_data0;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___action_code1);
	__d_args[2] = ___param02;
	__d_args[3] = ___param13;
	__d_args[4] = ___dbName4;
	__d_args[5] = ___inner_most_trigger_or_view5;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);
}
// System.Int32 SQLitePCL.strdelegate_authorizer::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t strdelegate_authorizer_EndInvoke_m36EA782A4DAE1730EEE235C66BB2193573403212 (strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779_Multicast(strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7* __this, RuntimeObject* ___user_data0, String_t* ___s1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7* currentDelegate = reinterpret_cast<strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___user_data0, ___s1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779_Open(strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7* __this, RuntimeObject* ___user_data0, String_t* ___s1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___user_data0, ___s1, method);
}
void strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779_OpenStaticInvoker(strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7* __this, RuntimeObject* ___user_data0, String_t* ___s1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___user_data0, ___s1);
}
void strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779_ClosedStaticInvoker(strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7* __this, RuntimeObject* ___user_data0, String_t* ___s1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___user_data0, ___s1);
}
void strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779_OpenVirtual(strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7* __this, RuntimeObject* ___user_data0, String_t* ___s1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___user_data0, ___s1);
}
void strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779_OpenInterface(strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7* __this, RuntimeObject* ___user_data0, String_t* ___s1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___user_data0, ___s1);
}
void strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779_OpenGenericVirtual(strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7* __this, RuntimeObject* ___user_data0, String_t* ___s1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< String_t* >::Invoke(method, ___user_data0, ___s1);
}
void strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779_OpenGenericInterface(strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7* __this, RuntimeObject* ___user_data0, String_t* ___s1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< String_t* >::Invoke(method, ___user_data0, ___s1);
}
// System.Void SQLitePCL.strdelegate_trace::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void strdelegate_trace__ctor_m8E9CA541DAA839E4E00AEBF75B6269D6E9D98450 (strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779_Open;
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
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779_Multicast;
}
// System.Void SQLitePCL.strdelegate_trace::Invoke(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779 (strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7* __this, RuntimeObject* ___user_data0, String_t* ___s1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___s1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.strdelegate_trace::BeginInvoke(System.Object,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* strdelegate_trace_BeginInvoke_mD8F9ED0FFD62D78C22046CA460049BF52606A766 (strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7* __this, RuntimeObject* ___user_data0, String_t* ___s1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___user_data0;
	__d_args[1] = ___s1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void SQLitePCL.strdelegate_trace::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void strdelegate_trace_EndInvoke_mA45FAB698B9AB59523F3CD269DA6736E096E986F (strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4_Multicast(strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C* __this, RuntimeObject* ___user_data0, String_t* ___statement1, int64_t ___ns2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C* currentDelegate = reinterpret_cast<strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, int64_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___user_data0, ___statement1, ___ns2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4_Open(strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C* __this, RuntimeObject* ___user_data0, String_t* ___statement1, int64_t ___ns2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___user_data0, ___statement1, ___ns2, method);
}
void strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4_OpenStaticInvoker(strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C* __this, RuntimeObject* ___user_data0, String_t* ___statement1, int64_t ___ns2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, int64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___user_data0, ___statement1, ___ns2);
}
void strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4_ClosedStaticInvoker(strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C* __this, RuntimeObject* ___user_data0, String_t* ___statement1, int64_t ___ns2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, String_t*, int64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___user_data0, ___statement1, ___ns2);
}
void strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4_OpenVirtual(strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C* __this, RuntimeObject* ___user_data0, String_t* ___statement1, int64_t ___ns2, const RuntimeMethod* method)
{
	VirtualActionInvoker2< String_t*, int64_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___user_data0, ___statement1, ___ns2);
}
void strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4_OpenInterface(strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C* __this, RuntimeObject* ___user_data0, String_t* ___statement1, int64_t ___ns2, const RuntimeMethod* method)
{
	InterfaceActionInvoker2< String_t*, int64_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___user_data0, ___statement1, ___ns2);
}
void strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4_OpenGenericVirtual(strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C* __this, RuntimeObject* ___user_data0, String_t* ___statement1, int64_t ___ns2, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker2< String_t*, int64_t >::Invoke(method, ___user_data0, ___statement1, ___ns2);
}
void strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4_OpenGenericInterface(strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C* __this, RuntimeObject* ___user_data0, String_t* ___statement1, int64_t ___ns2, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker2< String_t*, int64_t >::Invoke(method, ___user_data0, ___statement1, ___ns2);
}
// System.Void SQLitePCL.strdelegate_profile::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void strdelegate_profile__ctor_m616250D15C9B8988A290BADA57FCA9BF4FA80466 (strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4_Multicast;
}
// System.Void SQLitePCL.strdelegate_profile::Invoke(System.Object,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4 (strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C* __this, RuntimeObject* ___user_data0, String_t* ___statement1, int64_t ___ns2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___statement1, ___ns2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.strdelegate_profile::BeginInvoke(System.Object,System.String,System.Int64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* strdelegate_profile_BeginInvoke_m5D185B48B413256C262402E93FD6ACF34C4ECF8A (strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C* __this, RuntimeObject* ___user_data0, String_t* ___statement1, int64_t ___ns2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___user_data0;
	__d_args[1] = ___statement1;
	__d_args[2] = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &___ns2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void SQLitePCL.strdelegate_profile::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void strdelegate_profile_EndInvoke_m44B4E88A500ED49CC0B7931CE0953DE31B55C453 (strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
int32_t strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6_Multicast(strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583* __this, RuntimeObject* ___user_data0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583* currentDelegate = reinterpret_cast<strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___user_data0, ___values1, ___names2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6_Open(strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583* __this, RuntimeObject* ___user_data0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___user_data0, ___values1, ___names2, method);
}
int32_t strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6_OpenStaticInvoker(strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583* __this, RuntimeObject* ___user_data0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(__this->___method_ptr_0, method, NULL, ___user_data0, ___values1, ___names2);
}
int32_t strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6_ClosedStaticInvoker(strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583* __this, RuntimeObject* ___user_data0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___user_data0, ___values1, ___names2);
}
int32_t strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6_OpenVirtual(strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583* __this, RuntimeObject* ___user_data0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names2, const RuntimeMethod* method)
{
	return VirtualFuncInvoker2< int32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(il2cpp_codegen_method_get_slot(method), ___user_data0, ___values1, ___names2);
}
int32_t strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6_OpenInterface(strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583* __this, RuntimeObject* ___user_data0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names2, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker2< int32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___user_data0, ___values1, ___names2);
}
int32_t strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6_OpenGenericVirtual(strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583* __this, RuntimeObject* ___user_data0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names2, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker2< int32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(method, ___user_data0, ___values1, ___names2);
}
int32_t strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6_OpenGenericInterface(strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583* __this, RuntimeObject* ___user_data0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names2, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker2< int32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(method, ___user_data0, ___values1, ___names2);
}
// System.Void SQLitePCL.strdelegate_exec::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void strdelegate_exec__ctor_m57C8B8AD8E009D95BA068CFD59AF5B538E6F8546 (strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6_Multicast;
}
// System.Int32 SQLitePCL.strdelegate_exec::Invoke(System.Object,System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6 (strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583* __this, RuntimeObject* ___user_data0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___values1, ___names2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.strdelegate_exec::BeginInvoke(System.Object,System.String[],System.String[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* strdelegate_exec_BeginInvoke_mD092C6FE4DF919774854345FE5AD2908CA01FB59 (strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583* __this, RuntimeObject* ___user_data0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___user_data0;
	__d_args[1] = ___values1;
	__d_args[2] = ___names2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 SQLitePCL.strdelegate_exec::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t strdelegate_exec_EndInvoke_mAB7A56B39F061F647DA3AC0FB5B7DFD7F4CE9B1D (strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void SQLitePCL.raw::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw__cctor_mE6ABA68861D08297F71BE80EE07D2640504366F1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____frozen_1 = (bool)0;
		return;
	}
}
// System.Void SQLitePCL.raw::SetProvider(SQLitePCL.ISQLite3Provider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_SetProvider_mEC01EFE9081BE118C5DF38C964F852456E0663BA (RuntimeObject* ___imp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		bool L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____frozen_1;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___imp0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_libversion_number() */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___imp0;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0), (void*)L_3);
		return;
	}
}
// System.Void SQLitePCL.raw::FreezeProvider(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_FreezeProvider_m71B3EB4532474A397D9124E72C3863AE01438772 (bool ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____frozen_1 = L_0;
		return;
	}
}
// System.String SQLitePCL.raw::GetNativeLibraryName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* raw_GetNativeLibraryName_m5D4EB0592B3D7CA88FAB4CF93F4C34268E10B015 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String SQLitePCL.ISQLite3Provider::GetNativeLibraryName() */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_open(SQLitePCL.utf8z,SQLitePCL.sqlite3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_open_m6F0160C534C3480B4A19E832622C14037D7184E7 (utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___filename0, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2** ___db1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_1 = ___filename0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, intptr_t* >::Invoke(1 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_open(SQLitePCL.utf8z,System.IntPtr&) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, (&V_0));
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2** L_3 = ___db1;
		intptr_t L_4 = V_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_5;
		L_5 = sqlite3_New_m4AF72342C8DBAD56760AD10A9D730D9EC80FB1C9(L_4, NULL);
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_5);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_open(System.String,SQLitePCL.sqlite3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_open_mBE1880DA90D0B46915B988FC67CAE1E0C08D5C82 (String_t* ___filename0, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2** ___db1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___filename0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_1;
		L_1 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_0, NULL);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2** L_2 = ___db1;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = raw_sqlite3_open_m6F0160C534C3480B4A19E832622C14037D7184E7(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_open_v2(SQLitePCL.utf8z,SQLitePCL.sqlite3&,System.Int32,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_open_v2_m78EB0522EB1E15E93A4071695B590DF98EF51179 (utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___filename0, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2** ___db1, int32_t ___flags2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___vfs3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_1 = ___filename0;
		int32_t L_2 = ___flags2;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3 = ___vfs3;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker4< int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, intptr_t*, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(2 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_open_v2(SQLitePCL.utf8z,System.IntPtr&,System.Int32,SQLitePCL.utf8z) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, (&V_0), L_2, L_3);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2** L_5 = ___db1;
		intptr_t L_6 = V_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_7;
		L_7 = sqlite3_New_m4AF72342C8DBAD56760AD10A9D730D9EC80FB1C9(L_6, NULL);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_7);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_open_v2(System.String,SQLitePCL.sqlite3&,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_open_v2_m90A4B75F39E43A1B344EC5E2F165402F3C584F08 (String_t* ___filename0, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2** ___db1, int32_t ___flags2, String_t* ___vfs3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___filename0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_1;
		L_1 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_0, NULL);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2** L_2 = ___db1;
		int32_t L_3 = ___flags2;
		String_t* L_4 = ___vfs3;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_5;
		L_5 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = raw_sqlite3_open_v2_m78EB0522EB1E15E93A4071695B590DF98EF51179(L_1, L_2, L_3, L_5, NULL);
		return L_6;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3__vfs__delete(SQLitePCL.utf8z,SQLitePCL.utf8z,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3__vfs__delete_m91B70C6EF1BA309F7D97965AA9ACAF467A3DAC41 (utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___vfs0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___pathname1, int32_t ___syncdir2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_1 = ___vfs0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2 = ___pathname1;
		int32_t L_3 = ___syncdir2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker3< int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int32_t >::Invoke(7 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3__vfs__delete(SQLitePCL.utf8z,SQLitePCL.utf8z,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3__vfs__delete(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3__vfs__delete_mAABB69772C0DA8436DA38AD743A9B8D38BE165FF (String_t* ___vfs0, String_t* ___pathname1, int32_t ___syncdir2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___vfs0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_1;
		L_1 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_0, NULL);
		String_t* L_2 = ___pathname1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_2, NULL);
		int32_t L_4 = ___syncdir2;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = raw_sqlite3__vfs__delete_m91B70C6EF1BA309F7D97965AA9ACAF467A3DAC41(L_1, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Int32 SQLitePCL.raw::internal_sqlite3_close_v2(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_internal_sqlite3_close_v2_mCE5CD4ED10FD8ACCA988D4AD708FBFD8815C499D (intptr_t ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		intptr_t L_1 = ___p0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(3 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_close_v2(System.IntPtr) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::internal_sqlite3_close(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_internal_sqlite3_close_mE779057FC6194468638B64928D67BAEF0BE69E5F (intptr_t ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		intptr_t L_1 = ___p0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(4 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_close(System.IntPtr) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_close_v2(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_close_v2_m83C45430E4462949ED0DF9D8A6B412CEC336241C (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = sqlite3_manual_close_v2_m9913465FCFAA3E200B65FC3E7396D23B00D5351C(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_close(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_close_mB4771F1456C8AC710FC1C38B755E124087FA6A44 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = sqlite3_manual_close_m385D8CE62C53FB890E5878C8FC353A95485514CC(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_enable_shared_cache(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_enable_shared_cache_m228E13D7BFFDEFBA37093F0855C2085B6AB85B1F (int32_t ___enable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		int32_t L_1 = ___enable0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(5 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_enable_shared_cache(System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void SQLitePCL.raw::sqlite3_interrupt(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_interrupt_m988F598114866F2F0C58C1C1C5AFF946C5BAE9C5 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		NullCheck(L_0);
		InterfaceActionInvoker1< sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* >::Invoke(6 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_interrupt(SQLitePCL.sqlite3) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_config_log(SQLitePCL.delegate_log,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_config_log_m0A0F2CA1CBA01D0B5DC0D6720E3CBB42544799AF (delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* ___f0, RuntimeObject* ___v1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* L_1 = ___f0;
		RuntimeObject* L_2 = ___v1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712*, RuntimeObject* >::Invoke(75 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_config_log(SQLitePCL.delegate_log,System.Object) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_config_log(SQLitePCL.strdelegate_log,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_config_log_mD54A8873AC9ED095C3EE35FCCB010482C70A58E1 (strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1* ___f0, RuntimeObject* ___v1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass226_0_U3Csqlite3_config_logU3Eb__0_m26F32F9E2374FC8B0797F483716049E0BC8A915D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass226_0_t4A5A9270B5ABBDD4FE82B7325920FCAD7A653B69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass226_0_t4A5A9270B5ABBDD4FE82B7325920FCAD7A653B69* V_0 = NULL;
	delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass226_0_t4A5A9270B5ABBDD4FE82B7325920FCAD7A653B69* L_0 = (U3CU3Ec__DisplayClass226_0_t4A5A9270B5ABBDD4FE82B7325920FCAD7A653B69*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass226_0_t4A5A9270B5ABBDD4FE82B7325920FCAD7A653B69_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass226_0__ctor_m9564EB56D4FA4F63C21FA995AF16A460FBA8D37E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass226_0_t4A5A9270B5ABBDD4FE82B7325920FCAD7A653B69* L_1 = V_0;
		strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1* L_2 = ___f0;
		NullCheck(L_1);
		L_1->___f_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___f_0), (void*)L_2);
		U3CU3Ec__DisplayClass226_0_t4A5A9270B5ABBDD4FE82B7325920FCAD7A653B69* L_3 = V_0;
		NullCheck(L_3);
		strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1* L_4 = L_3->___f_0;
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		V_1 = (delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712*)NULL;
		goto IL_0026;
	}

IL_0019:
	{
		U3CU3Ec__DisplayClass226_0_t4A5A9270B5ABBDD4FE82B7325920FCAD7A653B69* L_5 = V_0;
		delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* L_6 = (delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712*)il2cpp_codegen_object_new(delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		delegate_log__ctor_m90FE70F302D363779BDD720CE99A7B2A6B07E02A(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass226_0_U3Csqlite3_config_logU3Eb__0_m26F32F9E2374FC8B0797F483716049E0BC8A915D_RuntimeMethod_var), NULL);
		V_1 = L_6;
	}

IL_0026:
	{
		delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* L_7 = V_1;
		RuntimeObject* L_8 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = raw_sqlite3_config_log_m0A0F2CA1CBA01D0B5DC0D6720E3CBB42544799AF(L_7, L_8, NULL);
		return L_9;
	}
}
// System.Void SQLitePCL.raw::sqlite3_log(System.Int32,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_log_m08B9354BD085A2B4C37BFCAB478451A3048E78B9 (int32_t ___errcode0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___s1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		int32_t L_1 = ___errcode0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2 = ___s1;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(76 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_log(System.Int32,SQLitePCL.utf8z) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_log(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_log_mC346D01E8A5930C102E3A5EC59410DEB38B3AB50 (int32_t ___errcode0, String_t* ___s1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___errcode0;
		String_t* L_1 = ___s1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		raw_sqlite3_log_m08B9354BD085A2B4C37BFCAB478451A3048E78B9(L_0, L_2, NULL);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_commit_hook(SQLitePCL.sqlite3,SQLitePCL.delegate_commit,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_commit_hook_mD180C13131600A5F6496577EB31AA2774D6056E5 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* ___f1, RuntimeObject* ___v2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* L_2 = ___f1;
		RuntimeObject* L_3 = ___v2;
		NullCheck(L_0);
		InterfaceActionInvoker3< sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A*, RuntimeObject* >::Invoke(77 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_commit_hook(SQLitePCL.sqlite3,SQLitePCL.delegate_commit,System.Object) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_rollback_hook(SQLitePCL.sqlite3,SQLitePCL.delegate_rollback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_rollback_hook_m60B62F10E3C495731B988E8D2819D3EFEAB639E9 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* ___f1, RuntimeObject* ___v2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* L_2 = ___f1;
		RuntimeObject* L_3 = ___v2;
		NullCheck(L_0);
		InterfaceActionInvoker3< sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174*, RuntimeObject* >::Invoke(78 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_rollback_hook(SQLitePCL.sqlite3,SQLitePCL.delegate_rollback,System.Object) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_trace(SQLitePCL.sqlite3,SQLitePCL.delegate_trace,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_trace_m247AD053E77D350B12227DC306678570E3BA6A35 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* ___f1, RuntimeObject* ___v2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* L_2 = ___f1;
		RuntimeObject* L_3 = ___v2;
		NullCheck(L_0);
		InterfaceActionInvoker3< sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172*, RuntimeObject* >::Invoke(79 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_trace(SQLitePCL.sqlite3,SQLitePCL.delegate_trace,System.Object) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_trace(SQLitePCL.sqlite3,SQLitePCL.strdelegate_trace,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_trace_m8F7E4A5DADE66437F53EB5023019ACFB22296DFB (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7* ___f1, RuntimeObject* ___v2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass232_0_U3Csqlite3_traceU3Eb__0_mE4F8F6801710A554C17482F07EC82C78431C405F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass232_0_t838D8309C6E5622A939C813FB0CE2B1C640B62EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass232_0_t838D8309C6E5622A939C813FB0CE2B1C640B62EF* V_0 = NULL;
	delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass232_0_t838D8309C6E5622A939C813FB0CE2B1C640B62EF* L_0 = (U3CU3Ec__DisplayClass232_0_t838D8309C6E5622A939C813FB0CE2B1C640B62EF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass232_0_t838D8309C6E5622A939C813FB0CE2B1C640B62EF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass232_0__ctor_m620499771C11ED7DAE428E57C7104248921364AE(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass232_0_t838D8309C6E5622A939C813FB0CE2B1C640B62EF* L_1 = V_0;
		strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7* L_2 = ___f1;
		NullCheck(L_1);
		L_1->___f_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___f_0), (void*)L_2);
		U3CU3Ec__DisplayClass232_0_t838D8309C6E5622A939C813FB0CE2B1C640B62EF* L_3 = V_0;
		RuntimeObject* L_4 = ___v2;
		NullCheck(L_3);
		L_3->___v_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___v_1), (void*)L_4);
		U3CU3Ec__DisplayClass232_0_t838D8309C6E5622A939C813FB0CE2B1C640B62EF* L_5 = V_0;
		NullCheck(L_5);
		strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7* L_6 = L_5->___f_0;
		if (L_6)
		{
			goto IL_0020;
		}
	}
	{
		V_1 = (delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172*)NULL;
		goto IL_002d;
	}

IL_0020:
	{
		U3CU3Ec__DisplayClass232_0_t838D8309C6E5622A939C813FB0CE2B1C640B62EF* L_7 = V_0;
		delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* L_8 = (delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172*)il2cpp_codegen_object_new(delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		delegate_trace__ctor_m363F86F59BCE053BF974338A6E05C69C95C8D189(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass232_0_U3Csqlite3_traceU3Eb__0_mE4F8F6801710A554C17482F07EC82C78431C405F_RuntimeMethod_var), NULL);
		V_1 = L_8;
	}

IL_002d:
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_9 = ___db0;
		delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* L_10 = V_1;
		U3CU3Ec__DisplayClass232_0_t838D8309C6E5622A939C813FB0CE2B1C640B62EF* L_11 = V_0;
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->___v_1;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		raw_sqlite3_trace_m247AD053E77D350B12227DC306678570E3BA6A35(L_9, L_10, L_12, NULL);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_profile(SQLitePCL.sqlite3,SQLitePCL.delegate_profile,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_profile_m7A05E057D5ECEA3BD7ABF21DAE9527F6B45A5A71 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* ___f1, RuntimeObject* ___v2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* L_2 = ___f1;
		RuntimeObject* L_3 = ___v2;
		NullCheck(L_0);
		InterfaceActionInvoker3< sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779*, RuntimeObject* >::Invoke(80 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_profile(SQLitePCL.sqlite3,SQLitePCL.delegate_profile,System.Object) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_profile(SQLitePCL.sqlite3,SQLitePCL.strdelegate_profile,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_profile_m340D9CD862A7B16B5F3C49791F2C82CA2ED22080 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C* ___f1, RuntimeObject* ___v2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass234_0_U3Csqlite3_profileU3Eb__0_m8DF2072D68DEB046137A16CA78707BDB673F2BD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass234_0_t747F31218868C8520EF94BBFFC80D59BA3312B30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass234_0_t747F31218868C8520EF94BBFFC80D59BA3312B30* V_0 = NULL;
	delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass234_0_t747F31218868C8520EF94BBFFC80D59BA3312B30* L_0 = (U3CU3Ec__DisplayClass234_0_t747F31218868C8520EF94BBFFC80D59BA3312B30*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass234_0_t747F31218868C8520EF94BBFFC80D59BA3312B30_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass234_0__ctor_m77533514D4847F355E28FEEE9ACFD78AB8D056AD(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass234_0_t747F31218868C8520EF94BBFFC80D59BA3312B30* L_1 = V_0;
		strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C* L_2 = ___f1;
		NullCheck(L_1);
		L_1->___f_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___f_0), (void*)L_2);
		U3CU3Ec__DisplayClass234_0_t747F31218868C8520EF94BBFFC80D59BA3312B30* L_3 = V_0;
		RuntimeObject* L_4 = ___v2;
		NullCheck(L_3);
		L_3->___v_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___v_1), (void*)L_4);
		U3CU3Ec__DisplayClass234_0_t747F31218868C8520EF94BBFFC80D59BA3312B30* L_5 = V_0;
		NullCheck(L_5);
		strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C* L_6 = L_5->___f_0;
		if (L_6)
		{
			goto IL_0020;
		}
	}
	{
		V_1 = (delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779*)NULL;
		goto IL_002d;
	}

IL_0020:
	{
		U3CU3Ec__DisplayClass234_0_t747F31218868C8520EF94BBFFC80D59BA3312B30* L_7 = V_0;
		delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* L_8 = (delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779*)il2cpp_codegen_object_new(delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		delegate_profile__ctor_mACA8FE55EFC53A98950C22BD55D8B8C0A3F6CEDA(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass234_0_U3Csqlite3_profileU3Eb__0_m8DF2072D68DEB046137A16CA78707BDB673F2BD1_RuntimeMethod_var), NULL);
		V_1 = L_8;
	}

IL_002d:
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_9 = ___db0;
		delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* L_10 = V_1;
		U3CU3Ec__DisplayClass234_0_t747F31218868C8520EF94BBFFC80D59BA3312B30* L_11 = V_0;
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->___v_1;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		raw_sqlite3_profile_m7A05E057D5ECEA3BD7ABF21DAE9527F6B45A5A71(L_9, L_10, L_12, NULL);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_progress_handler(SQLitePCL.sqlite3,System.Int32,SQLitePCL.delegate_progress,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_progress_handler_m14C8E97F0EEA6F907CC0BA546BE811A4BA1C995D (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___instructions1, delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* ___func2, RuntimeObject* ___v3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		int32_t L_2 = ___instructions1;
		delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* L_3 = ___func2;
		RuntimeObject* L_4 = ___v3;
		NullCheck(L_0);
		InterfaceActionInvoker4< sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, int32_t, delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710*, RuntimeObject* >::Invoke(81 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_progress_handler(SQLitePCL.sqlite3,System.Int32,SQLitePCL.delegate_progress,System.Object) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_update_hook(SQLitePCL.sqlite3,SQLitePCL.delegate_update,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_update_hook_mBB462BCA7FD65D0B7D2A35FC74353E52718F2349 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* ___f1, RuntimeObject* ___v2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* L_2 = ___f1;
		RuntimeObject* L_3 = ___v2;
		NullCheck(L_0);
		InterfaceActionInvoker3< sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80*, RuntimeObject* >::Invoke(82 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_update_hook(SQLitePCL.sqlite3,SQLitePCL.delegate_update,System.Object) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_update_hook(SQLitePCL.sqlite3,SQLitePCL.strdelegate_update,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_update_hook_m82E0DDF3281209D43C166AD447829836363E2DD4 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886* ___f1, RuntimeObject* ___v2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass237_0_U3Csqlite3_update_hookU3Eb__0_m6DE23FBE7CD85295CA402EFA6CBFED72F5D02FC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass237_0_t2A0DCC483EE166D297FE81DFE52453F10AE5610B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass237_0_t2A0DCC483EE166D297FE81DFE52453F10AE5610B* V_0 = NULL;
	delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass237_0_t2A0DCC483EE166D297FE81DFE52453F10AE5610B* L_0 = (U3CU3Ec__DisplayClass237_0_t2A0DCC483EE166D297FE81DFE52453F10AE5610B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass237_0_t2A0DCC483EE166D297FE81DFE52453F10AE5610B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass237_0__ctor_m733A68B0C5388A210975309A07AF33D78B7970B3(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass237_0_t2A0DCC483EE166D297FE81DFE52453F10AE5610B* L_1 = V_0;
		strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886* L_2 = ___f1;
		NullCheck(L_1);
		L_1->___f_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___f_0), (void*)L_2);
		U3CU3Ec__DisplayClass237_0_t2A0DCC483EE166D297FE81DFE52453F10AE5610B* L_3 = V_0;
		NullCheck(L_3);
		strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886* L_4 = L_3->___f_0;
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		V_1 = (delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80*)NULL;
		goto IL_0026;
	}

IL_0019:
	{
		U3CU3Ec__DisplayClass237_0_t2A0DCC483EE166D297FE81DFE52453F10AE5610B* L_5 = V_0;
		delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* L_6 = (delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80*)il2cpp_codegen_object_new(delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		delegate_update__ctor_m17032A8DE0B56F6F7EEB38252AA6FF345689EE93(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass237_0_U3Csqlite3_update_hookU3Eb__0_m6DE23FBE7CD85295CA402EFA6CBFED72F5D02FC6_RuntimeMethod_var), NULL);
		V_1 = L_6;
	}

IL_0026:
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_7 = ___db0;
		delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* L_8 = V_1;
		RuntimeObject* L_9 = ___v2;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		raw_sqlite3_update_hook_mBB462BCA7FD65D0B7D2A35FC74353E52718F2349(L_7, L_8, L_9, NULL);
		return;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_create_collation(SQLitePCL.sqlite3,System.String,System.Object,SQLitePCL.strdelegate_collation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_create_collation_mB031DCAC82A60AE3B9B630A94A22B4069A925F83 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, String_t* ___name1, RuntimeObject* ___v2, strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E* ___f3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass238_0_U3Csqlite3_create_collationU3Eb__0_m8377610D91204FBAF180DFAC4F9B10241ADACB41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass238_0_t28AFD70323281419F99ABE6BC2FB9B400677BFEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass238_0_t28AFD70323281419F99ABE6BC2FB9B400677BFEB* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass238_0_t28AFD70323281419F99ABE6BC2FB9B400677BFEB* L_0 = (U3CU3Ec__DisplayClass238_0_t28AFD70323281419F99ABE6BC2FB9B400677BFEB*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass238_0_t28AFD70323281419F99ABE6BC2FB9B400677BFEB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass238_0__ctor_mAB023B9700651578079226B73102E10002DB2105(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass238_0_t28AFD70323281419F99ABE6BC2FB9B400677BFEB* L_1 = V_0;
		strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E* L_2 = ___f3;
		NullCheck(L_1);
		L_1->___f_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___f_0), (void*)L_2);
		String_t* L_3 = ___name1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = util_to_utf8_with_z_mF0006630D3F60F4AFB8C6D7892AF46A7F897CCA6(L_3, NULL);
		V_1 = L_4;
		U3CU3Ec__DisplayClass238_0_t28AFD70323281419F99ABE6BC2FB9B400677BFEB* L_5 = V_0;
		NullCheck(L_5);
		strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E* L_6 = L_5->___f_0;
		if (L_6)
		{
			goto IL_0020;
		}
	}
	{
		V_2 = (delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF*)NULL;
		goto IL_002d;
	}

IL_0020:
	{
		U3CU3Ec__DisplayClass238_0_t28AFD70323281419F99ABE6BC2FB9B400677BFEB* L_7 = V_0;
		delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* L_8 = (delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF*)il2cpp_codegen_object_new(delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		delegate_collation__ctor_mF884888642B63BD696BC37E898161379BDAA85AB(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass238_0_U3Csqlite3_create_collationU3Eb__0_m8377610D91204FBAF180DFAC4F9B10241ADACB41_RuntimeMethod_var), NULL);
		V_2 = L_8;
	}

IL_002d:
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_10 = ___db0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		RuntimeObject* L_12 = ___v2;
		delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* L_13 = V_2;
		NullCheck(L_9);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker4< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* >::Invoke(83 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_create_collation(SQLitePCL.sqlite3,System.Byte[],System.Object,SQLitePCL.delegate_collation) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_9, L_10, L_11, L_12, L_13);
		return L_14;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_create_function(SQLitePCL.sqlite3,System.String,System.Int32,System.Int32,System.Object,SQLitePCL.delegate_function_scalar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_create_function_m0E9E37065C3D24AB70A03DC3FEA8A150106176E0 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, String_t* ___name1, int32_t ___nArg2, int32_t ___flags3, RuntimeObject* ___v4, delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* ___func5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___name1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = util_to_utf8_with_z_mF0006630D3F60F4AFB8C6D7892AF46A7F897CCA6(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_3 = ___db0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5 = ___nArg2;
		int32_t L_6 = ___flags3;
		RuntimeObject* L_7 = ___v4;
		delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* L_8 = ___func5;
		NullCheck(L_2);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker6< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, RuntimeObject*, delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* >::Invoke(84 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_create_function(SQLitePCL.sqlite3,System.Byte[],System.Int32,System.Int32,System.Object,SQLitePCL.delegate_function_scalar) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_create_function(SQLitePCL.sqlite3,System.String,System.Int32,System.Int32,System.Object,SQLitePCL.delegate_function_aggregate_step,SQLitePCL.delegate_function_aggregate_final)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_create_function_mCEF073A616D75D1858F9D927EC11ED5AF3165360 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, String_t* ___name1, int32_t ___nArg2, int32_t ___flags3, RuntimeObject* ___v4, delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* ___func_step5, delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* ___func_final6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___name1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = util_to_utf8_with_z_mF0006630D3F60F4AFB8C6D7892AF46A7F897CCA6(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_3 = ___db0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5 = ___nArg2;
		int32_t L_6 = ___flags3;
		RuntimeObject* L_7 = ___v4;
		delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* L_8 = ___func_step5;
		delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* L_9 = ___func_final6;
		NullCheck(L_2);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker7< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, RuntimeObject*, delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957*, delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* >::Invoke(85 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_create_function(SQLitePCL.sqlite3,System.Byte[],System.Int32,System.Int32,System.Object,SQLitePCL.delegate_function_aggregate_step,SQLitePCL.delegate_function_aggregate_final) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9);
		return L_10;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_create_function(SQLitePCL.sqlite3,System.String,System.Int32,System.Object,SQLitePCL.delegate_function_scalar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_create_function_mCF6C2760B96C2AB8C54523E65FB4C87A95D0681B (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, String_t* ___name1, int32_t ___nArg2, RuntimeObject* ___v3, delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* ___func4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		String_t* L_1 = ___name1;
		int32_t L_2 = ___nArg2;
		RuntimeObject* L_3 = ___v3;
		delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* L_4 = ___func4;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = raw_sqlite3_create_function_m0E9E37065C3D24AB70A03DC3FEA8A150106176E0(L_0, L_1, L_2, 0, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_create_function(SQLitePCL.sqlite3,System.String,System.Int32,System.Object,SQLitePCL.delegate_function_aggregate_step,SQLitePCL.delegate_function_aggregate_final)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_create_function_m46C12168C6A9D971E0FE962918417198697CE11D (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, String_t* ___name1, int32_t ___nArg2, RuntimeObject* ___v3, delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* ___func_step4, delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* ___func_final5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		String_t* L_1 = ___name1;
		int32_t L_2 = ___nArg2;
		RuntimeObject* L_3 = ___v3;
		delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* L_4 = ___func_step4;
		delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* L_5 = ___func_final5;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = raw_sqlite3_create_function_mCEF073A616D75D1858F9D927EC11ED5AF3165360(L_0, L_1, L_2, 0, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_db_status(SQLitePCL.sqlite3,System.Int32,System.Int32&,System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_db_status_m2293F2F8EC27EC4049421E91E4D4C8494D2A94FD (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___op1, int32_t* ___current2, int32_t* ___highest3, int32_t ___resetFlg4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		int32_t L_2 = ___op1;
		int32_t* L_3 = ___current2;
		int32_t* L_4 = ___highest3;
		int32_t L_5 = ___resetFlg4;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker5< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, int32_t, int32_t*, int32_t*, int32_t >::Invoke(86 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_db_status(SQLitePCL.sqlite3,System.Int32,System.Int32&,System.Int32&,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.String SQLitePCL.raw::utf8_span_to_string(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* raw_utf8_span_to_string_m42B7194C8F5E548DA785C3249BDD5EB2DA794024 (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline((&___p0), ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000f:
	{
		uint8_t* L_1;
		L_1 = ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8((&___p0), ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_2);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		uint8_t* L_4 = V_0;
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline((&___p0), ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		NullCheck(L_3);
		String_t* L_6;
		L_6 = Encoding_GetString_m42BFF0862341DCD5289A7D75B5D7A22CE9690EAD(L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_key(SQLitePCL.sqlite3,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_key_m14131A4CBA0B86AC43F1AECB4A30C6D7ADB0ADDF (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___k1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_2 = ___k1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A >::Invoke(121 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_key(SQLitePCL.sqlite3,System.ReadOnlySpan`1<System.Byte>) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_key_v2(SQLitePCL.sqlite3,SQLitePCL.utf8z,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_key_v2_mD272C1D5BB84CE889E64554120D71AC1E685702F (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___name1, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___k2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2 = ___name1;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_3 = ___k2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker3< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A >::Invoke(122 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_key_v2(SQLitePCL.sqlite3,SQLitePCL.utf8z,System.ReadOnlySpan`1<System.Byte>) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_rekey(SQLitePCL.sqlite3,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_rekey_m7A8A3227594D6B3996DD74C813AD9003F41E0C06 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___k1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_2 = ___k1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A >::Invoke(123 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_rekey(SQLitePCL.sqlite3,System.ReadOnlySpan`1<System.Byte>) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_rekey_v2(SQLitePCL.sqlite3,SQLitePCL.utf8z,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_rekey_v2_mAD1A02C083B09E7A70FF816BAEDC3B5F1D1C205B (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___name1, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___k2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2 = ___name1;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_3 = ___k2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker3< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A >::Invoke(124 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_rekey_v2(SQLitePCL.sqlite3,SQLitePCL.utf8z,System.ReadOnlySpan`1<System.Byte>) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// SQLitePCL.utf8z SQLitePCL.raw::sqlite3_libversion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 raw_sqlite3_libversion_m1AA012733BDECBB80D94B62F654EF93D0A57B894 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		NullCheck(L_0);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_1;
		L_1 = InterfaceFuncInvoker0< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(9 /* SQLitePCL.utf8z SQLitePCL.ISQLite3Provider::sqlite3_libversion() */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_libversion_number()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_libversion_number_m1CDE1B317D17B00F997D2266865A9379615CF829 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_libversion_number() */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_threadsafe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_threadsafe_m3C4C9F4390B0E988774991107FBADAD893DE4CFD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_threadsafe() */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_initialize_m5AB4F2683168FB4600B2F7525547A86E3EA03E6F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(125 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_initialize() */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_shutdown_m11D820415F226E32E910F2960D19DB58D8ACCE98 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(126 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_shutdown() */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_config(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_config_mC50763E3E11792A2E2C082F9752FC443D50BFD13 (int32_t ___op0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		int32_t L_1 = ___op0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(127 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_config(System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_config(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_config_m239514749169399EA35A775FA012954353F0A3FB (int32_t ___op0, int32_t ___val1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		int32_t L_1 = ___op0;
		int32_t L_2 = ___val1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(128 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_config(System.Int32,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_enable_load_extension(SQLitePCL.sqlite3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_enable_load_extension_m2AA758753F42BEC307CB04BE35814E1D8AE39460 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___onoff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		int32_t L_2 = ___onoff1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, int32_t >::Invoke(129 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_enable_load_extension(SQLitePCL.sqlite3,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// SQLitePCL.utf8z SQLitePCL.raw::sqlite3_sourceid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 raw_sqlite3_sourceid_mF31CDEBCE2292E09818DDE2675ED96A462CFB472 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		NullCheck(L_0);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_1;
		L_1 = InterfaceFuncInvoker0< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(11 /* SQLitePCL.utf8z SQLitePCL.ISQLite3Provider::sqlite3_sourceid() */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int64 SQLitePCL.raw::sqlite3_memory_used()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t raw_sqlite3_memory_used_m2E0DAB3125C29B681590721BA09907D326C45972 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = InterfaceFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 SQLitePCL.ISQLite3Provider::sqlite3_memory_used() */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int64 SQLitePCL.raw::sqlite3_memory_highwater(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t raw_sqlite3_memory_highwater_mEAF8BFB761FAD001A0A1EADB7E30090CB68CA942 (int32_t ___resetFlag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		int32_t L_1 = ___resetFlag0;
		NullCheck(L_0);
		int64_t L_2;
		L_2 = InterfaceFuncInvoker1< int64_t, int32_t >::Invoke(13 /* System.Int64 SQLitePCL.ISQLite3Provider::sqlite3_memory_highwater(System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_status(System.Int32,System.Int32&,System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_status_m69D9C8711ABB2B81CEA7C084747F34919B993678 (int32_t ___op0, int32_t* ___current1, int32_t* ___highwater2, int32_t ___resetFlag3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		int32_t L_1 = ___op0;
		int32_t* L_2 = ___current1;
		int32_t* L_3 = ___highwater2;
		int32_t L_4 = ___resetFlag3;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker4< int32_t, int32_t, int32_t*, int32_t*, int32_t >::Invoke(14 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_status(System.Int32,System.Int32&,System.Int32&,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// SQLitePCL.utf8z SQLitePCL.raw::sqlite3_errmsg(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 raw_sqlite3_errmsg_mDBF6174A8E296A2955CE493B1B832821C370B73B (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		NullCheck(L_0);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = InterfaceFuncInvoker1< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* >::Invoke(17 /* SQLitePCL.utf8z SQLitePCL.ISQLite3Provider::sqlite3_errmsg(SQLitePCL.sqlite3) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_db_readonly(SQLitePCL.sqlite3,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_db_readonly_m269CA4AAF36C451C4E639FE3DE9AA1AB5BD0B82E (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2 = ___dbName1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(15 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_db_readonly(SQLitePCL.sqlite3,SQLitePCL.utf8z) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_db_readonly(SQLitePCL.sqlite3,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_db_readonly_mD3A20DD9FAD82469480A431DE3900EB336062CF3 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, String_t* ___dbName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		String_t* L_1 = ___dbName1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = raw_sqlite3_db_readonly_m269CA4AAF36C451C4E639FE3DE9AA1AB5BD0B82E(L_0, L_2, NULL);
		return L_3;
	}
}
// SQLitePCL.utf8z SQLitePCL.raw::sqlite3_db_filename(SQLitePCL.sqlite3,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 raw_sqlite3_db_filename_mC3081CF5E24E98876E5D453B2B5EE4ADCB776F19 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___att1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2 = ___att1;
		NullCheck(L_0);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = InterfaceFuncInvoker2< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(16 /* SQLitePCL.utf8z SQLitePCL.ISQLite3Provider::sqlite3_db_filename(SQLitePCL.sqlite3,SQLitePCL.utf8z) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// SQLitePCL.utf8z SQLitePCL.raw::sqlite3_db_filename(SQLitePCL.sqlite3,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 raw_sqlite3_db_filename_m14859FC545F776A5A9A8DD8EB4755A4EF14C1972 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, String_t* ___att1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		String_t* L_1 = ___att1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = raw_sqlite3_db_filename_mC3081CF5E24E98876E5D453B2B5EE4ADCB776F19(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Int64 SQLitePCL.raw::sqlite3_last_insert_rowid(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t raw_sqlite3_last_insert_rowid_m5D1B2EE026582133ACF36DFF105C0FDE92D8933C (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		NullCheck(L_0);
		int64_t L_2;
		L_2 = InterfaceFuncInvoker1< int64_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* >::Invoke(18 /* System.Int64 SQLitePCL.ISQLite3Provider::sqlite3_last_insert_rowid(SQLitePCL.sqlite3) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_changes(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_changes_mDBC2DED579736EB820DD0E67CA66C9B432A5AD33 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* >::Invoke(19 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_changes(SQLitePCL.sqlite3) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_total_changes(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_total_changes_m04FB09F7AF91584AB6E039137F70E0E302A6E1B8 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* >::Invoke(20 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_total_changes(SQLitePCL.sqlite3) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_get_autocommit(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_get_autocommit_m4FF81883EB9484A35C13E53906F31054988792EC (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* >::Invoke(21 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_get_autocommit(SQLitePCL.sqlite3) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_busy_timeout(SQLitePCL.sqlite3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_busy_timeout_mF4045FB177BDEECB769282E0A0CBC49A562B99AF (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___ms1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		int32_t L_2 = ___ms1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, int32_t >::Invoke(22 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_busy_timeout(SQLitePCL.sqlite3,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_extended_result_codes(SQLitePCL.sqlite3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_extended_result_codes_m9224D809AED70528775F2BB996B349F9D0FB9BF3 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___onoff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		int32_t L_2 = ___onoff1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, int32_t >::Invoke(23 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_extended_result_codes(SQLitePCL.sqlite3,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_errcode(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_errcode_m1C2D9E7657FCCAC6DF21A7770EF31AE2C48DAE8F (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* >::Invoke(24 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_errcode(SQLitePCL.sqlite3) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_extended_errcode(SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_extended_errcode_mEA2FD1352BA6F7230B6EB10082ACE00FE844999D (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* >::Invoke(25 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_extended_errcode(SQLitePCL.sqlite3) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// SQLitePCL.utf8z SQLitePCL.raw::sqlite3_errstr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 raw_sqlite3_errstr_mE2354717D10173187A69FAA88DAE1CAA7E6EB77F (int32_t ___rc0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		int32_t L_1 = ___rc0;
		NullCheck(L_0);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = InterfaceFuncInvoker1< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int32_t >::Invoke(26 /* SQLitePCL.utf8z SQLitePCL.ISQLite3Provider::sqlite3_errstr(System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_prepare_v2(SQLitePCL.sqlite3,System.ReadOnlySpan`1<System.Byte>,SQLitePCL.sqlite3_stmt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_prepare_v2_m3777E3227E4AB2F7DA566EA89F1D3100EB4C367A (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___sql1, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** ___stmt2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_2 = ___sql1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker4< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, intptr_t*, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* >::Invoke(27 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_prepare_v2(SQLitePCL.sqlite3,System.ReadOnlySpan`1<System.Byte>,System.IntPtr&,System.ReadOnlySpan`1<System.Byte>&) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, (&V_0), (&V_1));
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** L_4 = ___stmt2;
		intptr_t L_5 = V_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_6 = ___db0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_7;
		L_7 = sqlite3_stmt_From_m3442F22D163799397D67AD7DF86FCB6CF71448C2(L_5, L_6, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_7);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_prepare_v2(SQLitePCL.sqlite3,SQLitePCL.utf8z,SQLitePCL.sqlite3_stmt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_prepare_v2_mC1F6DDBFC0628E83A3D80432D26D60B6812CEECE (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___sql1, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** ___stmt2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2 = ___sql1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker4< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, intptr_t*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* >::Invoke(29 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_prepare_v2(SQLitePCL.sqlite3,SQLitePCL.utf8z,System.IntPtr&,SQLitePCL.utf8z&) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, (&V_0), (&V_1));
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** L_4 = ___stmt2;
		intptr_t L_5 = V_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_6 = ___db0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_7;
		L_7 = sqlite3_stmt_From_m3442F22D163799397D67AD7DF86FCB6CF71448C2(L_5, L_6, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_7);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_prepare_v2(SQLitePCL.sqlite3,System.String,SQLitePCL.sqlite3_stmt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_prepare_v2_mC4F5E0BCF6994988CD483DCDD627CCEED93A89CA (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, String_t* ___sql1, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** ___stmt2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		String_t* L_1 = ___sql1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_1, NULL);
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** L_3 = ___stmt2;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = raw_sqlite3_prepare_v2_mC1F6DDBFC0628E83A3D80432D26D60B6812CEECE(L_0, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_prepare_v2(SQLitePCL.sqlite3,System.ReadOnlySpan`1<System.Byte>,SQLitePCL.sqlite3_stmt&,System.ReadOnlySpan`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_prepare_v2_mBCBBE0C7536AAB506F47419A0DFD0F2C2348290A (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___sql1, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** ___stmt2, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* ___tail3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_2 = ___sql1;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* L_3 = ___tail3;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker4< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, intptr_t*, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* >::Invoke(27 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_prepare_v2(SQLitePCL.sqlite3,System.ReadOnlySpan`1<System.Byte>,System.IntPtr&,System.ReadOnlySpan`1<System.Byte>&) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, (&V_0), L_3);
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** L_5 = ___stmt2;
		intptr_t L_6 = V_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_7 = ___db0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_8;
		L_8 = sqlite3_stmt_From_m3442F22D163799397D67AD7DF86FCB6CF71448C2(L_6, L_7, NULL);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_8);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_prepare_v2(SQLitePCL.sqlite3,SQLitePCL.utf8z,SQLitePCL.sqlite3_stmt&,SQLitePCL.utf8z&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_prepare_v2_m5791AC8F5AB0A7C88BF04424E55D64D1F9CFB813 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___sql1, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** ___stmt2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* ___tail3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2 = ___sql1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* L_3 = ___tail3;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker4< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, intptr_t*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* >::Invoke(29 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_prepare_v2(SQLitePCL.sqlite3,SQLitePCL.utf8z,System.IntPtr&,SQLitePCL.utf8z&) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, (&V_0), L_3);
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** L_5 = ___stmt2;
		intptr_t L_6 = V_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_7 = ___db0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_8;
		L_8 = sqlite3_stmt_From_m3442F22D163799397D67AD7DF86FCB6CF71448C2(L_6, L_7, NULL);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_8);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_prepare_v2(SQLitePCL.sqlite3,System.String,SQLitePCL.sqlite3_stmt&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_prepare_v2_mD525542524B7E7F2836A05FA599FC0C8809DE6B6 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, String_t* ___sql1, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** ___stmt2, String_t** ___tail3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		String_t* L_1 = ___sql1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_1, NULL);
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** L_3 = ___stmt2;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = raw_sqlite3_prepare_v2_m5791AC8F5AB0A7C88BF04424E55D64D1F9CFB813(L_0, L_2, L_3, (&V_0), NULL);
		String_t** L_5 = ___tail3;
		String_t* L_6;
		L_6 = utf8z_utf8_to_string_m580270DDB4AE9B6A5AAC5C4FA552263D9C29C90A((&V_0), NULL);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_6);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_prepare_v3(SQLitePCL.sqlite3,System.ReadOnlySpan`1<System.Byte>,System.UInt32,SQLitePCL.sqlite3_stmt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_prepare_v3_mB9E431F02726505D172AF1D4217371833737C193 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___sql1, uint32_t ___flags2, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** ___stmt3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_2 = ___sql1;
		uint32_t L_3 = ___flags2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker5< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, uint32_t, intptr_t*, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* >::Invoke(28 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_prepare_v3(SQLitePCL.sqlite3,System.ReadOnlySpan`1<System.Byte>,System.UInt32,System.IntPtr&,System.ReadOnlySpan`1<System.Byte>&) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, (&V_0), (&V_1));
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** L_5 = ___stmt3;
		intptr_t L_6 = V_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_7 = ___db0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_8;
		L_8 = sqlite3_stmt_From_m3442F22D163799397D67AD7DF86FCB6CF71448C2(L_6, L_7, NULL);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_8);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_prepare_v3(SQLitePCL.sqlite3,SQLitePCL.utf8z,System.UInt32,SQLitePCL.sqlite3_stmt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_prepare_v3_m38C47F45202D4D9630C6DA64A86493562F02EF2C (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___sql1, uint32_t ___flags2, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** ___stmt3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2 = ___sql1;
		uint32_t L_3 = ___flags2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker5< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, uint32_t, intptr_t*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* >::Invoke(30 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_prepare_v3(SQLitePCL.sqlite3,SQLitePCL.utf8z,System.UInt32,System.IntPtr&,SQLitePCL.utf8z&) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, (&V_0), (&V_1));
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** L_5 = ___stmt3;
		intptr_t L_6 = V_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_7 = ___db0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_8;
		L_8 = sqlite3_stmt_From_m3442F22D163799397D67AD7DF86FCB6CF71448C2(L_6, L_7, NULL);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_8);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_prepare_v3(SQLitePCL.sqlite3,System.String,System.UInt32,SQLitePCL.sqlite3_stmt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_prepare_v3_mBC93CE124DC8BF5EF0CD02D941C5B417CD79680A (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, String_t* ___sql1, uint32_t ___flags2, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** ___stmt3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		String_t* L_1 = ___sql1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_1, NULL);
		uint32_t L_3 = ___flags2;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** L_4 = ___stmt3;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = raw_sqlite3_prepare_v3_m38C47F45202D4D9630C6DA64A86493562F02EF2C(L_0, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_prepare_v3(SQLitePCL.sqlite3,System.ReadOnlySpan`1<System.Byte>,System.UInt32,SQLitePCL.sqlite3_stmt&,System.ReadOnlySpan`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_prepare_v3_m6FE9028B09D591FD2182A9D3416407C4B0A25A89 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___sql1, uint32_t ___flags2, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** ___stmt3, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* ___tail4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_2 = ___sql1;
		uint32_t L_3 = ___flags2;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* L_4 = ___tail4;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker5< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, uint32_t, intptr_t*, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* >::Invoke(28 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_prepare_v3(SQLitePCL.sqlite3,System.ReadOnlySpan`1<System.Byte>,System.UInt32,System.IntPtr&,System.ReadOnlySpan`1<System.Byte>&) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, (&V_0), L_4);
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** L_6 = ___stmt3;
		intptr_t L_7 = V_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_8 = ___db0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_9;
		L_9 = sqlite3_stmt_From_m3442F22D163799397D67AD7DF86FCB6CF71448C2(L_7, L_8, NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_9);
		return L_5;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_prepare_v3(SQLitePCL.sqlite3,SQLitePCL.utf8z,System.UInt32,SQLitePCL.sqlite3_stmt&,SQLitePCL.utf8z&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_prepare_v3_mADF43E991012F79828D7F99D23FD3DB99DF3DBAC (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___sql1, uint32_t ___flags2, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** ___stmt3, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* ___tail4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2 = ___sql1;
		uint32_t L_3 = ___flags2;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* L_4 = ___tail4;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker5< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, uint32_t, intptr_t*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* >::Invoke(30 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_prepare_v3(SQLitePCL.sqlite3,SQLitePCL.utf8z,System.UInt32,System.IntPtr&,SQLitePCL.utf8z&) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, (&V_0), L_4);
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** L_6 = ___stmt3;
		intptr_t L_7 = V_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_8 = ___db0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_9;
		L_9 = sqlite3_stmt_From_m3442F22D163799397D67AD7DF86FCB6CF71448C2(L_7, L_8, NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_9);
		return L_5;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_prepare_v3(SQLitePCL.sqlite3,System.String,System.UInt32,SQLitePCL.sqlite3_stmt&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_prepare_v3_mE13FF632C6AA0688F458208685016C9607671F22 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, String_t* ___sql1, uint32_t ___flags2, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** ___stmt3, String_t** ___tail4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		String_t* L_1 = ___sql1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_1, NULL);
		uint32_t L_3 = ___flags2;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F** L_4 = ___stmt3;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = raw_sqlite3_prepare_v3_mADF43E991012F79828D7F99D23FD3DB99DF3DBAC(L_0, L_2, L_3, L_4, (&V_0), NULL);
		String_t** L_6 = ___tail4;
		String_t* L_7;
		L_7 = utf8z_utf8_to_string_m580270DDB4AE9B6A5AAC5C4FA552263D9C29C90A((&V_0), NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_7);
		return L_5;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_exec(SQLitePCL.sqlite3,System.String,SQLitePCL.strdelegate_exec,System.Object,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_exec_m2456B099095D5C9F2328C025CE74E9D50786D9B9 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, String_t* ___sql1, strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583* ___callback2, RuntimeObject* ___user_data3, String_t** ___errMsg4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass287_0_U3Csqlite3_execU3Eb__0_m76107EDF69E2254611FBDCF9E0C22E25FA56FD6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass287_0_tE8EC7F43BC9B3DA9B57BC1007C2CC730F64AE9B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass287_0_tE8EC7F43BC9B3DA9B57BC1007C2CC730F64AE9B2* V_0 = NULL;
	delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	{
		U3CU3Ec__DisplayClass287_0_tE8EC7F43BC9B3DA9B57BC1007C2CC730F64AE9B2* L_0 = (U3CU3Ec__DisplayClass287_0_tE8EC7F43BC9B3DA9B57BC1007C2CC730F64AE9B2*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass287_0_tE8EC7F43BC9B3DA9B57BC1007C2CC730F64AE9B2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass287_0__ctor_m9652DF4C60F5ECEAFF2AE0DB1D3C8ED318772C4A(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass287_0_tE8EC7F43BC9B3DA9B57BC1007C2CC730F64AE9B2* L_1 = V_0;
		strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583* L_2 = ___callback2;
		NullCheck(L_1);
		L_1->___callback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callback_0), (void*)L_2);
		U3CU3Ec__DisplayClass287_0_tE8EC7F43BC9B3DA9B57BC1007C2CC730F64AE9B2* L_3 = V_0;
		NullCheck(L_3);
		strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583* L_4 = L_3->___callback_0;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		U3CU3Ec__DisplayClass287_0_tE8EC7F43BC9B3DA9B57BC1007C2CC730F64AE9B2* L_5 = V_0;
		delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* L_6 = (delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3*)il2cpp_codegen_object_new(delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		delegate_exec__ctor_m64682E5DA3B842E47174CB722B43977DFCF5AE5B(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass287_0_U3Csqlite3_execU3Eb__0_m76107EDF69E2254611FBDCF9E0C22E25FA56FD6B_RuntimeMethod_var), NULL);
		V_1 = L_6;
		goto IL_0026;
	}

IL_0024:
	{
		V_1 = (delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3*)NULL;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_8 = ___db0;
		String_t* L_9 = ___sql1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_10;
		L_10 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_9, NULL);
		delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* L_11 = V_1;
		RuntimeObject* L_12 = ___user_data3;
		NullCheck(L_7);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker5< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3*, RuntimeObject*, intptr_t* >::Invoke(109 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_exec(SQLitePCL.sqlite3,SQLitePCL.utf8z,SQLitePCL.delegate_exec,System.Object,System.IntPtr&) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_7, L_8, L_10, L_11, L_12, (&V_2));
		intptr_t L_14 = V_2;
		bool L_15;
		L_15 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_14, (0), NULL);
		G_B4_0 = L_13;
		if (!L_15)
		{
			G_B5_0 = L_13;
			goto IL_004d;
		}
	}
	{
		String_t** L_16 = ___errMsg4;
		*((RuntimeObject**)L_16) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)NULL);
		return G_B4_0;
	}

IL_004d:
	{
		String_t** L_17 = ___errMsg4;
		intptr_t L_18 = V_2;
		String_t* L_19;
		L_19 = util_from_utf8_z_mC688C6FF1F44637723FC3C17C471003B03CD3D78(L_18, NULL);
		*((RuntimeObject**)L_17) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)L_19);
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_20 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		intptr_t L_21 = V_2;
		NullCheck(L_20);
		InterfaceActionInvoker1< intptr_t >::Invoke(120 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_free(System.IntPtr) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_20, L_21);
		return G_B5_0;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_exec(SQLitePCL.sqlite3,System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_exec_m2BAAF5F412F547879A7FF5350535E42DD5ED6573 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, String_t* ___sql1, String_t** ___errMsg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		String_t* L_2 = ___sql1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_2, NULL);
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker5< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3*, RuntimeObject*, intptr_t* >::Invoke(109 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_exec(SQLitePCL.sqlite3,SQLitePCL.utf8z,SQLitePCL.delegate_exec,System.Object,System.IntPtr&) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_3, (delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3*)NULL, NULL, (&V_0));
		intptr_t L_5 = V_0;
		bool L_6;
		L_6 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_5, (0), NULL);
		G_B1_0 = L_4;
		if (!L_6)
		{
			G_B2_0 = L_4;
			goto IL_0026;
		}
	}
	{
		String_t** L_7 = ___errMsg2;
		*((RuntimeObject**)L_7) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)NULL);
		return G_B1_0;
	}

IL_0026:
	{
		String_t** L_8 = ___errMsg2;
		intptr_t L_9 = V_0;
		String_t* L_10;
		L_10 = util_from_utf8_z_mC688C6FF1F44637723FC3C17C471003B03CD3D78(L_9, NULL);
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_10);
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_11 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		intptr_t L_12 = V_0;
		NullCheck(L_11);
		InterfaceActionInvoker1< intptr_t >::Invoke(120 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_free(System.IntPtr) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_11, L_12);
		return G_B2_0;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_exec(SQLitePCL.sqlite3,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_exec_m38DF722DC84D53BE8C6BBD91E85B68291B4FE615 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, String_t* ___sql1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		String_t* L_2 = ___sql1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_2, NULL);
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker5< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3*, RuntimeObject*, intptr_t* >::Invoke(109 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_exec(SQLitePCL.sqlite3,SQLitePCL.utf8z,SQLitePCL.delegate_exec,System.Object,System.IntPtr&) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_3, (delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3*)NULL, NULL, (&V_0));
		intptr_t L_5 = V_0;
		bool L_6;
		L_6 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_5, (0), NULL);
		G_B1_0 = L_4;
		if (L_6)
		{
			G_B2_0 = L_4;
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		intptr_t L_8 = V_0;
		NullCheck(L_7);
		InterfaceActionInvoker1< intptr_t >::Invoke(120 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_free(System.IntPtr) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_7, L_8);
		G_B2_0 = G_B1_0;
	}

IL_002d:
	{
		return G_B2_0;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_step(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_step_mC1302C2FB6FB8C61AEEFFF15EAA165BBA43A1895 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* >::Invoke(31 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_step(SQLitePCL.sqlite3_stmt) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_finalize(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_finalize_m89D30C0F7842E46CAEA1D8CF48D53354D849148E (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stmt0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = sqlite3_stmt_manual_close_m3A3C2F6C6782CB371A60EA7B5372F9CCA721577A(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.raw::internal_sqlite3_finalize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_internal_sqlite3_finalize_mB8E88A3432B14F60BDAA959F4188BAB00B1AA0F5 (intptr_t ___stmt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		intptr_t L_1 = ___stmt0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(32 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_finalize(System.IntPtr) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_reset(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_reset_m4ADDE020C5F47A92DDB9001FB13EC939FD82A4C8 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* >::Invoke(33 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_reset(SQLitePCL.sqlite3_stmt) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_clear_bindings(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_clear_bindings_m039341A5A9AFF23B76EB503A4EBCAFCD560BD15F (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* >::Invoke(34 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_clear_bindings(SQLitePCL.sqlite3_stmt) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_stmt_status(SQLitePCL.sqlite3_stmt,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_stmt_status_mF04B718442EFB7691EFB5B074FEC09F120DC3855 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___op1, int32_t ___resetFlg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___op1;
		int32_t L_3 = ___resetFlg2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker3< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t, int32_t >::Invoke(35 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_stmt_status(SQLitePCL.sqlite3_stmt,System.Int32,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_complete(SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_complete_mB03919CD9F742E408620D8523C31AC6E4563B6E4 (utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___sql0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_1 = ___sql0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(110 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_complete(SQLitePCL.utf8z) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_complete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_complete_mB810A2642DB24C2E06FA142DADFF362F16430964 (String_t* ___sql0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___sql0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_1;
		L_1 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = raw_sqlite3_complete_mB03919CD9F742E408620D8523C31AC6E4563B6E4(L_1, NULL);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_compileoption_used(SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_compileoption_used_m61475847AF55FDAD9C4E0A78E33A050CA8FDB182 (utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_1 = ___s0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(111 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_compileoption_used(SQLitePCL.utf8z) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_compileoption_used(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_compileoption_used_m51CD825BD42B21AA46CD4F633BAC70FF4BC4478D (String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_1;
		L_1 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = raw_sqlite3_compileoption_used_m61475847AF55FDAD9C4E0A78E33A050CA8FDB182(L_1, NULL);
		return L_2;
	}
}
// SQLitePCL.utf8z SQLitePCL.raw::sqlite3_compileoption_get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 raw_sqlite3_compileoption_get_m8AD272B2C25285FA2A270DC2063DD9EFF66E0108 (int32_t ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		int32_t L_1 = ___n0;
		NullCheck(L_0);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = InterfaceFuncInvoker1< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int32_t >::Invoke(112 /* SQLitePCL.utf8z SQLitePCL.ISQLite3Provider::sqlite3_compileoption_get(System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_table_column_metadata(SQLitePCL.sqlite3,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z&,SQLitePCL.utf8z&,System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_table_column_metadata_m3B189D0EBA910461493655883830AAD5FC875FD8 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___tblName2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___colName3, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* ___dataType4, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* ___collSeq5, int32_t* ___notNull6, int32_t* ___primaryKey7, int32_t* ___autoInc8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2 = ___dbName1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3 = ___tblName2;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_4 = ___colName3;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* L_5 = ___dataType4;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* L_6 = ___collSeq5;
		int32_t* L_7 = ___notNull6;
		int32_t* L_8 = ___primaryKey7;
		int32_t* L_9 = ___autoInc8;
		NullCheck(L_0);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker9< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25*, int32_t*, int32_t*, int32_t* >::Invoke(116 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_table_column_metadata(SQLitePCL.sqlite3,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z&,SQLitePCL.utf8z&,System.Int32&,System.Int32&,System.Int32&) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9);
		return L_10;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_table_column_metadata(SQLitePCL.sqlite3,System.String,System.String,System.String,System.String&,System.String&,System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_table_column_metadata_m7D6563A12B8CBE6E3B4BE3C6B80F89B902DC7EB4 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, String_t* ___dbName1, String_t* ___tblName2, String_t* ___colName3, String_t** ___dataType4, String_t** ___collSeq5, int32_t* ___notNull6, int32_t* ___primaryKey7, int32_t* ___autoInc8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		String_t* L_1 = ___dbName1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_1, NULL);
		String_t* L_3 = ___tblName2;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_4;
		L_4 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_3, NULL);
		String_t* L_5 = ___colName3;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_6;
		L_6 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_5, NULL);
		int32_t* L_7 = ___notNull6;
		int32_t* L_8 = ___primaryKey7;
		int32_t* L_9 = ___autoInc8;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = raw_sqlite3_table_column_metadata_m3B189D0EBA910461493655883830AAD5FC875FD8(L_0, L_2, L_4, L_6, (&V_0), (&V_1), L_7, L_8, L_9, NULL);
		String_t** L_11 = ___dataType4;
		String_t* L_12;
		L_12 = utf8z_utf8_to_string_m580270DDB4AE9B6A5AAC5C4FA552263D9C29C90A((&V_0), NULL);
		*((RuntimeObject**)L_11) = (RuntimeObject*)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)(RuntimeObject*)L_12);
		String_t** L_13 = ___collSeq5;
		String_t* L_14;
		L_14 = utf8z_utf8_to_string_m580270DDB4AE9B6A5AAC5C4FA552263D9C29C90A((&V_1), NULL);
		*((RuntimeObject**)L_13) = (RuntimeObject*)L_14;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_13, (void*)(RuntimeObject*)L_14);
		return L_10;
	}
}
// SQLitePCL.utf8z SQLitePCL.raw::sqlite3_sql(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 raw_sqlite3_sql_m0613DAC2B4CC2BB6C11A17948E2175EB59DA6B8A (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		NullCheck(L_0);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = InterfaceFuncInvoker1< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* >::Invoke(36 /* SQLitePCL.utf8z SQLitePCL.ISQLite3Provider::sqlite3_sql(SQLitePCL.sqlite3_stmt) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// SQLitePCL.sqlite3 SQLitePCL.raw::sqlite3_db_handle(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* raw_sqlite3_db_handle_mA4C534A8F756C4D5BDD5FCBE49111234850A61F9 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stmt0;
		NullCheck(L_0);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1;
		L_1 = sqlite3_stmt_get_db_m31DCFD46B918941ED21CAD5F953201B59EF259CF_inline(L_0, NULL);
		return L_1;
	}
}
// SQLitePCL.sqlite3_stmt SQLitePCL.raw::sqlite3_next_stmt(SQLitePCL.sqlite3,SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* raw_sqlite3_next_stmt_m71B304CE004B4311379B2D02DAE4CBB34A2455A6 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* G_B3_1 = NULL;
	RuntimeObject* G_B3_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_2 = ___stmt1;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (0);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0016;
	}

IL_0010:
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_3 = ___stmt1;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = sqlite3_stmt_get_ptr_mF5030B60EB110512D248A632A61AE2F899580B58_inline(L_3, NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0016:
	{
		NullCheck(G_B3_2);
		intptr_t L_5;
		L_5 = InterfaceFuncInvoker2< intptr_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, intptr_t >::Invoke(38 /* System.IntPtr SQLitePCL.ISQLite3Provider::sqlite3_next_stmt(SQLitePCL.sqlite3,System.IntPtr) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, G_B3_2, G_B3_1, G_B3_0);
		V_0 = L_5;
		intptr_t L_6 = V_0;
		bool L_7;
		L_7 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_6, (0), NULL);
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		return (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*)NULL;
	}

IL_002b:
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_8 = ___db0;
		intptr_t L_9 = V_0;
		NullCheck(L_8);
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_10;
		L_10 = sqlite3_find_stmt_m6DB56FD791338E8E5524252CE51E90D7D6624FE3(L_8, L_9, NULL);
		return L_10;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_bind_zeroblob(SQLitePCL.sqlite3_stmt,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_bind_zeroblob_mBD28C9930F976663B81E8B82A3AEFB26FA3C28CD (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, int32_t ___size2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___size2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker3< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t, int32_t >::Invoke(39 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_bind_zeroblob(SQLitePCL.sqlite3_stmt,System.Int32,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// SQLitePCL.utf8z SQLitePCL.raw::sqlite3_bind_parameter_name(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 raw_sqlite3_bind_parameter_name_m425CD8985B59C45E43D9198A9F3E75FC1F4379EA (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = InterfaceFuncInvoker2< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t >::Invoke(40 /* SQLitePCL.utf8z SQLitePCL.ISQLite3Provider::sqlite3_bind_parameter_name(SQLitePCL.sqlite3_stmt,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Object SQLitePCL.raw::sqlite3_user_data(SQLitePCL.sqlite3_context)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* raw_sqlite3_user_data_m2634E4314AFFFEA9F74C3D471F5B1D7067BB28C5 (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___context0, const RuntimeMethod* method) 
{
	{
		sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* L_0 = ___context0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = sqlite3_context_get_user_data_m2B56AA945EBDDC7B032007BA993E2B0D6311E609_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void SQLitePCL.raw::sqlite3_result_null(SQLitePCL.sqlite3_context)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_result_null_mA63494EABBBFCD6CF5F782A877AF8357369AC856 (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* L_1 = ___context0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = sqlite3_context_get_ptr_m12CD2A3168656A686B6D7455A6A8251F31149259_inline(L_1, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< intptr_t >::Invoke(93 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_result_null(System.IntPtr) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_2);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_result_blob(SQLitePCL.sqlite3_context,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_result_blob_mBA98A5F75B424673E27230BC4D6BEC8153D8AC19 (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___context0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___val1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* L_1 = ___context0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = sqlite3_context_get_ptr_m12CD2A3168656A686B6D7455A6A8251F31149259_inline(L_1, NULL);
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_3 = ___val1;
		NullCheck(L_0);
		InterfaceActionInvoker2< intptr_t, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A >::Invoke(87 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_result_blob(System.IntPtr,System.ReadOnlySpan`1<System.Byte>) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_2, L_3);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_result_error(SQLitePCL.sqlite3_context,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_result_error_mA9D2CE162BDE0576902C4FA933F2406C2E985BFC (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___context0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___val1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* L_1 = ___context0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = sqlite3_context_get_ptr_m12CD2A3168656A686B6D7455A6A8251F31149259_inline(L_1, NULL);
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_3 = ___val1;
		NullCheck(L_0);
		InterfaceActionInvoker2< intptr_t, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A >::Invoke(89 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_result_error(System.IntPtr,System.ReadOnlySpan`1<System.Byte>) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_2, L_3);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_result_error(SQLitePCL.sqlite3_context,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_result_error_mCF3BB13419BDFAF7FE1A06BE455F8E78D8A496C6 (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___context0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___val1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* L_1 = ___context0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = sqlite3_context_get_ptr_m12CD2A3168656A686B6D7455A6A8251F31149259_inline(L_1, NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3 = ___val1;
		NullCheck(L_0);
		InterfaceActionInvoker2< intptr_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(90 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_result_error(System.IntPtr,SQLitePCL.utf8z) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_2, L_3);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_result_error(SQLitePCL.sqlite3_context,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_result_error_mCC6870AEF5D38277A1D369EFFE38932B27182A7F (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___context0, String_t* ___val1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* L_0 = ___context0;
		String_t* L_1 = ___val1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		raw_sqlite3_result_error_mCF3BB13419BDFAF7FE1A06BE455F8E78D8A496C6(L_0, L_2, NULL);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_result_text(SQLitePCL.sqlite3_context,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_result_text_m0040B8DF7E731C97364D42C70FEC14E6E7891478 (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___context0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___val1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* L_1 = ___context0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = sqlite3_context_get_ptr_m12CD2A3168656A686B6D7455A6A8251F31149259_inline(L_1, NULL);
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_3 = ___val1;
		NullCheck(L_0);
		InterfaceActionInvoker2< intptr_t, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A >::Invoke(94 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_result_text(System.IntPtr,System.ReadOnlySpan`1<System.Byte>) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_2, L_3);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_result_text(SQLitePCL.sqlite3_context,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_result_text_mF07DE758C90B3CD62E834E26C71421197A17C9C9 (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___context0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___val1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* L_1 = ___context0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = sqlite3_context_get_ptr_m12CD2A3168656A686B6D7455A6A8251F31149259_inline(L_1, NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3 = ___val1;
		NullCheck(L_0);
		InterfaceActionInvoker2< intptr_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(95 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_result_text(System.IntPtr,SQLitePCL.utf8z) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_2, L_3);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_result_text(SQLitePCL.sqlite3_context,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_result_text_m400C9AE4C1B853AB3EB45676CC63BE65F0DA769D (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___context0, String_t* ___val1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* L_0 = ___context0;
		String_t* L_1 = ___val1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		raw_sqlite3_result_text_mF07DE758C90B3CD62E834E26C71421197A17C9C9(L_0, L_2, NULL);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_result_double(SQLitePCL.sqlite3_context,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_result_double_m2C6150485B3F75167CE8B590D018D088A8063A67 (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___context0, double ___val1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* L_1 = ___context0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = sqlite3_context_get_ptr_m12CD2A3168656A686B6D7455A6A8251F31149259_inline(L_1, NULL);
		double L_3 = ___val1;
		NullCheck(L_0);
		InterfaceActionInvoker2< intptr_t, double >::Invoke(88 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_result_double(System.IntPtr,System.Double) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_2, L_3);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_result_int(SQLitePCL.sqlite3_context,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_result_int_m06E8E4BE35C821D7B4FFAFC0A1EF831AB1C508ED (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___context0, int32_t ___val1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* L_1 = ___context0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = sqlite3_context_get_ptr_m12CD2A3168656A686B6D7455A6A8251F31149259_inline(L_1, NULL);
		int32_t L_3 = ___val1;
		NullCheck(L_0);
		InterfaceActionInvoker2< intptr_t, int32_t >::Invoke(91 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_result_int(System.IntPtr,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_2, L_3);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_result_int64(SQLitePCL.sqlite3_context,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_result_int64_m0937DD01B49BA12D6666B6EE80F1C0386C33093E (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___context0, int64_t ___val1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* L_1 = ___context0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = sqlite3_context_get_ptr_m12CD2A3168656A686B6D7455A6A8251F31149259_inline(L_1, NULL);
		int64_t L_3 = ___val1;
		NullCheck(L_0);
		InterfaceActionInvoker2< intptr_t, int64_t >::Invoke(92 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_result_int64(System.IntPtr,System.Int64) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_2, L_3);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_result_zeroblob(SQLitePCL.sqlite3_context,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_result_zeroblob_m90343511A764975BE8A0FA6D28AB01563DA84071 (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___context0, int32_t ___n1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* L_1 = ___context0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = sqlite3_context_get_ptr_m12CD2A3168656A686B6D7455A6A8251F31149259_inline(L_1, NULL);
		int32_t L_3 = ___n1;
		NullCheck(L_0);
		InterfaceActionInvoker2< intptr_t, int32_t >::Invoke(96 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_result_zeroblob(System.IntPtr,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_2, L_3);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_result_error_toobig(SQLitePCL.sqlite3_context)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_result_error_toobig_m4DD4DB559BC0A8DD0F9EADAB6C6BF718962A05A5 (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* L_1 = ___context0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = sqlite3_context_get_ptr_m12CD2A3168656A686B6D7455A6A8251F31149259_inline(L_1, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< intptr_t >::Invoke(97 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_result_error_toobig(System.IntPtr) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_2);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_result_error_nomem(SQLitePCL.sqlite3_context)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_result_error_nomem_m275817A90DFEFB3FA1089777360B691B1AADF4C8 (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* L_1 = ___context0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = sqlite3_context_get_ptr_m12CD2A3168656A686B6D7455A6A8251F31149259_inline(L_1, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< intptr_t >::Invoke(98 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_result_error_nomem(System.IntPtr) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_2);
		return;
	}
}
// System.Void SQLitePCL.raw::sqlite3_result_error_code(SQLitePCL.sqlite3_context,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void raw_sqlite3_result_error_code_m3DD7A73175921CEECB46CAE8874A0F2C18DE2E5D (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___context0, int32_t ___code1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* L_1 = ___context0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = sqlite3_context_get_ptr_m12CD2A3168656A686B6D7455A6A8251F31149259_inline(L_1, NULL);
		int32_t L_3 = ___code1;
		NullCheck(L_0);
		InterfaceActionInvoker2< intptr_t, int32_t >::Invoke(99 /* System.Void SQLitePCL.ISQLite3Provider::sqlite3_result_error_code(System.IntPtr,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_2, L_3);
		return;
	}
}
// System.ReadOnlySpan`1<System.Byte> SQLitePCL.raw::sqlite3_value_blob(SQLitePCL.sqlite3_value)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A raw_sqlite3_value_blob_m856E1FE0DE2A45F529E0662D01FD67CF30C7FB9B (sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* ___val0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* L_1 = ___val0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = sqlite3_value_get_ptr_mAF588DD3703B49533D61586741960A38A4515AD9_inline(L_1, NULL);
		NullCheck(L_0);
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_3;
		L_3 = InterfaceFuncInvoker1< ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, intptr_t >::Invoke(100 /* System.ReadOnlySpan`1<System.Byte> SQLitePCL.ISQLite3Provider::sqlite3_value_blob(System.IntPtr) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_2);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_value_bytes(SQLitePCL.sqlite3_value)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_value_bytes_m0E5195744663F952161F92D3E7E16F6519C87849 (sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* ___val0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* L_1 = ___val0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = sqlite3_value_get_ptr_mAF588DD3703B49533D61586741960A38A4515AD9_inline(L_1, NULL);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(101 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_value_bytes(System.IntPtr) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_2);
		return L_3;
	}
}
// System.Double SQLitePCL.raw::sqlite3_value_double(SQLitePCL.sqlite3_value)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double raw_sqlite3_value_double_m16B3DA359AA4881C98E55638551F8F2B142BBC4D (sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* ___val0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* L_1 = ___val0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = sqlite3_value_get_ptr_mAF588DD3703B49533D61586741960A38A4515AD9_inline(L_1, NULL);
		NullCheck(L_0);
		double L_3;
		L_3 = InterfaceFuncInvoker1< double, intptr_t >::Invoke(102 /* System.Double SQLitePCL.ISQLite3Provider::sqlite3_value_double(System.IntPtr) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_2);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_value_int(SQLitePCL.sqlite3_value)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_value_int_m4609248C0026865FD4F6A653A0EB191496E6930C (sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* ___val0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* L_1 = ___val0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = sqlite3_value_get_ptr_mAF588DD3703B49533D61586741960A38A4515AD9_inline(L_1, NULL);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(103 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_value_int(System.IntPtr) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_2);
		return L_3;
	}
}
// System.Int64 SQLitePCL.raw::sqlite3_value_int64(SQLitePCL.sqlite3_value)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t raw_sqlite3_value_int64_mF3BEE179DA860E76781D5FE7B649887775FB1FEF (sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* ___val0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* L_1 = ___val0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = sqlite3_value_get_ptr_mAF588DD3703B49533D61586741960A38A4515AD9_inline(L_1, NULL);
		NullCheck(L_0);
		int64_t L_3;
		L_3 = InterfaceFuncInvoker1< int64_t, intptr_t >::Invoke(104 /* System.Int64 SQLitePCL.ISQLite3Provider::sqlite3_value_int64(System.IntPtr) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_2);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_value_type(SQLitePCL.sqlite3_value)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_value_type_m3C77DE35539ED8E842FEF450DAC29291A8627779 (sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* ___val0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* L_1 = ___val0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = sqlite3_value_get_ptr_mAF588DD3703B49533D61586741960A38A4515AD9_inline(L_1, NULL);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(105 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_value_type(System.IntPtr) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_2);
		return L_3;
	}
}
// SQLitePCL.utf8z SQLitePCL.raw::sqlite3_value_text(SQLitePCL.sqlite3_value)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 raw_sqlite3_value_text_mB9CEDA0CB37CEC584281B240FE851D16DCD4EBD2 (sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* ___val0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* L_1 = ___val0;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = sqlite3_value_get_ptr_mAF588DD3703B49533D61586741960A38A4515AD9_inline(L_1, NULL);
		NullCheck(L_0);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = InterfaceFuncInvoker1< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, intptr_t >::Invoke(106 /* SQLitePCL.utf8z SQLitePCL.ISQLite3Provider::sqlite3_value_text(System.IntPtr) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_2);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_bind_blob(SQLitePCL.sqlite3_stmt,System.Int32,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_bind_blob_m8C3D5AA0F3F665F8D889484C20949A3D99A80290 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___blob2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_3 = ___blob2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker3< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A >::Invoke(41 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_bind_blob(SQLitePCL.sqlite3_stmt,System.Int32,System.ReadOnlySpan`1<System.Byte>) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_bind_double(SQLitePCL.sqlite3_stmt,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_bind_double_m177FD5BDB0461414E81A546CE76D04D2275D875A (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, double ___val2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		double L_3 = ___val2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker3< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t, double >::Invoke(42 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_bind_double(SQLitePCL.sqlite3_stmt,System.Int32,System.Double) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_bind_int(SQLitePCL.sqlite3_stmt,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_bind_int_m7464076F9A7C94C16FE5219CFE214BE1FF6333A4 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, int32_t ___val2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___val2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker3< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t, int32_t >::Invoke(43 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_bind_int(SQLitePCL.sqlite3_stmt,System.Int32,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_bind_int64(SQLitePCL.sqlite3_stmt,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_bind_int64_m176232AB7CD39170C149705CBE4367193E4D682F (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, int64_t ___val2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		int64_t L_3 = ___val2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker3< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t, int64_t >::Invoke(44 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_bind_int64(SQLitePCL.sqlite3_stmt,System.Int32,System.Int64) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_bind_null(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_bind_null_mE088C67BBB32EEB2D15A1E37A86DD25C64A0F818 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t >::Invoke(45 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_bind_null(SQLitePCL.sqlite3_stmt,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_bind_text(SQLitePCL.sqlite3_stmt,System.Int32,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_bind_text_m325EE9424BA6AD950517F5ED7DE8DC5F56BCF690 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___val2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_3 = ___val2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker3< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A >::Invoke(46 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_bind_text(SQLitePCL.sqlite3_stmt,System.Int32,System.ReadOnlySpan`1<System.Byte>) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_bind_text(SQLitePCL.sqlite3_stmt,System.Int32,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_bind_text_mA109AE51F46957D6F56FA7F016A03B9F932493E4 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___val2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3 = ___val2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker3< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(47 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_bind_text(SQLitePCL.sqlite3_stmt,System.Int32,SQLitePCL.utf8z) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_bind_text(SQLitePCL.sqlite3_stmt,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_bind_text_mE35D9E39379C1B5A2F89A23009298A9F70499CDC (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, String_t* ___val2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stmt0;
		int32_t L_1 = ___index1;
		String_t* L_2 = ___val2;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = raw_sqlite3_bind_text_mA109AE51F46957D6F56FA7F016A03B9F932493E4(L_0, L_1, L_3, NULL);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_bind_parameter_count(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_bind_parameter_count_mC2914D4E8E6D2A716723F22A981C8F326C8B5492 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* >::Invoke(48 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_bind_parameter_count(SQLitePCL.sqlite3_stmt) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_bind_parameter_index(SQLitePCL.sqlite3_stmt,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_bind_parameter_index_m3B57DC88DC95B77F49AECE313649A2C579CA7640 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___strName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2 = ___strName1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(49 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_bind_parameter_index(SQLitePCL.sqlite3_stmt,SQLitePCL.utf8z) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_bind_parameter_index(SQLitePCL.sqlite3_stmt,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_bind_parameter_index_m3B8BA6D6472B557B7A08BD4A16EB15B9A4717241 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, String_t* ___strName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = ___stmt0;
		String_t* L_1 = ___strName1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = raw_sqlite3_bind_parameter_index_m3B57DC88DC95B77F49AECE313649A2C579CA7640(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_stmt_busy(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_stmt_busy_mB252AD66962EFB25D6A11E303C9DC9B950294266 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* >::Invoke(107 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_stmt_busy(SQLitePCL.sqlite3_stmt) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_stmt_readonly(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_stmt_readonly_mE6789A635FA32CB3C645937849CB66EEFE51828C (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* >::Invoke(108 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_stmt_readonly(SQLitePCL.sqlite3_stmt) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// SQLitePCL.utf8z SQLitePCL.raw::sqlite3_column_database_name(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 raw_sqlite3_column_database_name_mD685B7DE9E7675C9C9DEC1E85F2BF1C997884253 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = InterfaceFuncInvoker2< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t >::Invoke(50 /* SQLitePCL.utf8z SQLitePCL.ISQLite3Provider::sqlite3_column_database_name(SQLitePCL.sqlite3_stmt,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// SQLitePCL.utf8z SQLitePCL.raw::sqlite3_column_name(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 raw_sqlite3_column_name_m81ACA470C3E74EAAEDED06B001E2988D532EA1D3 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = InterfaceFuncInvoker2< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t >::Invoke(51 /* SQLitePCL.utf8z SQLitePCL.ISQLite3Provider::sqlite3_column_name(SQLitePCL.sqlite3_stmt,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// SQLitePCL.utf8z SQLitePCL.raw::sqlite3_column_origin_name(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 raw_sqlite3_column_origin_name_mB63AB09995500BDDC3A44C136D37D32135F616FA (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = InterfaceFuncInvoker2< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t >::Invoke(52 /* SQLitePCL.utf8z SQLitePCL.ISQLite3Provider::sqlite3_column_origin_name(SQLitePCL.sqlite3_stmt,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// SQLitePCL.utf8z SQLitePCL.raw::sqlite3_column_table_name(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 raw_sqlite3_column_table_name_mEF997428AC87B773316A9E767239CB6C0DA7F8A6 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = InterfaceFuncInvoker2< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t >::Invoke(53 /* SQLitePCL.utf8z SQLitePCL.ISQLite3Provider::sqlite3_column_table_name(SQLitePCL.sqlite3_stmt,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// SQLitePCL.utf8z SQLitePCL.raw::sqlite3_column_text(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 raw_sqlite3_column_text_m10BE91BB9AA111FD5D34F8CACEC9A82FC8882C2F (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = InterfaceFuncInvoker2< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t >::Invoke(54 /* SQLitePCL.utf8z SQLitePCL.ISQLite3Provider::sqlite3_column_text(SQLitePCL.sqlite3_stmt,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_column_count(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_column_count_m336F0E46C471B0CBCD20A57F854E57A45095D28A (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* >::Invoke(56 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_column_count(SQLitePCL.sqlite3_stmt) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_data_count(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_data_count_mBE79AB172CC507AD571F326B4B94D4396FB5A408 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* >::Invoke(55 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_data_count(SQLitePCL.sqlite3_stmt) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Double SQLitePCL.raw::sqlite3_column_double(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double raw_sqlite3_column_double_mB68DB9E34E5B65E9E8BE2C7E70B43B2EFE1E47FE (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		double L_3;
		L_3 = InterfaceFuncInvoker2< double, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t >::Invoke(57 /* System.Double SQLitePCL.ISQLite3Provider::sqlite3_column_double(SQLitePCL.sqlite3_stmt,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_column_int(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_column_int_mFA8DAE2D767FF0A0273CD7B038A11E3AE48DF293 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t >::Invoke(58 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_column_int(SQLitePCL.sqlite3_stmt,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int64 SQLitePCL.raw::sqlite3_column_int64(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t raw_sqlite3_column_int64_m210BE1D604490F4CD8CD92FB984EC32A6FCE751A (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		int64_t L_3;
		L_3 = InterfaceFuncInvoker2< int64_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t >::Invoke(59 /* System.Int64 SQLitePCL.ISQLite3Provider::sqlite3_column_int64(SQLitePCL.sqlite3_stmt,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.ReadOnlySpan`1<System.Byte> SQLitePCL.raw::sqlite3_column_blob(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A raw_sqlite3_column_blob_mD15A59A2295455AF8CE3C5C4706C72BC255E16F6 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_3;
		L_3 = InterfaceFuncInvoker2< ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t >::Invoke(60 /* System.ReadOnlySpan`1<System.Byte> SQLitePCL.ISQLite3Provider::sqlite3_column_blob(SQLitePCL.sqlite3_stmt,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_column_bytes(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_column_bytes_m88ABCA433D187AF258B795BEC167615083E1A937 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t >::Invoke(61 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_column_bytes(SQLitePCL.sqlite3_stmt,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_column_type(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_column_type_m6A016F48C6E5FAA4FFB1DF22BA0B5262F5EE0AC7 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t >::Invoke(62 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_column_type(SQLitePCL.sqlite3_stmt,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// SQLitePCL.utf8z SQLitePCL.raw::sqlite3_column_decltype(SQLitePCL.sqlite3_stmt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 raw_sqlite3_column_decltype_m39C5A7075ABC48978E9190E0FC62278BD88BDDA4 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = ___stmt0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = InterfaceFuncInvoker2< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*, int32_t >::Invoke(63 /* SQLitePCL.utf8z SQLitePCL.ISQLite3Provider::sqlite3_column_decltype(SQLitePCL.sqlite3_stmt,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// SQLitePCL.sqlite3_backup SQLitePCL.raw::sqlite3_backup_init(SQLitePCL.sqlite3,System.String,SQLitePCL.sqlite3,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* raw_sqlite3_backup_init_mC2F1F66E213FC7509E988E0E11796EA0F2B073A8 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___destDb0, String_t* ___destName1, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___sourceDb2, String_t* ___sourceName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___destDb0;
		String_t* L_2 = ___destName1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_2, NULL);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_4 = ___sourceDb2;
		String_t* L_5 = ___sourceName3;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_6;
		L_6 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_5, NULL);
		NullCheck(L_0);
		sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* L_7;
		L_7 = InterfaceFuncInvoker4< sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30*, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(64 /* SQLitePCL.sqlite3_backup SQLitePCL.ISQLite3Provider::sqlite3_backup_init(SQLitePCL.sqlite3,SQLitePCL.utf8z,SQLitePCL.sqlite3,SQLitePCL.utf8z) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_3, L_4, L_6);
		return L_7;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_backup_step(SQLitePCL.sqlite3_backup,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_backup_step_mE48E44E002B90A31189E9F55E404A2CAEF6EB90E (sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* ___backup0, int32_t ___nPage1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* L_1 = ___backup0;
		int32_t L_2 = ___nPage1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30*, int32_t >::Invoke(65 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_backup_step(SQLitePCL.sqlite3_backup,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_backup_remaining(SQLitePCL.sqlite3_backup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_backup_remaining_m6ED727A6CEC6BB7B41E1A10FDCC0FE86FF53A078 (sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* ___backup0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* L_1 = ___backup0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* >::Invoke(66 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_backup_remaining(SQLitePCL.sqlite3_backup) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_backup_pagecount(SQLitePCL.sqlite3_backup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_backup_pagecount_m7645FBC5DC104BE63D00AAE869FA71A4E34E628B (sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* ___backup0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* L_1 = ___backup0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* >::Invoke(67 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_backup_pagecount(SQLitePCL.sqlite3_backup) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_backup_finish(SQLitePCL.sqlite3_backup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_backup_finish_m1BA58D38C9295892EF7102DB3D5A781D7EDFF114 (sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* ___backup0, const RuntimeMethod* method) 
{
	{
		sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* L_0 = ___backup0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = sqlite3_backup_manual_close_m16BBF17DEA8FFABBE26C4A1668815FA624897244(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.raw::internal_sqlite3_backup_finish(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_internal_sqlite3_backup_finish_mE0275B95B1CCB4CE7B8FA6F9DE0A17860E723446 (intptr_t ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		intptr_t L_1 = ___p0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(68 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_backup_finish(System.IntPtr) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_blob_open(SQLitePCL.sqlite3,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z,System.Int64,System.Int32,SQLitePCL.sqlite3_blob&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_blob_open_m28BDB381FBFB05DCF2847873AFB839ADCF7685EB (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___db_utf81, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___table_utf82, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___col_utf83, int64_t ___rowid4, int32_t ___flags5, sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057** ___blob6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2 = ___db_utf81;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3 = ___table_utf82;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_4 = ___col_utf83;
		int64_t L_5 = ___rowid4;
		int32_t L_6 = ___flags5;
		sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057** L_7 = ___blob6;
		NullCheck(L_0);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker7< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t, int32_t, sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057** >::Invoke(69 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_blob_open(SQLitePCL.sqlite3,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z,System.Int64,System.Int32,SQLitePCL.sqlite3_blob&) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7);
		return L_8;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_blob_open(SQLitePCL.sqlite3,System.String,System.String,System.String,System.Int64,System.Int32,SQLitePCL.sqlite3_blob&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_blob_open_mD2ED54F3429EC790AECE5AE47F23AC67AFD194D6 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, String_t* ___sdb1, String_t* ___table2, String_t* ___col3, int64_t ___rowid4, int32_t ___flags5, sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057** ___blob6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = ___db0;
		String_t* L_1 = ___sdb1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		L_2 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_1, NULL);
		String_t* L_3 = ___table2;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_4;
		L_4 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_3, NULL);
		String_t* L_5 = ___col3;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_6;
		L_6 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_5, NULL);
		int64_t L_7 = ___rowid4;
		int32_t L_8 = ___flags5;
		sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057** L_9 = ___blob6;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = raw_sqlite3_blob_open_m28BDB381FBFB05DCF2847873AFB839ADCF7685EB(L_0, L_2, L_4, L_6, L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_blob_bytes(SQLitePCL.sqlite3_blob)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_blob_bytes_m3F979E1976071281D20E880273D94660488E7746 (sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* ___blob0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* L_1 = ___blob0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* >::Invoke(70 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_blob_bytes(SQLitePCL.sqlite3_blob) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_blob_reopen(SQLitePCL.sqlite3_blob,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_blob_reopen_m75C7433984977469D7D06836B6CE07EE22C86F61 (sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* ___blob0, int64_t ___rowid1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* L_1 = ___blob0;
		int64_t L_2 = ___rowid1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057*, int64_t >::Invoke(71 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_blob_reopen(SQLitePCL.sqlite3_blob,System.Int64) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_blob_write(SQLitePCL.sqlite3_blob,System.ReadOnlySpan`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_blob_write_m9B88F1EBC245CDD20BB253F053EAE3F0E1CC1ACE (sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* ___blob0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___b1, int32_t ___offset2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* L_1 = ___blob0;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_2 = ___b1;
		int32_t L_3 = ___offset2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker3< int32_t, sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057*, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, int32_t >::Invoke(72 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_blob_write(SQLitePCL.sqlite3_blob,System.ReadOnlySpan`1<System.Byte>,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_blob_read(SQLitePCL.sqlite3_blob,System.Span`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_blob_read_mA3BCA25708ED8296D949C328108446B6BD89798E (sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* ___blob0, Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01 ___b1, int32_t ___offset2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* L_1 = ___blob0;
		Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01 L_2 = ___b1;
		int32_t L_3 = ___offset2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker3< int32_t, sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057*, Span_1_tB446F80CC912CCF8947BD040AF5CEE79D15D0B01, int32_t >::Invoke(73 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_blob_read(SQLitePCL.sqlite3_blob,System.Span`1<System.Byte>,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_blob_close(SQLitePCL.sqlite3_blob)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_blob_close_m311391CC8546F6DF6CA33D47E36D24C6D17F6491 (sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* ___blob0, const RuntimeMethod* method) 
{
	{
		sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* L_0 = ___blob0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = sqlite3_blob_manual_close_m32537CD8CDCC89D1CBAD7832CFA559A05C61BA5F(L_0, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.raw::internal_sqlite3_blob_close(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_internal_sqlite3_blob_close_m39CEAEE53333DACA116E82A5A36AEF7E3E92B547 (intptr_t ___blob0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		intptr_t L_1 = ___blob0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(74 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_blob_close(System.IntPtr) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_wal_autocheckpoint(SQLitePCL.sqlite3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_wal_autocheckpoint_m6B8600D71D69D040EEB7B17650BD8592F6C87FE1 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, int32_t ___n1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		int32_t L_2 = ___n1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, int32_t >::Invoke(113 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_wal_autocheckpoint(SQLitePCL.sqlite3,System.Int32) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_wal_checkpoint(SQLitePCL.sqlite3,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_wal_checkpoint_m9A235FD176411F18CFE121EE880C5C6C848EEB83 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, String_t* ___dbName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		String_t* L_2 = ___dbName1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_2, NULL);
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker2< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(114 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_wal_checkpoint(SQLitePCL.sqlite3,SQLitePCL.utf8z) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_3);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_wal_checkpoint_v2(SQLitePCL.sqlite3,System.String,System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_wal_checkpoint_v2_m04874441DA50E3B81ACA998ABAD99D5A4F05034F (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, String_t* ___dbName1, int32_t ___eMode2, int32_t* ___logSize3, int32_t* ___framesCheckPointed4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		String_t* L_2 = ___dbName1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_2, NULL);
		int32_t L_4 = ___eMode2;
		int32_t* L_5 = ___logSize3;
		int32_t* L_6 = ___framesCheckPointed4;
		NullCheck(L_0);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker5< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int32_t, int32_t*, int32_t* >::Invoke(115 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_wal_checkpoint_v2(SQLitePCL.sqlite3,SQLitePCL.utf8z,System.Int32,System.Int32&,System.Int32&) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_set_authorizer(SQLitePCL.sqlite3,SQLitePCL.delegate_authorizer,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_set_authorizer_m295E60E304450D6D1DB1EBAAD223B696EBA62839 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* ___f1, RuntimeObject* ___user_data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = ___db0;
		delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* L_2 = ___f1;
		RuntimeObject* L_3 = ___user_data2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker3< int32_t, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*, delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933*, RuntimeObject* >::Invoke(117 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_set_authorizer(SQLitePCL.sqlite3,SQLitePCL.delegate_authorizer,System.Object) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_set_authorizer(SQLitePCL.sqlite3,SQLitePCL.strdelegate_authorizer,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_set_authorizer_mB8EDBA6E869BFF0AB1AC1DCEDFF588C970090486 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db0, strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29* ___f1, RuntimeObject* ___user_data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass376_0_U3Csqlite3_set_authorizerU3Eb__0_mF842E6434D82B58D2D228ACC239DD0872ED8293C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass376_0_t9B54378AED76759BA7EB8974E76F27BA23A51221_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass376_0_t9B54378AED76759BA7EB8974E76F27BA23A51221* V_0 = NULL;
	delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass376_0_t9B54378AED76759BA7EB8974E76F27BA23A51221* L_0 = (U3CU3Ec__DisplayClass376_0_t9B54378AED76759BA7EB8974E76F27BA23A51221*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass376_0_t9B54378AED76759BA7EB8974E76F27BA23A51221_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass376_0__ctor_m2266973E0A0C1CD44FEBB04B65AFE3CCCE6B7E95(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass376_0_t9B54378AED76759BA7EB8974E76F27BA23A51221* L_1 = V_0;
		strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29* L_2 = ___f1;
		NullCheck(L_1);
		L_1->___f_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___f_0), (void*)L_2);
		U3CU3Ec__DisplayClass376_0_t9B54378AED76759BA7EB8974E76F27BA23A51221* L_3 = V_0;
		NullCheck(L_3);
		strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29* L_4 = L_3->___f_0;
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		V_1 = (delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933*)NULL;
		goto IL_0026;
	}

IL_0019:
	{
		U3CU3Ec__DisplayClass376_0_t9B54378AED76759BA7EB8974E76F27BA23A51221* L_5 = V_0;
		delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* L_6 = (delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933*)il2cpp_codegen_object_new(delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		delegate_authorizer__ctor_m4F3DB7EAF151377921A14384AB7CB7E379B497E2(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass376_0_U3Csqlite3_set_authorizerU3Eb__0_mF842E6434D82B58D2D228ACC239DD0872ED8293C_RuntimeMethod_var), NULL);
		V_1 = L_6;
	}

IL_0026:
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_7 = ___db0;
		delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* L_8 = V_1;
		RuntimeObject* L_9 = ___user_data2;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = raw_sqlite3_set_authorizer_m295E60E304450D6D1DB1EBAAD223B696EBA62839(L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Int32 SQLitePCL.raw::sqlite3_win32_set_directory(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t raw_sqlite3_win32_set_directory_mEC02F8DA6211E76D8027ABFC2DA47C9C3DB0EB6E (int32_t ___typ0, String_t* ___path1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_StaticFields*)il2cpp_codegen_static_fields_for(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var))->____imp_0;
		int32_t L_1 = ___typ0;
		String_t* L_2 = ___path1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		L_3 = util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD(L_2, NULL);
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker2< int32_t, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(130 /* System.Int32 SQLitePCL.ISQLite3Provider::sqlite3_win32_set_directory(System.Int32,SQLitePCL.utf8z) */, ISQLite3Provider_t12D6FDDE2C734FC4554FA90D705E79012B3BC5E7_il2cpp_TypeInfo_var, L_0, L_1, L_3);
		return L_4;
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
// System.Void SQLitePCL.raw/<>c__DisplayClass226_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass226_0__ctor_m9564EB56D4FA4F63C21FA995AF16A460FBA8D37E (U3CU3Ec__DisplayClass226_0_t4A5A9270B5ABBDD4FE82B7325920FCAD7A653B69* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SQLitePCL.raw/<>c__DisplayClass226_0::<sqlite3_config_log>b__0(System.Object,System.Int32,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass226_0_U3Csqlite3_config_logU3Eb__0_m26F32F9E2374FC8B0797F483716049E0BC8A915D (U3CU3Ec__DisplayClass226_0_t4A5A9270B5ABBDD4FE82B7325920FCAD7A653B69* __this, RuntimeObject* ___ob0, int32_t ___e1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___msg2, const RuntimeMethod* method) 
{
	{
		strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1* L_0 = __this->___f_0;
		RuntimeObject* L_1 = ___ob0;
		int32_t L_2 = ___e1;
		String_t* L_3;
		L_3 = utf8z_utf8_to_string_m580270DDB4AE9B6A5AAC5C4FA552263D9C29C90A((&___msg2), NULL);
		NullCheck(L_0);
		strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B_inline(L_0, L_1, L_2, L_3, NULL);
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
// System.Void SQLitePCL.raw/<>c__DisplayClass232_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass232_0__ctor_m620499771C11ED7DAE428E57C7104248921364AE (U3CU3Ec__DisplayClass232_0_t838D8309C6E5622A939C813FB0CE2B1C640B62EF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SQLitePCL.raw/<>c__DisplayClass232_0::<sqlite3_trace>b__0(System.Object,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass232_0_U3Csqlite3_traceU3Eb__0_mE4F8F6801710A554C17482F07EC82C78431C405F (U3CU3Ec__DisplayClass232_0_t838D8309C6E5622A939C813FB0CE2B1C640B62EF* __this, RuntimeObject* ___ob0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___sp1, const RuntimeMethod* method) 
{
	{
		strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7* L_0 = __this->___f_0;
		RuntimeObject* L_1 = __this->___v_1;
		String_t* L_2;
		L_2 = utf8z_utf8_to_string_m580270DDB4AE9B6A5AAC5C4FA552263D9C29C90A((&___sp1), NULL);
		NullCheck(L_0);
		strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779_inline(L_0, L_1, L_2, NULL);
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
// System.Void SQLitePCL.raw/<>c__DisplayClass234_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass234_0__ctor_m77533514D4847F355E28FEEE9ACFD78AB8D056AD (U3CU3Ec__DisplayClass234_0_t747F31218868C8520EF94BBFFC80D59BA3312B30* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SQLitePCL.raw/<>c__DisplayClass234_0::<sqlite3_profile>b__0(System.Object,SQLitePCL.utf8z,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass234_0_U3Csqlite3_profileU3Eb__0_m8DF2072D68DEB046137A16CA78707BDB673F2BD1 (U3CU3Ec__DisplayClass234_0_t747F31218868C8520EF94BBFFC80D59BA3312B30* __this, RuntimeObject* ___ob0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___sp1, int64_t ___ns2, const RuntimeMethod* method) 
{
	{
		strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C* L_0 = __this->___f_0;
		RuntimeObject* L_1 = __this->___v_1;
		String_t* L_2;
		L_2 = utf8z_utf8_to_string_m580270DDB4AE9B6A5AAC5C4FA552263D9C29C90A((&___sp1), NULL);
		int64_t L_3 = ___ns2;
		NullCheck(L_0);
		strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4_inline(L_0, L_1, L_2, L_3, NULL);
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
// System.Void SQLitePCL.raw/<>c__DisplayClass237_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass237_0__ctor_m733A68B0C5388A210975309A07AF33D78B7970B3 (U3CU3Ec__DisplayClass237_0_t2A0DCC483EE166D297FE81DFE52453F10AE5610B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SQLitePCL.raw/<>c__DisplayClass237_0::<sqlite3_update_hook>b__0(System.Object,System.Int32,SQLitePCL.utf8z,SQLitePCL.utf8z,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass237_0_U3Csqlite3_update_hookU3Eb__0_m6DE23FBE7CD85295CA402EFA6CBFED72F5D02FC6 (U3CU3Ec__DisplayClass237_0_t2A0DCC483EE166D297FE81DFE52453F10AE5610B* __this, RuntimeObject* ___ob0, int32_t ___typ1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbname2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___tbl3, int64_t ___rowid4, const RuntimeMethod* method) 
{
	{
		strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886* L_0 = __this->___f_0;
		RuntimeObject* L_1 = ___ob0;
		int32_t L_2 = ___typ1;
		String_t* L_3;
		L_3 = utf8z_utf8_to_string_m580270DDB4AE9B6A5AAC5C4FA552263D9C29C90A((&___dbname2), NULL);
		String_t* L_4;
		L_4 = utf8z_utf8_to_string_m580270DDB4AE9B6A5AAC5C4FA552263D9C29C90A((&___tbl3), NULL);
		int64_t L_5 = ___rowid4;
		NullCheck(L_0);
		strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1_inline(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
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
// System.Void SQLitePCL.raw/<>c__DisplayClass238_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass238_0__ctor_mAB023B9700651578079226B73102E10002DB2105 (U3CU3Ec__DisplayClass238_0_t28AFD70323281419F99ABE6BC2FB9B400677BFEB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 SQLitePCL.raw/<>c__DisplayClass238_0::<sqlite3_create_collation>b__0(System.Object,System.ReadOnlySpan`1<System.Byte>,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass238_0_U3Csqlite3_create_collationU3Eb__0_m8377610D91204FBAF180DFAC4F9B10241ADACB41 (U3CU3Ec__DisplayClass238_0_t28AFD70323281419F99ABE6BC2FB9B400677BFEB* __this, RuntimeObject* ___ob0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s11, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E* L_0 = __this->___f_0;
		RuntimeObject* L_1 = ___ob0;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_2 = ___s11;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = raw_utf8_span_to_string_m42B7194C8F5E548DA785C3249BDD5EB2DA794024(L_2, NULL);
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_4 = ___s22;
		String_t* L_5;
		L_5 = raw_utf8_span_to_string_m42B7194C8F5E548DA785C3249BDD5EB2DA794024(L_4, NULL);
		NullCheck(L_0);
		int32_t L_6;
		L_6 = strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537_inline(L_0, L_1, L_3, L_5, NULL);
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
// System.Void SQLitePCL.raw/<>c__DisplayClass287_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass287_0__ctor_m9652DF4C60F5ECEAFF2AE0DB1D3C8ED318772C4A (U3CU3Ec__DisplayClass287_0_tE8EC7F43BC9B3DA9B57BC1007C2CC730F64AE9B2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 SQLitePCL.raw/<>c__DisplayClass287_0::<sqlite3_exec>b__0(System.Object,System.IntPtr[],System.IntPtr[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass287_0_U3Csqlite3_execU3Eb__0_m76107EDF69E2254611FBDCF9E0C22E25FA56FD6B (U3CU3Ec__DisplayClass287_0_tE8EC7F43BC9B3DA9B57BC1007C2CC730F64AE9B2* __this, RuntimeObject* ___ob0, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___values1, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___names2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ___values1;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = ___names2;
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_1 = L_3;
		V_2 = 0;
		goto IL_0030;
	}

IL_0016:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		int32_t L_5 = V_2;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_6 = ___values1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		intptr_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		String_t* L_10;
		L_10 = util_from_utf8_z_mC688C6FF1F44637723FC3C17C471003B03CD3D78(L_9, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_10);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_1;
		int32_t L_12 = V_2;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_13 = ___names2;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		intptr_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		String_t* L_17;
		L_17 = util_from_utf8_z_mC688C6FF1F44637723FC3C17C471003B03CD3D78(L_16, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_17);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (String_t*)L_17);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0030:
	{
		int32_t L_19 = V_2;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_20 = ___values1;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583* L_21 = __this->___callback_0;
		RuntimeObject* L_22 = ___ob0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = V_1;
		NullCheck(L_21);
		int32_t L_25;
		L_25 = strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6_inline(L_21, L_22, L_23, L_24, NULL);
		return L_25;
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
// System.Void SQLitePCL.raw/<>c__DisplayClass376_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass376_0__ctor_m2266973E0A0C1CD44FEBB04B65AFE3CCCE6B7E95 (U3CU3Ec__DisplayClass376_0_t9B54378AED76759BA7EB8974E76F27BA23A51221* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 SQLitePCL.raw/<>c__DisplayClass376_0::<sqlite3_set_authorizer>b__0(System.Object,System.Int32,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass376_0_U3Csqlite3_set_authorizerU3Eb__0_mF842E6434D82B58D2D228ACC239DD0872ED8293C (U3CU3Ec__DisplayClass376_0_t9B54378AED76759BA7EB8974E76F27BA23A51221* __this, RuntimeObject* ___ob0, int32_t ___a1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___p02, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___p13, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbname4, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___v5, const RuntimeMethod* method) 
{
	{
		strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29* L_0 = __this->___f_0;
		RuntimeObject* L_1 = ___ob0;
		int32_t L_2 = ___a1;
		String_t* L_3;
		L_3 = utf8z_utf8_to_string_m580270DDB4AE9B6A5AAC5C4FA552263D9C29C90A((&___p02), NULL);
		String_t* L_4;
		L_4 = utf8z_utf8_to_string_m580270DDB4AE9B6A5AAC5C4FA552263D9C29C90A((&___p13), NULL);
		String_t* L_5;
		L_5 = utf8z_utf8_to_string_m580270DDB4AE9B6A5AAC5C4FA552263D9C29C90A((&___dbname4), NULL);
		String_t* L_6;
		L_6 = utf8z_utf8_to_string_m580270DDB4AE9B6A5AAC5C4FA552263D9C29C90A((&___v5), NULL);
		NullCheck(L_0);
		int32_t L_7;
		L_7 = strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34_inline(L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
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
// System.Void SQLitePCL.sqlite3_backup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqlite3_backup__ctor_m63CDC567578C17953C38ACA2E9FAAE0BFF778F7C (sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, (0), (bool)1, NULL);
		return;
	}
}
// System.Boolean SQLitePCL.sqlite3_backup::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool sqlite3_backup_get_IsInvalid_m8C31716D1F4164DA473615E60276C10E3DD483AA (sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		return L_1;
	}
}
// System.Boolean SQLitePCL.sqlite3_backup::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool sqlite3_backup_ReleaseHandle_m86563AF4C898B4AF3D7BB1A02CD9BF116B18893B (sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = raw_internal_sqlite3_backup_finish_mE0275B95B1CCB4CE7B8FA6F9DE0A17860E723446(L_0, NULL);
		return (bool)1;
	}
}
// System.Int32 SQLitePCL.sqlite3_backup::manual_close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t sqlite3_backup_manual_close_m16BBF17DEA8FFABBE26C4A1668815FA624897244 (sqlite3_backup_tA63020E6886E8E4AC469CE68788C7FA2BE7B8C30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = raw_internal_sqlite3_backup_finish_mE0275B95B1CCB4CE7B8FA6F9DE0A17860E723446(L_0, NULL);
		((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0 = (0);
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
// System.Void SQLitePCL.sqlite3_context::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqlite3_context__ctor_mD3A1FF371768B7E9C88EC86EFE32952B8D89D71F (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___user_data0;
		__this->____user_data_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____user_data_1), (void*)L_0);
		return;
	}
}
// System.Object SQLitePCL.sqlite3_context::get_user_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* sqlite3_context_get_user_data_m2B56AA945EBDDC7B032007BA993E2B0D6311E609 (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____user_data_1;
		return L_0;
	}
}
// System.IntPtr SQLitePCL.sqlite3_context::get_ptr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t sqlite3_context_get_ptr_m12CD2A3168656A686B6D7455A6A8251F31149259 (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____p_0;
		return L_0;
	}
}
// System.Void SQLitePCL.sqlite3_context::set_context_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqlite3_context_set_context_ptr_m75037F45D04497B679E79EF821D191289E5917A3 (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* __this, intptr_t ___p0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		__this->____p_0 = L_0;
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
// System.Void SQLitePCL.sqlite3_value::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqlite3_value__ctor_m653B23B5B2873FC7E8AB166AAE5E00151A929676 (sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* __this, intptr_t ___p0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0 = ___p0;
		__this->____p_0 = L_0;
		return;
	}
}
// System.IntPtr SQLitePCL.sqlite3_value::get_ptr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t sqlite3_value_get_ptr_mAF588DD3703B49533D61586741960A38A4515AD9 (sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____p_0;
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
// System.Void SQLitePCL.sqlite3_blob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqlite3_blob__ctor_mF7C7B725FB9FE141587C4BE5A547765610962159 (sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, (0), (bool)1, NULL);
		return;
	}
}
// System.Boolean SQLitePCL.sqlite3_blob::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool sqlite3_blob_get_IsInvalid_mE9291E4818E97885BC9F83E0BB74626AB759CAB5 (sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		return L_1;
	}
}
// System.Boolean SQLitePCL.sqlite3_blob::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool sqlite3_blob_ReleaseHandle_m9B282376A7087BECD8B498F554D05441472093F1 (sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = raw_internal_sqlite3_blob_close_m39CEAEE53333DACA116E82A5A36AEF7E3E92B547(L_0, NULL);
		return (bool)1;
	}
}
// System.Int32 SQLitePCL.sqlite3_blob::manual_close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t sqlite3_blob_manual_close_m32537CD8CDCC89D1CBAD7832CFA559A05C61BA5F (sqlite3_blob_tFE15C3078D13F18E37D20A3903D8198FD540C057* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = raw_internal_sqlite3_blob_close_m39CEAEE53333DACA116E82A5A36AEF7E3E92B547(L_0, NULL);
		((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0 = (0);
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
// SQLitePCL.sqlite3_stmt SQLitePCL.sqlite3_stmt::From(System.IntPtr,SQLitePCL.sqlite3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* sqlite3_stmt_From_m3442F22D163799397D67AD7DF86FCB6CF71448C2 (intptr_t ___p0, sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* ___db1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* V_0 = NULL;
	{
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_0 = (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F*)il2cpp_codegen_object_new(sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		sqlite3_stmt__ctor_m8274DE84D8B25F50A07FA11BDB40CA18880774B3(L_0, NULL);
		V_0 = L_0;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_1 = V_0;
		intptr_t L_2 = ___p0;
		NullCheck(L_1);
		SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline(L_1, L_2, NULL);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_3 = ___db1;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_4 = V_0;
		NullCheck(L_3);
		sqlite3_add_stmt_mD2483B53A00B53DE52B70C40C475EC191199C73B(L_3, L_4, NULL);
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_5 = V_0;
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_6 = ___db1;
		NullCheck(L_5);
		L_5->____db_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____db_6), (void*)L_6);
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_7 = V_0;
		return L_7;
	}
}
// System.Void SQLitePCL.sqlite3_stmt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqlite3_stmt__ctor_m8274DE84D8B25F50A07FA11BDB40CA18880774B3 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, (0), (bool)1, NULL);
		return;
	}
}
// System.Boolean SQLitePCL.sqlite3_stmt::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool sqlite3_stmt_get_IsInvalid_m6E1050B83C665C3802FA731D0FDB8B6041BB5E53 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		return L_1;
	}
}
// System.Boolean SQLitePCL.sqlite3_stmt::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool sqlite3_stmt_ReleaseHandle_mF833B591DA1E47FA9D5565BBB11370820582C4E8 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = raw_internal_sqlite3_finalize_mB8E88A3432B14F60BDAA959F4188BAB00B1AA0F5(L_0, NULL);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_2 = __this->____db_6;
		NullCheck(L_2);
		sqlite3_remove_stmt_m4388870B666E82A70AE88284E79AADD62C321BA6(L_2, __this, NULL);
		return (bool)1;
	}
}
// System.Int32 SQLitePCL.sqlite3_stmt::manual_close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t sqlite3_stmt_manual_close_m3A3C2F6C6782CB371A60EA7B5372F9CCA721577A (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = raw_internal_sqlite3_finalize_mB8E88A3432B14F60BDAA959F4188BAB00B1AA0F5(L_0, NULL);
		((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0 = (0);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_2 = __this->____db_6;
		NullCheck(L_2);
		sqlite3_remove_stmt_m4388870B666E82A70AE88284E79AADD62C321BA6(L_2, __this, NULL);
		return L_1;
	}
}
// System.IntPtr SQLitePCL.sqlite3_stmt::get_ptr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t sqlite3_stmt_get_ptr_mF5030B60EB110512D248A632A61AE2F899580B58 (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		return L_0;
	}
}
// SQLitePCL.sqlite3 SQLitePCL.sqlite3_stmt::get_db()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* sqlite3_stmt_get_db_m31DCFD46B918941ED21CAD5F953201B59EF259CF (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* __this, const RuntimeMethod* method) 
{
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = __this->____db_6;
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
// System.Void SQLitePCL.sqlite3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqlite3__ctor_m9665E7B91BF88357F8083A085B576DCC73A40B93 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, (0), (bool)1, NULL);
		return;
	}
}
// System.Boolean SQLitePCL.sqlite3::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool sqlite3_get_IsInvalid_m91F60F4362294FF1FE48934A7EB645956C6F164D (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		return L_1;
	}
}
// System.Boolean SQLitePCL.sqlite3::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool sqlite3_ReleaseHandle_m55595E85FCF053A51BDD4AD6B8B7A3BDA48AF275 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = raw_internal_sqlite3_close_v2_mCE5CD4ED10FD8ACCA988D4AD708FBFD8815C499D(L_0, NULL);
		sqlite3_dispose_extra_m353F2CCE56ADF182709E81FEEEC40854E41F807B(__this, NULL);
		return (bool)1;
	}
}
// System.Int32 SQLitePCL.sqlite3::manual_close_v2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t sqlite3_manual_close_v2_m9913465FCFAA3E200B65FC3E7396D23B00D5351C (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = raw_internal_sqlite3_close_v2_mCE5CD4ED10FD8ACCA988D4AD708FBFD8815C499D(L_0, NULL);
		((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0 = (0);
		sqlite3_dispose_extra_m353F2CCE56ADF182709E81FEEEC40854E41F807B(__this, NULL);
		return L_1;
	}
}
// System.Int32 SQLitePCL.sqlite3::manual_close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t sqlite3_manual_close_m385D8CE62C53FB890E5878C8FC353A95485514CC (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		il2cpp_codegen_runtime_class_init_inline(raw_t69949A70FEB6A3380DD174C22371DD56C26EE95C_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = raw_internal_sqlite3_close_mE779057FC6194468638B64928D67BAEF0BE69E5F(L_0, NULL);
		((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0 = (0);
		sqlite3_dispose_extra_m353F2CCE56ADF182709E81FEEEC40854E41F807B(__this, NULL);
		return L_1;
	}
}
// SQLitePCL.sqlite3 SQLitePCL.sqlite3::New(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* sqlite3_New_m4AF72342C8DBAD56760AD10A9D730D9EC80FB1C9 (intptr_t ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2*)il2cpp_codegen_object_new(sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		sqlite3__ctor_m9665E7B91BF88357F8083A085B576DCC73A40B93(L_0, NULL);
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_1 = L_0;
		intptr_t L_2 = ___p0;
		NullCheck(L_1);
		SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline(L_1, L_2, NULL);
		return L_1;
	}
}
// System.Void SQLitePCL.sqlite3::enable_sqlite3_next_stmt(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqlite3_enable_sqlite3_next_stmt_m8838A7FDEE7942774B115E5CD1C4E9660249E42A (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* __this, bool ___enabled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2__ctor_m738B333B82DBBF304A15728C98883F5163204374_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___enabled0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476* L_1 = __this->____stmts_6;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476* L_2 = (ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476*)il2cpp_codegen_object_new(ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ConcurrentDictionary_2__ctor_m738B333B82DBBF304A15728C98883F5163204374(L_2, ConcurrentDictionary_2__ctor_m738B333B82DBBF304A15728C98883F5163204374_RuntimeMethod_var);
		__this->____stmts_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stmts_6), (void*)L_2);
		return;
	}

IL_0017:
	{
		__this->____stmts_6 = (ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stmts_6), (void*)(ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476*)NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void SQLitePCL.sqlite3::add_stmt(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqlite3_add_stmt_mD2483B53A00B53DE52B70C40C475EC191199C73B (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___stmt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m0B68193309F23091AEE40F02FBB000FAFB452DF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476* L_0 = __this->____stmts_6;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476* L_1 = __this->____stmts_6;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_2 = ___stmt0;
		NullCheck(L_2);
		intptr_t L_3;
		L_3 = sqlite3_stmt_get_ptr_mF5030B60EB110512D248A632A61AE2F899580B58_inline(L_2, NULL);
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_4 = ___stmt0;
		NullCheck(L_1);
		ConcurrentDictionary_2_set_Item_m0B68193309F23091AEE40F02FBB000FAFB452DF8(L_1, L_3, L_4, ConcurrentDictionary_2_set_Item_m0B68193309F23091AEE40F02FBB000FAFB452DF8_RuntimeMethod_var);
	}

IL_001a:
	{
		return;
	}
}
// SQLitePCL.sqlite3_stmt SQLitePCL.sqlite3::find_stmt(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* sqlite3_find_stmt_m6DB56FD791338E8E5524252CE51E90D7D6624FE3 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* __this, intptr_t ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_get_Item_mE58842628CBB5BB71F07874570EC30E7FC721445_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476* L_0 = __this->____stmts_6;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476* L_1 = __this->____stmts_6;
		intptr_t L_2 = ___p0;
		NullCheck(L_1);
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_3;
		L_3 = ConcurrentDictionary_2_get_Item_mE58842628CBB5BB71F07874570EC30E7FC721445(L_1, L_2, ConcurrentDictionary_2_get_Item_mE58842628CBB5BB71F07874570EC30E7FC721445_RuntimeMethod_var);
		return L_3;
	}

IL_0015:
	{
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral929AB203C6C048DBA2C6EA10E47D89A2FDE3F41A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&sqlite3_find_stmt_m6DB56FD791338E8E5524252CE51E90D7D6624FE3_RuntimeMethod_var)));
	}
}
// System.Void SQLitePCL.sqlite3::remove_stmt(SQLitePCL.sqlite3_stmt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqlite3_remove_stmt_m4388870B666E82A70AE88284E79AADD62C321BA6 (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* __this, sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryRemove_m8C588451D72CA78D8618557F8A75D35324158B5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* V_0 = NULL;
	{
		ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476* L_0 = __this->____stmts_6;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		ConcurrentDictionary_2_tEFA4BFFF7CD4FFD4A7A9EF772AF343FBCFABB476* L_1 = __this->____stmts_6;
		sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* L_2 = ___s0;
		NullCheck(L_2);
		intptr_t L_3;
		L_3 = sqlite3_stmt_get_ptr_mF5030B60EB110512D248A632A61AE2F899580B58_inline(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = ConcurrentDictionary_2_TryRemove_m8C588451D72CA78D8618557F8A75D35324158B5D(L_1, L_3, (&V_0), ConcurrentDictionary_2_TryRemove_m8C588451D72CA78D8618557F8A75D35324158B5D_RuntimeMethod_var);
	}

IL_001c:
	{
		return;
	}
}
// System.Void SQLitePCL.sqlite3::dispose_extra()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sqlite3_dispose_extra_m353F2CCE56ADF182709E81FEEEC40854E41F807B (sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___extra_7;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___extra_7;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
		__this->___extra_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___extra_7), (void*)(RuntimeObject*)NULL);
	}

IL_001a:
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
int32_t delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C_Multicast(delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* __this, RuntimeObject* ___user_data0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s11, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s22, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* currentDelegate = reinterpret_cast<delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___user_data0, ___s11, ___s22, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C_Open(delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* __this, RuntimeObject* ___user_data0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s11, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s22, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___user_data0, ___s11, ___s22, method);
}
int32_t delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C_OpenStaticInvoker(delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* __this, RuntimeObject* ___user_data0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s11, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s22, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A >::Invoke(__this->___method_ptr_0, method, NULL, ___user_data0, ___s11, ___s22);
}
int32_t delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C_ClosedStaticInvoker(delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* __this, RuntimeObject* ___user_data0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s11, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s22, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, RuntimeObject*, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___user_data0, ___s11, ___s22);
}
int32_t delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C_OpenVirtual(delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* __this, RuntimeObject* ___user_data0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s11, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s22, const RuntimeMethod* method)
{
	return VirtualFuncInvoker2< int32_t, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A >::Invoke(il2cpp_codegen_method_get_slot(method), ___user_data0, ___s11, ___s22);
}
int32_t delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C_OpenInterface(delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* __this, RuntimeObject* ___user_data0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s11, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s22, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker2< int32_t, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___user_data0, ___s11, ___s22);
}
int32_t delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C_OpenGenericVirtual(delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* __this, RuntimeObject* ___user_data0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s11, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s22, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker2< int32_t, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A >::Invoke(method, ___user_data0, ___s11, ___s22);
}
int32_t delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C_OpenGenericInterface(delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* __this, RuntimeObject* ___user_data0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s11, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s22, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker2< int32_t, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A >::Invoke(method, ___user_data0, ___s11, ___s22);
}
// System.Void SQLitePCL.delegate_collation::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_collation__ctor_mF884888642B63BD696BC37E898161379BDAA85AB (delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C_Multicast;
}
// System.Int32 SQLitePCL.delegate_collation::Invoke(System.Object,System.ReadOnlySpan`1<System.Byte>,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C (delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* __this, RuntimeObject* ___user_data0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s11, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s22, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___s11, ___s22, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.delegate_collation::BeginInvoke(System.Object,System.ReadOnlySpan`1<System.Byte>,System.ReadOnlySpan`1<System.Byte>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* delegate_collation_BeginInvoke_mC8324EE3A05B627AF509C783ABCC283DC794AE71 (delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* __this, RuntimeObject* ___user_data0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s11, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s22, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___user_data0;
	__d_args[1] = Box(ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A_il2cpp_TypeInfo_var, &___s11);
	__d_args[2] = Box(ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A_il2cpp_TypeInfo_var, &___s22);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 SQLitePCL.delegate_collation::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t delegate_collation_EndInvoke_m8FFD2C306858A28147F3E9B444F22CEF2DDBD7D8 (delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349_Multicast(delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* __this, RuntimeObject* ___user_data0, int32_t ___type1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___database2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* currentDelegate = reinterpret_cast<delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___user_data0, ___type1, ___database2, ___table3, ___rowid4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349_Open(delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* __this, RuntimeObject* ___user_data0, int32_t ___type1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___database2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___user_data0, ___type1, ___database2, ___table3, ___rowid4, method);
}
void delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349_OpenStaticInvoker(delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* __this, RuntimeObject* ___user_data0, int32_t ___type1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___database2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___user_data0, ___type1, ___database2, ___table3, ___rowid4);
}
void delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349_ClosedStaticInvoker(delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* __this, RuntimeObject* ___user_data0, int32_t ___type1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___database2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, RuntimeObject*, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___user_data0, ___type1, ___database2, ___table3, ___rowid4);
}
void delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349_OpenVirtual(delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* __this, RuntimeObject* ___user_data0, int32_t ___type1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___database2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	VirtualActionInvoker4< int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___user_data0, ___type1, ___database2, ___table3, ___rowid4);
}
void delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349_OpenInterface(delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* __this, RuntimeObject* ___user_data0, int32_t ___type1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___database2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	InterfaceActionInvoker4< int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___user_data0, ___type1, ___database2, ___table3, ___rowid4);
}
void delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349_OpenGenericVirtual(delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* __this, RuntimeObject* ___user_data0, int32_t ___type1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___database2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker4< int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t >::Invoke(method, ___user_data0, ___type1, ___database2, ___table3, ___rowid4);
}
void delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349_OpenGenericInterface(delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* __this, RuntimeObject* ___user_data0, int32_t ___type1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___database2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker4< int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t >::Invoke(method, ___user_data0, ___type1, ___database2, ___table3, ___rowid4);
}
// System.Void SQLitePCL.delegate_update::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_update__ctor_m17032A8DE0B56F6F7EEB38252AA6FF345689EE93 (delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349_Multicast;
}
// System.Void SQLitePCL.delegate_update::Invoke(System.Object,System.Int32,SQLitePCL.utf8z,SQLitePCL.utf8z,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349 (delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* __this, RuntimeObject* ___user_data0, int32_t ___type1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___database2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___table3, int64_t ___rowid4, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___type1, ___database2, ___table3, ___rowid4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.delegate_update::BeginInvoke(System.Object,System.Int32,SQLitePCL.utf8z,SQLitePCL.utf8z,System.Int64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* delegate_update_BeginInvoke_mDC20A7FB62F01385608B87534BCFDE741F5E7B3A (delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* __this, RuntimeObject* ___user_data0, int32_t ___type1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___database2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___table3, int64_t ___rowid4, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback5, RuntimeObject* ___object6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___user_data0;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___type1);
	__d_args[2] = Box(utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_il2cpp_TypeInfo_var, &___database2);
	__d_args[3] = Box(utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_il2cpp_TypeInfo_var, &___table3);
	__d_args[4] = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &___rowid4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Void SQLitePCL.delegate_update::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_update_EndInvoke_m47053E6CF01A17695147C3A487B3AACC47EFA528 (delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19_Multicast(delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___msg2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* currentDelegate = reinterpret_cast<delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___user_data0, ___errorCode1, ___msg2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19_Open(delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___msg2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___user_data0, ___errorCode1, ___msg2, method);
}
void delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19_OpenStaticInvoker(delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___msg2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(__this->___method_ptr_0, method, NULL, ___user_data0, ___errorCode1, ___msg2);
}
void delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19_ClosedStaticInvoker(delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___msg2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___user_data0, ___errorCode1, ___msg2);
}
void delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19_OpenVirtual(delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___msg2, const RuntimeMethod* method)
{
	VirtualActionInvoker2< int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(il2cpp_codegen_method_get_slot(method), ___user_data0, ___errorCode1, ___msg2);
}
void delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19_OpenInterface(delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___msg2, const RuntimeMethod* method)
{
	InterfaceActionInvoker2< int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___user_data0, ___errorCode1, ___msg2);
}
void delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19_OpenGenericVirtual(delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___msg2, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker2< int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(method, ___user_data0, ___errorCode1, ___msg2);
}
void delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19_OpenGenericInterface(delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___msg2, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker2< int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(method, ___user_data0, ___errorCode1, ___msg2);
}
// System.Void SQLitePCL.delegate_log::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_log__ctor_m90FE70F302D363779BDD720CE99A7B2A6B07E02A (delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19_Multicast;
}
// System.Void SQLitePCL.delegate_log::Invoke(System.Object,System.Int32,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19 (delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___msg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___errorCode1, ___msg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.delegate_log::BeginInvoke(System.Object,System.Int32,SQLitePCL.utf8z,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* delegate_log_BeginInvoke_mCE40BA2D7C0E63D538AAD0CA80136C0869DCB1AE (delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___msg2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___user_data0;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___errorCode1);
	__d_args[2] = Box(utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_il2cpp_TypeInfo_var, &___msg2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void SQLitePCL.delegate_log::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_log_EndInvoke_m6776ACD840F9BC8B70C9CD152CEA4335E8945106 (delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
int32_t delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F_Multicast(delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param02, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param13, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName4, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* currentDelegate = reinterpret_cast<delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___user_data0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F_Open(delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param02, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param13, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName4, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___user_data0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5, method);
}
int32_t delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F_OpenStaticInvoker(delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param02, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param13, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName4, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< int32_t, RuntimeObject*, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(__this->___method_ptr_0, method, NULL, ___user_data0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5);
}
int32_t delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F_ClosedStaticInvoker(delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param02, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param13, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName4, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	return InvokerFuncInvoker7< int32_t, RuntimeObject*, RuntimeObject*, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___user_data0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5);
}
int32_t delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F_OpenVirtual(delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param02, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param13, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName4, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	return VirtualFuncInvoker5< int32_t, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(il2cpp_codegen_method_get_slot(method), ___user_data0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5);
}
int32_t delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F_OpenInterface(delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param02, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param13, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName4, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker5< int32_t, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___user_data0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5);
}
int32_t delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F_OpenGenericVirtual(delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param02, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param13, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName4, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker5< int32_t, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(method, ___user_data0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5);
}
int32_t delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F_OpenGenericInterface(delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param02, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param13, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName4, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___inner_most_trigger_or_view5, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker5< int32_t, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(method, ___user_data0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5);
}
// System.Void SQLitePCL.delegate_authorizer::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_authorizer__ctor_m4F3DB7EAF151377921A14384AB7CB7E379B497E2 (delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F_Multicast;
}
// System.Int32 SQLitePCL.delegate_authorizer::Invoke(System.Object,System.Int32,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F (delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param02, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param13, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName4, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___inner_most_trigger_or_view5, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.delegate_authorizer::BeginInvoke(System.Object,System.Int32,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* delegate_authorizer_BeginInvoke_m396289C95F9D4EF6384C45BBA538A0C505BA93F4 (delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param02, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param13, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName4, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___inner_most_trigger_or_view5, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback6, RuntimeObject* ___object7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = ___user_data0;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___action_code1);
	__d_args[2] = Box(utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_il2cpp_TypeInfo_var, &___param02);
	__d_args[3] = Box(utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_il2cpp_TypeInfo_var, &___param13);
	__d_args[4] = Box(utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_il2cpp_TypeInfo_var, &___dbName4);
	__d_args[5] = Box(utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_il2cpp_TypeInfo_var, &___inner_most_trigger_or_view5);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);
}
// System.Int32 SQLitePCL.delegate_authorizer::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t delegate_authorizer_EndInvoke_m533D6F2FA7DA2C1C0AD7DC023118BA36450D8D92 (delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
int32_t delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B_Multicast(delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* __this, RuntimeObject* ___user_data0, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___values1, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___names2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* currentDelegate = reinterpret_cast<delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___user_data0, ___values1, ___names2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B_Open(delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* __this, RuntimeObject* ___user_data0, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___values1, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___names2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___user_data0, ___values1, ___names2, method);
}
int32_t delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B_OpenStaticInvoker(delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* __this, RuntimeObject* ___user_data0, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___values1, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___names2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* >::Invoke(__this->___method_ptr_0, method, NULL, ___user_data0, ___values1, ___names2);
}
int32_t delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B_ClosedStaticInvoker(delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* __this, RuntimeObject* ___user_data0, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___values1, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___names2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, RuntimeObject*, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___user_data0, ___values1, ___names2);
}
int32_t delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B_OpenVirtual(delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* __this, RuntimeObject* ___user_data0, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___values1, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___names2, const RuntimeMethod* method)
{
	return VirtualFuncInvoker2< int32_t, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* >::Invoke(il2cpp_codegen_method_get_slot(method), ___user_data0, ___values1, ___names2);
}
int32_t delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B_OpenInterface(delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* __this, RuntimeObject* ___user_data0, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___values1, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___names2, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker2< int32_t, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___user_data0, ___values1, ___names2);
}
int32_t delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B_OpenGenericVirtual(delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* __this, RuntimeObject* ___user_data0, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___values1, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___names2, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker2< int32_t, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* >::Invoke(method, ___user_data0, ___values1, ___names2);
}
int32_t delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B_OpenGenericInterface(delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* __this, RuntimeObject* ___user_data0, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___values1, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___names2, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker2< int32_t, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* >::Invoke(method, ___user_data0, ___values1, ___names2);
}
// System.Void SQLitePCL.delegate_exec::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_exec__ctor_m64682E5DA3B842E47174CB722B43977DFCF5AE5B (delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B_Multicast;
}
// System.Int32 SQLitePCL.delegate_exec::Invoke(System.Object,System.IntPtr[],System.IntPtr[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B (delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* __this, RuntimeObject* ___user_data0, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___values1, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___names2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___values1, ___names2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.delegate_exec::BeginInvoke(System.Object,System.IntPtr[],System.IntPtr[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* delegate_exec_BeginInvoke_mDC7EFD9D2F45A087FD28EDA0559138059E7DF30E (delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* __this, RuntimeObject* ___user_data0, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___values1, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___names2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___user_data0;
	__d_args[1] = ___values1;
	__d_args[2] = ___names2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 SQLitePCL.delegate_exec::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t delegate_exec_EndInvoke_m90B0C488FD304510501E416F34F5F6F48092599D (delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
int32_t delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8_Multicast(delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* currentDelegate = reinterpret_cast<delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___user_data0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8_Open(delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___user_data0, method);
}
int32_t delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8_OpenStaticInvoker(delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___user_data0);
}
int32_t delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8_ClosedStaticInvoker(delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___user_data0);
}
int32_t delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8_OpenVirtual(delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	return VirtualFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___user_data0);
}
int32_t delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8_OpenInterface(delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___user_data0);
}
int32_t delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8_OpenGenericVirtual(delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker0< int32_t >::Invoke(method, ___user_data0);
}
int32_t delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8_OpenGenericInterface(delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker0< int32_t >::Invoke(method, ___user_data0);
}
// System.Void SQLitePCL.delegate_commit::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_commit__ctor_mDC224841125382D9102CB100B9AA54CD63B324AE (delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8_Open;
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
						__this->___invoke_impl_1 = (intptr_t)&delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8_Multicast;
}
// System.Int32 SQLitePCL.delegate_commit::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8 (delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.delegate_commit::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* delegate_commit_BeginInvoke_m2E4497F373ED48B4F2D4914FF24DF279E018E336 (delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* __this, RuntimeObject* ___user_data0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___user_data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Int32 SQLitePCL.delegate_commit::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t delegate_commit_EndInvoke_mCAC9CFF8DF38D44337630DABE4D4062E78663A68 (delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8_Multicast(delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* currentDelegate = reinterpret_cast<delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___user_data0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8_Open(delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___user_data0, method);
}
void delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8_OpenStaticInvoker(delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___user_data0);
}
void delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8_ClosedStaticInvoker(delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___user_data0);
}
void delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8_OpenVirtual(delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___user_data0);
}
void delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8_OpenInterface(delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___user_data0);
}
void delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8_OpenGenericVirtual(delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___user_data0);
}
void delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8_OpenGenericInterface(delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___user_data0);
}
// System.Void SQLitePCL.delegate_rollback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_rollback__ctor_mF1BC5B6A3F3EAF09E5B75711394F4ADA0350CAB9 (delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8_Open;
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
						__this->___invoke_impl_1 = (intptr_t)&delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8_Multicast;
}
// System.Void SQLitePCL.delegate_rollback::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8 (delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.delegate_rollback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* delegate_rollback_BeginInvoke_mD04B01F16D8870235821758A0571AE2089CFE4EF (delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* __this, RuntimeObject* ___user_data0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___user_data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void SQLitePCL.delegate_rollback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_rollback_EndInvoke_m752A1C5672B5449C29A7AA3BCB82775832FADDE7 (delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E_Multicast(delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* currentDelegate = reinterpret_cast<delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___user_data0, ___statement1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E_Open(delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___user_data0, ___statement1, method);
}
void delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E_OpenStaticInvoker(delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(__this->___method_ptr_0, method, NULL, ___user_data0, ___statement1);
}
void delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E_ClosedStaticInvoker(delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___user_data0, ___statement1);
}
void delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E_OpenVirtual(delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(il2cpp_codegen_method_get_slot(method), ___user_data0, ___statement1);
}
void delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E_OpenInterface(delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___user_data0, ___statement1);
}
void delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E_OpenGenericVirtual(delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(method, ___user_data0, ___statement1);
}
void delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E_OpenGenericInterface(delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 >::Invoke(method, ___user_data0, ___statement1);
}
// System.Void SQLitePCL.delegate_trace::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_trace__ctor_m363F86F59BCE053BF974338A6E05C69C95C8D189 (delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E_Open;
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
						__this->___invoke_impl_1 = (intptr_t)&delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E_Multicast;
}
// System.Void SQLitePCL.delegate_trace::Invoke(System.Object,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E (delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___statement1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.delegate_trace::BeginInvoke(System.Object,SQLitePCL.utf8z,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* delegate_trace_BeginInvoke_m06D9F702DB373A5DFA03DC3BB5854894F2CAD81E (delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___user_data0;
	__d_args[1] = Box(utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_il2cpp_TypeInfo_var, &___statement1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void SQLitePCL.delegate_trace::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_trace_EndInvoke_mD60F3D489B2B83AA429020D8D09C3273CB22BFBB (delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1_Multicast(delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, int64_t ___ns2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* currentDelegate = reinterpret_cast<delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___user_data0, ___statement1, ___ns2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1_Open(delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, int64_t ___ns2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___user_data0, ___statement1, ___ns2, method);
}
void delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1_OpenStaticInvoker(delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, int64_t ___ns2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___user_data0, ___statement1, ___ns2);
}
void delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1_ClosedStaticInvoker(delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, int64_t ___ns2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___user_data0, ___statement1, ___ns2);
}
void delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1_OpenVirtual(delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, int64_t ___ns2, const RuntimeMethod* method)
{
	VirtualActionInvoker2< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___user_data0, ___statement1, ___ns2);
}
void delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1_OpenInterface(delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, int64_t ___ns2, const RuntimeMethod* method)
{
	InterfaceActionInvoker2< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___user_data0, ___statement1, ___ns2);
}
void delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1_OpenGenericVirtual(delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, int64_t ___ns2, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker2< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t >::Invoke(method, ___user_data0, ___statement1, ___ns2);
}
void delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1_OpenGenericInterface(delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, int64_t ___ns2, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker2< utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t >::Invoke(method, ___user_data0, ___statement1, ___ns2);
}
// System.Void SQLitePCL.delegate_profile::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_profile__ctor_mACA8FE55EFC53A98950C22BD55D8B8C0A3F6CEDA (delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1_Multicast;
}
// System.Void SQLitePCL.delegate_profile::Invoke(System.Object,SQLitePCL.utf8z,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1 (delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, int64_t ___ns2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___statement1, ___ns2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.delegate_profile::BeginInvoke(System.Object,SQLitePCL.utf8z,System.Int64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* delegate_profile_BeginInvoke_m72F814267FC2BD8D58E5882AC63565852606E55D (delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, int64_t ___ns2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___user_data0;
	__d_args[1] = Box(utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_il2cpp_TypeInfo_var, &___statement1);
	__d_args[2] = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &___ns2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void SQLitePCL.delegate_profile::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_profile_EndInvoke_m8E3A859AF8CE0EC4B78C0C767AA2708B81D90D14 (delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
int32_t delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218_Multicast(delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* currentDelegate = reinterpret_cast<delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___user_data0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218_Open(delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___user_data0, method);
}
int32_t delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218_OpenStaticInvoker(delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___user_data0);
}
int32_t delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218_ClosedStaticInvoker(delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___user_data0);
}
int32_t delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218_OpenVirtual(delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	return VirtualFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___user_data0);
}
int32_t delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218_OpenInterface(delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___user_data0);
}
int32_t delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218_OpenGenericVirtual(delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker0< int32_t >::Invoke(method, ___user_data0);
}
int32_t delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218_OpenGenericInterface(delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker0< int32_t >::Invoke(method, ___user_data0);
}
// System.Void SQLitePCL.delegate_progress::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_progress__ctor_mA69095A6759BF1B526140E8B225E067852C264CE (delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218_Open;
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
						__this->___invoke_impl_1 = (intptr_t)&delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218_Multicast;
}
// System.Int32 SQLitePCL.delegate_progress::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218 (delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.delegate_progress::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* delegate_progress_BeginInvoke_m60807C419C874045368697C5C5E6BBE12364969C (delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* __this, RuntimeObject* ___user_data0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___user_data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Int32 SQLitePCL.delegate_progress::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t delegate_progress_EndInvoke_m48B7597D9A19E3DD885AE799116649FF0FECCD80 (delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D_Multicast(delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* currentDelegate = reinterpret_cast<delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C*, RuntimeObject*, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ctx0, ___user_data1, ___args2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D_Open(delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C*, RuntimeObject*, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ctx0, ___user_data1, ___args2, method);
}
void delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D_OpenStaticInvoker(delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C*, RuntimeObject*, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* >::Invoke(__this->___method_ptr_0, method, NULL, ___ctx0, ___user_data1, ___args2);
}
void delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D_ClosedStaticInvoker(delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C*, RuntimeObject*, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ctx0, ___user_data1, ___args2);
}
void delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D_OpenVirtual(delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method)
{
	VirtualActionInvoker2< RuntimeObject*, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* >::Invoke(il2cpp_codegen_method_get_slot(method), ___ctx0, ___user_data1, ___args2);
}
void delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D_OpenInterface(delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method)
{
	InterfaceActionInvoker2< RuntimeObject*, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___ctx0, ___user_data1, ___args2);
}
void delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D_OpenGenericVirtual(delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker2< RuntimeObject*, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* >::Invoke(method, ___ctx0, ___user_data1, ___args2);
}
void delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D_OpenGenericInterface(delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker2< RuntimeObject*, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* >::Invoke(method, ___ctx0, ___user_data1, ___args2);
}
// System.Void SQLitePCL.delegate_function_scalar::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_function_scalar__ctor_mD850A6C8F1D8268869399E131CC060075101EF31 (delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D_Multicast;
}
// System.Void SQLitePCL.delegate_function_scalar::Invoke(SQLitePCL.sqlite3_context,System.Object,SQLitePCL.sqlite3_value[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D (delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C*, RuntimeObject*, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ctx0, ___user_data1, ___args2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.delegate_function_scalar::BeginInvoke(SQLitePCL.sqlite3_context,System.Object,SQLitePCL.sqlite3_value[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* delegate_function_scalar_BeginInvoke_m0C25CE6D9ADB34AA9A136E730F37D38ADF1F2B76 (delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___user_data1;
	__d_args[2] = ___args2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void SQLitePCL.delegate_function_scalar::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_function_scalar_EndInvoke_m96BCBFBB72E4E90C22A060CC8478AC37788C0EA8 (delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511_Multicast(delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* currentDelegate = reinterpret_cast<delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C*, RuntimeObject*, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ctx0, ___user_data1, ___args2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511_Open(delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C*, RuntimeObject*, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ctx0, ___user_data1, ___args2, method);
}
void delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511_OpenStaticInvoker(delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C*, RuntimeObject*, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* >::Invoke(__this->___method_ptr_0, method, NULL, ___ctx0, ___user_data1, ___args2);
}
void delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511_ClosedStaticInvoker(delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C*, RuntimeObject*, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ctx0, ___user_data1, ___args2);
}
void delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511_OpenVirtual(delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method)
{
	VirtualActionInvoker2< RuntimeObject*, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* >::Invoke(il2cpp_codegen_method_get_slot(method), ___ctx0, ___user_data1, ___args2);
}
void delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511_OpenInterface(delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method)
{
	InterfaceActionInvoker2< RuntimeObject*, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___ctx0, ___user_data1, ___args2);
}
void delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511_OpenGenericVirtual(delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker2< RuntimeObject*, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* >::Invoke(method, ___ctx0, ___user_data1, ___args2);
}
void delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511_OpenGenericInterface(delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker2< RuntimeObject*, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* >::Invoke(method, ___ctx0, ___user_data1, ___args2);
}
// System.Void SQLitePCL.delegate_function_aggregate_step::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_function_aggregate_step__ctor_m961A94C8BFC3C6118100DE85B4EE352BA3FAE76A (delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511_Multicast;
}
// System.Void SQLitePCL.delegate_function_aggregate_step::Invoke(SQLitePCL.sqlite3_context,System.Object,SQLitePCL.sqlite3_value[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511 (delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C*, RuntimeObject*, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ctx0, ___user_data1, ___args2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.delegate_function_aggregate_step::BeginInvoke(SQLitePCL.sqlite3_context,System.Object,SQLitePCL.sqlite3_value[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* delegate_function_aggregate_step_BeginInvoke_m491F3A03230B1C9AC6D0DFC2C8BD953F47FDCC37 (delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___user_data1;
	__d_args[2] = ___args2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void SQLitePCL.delegate_function_aggregate_step::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_function_aggregate_step_EndInvoke_m5B7ABB8E94AB970CFA5C801FF1C427421F670613 (delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98_Multicast(delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* currentDelegate = reinterpret_cast<delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C*, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ctx0, ___user_data1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98_Open(delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ctx0, ___user_data1, method);
}
void delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98_OpenStaticInvoker(delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___ctx0, ___user_data1);
}
void delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98_ClosedStaticInvoker(delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ctx0, ___user_data1);
}
void delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98_OpenVirtual(delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___ctx0, ___user_data1);
}
void delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98_OpenInterface(delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___ctx0, ___user_data1);
}
void delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98_OpenGenericVirtual(delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(method, ___ctx0, ___user_data1);
}
void delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98_OpenGenericInterface(delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(method, ___ctx0, ___user_data1);
}
// System.Void SQLitePCL.delegate_function_aggregate_final::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_function_aggregate_final__ctor_m8047213417D49A316609529AE64FEDD0A5BC4019 (delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98_Open;
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
						__this->___invoke_impl_1 = (intptr_t)&delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98_Multicast;
}
// System.Void SQLitePCL.delegate_function_aggregate_final::Invoke(SQLitePCL.sqlite3_context,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98 (delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ctx0, ___user_data1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SQLitePCL.delegate_function_aggregate_final::BeginInvoke(SQLitePCL.sqlite3_context,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* delegate_function_aggregate_final_BeginInvoke_m0B963AC707DC5BEC7373BF80822FE122603539E8 (delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___ctx0;
	__d_args[1] = ___user_data1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void SQLitePCL.delegate_function_aggregate_final::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate_function_aggregate_final_EndInvoke_mD5A899DCBD2315E8A137D270ECA2C3512A75C9BC (delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// SQLitePCL.utf8z SQLitePCL.util::to_utf8z(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 util_to_utf8z_m4682DAC9ED322E8A69A9B03FFE386FFDE77808FD (String_t* ___s0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___s0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_1;
		L_1 = utf8z_FromString_mA76BFB6422CAE32F06C01EF5BD54B372BB6C72E8(L_0, NULL);
		return L_1;
	}
}
// System.Byte[] SQLitePCL.util::to_utf8_with_z(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* util_to_utf8_with_z_mF0006630D3F60F4AFB8C6D7892AF46A7F897CCA6 (String_t* ___sourceText0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___sourceText0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_0005:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_2 = ___sourceText0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(19 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_1, L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_3, 1)));
		V_0 = L_4;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
		L_5 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_6 = ___sourceText0;
		String_t* L_7 = ___sourceText0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_5);
		int32_t L_10;
		L_10 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(27 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_5, L_6, 0, L_8, L_9, 0);
		V_1 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		return L_13;
	}
}
// System.Int32 SQLitePCL.util::my_strlen(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t util_my_strlen_mAB01752C85F3A0D38160E9A74979376E28D27EBE (intptr_t ___nativeString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		intptr_t L_0 = ___nativeString0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		goto IL_0015;
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0015:
	{
		intptr_t L_3 = ___nativeString0;
		int32_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		uint8_t L_5;
		L_5 = Marshal_ReadByte_mA7C912B2234E3E400C4C95273F8DAB1922C1ADDA(L_3, L_4, NULL);
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}

IL_001f:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.String SQLitePCL.util::from_utf8_z(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* util_from_utf8_z_mC688C6FF1F44637723FC3C17C471003B03CD3D78 (intptr_t ___nativeString0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___nativeString0;
		intptr_t L_1 = ___nativeString0;
		int32_t L_2;
		L_2 = util_my_strlen_mAB01752C85F3A0D38160E9A74979376E28D27EBE(L_1, NULL);
		String_t* L_3;
		L_3 = util_from_utf8_m0D62271CF37284079749D9DB598FC7F41D843D54(L_0, L_2, NULL);
		return L_3;
	}
}
// System.String SQLitePCL.util::from_utf8(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* util_from_utf8_m0D62271CF37284079749D9DB598FC7F41D843D54 (intptr_t ___nativeString0, int32_t ___size1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		V_0 = (String_t*)NULL;
		intptr_t L_0 = ___nativeString0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___nativeString0), NULL);
		int32_t L_4 = ___size1;
		NullCheck(L_2);
		String_t* L_5;
		L_5 = Encoding_GetString_m42BFF0862341DCD5289A7D75B5D7A22CE9690EAD(L_2, (uint8_t*)L_3, L_4, NULL);
		V_0 = L_5;
	}

IL_0022:
	{
		String_t* L_6 = V_0;
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
// Conversion methods for marshalling of: SQLitePCL.utf8z
IL2CPP_EXTERN_C void utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_marshal_pinvoke(const utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25& unmarshaled, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_marshaled_pinvoke& marshaled)
{
	Exception_t* ___sp_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sp' of type 'utf8z'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sp_0Exception, NULL);
}
IL2CPP_EXTERN_C void utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_marshal_pinvoke_back(const utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_marshaled_pinvoke& marshaled, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25& unmarshaled)
{
	Exception_t* ___sp_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sp' of type 'utf8z'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sp_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: SQLitePCL.utf8z
IL2CPP_EXTERN_C void utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_marshal_pinvoke_cleanup(utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: SQLitePCL.utf8z
IL2CPP_EXTERN_C void utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_marshal_com(const utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25& unmarshaled, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_marshaled_com& marshaled)
{
	Exception_t* ___sp_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sp' of type 'utf8z'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sp_0Exception, NULL);
}
IL2CPP_EXTERN_C void utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_marshal_com_back(const utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_marshaled_com& marshaled, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25& unmarshaled)
{
	Exception_t* ___sp_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sp' of type 'utf8z'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sp_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: SQLitePCL.utf8z
IL2CPP_EXTERN_C void utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_marshal_com_cleanup(utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25_marshaled_com& marshaled)
{
}
// System.Byte& modreq(System.Runtime.InteropServices.InAttribute) SQLitePCL.utf8z::GetPinnableReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5 (utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* L_0 = (&__this->___sp_0);
		uint8_t* L_1;
		L_1 = ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8(L_0, ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint8_t* utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25*>(__this + _offset);
	uint8_t* _returnValue;
	_returnValue = utf8z_GetPinnableReference_m7FC3FFCB77E49E28512035FDEF8CF181E2D39FE5(_thisAdjusted, method);
	return _returnValue;
}
// System.Void SQLitePCL.utf8z::.ctor(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void utf8z__ctor_m64264B0A6C4180B53CC206E21F3C5642074A919B (utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* __this, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___a0, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_0 = ___a0;
		__this->___sp_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___sp_0))->____pinnable_0), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void utf8z__ctor_m64264B0A6C4180B53CC206E21F3C5642074A919B_AdjustorThunk (RuntimeObject* __this, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___a0, const RuntimeMethod* method)
{
	utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25*>(__this + _offset);
	utf8z__ctor_m64264B0A6C4180B53CC206E21F3C5642074A919B_inline(_thisAdjusted, ___a0, method);
}
// SQLitePCL.utf8z SQLitePCL.utf8z::FromSpan(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 utf8z_FromSpan_m4CEB98E168F53A64EBBB53697BE8BA9B7266F95B (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mD58E12F152DAF67682BD56218B9EC5A0CC3CC1A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline((&___a0), ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline((&___a0), ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		uint8_t* L_2;
		L_2 = ReadOnlySpan_1_get_Item_mD58E12F152DAF67682BD56218B9EC5A0CC3CC1A7_inline((&___a0), ((int32_t)il2cpp_codegen_subtract(L_1, 1)), ReadOnlySpan_1_get_Item_mD58E12F152DAF67682BD56218B9EC5A0CC3CC1A7_RuntimeMethod_var);
		int32_t L_3 = *((uint8_t*)L_2);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5F8F7F20A301184F38050D40710A390698DAEC1D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&utf8z_FromSpan_m4CEB98E168F53A64EBBB53697BE8BA9B7266F95B_RuntimeMethod_var)));
	}

IL_0028:
	{
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_5 = ___a0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_6;
		memset((&L_6), 0, sizeof(L_6));
		utf8z__ctor_m64264B0A6C4180B53CC206E21F3C5642074A919B_inline((&L_6), L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// SQLitePCL.utf8z SQLitePCL.utf8z::FromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 utf8z_FromString_mA76BFB6422CAE32F06C01EF5BD54B372BB6C72E8 (String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_m0E04D2F291C8C5075A086E9A53AE241DEA3E9E38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_1;
		L_1 = ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9(ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9_RuntimeMethod_var);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		memset((&L_2), 0, sizeof(L_2));
		utf8z__ctor_m64264B0A6C4180B53CC206E21F3C5642074A919B_inline((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000e:
	{
		String_t* L_3 = ___s0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = util_to_utf8_with_z_mF0006630D3F60F4AFB8C6D7892AF46A7F897CCA6(L_3, NULL);
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_5;
		L_5 = ReadOnlySpan_1_op_Implicit_m0E04D2F291C8C5075A086E9A53AE241DEA3E9E38(L_4, ReadOnlySpan_1_op_Implicit_m0E04D2F291C8C5075A086E9A53AE241DEA3E9E38_RuntimeMethod_var);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_6;
		memset((&L_6), 0, sizeof(L_6));
		utf8z__ctor_m64264B0A6C4180B53CC206E21F3C5642074A919B_inline((&L_6), L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Int64 SQLitePCL.utf8z::my_strlen(System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t utf8z_my_strlen_mEBE82F21999DC67AC61D1E3A25D0E7C6902D8204 (uint8_t* ___p0, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		uint8_t* L_0 = ___p0;
		V_0 = L_0;
		goto IL_0008;
	}

IL_0004:
	{
		uint8_t* L_1 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, 1));
	}

IL_0008:
	{
		uint8_t* L_2 = V_0;
		int32_t L_3 = *((uint8_t*)L_2);
		if (L_3)
		{
			goto IL_0004;
		}
	}
	{
		uint8_t* L_4 = V_0;
		uint8_t* L_5 = ___p0;
		return ((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_4, (intptr_t)L_5))/1)));
	}
}
// System.ReadOnlySpan`1<System.Byte> SQLitePCL.utf8z::find_zero_terminator(System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A utf8z_find_zero_terminator_mB4E159A1046CA6A00E8A3DCEE01B1212A7E1D5C8 (uint8_t* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		uint8_t* L_0 = ___p0;
		int64_t L_1;
		L_1 = utf8z_my_strlen_mEBE82F21999DC67AC61D1E3A25D0E7C6902D8204(L_0, NULL);
		V_0 = ((int32_t)L_1);
		uint8_t* L_2 = ___p0;
		int32_t L_3 = V_0;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_4;
		memset((&L_4), 0, sizeof(L_4));
		ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_inline((&L_4), (void*)L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), /*hidden argument*/ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_RuntimeMethod_var);
		return L_4;
	}
}
// SQLitePCL.utf8z SQLitePCL.utf8z::FromPtr(System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 utf8z_FromPtr_m8631331880E0D58B680A0CD8E0FA51670576AFBC (uint8_t* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t* L_0 = ___p0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_1;
		L_1 = ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9(ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9_RuntimeMethod_var);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		memset((&L_2), 0, sizeof(L_2));
		utf8z__ctor_m64264B0A6C4180B53CC206E21F3C5642074A919B_inline((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0010:
	{
		uint8_t* L_3 = ___p0;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_4;
		L_4 = utf8z_find_zero_terminator_mB4E159A1046CA6A00E8A3DCEE01B1212A7E1D5C8(L_3, NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_5;
		memset((&L_5), 0, sizeof(L_5));
		utf8z__ctor_m64264B0A6C4180B53CC206E21F3C5642074A919B_inline((&L_5), L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// SQLitePCL.utf8z SQLitePCL.utf8z::FromPtrLen(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 utf8z_FromPtrLen_mEF49317D152EC1C0300C3366714707B3F091FFC2 (uint8_t* ___p0, int32_t ___len1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t* L_0 = ___p0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_1;
		L_1 = ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9(ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9_RuntimeMethod_var);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2;
		memset((&L_2), 0, sizeof(L_2));
		utf8z__ctor_m64264B0A6C4180B53CC206E21F3C5642074A919B_inline((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0010:
	{
		uint8_t* L_3 = ___p0;
		int32_t L_4 = ___len1;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_inline((&L_5), (void*)L_3, ((int32_t)il2cpp_codegen_add(L_4, 1)), /*hidden argument*/ReadOnlySpan_1__ctor_m0C428C20CD1E065A44CDDF4A434ECB3E3297A432_RuntimeMethod_var);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_6;
		L_6 = utf8z_FromSpan_m4CEB98E168F53A64EBBB53697BE8BA9B7266F95B(L_5, NULL);
		return L_6;
	}
}
// SQLitePCL.utf8z SQLitePCL.utf8z::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 utf8z_FromIntPtr_m7DD6956F80F61F4921C493D207873C9866876CF3 (intptr_t ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___p0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_2;
		L_2 = ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9(ReadOnlySpan_1_get_Empty_m6184C09721804CEA3ED133979980DB302A030DE9_RuntimeMethod_var);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3;
		memset((&L_3), 0, sizeof(L_3));
		utf8z__ctor_m64264B0A6C4180B53CC206E21F3C5642074A919B_inline((&L_3), L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0018:
	{
		void* L_4;
		L_4 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___p0), NULL);
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_5;
		L_5 = utf8z_find_zero_terminator_mB4E159A1046CA6A00E8A3DCEE01B1212A7E1D5C8((uint8_t*)L_4, NULL);
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_6;
		memset((&L_6), 0, sizeof(L_6));
		utf8z__ctor_m64264B0A6C4180B53CC206E21F3C5642074A919B_inline((&L_6), L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String SQLitePCL.utf8z::utf8_to_string()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* utf8z_utf8_to_string_m580270DDB4AE9B6A5AAC5C4FA552263D9C29C90A (utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* __this, const RuntimeMethod* method) 
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
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* L_0 = (&__this->___sp_0);
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline(L_0, ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000f:
	{
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* L_2 = (&__this->___sp_0);
		uint8_t* L_3;
		L_3 = ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8(L_2, ReadOnlySpan_1_GetPinnableReference_m9E0C32324C213F5309541E2734610F9FA8589AA8_RuntimeMethod_var);
		V_1 = L_3;
		uint8_t* L_4 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_4);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
		L_5 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		uint8_t* L_6 = V_0;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* L_7 = (&__this->___sp_0);
		int32_t L_8;
		L_8 = ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_inline(L_7, ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_9;
		L_9 = Encoding_GetString_m42BFF0862341DCD5289A7D75B5D7A22CE9690EAD(L_5, L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* utf8z_utf8_to_string_m580270DDB4AE9B6A5AAC5C4FA552263D9C29C90A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = utf8z_utf8_to_string_m580270DDB4AE9B6A5AAC5C4FA552263D9C29C90A(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SQLitePCL.PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_m2FAE0E78E4C140F75181939282430DB4B0CC1235 (PreserveAttribute_t684A021602CCD4E643B8148B5315F6EDDCCD0D12* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void SQLitePCL.MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_mA8958BAFDBE3EDC1FC5ED611D0711FCE982EB87C (MonoPInvokeCallbackAttribute_t17BE665B3D7CD95379096445F10A2E7124970063* __this, Type_t* ___t0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void SQLitePCL.SafeGCHandle::.ctor(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeGCHandle__ctor_mB8C029FD49878D0939689FF0B31B855D9279196E (SafeGCHandle_tE8D8C107E75BFC0FAC19C271622895B407785D3E* __this, RuntimeObject* ___v0, int32_t ___typ1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, (0), (bool)1, NULL);
		RuntimeObject* L_0 = ___v0;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_1 = ___v0;
		int32_t L_2 = ___typ1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3;
		L_3 = GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075(L_1, L_2, NULL);
		V_0 = L_3;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4 = V_0;
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC(L_4, NULL);
		SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline(__this, L_5, NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean SQLitePCL.SafeGCHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeGCHandle_get_IsInvalid_m61EA73C2D6115FC47D488C39D53F52F8EDAD8109 (SafeGCHandle_tE8D8C107E75BFC0FAC19C271622895B407785D3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		return L_1;
	}
}
// System.Boolean SQLitePCL.SafeGCHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeGCHandle_ReleaseHandle_m6F483FD3DBA601DA04F6D7C82376844E51B2B56A (SafeGCHandle_tE8D8C107E75BFC0FAC19C271622895B407785D3E* __this, const RuntimeMethod* method) 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mB3E9C10177B3A0986B72C44D7E123F60125824DF(L_0, NULL);
		V_0 = L_1;
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		return (bool)1;
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
// System.Void SQLitePCL.hook_handle::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hook_handle__ctor_m6D8E37A8ADD1DC2ED8DAB0482D5E7212F4BBC524 (hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* __this, RuntimeObject* ___target0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___target0;
		SafeGCHandle__ctor_mB8C029FD49878D0939689FF0B31B855D9279196E(__this, L_0, 2, NULL);
		return;
	}
}
// System.IDisposable SQLitePCL.hook_handle::ForDispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* hook_handle_ForDispose_m75CB5080133A1EA42368D022BC358117AC9FE588 (hook_handle_tADC84A43AFFDADC460E97AB35367B400F2EB2EFC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000a:
	{
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
// System.Void SQLitePCL.CompareBuf::.ctor(System.Func`4<System.IntPtr,System.IntPtr,System.Int32,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompareBuf__ctor_m6C58AEB15ADFE4A32C2EC9DDDA455E5A929F92E0 (CompareBuf_t27F605DCD52963E50AAF359FF0792B5EF7FC04EA* __this, Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083* ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_m98FB31E1349FDCF9F0A3BD1891F322A1AC6CFBC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_m98FB31E1349FDCF9F0A3BD1891F322A1AC6CFBC6(__this, EqualityComparer_1__ctor_m98FB31E1349FDCF9F0A3BD1891F322A1AC6CFBC6_RuntimeMethod_var);
		Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083* L_0 = ___f0;
		__this->____f_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____f_1), (void*)L_0);
		return;
	}
}
// System.Boolean SQLitePCL.CompareBuf::Equals(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompareBuf_Equals_m6E5986CB1C0D646F268039A924B0184019F1FFA6 (CompareBuf_t27F605DCD52963E50AAF359FF0792B5EF7FC04EA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p10, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p21, const RuntimeMethod* method) 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___p10;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___p21;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___p10;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3;
		L_3 = GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075((RuntimeObject*)L_2, 3, NULL);
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___p21;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_5;
		L_5 = GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075((RuntimeObject*)L_4, 3, NULL);
		V_1 = L_5;
		Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083* L_6 = __this->____f_1;
		intptr_t L_7;
		L_7 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_0), NULL);
		intptr_t L_8;
		L_8 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___p10;
		NullCheck(L_9);
		NullCheck(L_6);
		bool L_10;
		L_10 = Func_4_Invoke_mF686DB15C7046521DFA2350715743471581C6580_inline(L_6, L_7, L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_1), NULL);
		return L_10;
	}
}
// System.Int32 SQLitePCL.CompareBuf::GetHashCode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompareBuf_GetHashCode_mA57EDEA33292F06D9E0833EDE38AC8C90C5A295E (CompareBuf_t27F605DCD52963E50AAF359FF0792B5EF7FC04EA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___p0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
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
// System.Byte[] SQLitePCL.FuncName::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FuncName_get_name_mB74437A157D3DF6F5D2A693DC4B2C5DC3E47D648 (FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SQLitePCL.FuncName::set_name(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FuncName_set_name_m2E558A596C0258BE6EE151C469BCD07A6426A937 (FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int32 SQLitePCL.FuncName::get_n()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FuncName_get_n_m91D9E17080DD4D1D59BD9879BE61EBCF5C88E0C4 (FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CnU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SQLitePCL.FuncName::set_n(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FuncName_set_n_mBBC1FE0A2863C200708D2CE3BAB22423DA29259E (FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CnU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void SQLitePCL.FuncName::.ctor(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FuncName__ctor_m7E7689C95B8E84D185844712A71EAE817A2FF240 (FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____name0, int32_t ____n1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ____name0;
		FuncName_set_name_m2E558A596C0258BE6EE151C469BCD07A6426A937_inline(__this, L_0, NULL);
		int32_t L_1 = ____n1;
		FuncName_set_n_mBBC1FE0A2863C200708D2CE3BAB22423DA29259E_inline(__this, L_1, NULL);
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
// System.Void SQLitePCL.CompareFuncName::.ctor(System.Collections.Generic.IEqualityComparer`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompareFuncName__ctor_m286F43C4A7064F1D2822AFA93BD4950F6158E24B (CompareFuncName_tDD5FD56A7AAA8A632A4B49F594E21250BFB40795* __this, RuntimeObject* ___ptrlencmp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_mF420C788DC290244A73738F4BC6F567E4B8B065D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_mF420C788DC290244A73738F4BC6F567E4B8B065D(__this, EqualityComparer_1__ctor_mF420C788DC290244A73738F4BC6F567E4B8B065D_RuntimeMethod_var);
		RuntimeObject* L_0 = ___ptrlencmp0;
		__this->____ptrlencmp_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ptrlencmp_1), (void*)L_0);
		return;
	}
}
// System.Boolean SQLitePCL.CompareFuncName::Equals(SQLitePCL.FuncName,SQLitePCL.FuncName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompareFuncName_Equals_m0B3D28818C69EC73D0EB87C04E4AD2E0C0CA6DD0 (CompareFuncName_tDD5FD56A7AAA8A632A4B49F594E21250BFB40795* __this, FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* ___p10, FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* ___p21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_1_tED581F2C423FD1B93E069AFE7AA4483EF32AF8DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* L_0 = ___p10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = FuncName_get_n_m91D9E17080DD4D1D59BD9879BE61EBCF5C88E0C4_inline(L_0, NULL);
		FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* L_2 = ___p21;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = FuncName_get_n_m91D9E17080DD4D1D59BD9879BE61EBCF5C88E0C4_inline(L_2, NULL);
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		RuntimeObject* L_4 = __this->____ptrlencmp_1;
		FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* L_5 = ___p10;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = FuncName_get_name_mB74437A157D3DF6F5D2A693DC4B2C5DC3E47D648_inline(L_5, NULL);
		FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* L_7 = ___p21;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = FuncName_get_name_mB74437A157D3DF6F5D2A693DC4B2C5DC3E47D648_inline(L_7, NULL);
		NullCheck(L_4);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Byte[]>::Equals(T,T) */, IEqualityComparer_1_tED581F2C423FD1B93E069AFE7AA4483EF32AF8DB_il2cpp_TypeInfo_var, L_4, L_6, L_8);
		return L_9;
	}
}
// System.Int32 SQLitePCL.CompareFuncName::GetHashCode(SQLitePCL.FuncName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompareFuncName_GetHashCode_m2E75F2201E06E506BB47A69BA0E6D966E7029A84 (CompareFuncName_tDD5FD56A7AAA8A632A4B49F594E21250BFB40795* __this, FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* ___p0, const RuntimeMethod* method) 
{
	{
		FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* L_0 = ___p0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = FuncName_get_n_m91D9E17080DD4D1D59BD9879BE61EBCF5C88E0C4_inline(L_0, NULL);
		FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* L_2 = ___p0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = FuncName_get_name_mB74437A157D3DF6F5D2A693DC4B2C5DC3E47D648_inline(L_2, NULL);
		NullCheck(L_3);
		return ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(((RuntimeArray*)L_3)->max_length))));
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
// System.Void SQLitePCL.hook_handles::.ctor(System.Func`4<System.IntPtr,System.IntPtr,System.Int32,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hook_handles__ctor_m1F7D3F0DEC6B04876796D7A4935396F2CD8DD292 (hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* __this, Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083* ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompareBuf_t27F605DCD52963E50AAF359FF0792B5EF7FC04EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompareFuncName_tDD5FD56A7AAA8A632A4B49F594E21250BFB40795_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2__ctor_mC0BBBB7D4FBDEA79D4636FBDB872E0AC54E2C776_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2__ctor_mD8C0B49C9BC53C925E6FAB2B37BADF318BAA208B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CompareBuf_t27F605DCD52963E50AAF359FF0792B5EF7FC04EA* V_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083* L_0 = ___f0;
		CompareBuf_t27F605DCD52963E50AAF359FF0792B5EF7FC04EA* L_1 = (CompareBuf_t27F605DCD52963E50AAF359FF0792B5EF7FC04EA*)il2cpp_codegen_object_new(CompareBuf_t27F605DCD52963E50AAF359FF0792B5EF7FC04EA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CompareBuf__ctor_m6C58AEB15ADFE4A32C2EC9DDDA455E5A929F92E0(L_1, L_0, NULL);
		V_0 = L_1;
		CompareBuf_t27F605DCD52963E50AAF359FF0792B5EF7FC04EA* L_2 = V_0;
		ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522* L_3 = (ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522*)il2cpp_codegen_object_new(ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ConcurrentDictionary_2__ctor_mD8C0B49C9BC53C925E6FAB2B37BADF318BAA208B(L_3, L_2, ConcurrentDictionary_2__ctor_mD8C0B49C9BC53C925E6FAB2B37BADF318BAA208B_RuntimeMethod_var);
		__this->___collation_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collation_0), (void*)L_3);
		CompareBuf_t27F605DCD52963E50AAF359FF0792B5EF7FC04EA* L_4 = V_0;
		CompareFuncName_tDD5FD56A7AAA8A632A4B49F594E21250BFB40795* L_5 = (CompareFuncName_tDD5FD56A7AAA8A632A4B49F594E21250BFB40795*)il2cpp_codegen_object_new(CompareFuncName_tDD5FD56A7AAA8A632A4B49F594E21250BFB40795_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		CompareFuncName__ctor_m286F43C4A7064F1D2822AFA93BD4950F6158E24B(L_5, L_4, NULL);
		ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517* L_6 = (ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517*)il2cpp_codegen_object_new(ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ConcurrentDictionary_2__ctor_mC0BBBB7D4FBDEA79D4636FBDB872E0AC54E2C776(L_6, L_5, ConcurrentDictionary_2__ctor_mC0BBBB7D4FBDEA79D4636FBDB872E0AC54E2C776_RuntimeMethod_var);
		__this->___scalar_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scalar_1), (void*)L_6);
		CompareBuf_t27F605DCD52963E50AAF359FF0792B5EF7FC04EA* L_7 = V_0;
		CompareFuncName_tDD5FD56A7AAA8A632A4B49F594E21250BFB40795* L_8 = (CompareFuncName_tDD5FD56A7AAA8A632A4B49F594E21250BFB40795*)il2cpp_codegen_object_new(CompareFuncName_tDD5FD56A7AAA8A632A4B49F594E21250BFB40795_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		CompareFuncName__ctor_m286F43C4A7064F1D2822AFA93BD4950F6158E24B(L_8, L_7, NULL);
		ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517* L_9 = (ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517*)il2cpp_codegen_object_new(ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ConcurrentDictionary_2__ctor_mC0BBBB7D4FBDEA79D4636FBDB872E0AC54E2C776(L_9, L_8, ConcurrentDictionary_2__ctor_mC0BBBB7D4FBDEA79D4636FBDB872E0AC54E2C776_RuntimeMethod_var);
		__this->___agg_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agg_2), (void*)L_9);
		return;
	}
}
// System.Boolean SQLitePCL.hook_handles::RemoveScalarFunction(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool hook_handles_RemoveScalarFunction_m9159BE57F6977DCF622FE30506A7F771739B423F (hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___name0, int32_t ___nargs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryRemove_m1782697D740431D81873A6F2B420EBBDD4FED32D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___name0;
		int32_t L_1 = ___nargs1;
		FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* L_2 = (FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A*)il2cpp_codegen_object_new(FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FuncName__ctor_m7E7689C95B8E84D185844712A71EAE817A2FF240(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517* L_3 = __this->___scalar_1;
		FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = ConcurrentDictionary_2_TryRemove_m1782697D740431D81873A6F2B420EBBDD4FED32D(L_3, L_4, (&V_1), ConcurrentDictionary_2_TryRemove_m1782697D740431D81873A6F2B420EBBDD4FED32D_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_6 = V_1;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
		return (bool)1;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Void SQLitePCL.hook_handles::AddScalarFunction(System.Byte[],System.Int32,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hook_handles_AddScalarFunction_mD241ED7FC4CFCD555C808E31748100FCAA652047 (hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___name0, int32_t ___nargs1, RuntimeObject* ___d2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_mB18463C3EF5A1B49665FDDC7A7418F69CA3F69F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___name0;
		int32_t L_1 = ___nargs1;
		FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* L_2 = (FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A*)il2cpp_codegen_object_new(FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FuncName__ctor_m7E7689C95B8E84D185844712A71EAE817A2FF240(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517* L_3 = __this->___scalar_1;
		FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* L_4 = V_0;
		RuntimeObject* L_5 = ___d2;
		NullCheck(L_3);
		ConcurrentDictionary_2_set_Item_mB18463C3EF5A1B49665FDDC7A7418F69CA3F69F0(L_3, L_4, L_5, ConcurrentDictionary_2_set_Item_mB18463C3EF5A1B49665FDDC7A7418F69CA3F69F0_RuntimeMethod_var);
		return;
	}
}
// System.Boolean SQLitePCL.hook_handles::RemoveAggFunction(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool hook_handles_RemoveAggFunction_mA42A9716C0A6E544449532021405FA05652BE8C0 (hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___name0, int32_t ___nargs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryRemove_m1782697D740431D81873A6F2B420EBBDD4FED32D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___name0;
		int32_t L_1 = ___nargs1;
		FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* L_2 = (FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A*)il2cpp_codegen_object_new(FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FuncName__ctor_m7E7689C95B8E84D185844712A71EAE817A2FF240(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517* L_3 = __this->___agg_2;
		FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = ConcurrentDictionary_2_TryRemove_m1782697D740431D81873A6F2B420EBBDD4FED32D(L_3, L_4, (&V_1), ConcurrentDictionary_2_TryRemove_m1782697D740431D81873A6F2B420EBBDD4FED32D_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_6 = V_1;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
		return (bool)1;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Void SQLitePCL.hook_handles::AddAggFunction(System.Byte[],System.Int32,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hook_handles_AddAggFunction_m81386278C3F4916C5052FD699F25319A978F651A (hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___name0, int32_t ___nargs1, RuntimeObject* ___d2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_mB18463C3EF5A1B49665FDDC7A7418F69CA3F69F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___name0;
		int32_t L_1 = ___nargs1;
		FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* L_2 = (FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A*)il2cpp_codegen_object_new(FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FuncName__ctor_m7E7689C95B8E84D185844712A71EAE817A2FF240(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517* L_3 = __this->___agg_2;
		FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* L_4 = V_0;
		RuntimeObject* L_5 = ___d2;
		NullCheck(L_3);
		ConcurrentDictionary_2_set_Item_mB18463C3EF5A1B49665FDDC7A7418F69CA3F69F0(L_3, L_4, L_5, ConcurrentDictionary_2_set_Item_mB18463C3EF5A1B49665FDDC7A7418F69CA3F69F0_RuntimeMethod_var);
		return;
	}
}
// System.Boolean SQLitePCL.hook_handles::RemoveCollation(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool hook_handles_RemoveCollation_mAC3B05DE2CB2A4322F0A035E577FCF6194665012 (hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryRemove_m8220F91E42BAB284E34184616737AAB2A4C9FEF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522* L_0 = __this->___collation_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = ConcurrentDictionary_2_TryRemove_m8220F91E42BAB284E34184616737AAB2A4C9FEF6(L_0, L_1, (&V_0), ConcurrentDictionary_2_TryRemove_m8220F91E42BAB284E34184616737AAB2A4C9FEF6_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
		return (bool)1;
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.Void SQLitePCL.hook_handles::AddCollation(System.Byte[],System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hook_handles_AddCollation_mFFF6F01B318D1CDF9E0980812744B1251C09343F (hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___name0, RuntimeObject* ___d1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m0A8DC29085CC370BCE112BE5175D0766C86B5121_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522* L_0 = __this->___collation_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___name0;
		RuntimeObject* L_2 = ___d1;
		NullCheck(L_0);
		ConcurrentDictionary_2_set_Item_m0A8DC29085CC370BCE112BE5175D0766C86B5121(L_0, L_1, L_2, ConcurrentDictionary_2_set_Item_m0A8DC29085CC370BCE112BE5175D0766C86B5121_RuntimeMethod_var);
		return;
	}
}
// System.Void SQLitePCL.hook_handles::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hook_handles_Dispose_m026D881EDB0A3F5F14FDE3DF147A1E4C13AF0363 (hook_handles_tC761D4D430F6003B396C0AE3B469BDD80B3D4C33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_get_Values_m2C4385FFCDA16FF0FB436BE7E6127E2F473040FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_get_Values_mF2008A5617C18F3F234996E8F3070D5C9F7ABC10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB6F68D35F9622A77D895A483A02F4DC2907BBAEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tAA6EEADDF0E7FE9E72FAC727374287C9627ADF3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ConcurrentDictionary_2_tEF1D1D45D3DB2E2FEE67A0CE6A8C5E24E3D1D522* L_0 = __this->___collation_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ConcurrentDictionary_2_get_Values_m2C4385FFCDA16FF0FB436BE7E6127E2F473040FC(L_0, ConcurrentDictionary_2_get_Values_m2C4385FFCDA16FF0FB436BE7E6127E2F473040FC_RuntimeMethod_var);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IDisposable>::GetEnumerator() */, IEnumerable_1_tB6F68D35F9622A77D895A483A02F4DC2907BBAEB_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0028:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0031;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0031:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001e_1;
			}

IL_0013_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.IDisposable>::get_Current() */, IEnumerator_1_tAA6EEADDF0E7FE9E72FAC727374287C9627ADF3A_il2cpp_TypeInfo_var, L_5);
				NullCheck(L_6);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
			}

IL_001e_1:
			{
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				bool L_8;
				L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				if (L_8)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0032;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517* L_9 = __this->___scalar_1;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = ConcurrentDictionary_2_get_Values_mF2008A5617C18F3F234996E8F3070D5C9F7ABC10(L_9, ConcurrentDictionary_2_get_Values_mF2008A5617C18F3F234996E8F3070D5C9F7ABC10_RuntimeMethod_var);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IDisposable>::GetEnumerator() */, IEnumerable_1_tB6F68D35F9622A77D895A483A02F4DC2907BBAEB_il2cpp_TypeInfo_var, L_10);
		V_0 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_12 = V_0;
					if (!L_12)
					{
						goto IL_0063;
					}
				}
				{
					RuntimeObject* L_13 = V_0;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
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
				goto IL_0050_1;
			}

IL_0045_1:
			{
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.IDisposable>::get_Current() */, IEnumerator_1_tAA6EEADDF0E7FE9E72FAC727374287C9627ADF3A_il2cpp_TypeInfo_var, L_14);
				NullCheck(L_15);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_15);
			}

IL_0050_1:
			{
				RuntimeObject* L_16 = V_0;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0045_1;
				}
			}
			{
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
		ConcurrentDictionary_2_tF47EFE7CCFE1E29580989F631F638E0434111517* L_18 = __this->___agg_2;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = ConcurrentDictionary_2_get_Values_mF2008A5617C18F3F234996E8F3070D5C9F7ABC10(L_18, ConcurrentDictionary_2_get_Values_mF2008A5617C18F3F234996E8F3070D5C9F7ABC10_RuntimeMethod_var);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IDisposable>::GetEnumerator() */, IEnumerable_1_tB6F68D35F9622A77D895A483A02F4DC2907BBAEB_il2cpp_TypeInfo_var, L_19);
		V_0 = L_20;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_21 = V_0;
					if (!L_21)
					{
						goto IL_0095;
					}
				}
				{
					RuntimeObject* L_22 = V_0;
					NullCheck(L_22);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_22);
				}

IL_0095:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0082_1;
			}

IL_0077_1:
			{
				RuntimeObject* L_23 = V_0;
				NullCheck(L_23);
				RuntimeObject* L_24;
				L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.IDisposable>::get_Current() */, IEnumerator_1_tAA6EEADDF0E7FE9E72FAC727374287C9627ADF3A_il2cpp_TypeInfo_var, L_23);
				NullCheck(L_24);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_24);
			}

IL_0082_1:
			{
				RuntimeObject* L_25 = V_0;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0077_1;
				}
			}
			{
				goto IL_0096;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0096:
	{
		RuntimeObject* L_27 = __this->___update_3;
		if (!L_27)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_28 = __this->___update_3;
		NullCheck(L_28);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_28);
	}

IL_00a9:
	{
		RuntimeObject* L_29 = __this->___rollback_4;
		if (!L_29)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_30 = __this->___rollback_4;
		NullCheck(L_30);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_30);
	}

IL_00bc:
	{
		RuntimeObject* L_31 = __this->___commit_5;
		if (!L_31)
		{
			goto IL_00cf;
		}
	}
	{
		RuntimeObject* L_32 = __this->___commit_5;
		NullCheck(L_32);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_32);
	}

IL_00cf:
	{
		RuntimeObject* L_33 = __this->___trace_6;
		if (!L_33)
		{
			goto IL_00e2;
		}
	}
	{
		RuntimeObject* L_34 = __this->___trace_6;
		NullCheck(L_34);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_34);
	}

IL_00e2:
	{
		RuntimeObject* L_35 = __this->___profile_7;
		if (!L_35)
		{
			goto IL_00f5;
		}
	}
	{
		RuntimeObject* L_36 = __this->___profile_7;
		NullCheck(L_36);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_36);
	}

IL_00f5:
	{
		RuntimeObject* L_37 = __this->___progress_8;
		if (!L_37)
		{
			goto IL_0108;
		}
	}
	{
		RuntimeObject* L_38 = __this->___progress_8;
		NullCheck(L_38);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_38);
	}

IL_0108:
	{
		RuntimeObject* L_39 = __this->___authorizer_9;
		if (!L_39)
		{
			goto IL_011b;
		}
	}
	{
		RuntimeObject* L_40 = __this->___authorizer_9;
		NullCheck(L_40);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_40);
	}

IL_011b:
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
// System.Void SQLitePCL.log_hook_info::.ctor(SQLitePCL.delegate_log,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void log_hook_info__ctor_m72FEA14AC551F530BD79A2442BF002D7237EFDFC (log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116* __this, delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* L_0 = ___func0;
		__this->____func_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____func_0), (void*)L_0);
		RuntimeObject* L_1 = ___v1;
		__this->____user_data_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____user_data_1), (void*)L_1);
		return;
	}
}
// SQLitePCL.log_hook_info SQLitePCL.log_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116* log_hook_info_from_ptr_m1DABE726D0FF1D5EEC222AD631DF38C8CEAC5791 (intptr_t ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___p0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_op_Explicit_m500B99BF54D923E624C5235A4B370A37C8B7050C(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		return ((log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116*)IsInstClass((RuntimeObject*)L_2, log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116_il2cpp_TypeInfo_var));
	}
}
// System.Void SQLitePCL.log_hook_info::call(System.Int32,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void log_hook_info_call_mBBD1CECB059D785233952F83C5582786DBEFE694 (log_hook_info_tDC91F629B2B139A944265087648F73E1BB31A116* __this, int32_t ___rc0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___msg1, const RuntimeMethod* method) 
{
	{
		delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* L_0 = __this->____func_0;
		RuntimeObject* L_1 = __this->____user_data_1;
		int32_t L_2 = ___rc0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3 = ___msg1;
		NullCheck(L_0);
		delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19_inline(L_0, L_1, L_2, L_3, NULL);
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
// SQLitePCL.delegate_commit SQLitePCL.commit_hook_info::get__func()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* commit_hook_info_get__func_m05BEEED3611D2441FE7BB1D3FA2DC7B53F14B46D (commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* __this, const RuntimeMethod* method) 
{
	{
		delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* L_0 = __this->___U3C_funcU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SQLitePCL.commit_hook_info::set__func(SQLitePCL.delegate_commit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void commit_hook_info_set__func_m2283E27CCE511047C4028072A7FCC50E1354A281 (commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* __this, delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* ___value0, const RuntimeMethod* method) 
{
	{
		delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* L_0 = ___value0;
		__this->___U3C_funcU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_funcU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Object SQLitePCL.commit_hook_info::get__user_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* commit_hook_info_get__user_data_mD65F8F042015B81A6FD9D5CB216FF346F0AB68C6 (commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_user_dataU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SQLitePCL.commit_hook_info::set__user_data(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void commit_hook_info_set__user_data_mA2C1CEA31C422E0678A0176851D9623090CFE266 (commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3C_user_dataU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_user_dataU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void SQLitePCL.commit_hook_info::.ctor(SQLitePCL.delegate_commit,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void commit_hook_info__ctor_m4B4EC8FA983EECCEF944C38F087A910E4B85C74C (commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* __this, delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* L_0 = ___func0;
		commit_hook_info_set__func_m2283E27CCE511047C4028072A7FCC50E1354A281_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___v1;
		commit_hook_info_set__user_data_mA2C1CEA31C422E0678A0176851D9623090CFE266_inline(__this, L_1, NULL);
		return;
	}
}
// System.Int32 SQLitePCL.commit_hook_info::call()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t commit_hook_info_call_mE9C755CD3924D7327451B4E46477242A86EED90A (commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* __this, const RuntimeMethod* method) 
{
	{
		delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* L_0;
		L_0 = commit_hook_info_get__func_m05BEEED3611D2441FE7BB1D3FA2DC7B53F14B46D_inline(__this, NULL);
		RuntimeObject* L_1;
		L_1 = commit_hook_info_get__user_data_mD65F8F042015B81A6FD9D5CB216FF346F0AB68C6_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// SQLitePCL.commit_hook_info SQLitePCL.commit_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* commit_hook_info_from_ptr_mF268F9464334327C9B2D54D1E53BF3FB01922EB5 (intptr_t ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___p0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_op_Explicit_m500B99BF54D923E624C5235A4B370A37C8B7050C(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		return ((commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78*)IsInstClass((RuntimeObject*)L_2, commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78_il2cpp_TypeInfo_var));
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
// System.Void SQLitePCL.rollback_hook_info::.ctor(SQLitePCL.delegate_rollback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rollback_hook_info__ctor_m13E17137A92C3596FED3261983A9BB4C0ECEF32E (rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185* __this, delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* L_0 = ___func0;
		__this->____func_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____func_0), (void*)L_0);
		RuntimeObject* L_1 = ___v1;
		__this->____user_data_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____user_data_1), (void*)L_1);
		return;
	}
}
// SQLitePCL.rollback_hook_info SQLitePCL.rollback_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185* rollback_hook_info_from_ptr_m3F58644FD17DD94EB256D4EE02FB82B6E1885FA9 (intptr_t ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___p0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_op_Explicit_m500B99BF54D923E624C5235A4B370A37C8B7050C(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		return ((rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185*)IsInstClass((RuntimeObject*)L_2, rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185_il2cpp_TypeInfo_var));
	}
}
// System.Void SQLitePCL.rollback_hook_info::call()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rollback_hook_info_call_m8CC5F80155D547D5AB32D3C9737E8F0F5E410353 (rollback_hook_info_t413A1090EF5A7F4DC0305C94AAA26DB193291185* __this, const RuntimeMethod* method) 
{
	{
		delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* L_0 = __this->____func_0;
		RuntimeObject* L_1 = __this->____user_data_1;
		NullCheck(L_0);
		delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8_inline(L_0, L_1, NULL);
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
// System.Void SQLitePCL.trace_hook_info::.ctor(SQLitePCL.delegate_trace,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trace_hook_info__ctor_mA70153D94F7B356F1C59FFF1F66037EC470FA9D0 (trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4* __this, delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* L_0 = ___func0;
		__this->____func_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____func_0), (void*)L_0);
		RuntimeObject* L_1 = ___v1;
		__this->____user_data_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____user_data_1), (void*)L_1);
		return;
	}
}
// SQLitePCL.trace_hook_info SQLitePCL.trace_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4* trace_hook_info_from_ptr_mEC05B3CD7BA15874CD9F1479DDD268002A3595ED (intptr_t ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___p0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_op_Explicit_m500B99BF54D923E624C5235A4B370A37C8B7050C(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		return ((trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4*)IsInstClass((RuntimeObject*)L_2, trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4_il2cpp_TypeInfo_var));
	}
}
// System.Void SQLitePCL.trace_hook_info::call(SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trace_hook_info_call_mA98E6A93D09DD73D282B0C0C657CBF0DBF741B00 (trace_hook_info_t4C641DC6C4FE4BFDFACF1B300BA0A794A91A53F4* __this, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___s0, const RuntimeMethod* method) 
{
	{
		delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* L_0 = __this->____func_0;
		RuntimeObject* L_1 = __this->____user_data_1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2 = ___s0;
		NullCheck(L_0);
		delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E_inline(L_0, L_1, L_2, NULL);
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
// System.Void SQLitePCL.profile_hook_info::.ctor(SQLitePCL.delegate_profile,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void profile_hook_info__ctor_mA79CFEE7D02660A458390BF3C4218C78E22E679E (profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34* __this, delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* L_0 = ___func0;
		__this->____func_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____func_0), (void*)L_0);
		RuntimeObject* L_1 = ___v1;
		__this->____user_data_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____user_data_1), (void*)L_1);
		return;
	}
}
// SQLitePCL.profile_hook_info SQLitePCL.profile_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34* profile_hook_info_from_ptr_m0BADA22F812D4F70AF5323E6753230ACDA351441 (intptr_t ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___p0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_op_Explicit_m500B99BF54D923E624C5235A4B370A37C8B7050C(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		return ((profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34*)IsInstClass((RuntimeObject*)L_2, profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34_il2cpp_TypeInfo_var));
	}
}
// System.Void SQLitePCL.profile_hook_info::call(SQLitePCL.utf8z,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void profile_hook_info_call_m438C34143623CA589DC456BFEBD6EC5499E4BDB0 (profile_hook_info_tE9263823781920B9D354CC58CF351F325EDF3D34* __this, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___s0, int64_t ___elapsed1, const RuntimeMethod* method) 
{
	{
		delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* L_0 = __this->____func_0;
		RuntimeObject* L_1 = __this->____user_data_1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_2 = ___s0;
		int64_t L_3 = ___elapsed1;
		NullCheck(L_0);
		delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1_inline(L_0, L_1, L_2, L_3, NULL);
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
// System.Void SQLitePCL.progress_hook_info::.ctor(SQLitePCL.delegate_progress,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void progress_hook_info__ctor_mD9BE365FBD60098A96229B0A7FE561438372B947 (progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641* __this, delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* L_0 = ___func0;
		__this->____func_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____func_0), (void*)L_0);
		RuntimeObject* L_1 = ___v1;
		__this->____user_data_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____user_data_1), (void*)L_1);
		return;
	}
}
// SQLitePCL.progress_hook_info SQLitePCL.progress_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641* progress_hook_info_from_ptr_m9E78852C9E5A0CCB892E030EF906059E742E7509 (intptr_t ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___p0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_op_Explicit_m500B99BF54D923E624C5235A4B370A37C8B7050C(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		return ((progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641*)IsInstClass((RuntimeObject*)L_2, progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641_il2cpp_TypeInfo_var));
	}
}
// System.Int32 SQLitePCL.progress_hook_info::call()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t progress_hook_info_call_m1DBC36FDEF18460447F83230864D87083BCD6C16 (progress_hook_info_tF0C73E17649E97704B133D3007AD666D3B416641* __this, const RuntimeMethod* method) 
{
	{
		delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* L_0 = __this->____func_0;
		RuntimeObject* L_1 = __this->____user_data_1;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218_inline(L_0, L_1, NULL);
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
// System.Void SQLitePCL.update_hook_info::.ctor(SQLitePCL.delegate_update,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void update_hook_info__ctor_mA3635FE2E96A5676FE6834AE74D6E18ACBE5206E (update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968* __this, delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* L_0 = ___func0;
		__this->____func_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____func_0), (void*)L_0);
		RuntimeObject* L_1 = ___v1;
		__this->____user_data_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____user_data_1), (void*)L_1);
		return;
	}
}
// SQLitePCL.update_hook_info SQLitePCL.update_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968* update_hook_info_from_ptr_m0AE72580290E934AFA1BAC52AE5CCE7E835962D0 (intptr_t ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___p0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_op_Explicit_m500B99BF54D923E624C5235A4B370A37C8B7050C(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		return ((update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968*)IsInstClass((RuntimeObject*)L_2, update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968_il2cpp_TypeInfo_var));
	}
}
// System.Void SQLitePCL.update_hook_info::call(System.Int32,SQLitePCL.utf8z,SQLitePCL.utf8z,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void update_hook_info_call_mAF608749DC3EC4FD8EFAF0D535E17C0E99EE5D7F (update_hook_info_tC07EBFD924B99F90D87267BC47281F4AC1098968* __this, int32_t ___typ0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___db1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___tbl2, int64_t ___rowid3, const RuntimeMethod* method) 
{
	{
		delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* L_0 = __this->____func_0;
		RuntimeObject* L_1 = __this->____user_data_1;
		int32_t L_2 = ___typ0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3 = ___db1;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_4 = ___tbl2;
		int64_t L_5 = ___rowid3;
		NullCheck(L_0);
		delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349_inline(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
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
// System.Void SQLitePCL.collation_hook_info::.ctor(SQLitePCL.delegate_collation,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void collation_hook_info__ctor_mDB95BB4828C4E65CB57C4BCEE0516A06E6B1CB0A (collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98* __this, delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* L_0 = ___func0;
		__this->____func_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____func_0), (void*)L_0);
		RuntimeObject* L_1 = ___v1;
		__this->____user_data_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____user_data_1), (void*)L_1);
		return;
	}
}
// SQLitePCL.collation_hook_info SQLitePCL.collation_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98* collation_hook_info_from_ptr_m2461265D0988BBA2AD3C0D4EAC65670F71F999CC (intptr_t ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___p0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_op_Explicit_m500B99BF54D923E624C5235A4B370A37C8B7050C(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		return ((collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98*)IsInstClass((RuntimeObject*)L_2, collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98_il2cpp_TypeInfo_var));
	}
}
// System.Int32 SQLitePCL.collation_hook_info::call(System.ReadOnlySpan`1<System.Byte>,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t collation_hook_info_call_m2475E2C71BBFA61C0E5E020143BB111868B4AA6E (collation_hook_info_tDD9E78A2C2512E1FEF753347B75A4DEC251D9E98* __this, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s10, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s21, const RuntimeMethod* method) 
{
	{
		delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* L_0 = __this->____func_0;
		RuntimeObject* L_1 = __this->____user_data_1;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_2 = ___s10;
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_3 = ___s21;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C_inline(L_0, L_1, L_2, L_3, NULL);
		return L_4;
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
// System.Void SQLitePCL.exec_hook_info::.ctor(SQLitePCL.delegate_exec,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void exec_hook_info__ctor_mF44B73FC081E66935ACBC8C8635D85C9E4D3ED24 (exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8* __this, delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* L_0 = ___func0;
		__this->____func_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____func_0), (void*)L_0);
		RuntimeObject* L_1 = ___v1;
		__this->____user_data_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____user_data_1), (void*)L_1);
		return;
	}
}
// SQLitePCL.exec_hook_info SQLitePCL.exec_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8* exec_hook_info_from_ptr_mD4CA6C2909CA4BFCFE982D905FC47BB8D70CB95F (intptr_t ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___p0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_op_Explicit_m500B99BF54D923E624C5235A4B370A37C8B7050C(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		return ((exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8*)IsInstClass((RuntimeObject*)L_2, exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8_il2cpp_TypeInfo_var));
	}
}
// System.Int32 SQLitePCL.exec_hook_info::call(System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t exec_hook_info_call_mA713B5044B9732EB1EE735288166504122BFCA77 (exec_hook_info_tB2C6835FA07DBFA56D9C701D6A2C0FC6D9201CA8* __this, int32_t ___n0, intptr_t ___values_ptr1, intptr_t ___names_ptr2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_0 = NULL;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___n0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___n0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (IntPtr_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Marshal_SizeOf_mA7461E70E172F97FDCA69F23C727E6966D1B32F9(L_5, NULL);
		V_2 = L_6;
		V_3 = 0;
		goto IL_0046;
	}

IL_0022:
	{
		intptr_t L_7 = ___values_ptr1;
		int32_t L_8 = V_3;
		int32_t L_9 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_10;
		L_10 = Marshal_ReadIntPtr_mFC19D4C04BF9018E1BF846CF5185EAF4B7A25D97(L_7, ((int32_t)il2cpp_codegen_multiply(L_8, L_9)), NULL);
		V_4 = L_10;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_11 = V_0;
		int32_t L_12 = V_3;
		intptr_t L_13 = V_4;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (intptr_t)L_13);
		intptr_t L_14 = ___names_ptr2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_2;
		intptr_t L_17;
		L_17 = Marshal_ReadIntPtr_mFC19D4C04BF9018E1BF846CF5185EAF4B7A25D97(L_14, ((int32_t)il2cpp_codegen_multiply(L_15, L_16)), NULL);
		V_4 = L_17;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_18 = V_1;
		int32_t L_19 = V_3;
		intptr_t L_20 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (intptr_t)L_20);
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0046:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = ___n0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0022;
		}
	}
	{
		delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* L_24 = __this->____func_0;
		RuntimeObject* L_25 = __this->____user_data_1;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_26 = V_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_27 = V_1;
		NullCheck(L_24);
		int32_t L_28;
		L_28 = delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B_inline(L_24, L_25, L_26, L_27, NULL);
		return L_28;
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
// System.Void SQLitePCL.function_hook_info::.ctor(SQLitePCL.delegate_function_scalar,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void function_hook_info__ctor_m4B1D6B0D2A0FF53B36B2BF437FD87A3BB8B20E86 (function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* __this, delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* ___func_scalar0, RuntimeObject* ___user_data1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* L_0 = ___func_scalar0;
		__this->____func_scalar_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____func_scalar_0), (void*)L_0);
		RuntimeObject* L_1 = ___user_data1;
		__this->____user_data_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____user_data_3), (void*)L_1);
		return;
	}
}
// System.Void SQLitePCL.function_hook_info::.ctor(SQLitePCL.delegate_function_aggregate_step,SQLitePCL.delegate_function_aggregate_final,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void function_hook_info__ctor_mD469D8E11284B583FA130AFD16FB2EBACB59FDF2 (function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* __this, delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* ___func_step0, delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* ___func_final1, RuntimeObject* ___user_data2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* L_0 = ___func_step0;
		__this->____func_step_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____func_step_1), (void*)L_0);
		delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* L_1 = ___func_final1;
		__this->____func_final_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____func_final_2), (void*)L_1);
		RuntimeObject* L_2 = ___user_data2;
		__this->____user_data_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____user_data_3), (void*)L_2);
		return;
	}
}
// SQLitePCL.function_hook_info SQLitePCL.function_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* function_hook_info_from_ptr_mF719AC68B43BA4D0B991245044B83C11213467AD (intptr_t ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___p0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_op_Explicit_m500B99BF54D923E624C5235A4B370A37C8B7050C(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		return ((function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017*)IsInstClass((RuntimeObject*)L_2, function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017_il2cpp_TypeInfo_var));
	}
}
// SQLitePCL.sqlite3_context SQLitePCL.function_hook_info::get_context(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* function_hook_info_get_context_mAB02E6F7CA2611530E05A39863DBD6FE1CF323B5 (function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* __this, intptr_t ___context0, intptr_t ___agg_context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&agg_sqlite3_context_t7AF70002EDC01CAA770CE2E2C7DE817FEBCEBE07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	agg_sqlite3_context_t7AF70002EDC01CAA770CE2E2C7DE817FEBCEBE07* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_2;
	memset((&V_2), 0, sizeof(V_2));
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		intptr_t L_0 = ___agg_context1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = Marshal_ReadIntPtr_mFFEE0F8AA606A53DB0BB3B6CE5E6A0A5E1673E4E(L_0, NULL);
		V_1 = L_1;
		intptr_t L_2 = V_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_2, (0), NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		RuntimeObject* L_4 = __this->____user_data_3;
		agg_sqlite3_context_t7AF70002EDC01CAA770CE2E2C7DE817FEBCEBE07* L_5 = (agg_sqlite3_context_t7AF70002EDC01CAA770CE2E2C7DE817FEBCEBE07*)il2cpp_codegen_object_new(agg_sqlite3_context_t7AF70002EDC01CAA770CE2E2C7DE817FEBCEBE07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		agg_sqlite3_context__ctor_m2FD4EE33CC38CC17ADF6466615FE093912A8C168(L_5, L_4, NULL);
		V_0 = L_5;
		agg_sqlite3_context_t7AF70002EDC01CAA770CE2E2C7DE817FEBCEBE07* L_6 = V_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_7;
		L_7 = GCHandle_Alloc_m74B02418DDB89BF52FA0F7412D14E6D19E1949C6(L_6, NULL);
		V_2 = L_7;
		intptr_t L_8 = ___agg_context1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_9 = V_2;
		intptr_t L_10;
		L_10 = GCHandle_op_Explicit_m67A1C3E8BC6C8163C5775AE62A514000D00CD9B6_inline(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_WriteIntPtr_m40CFE4DF95A6939333EE6454F9973B193FC459CC(L_8, L_10, NULL);
		goto IL_0049;
	}

IL_0035:
	{
		intptr_t L_11 = V_1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_12;
		L_12 = GCHandle_op_Explicit_m500B99BF54D923E624C5235A4B370A37C8B7050C(L_11, NULL);
		V_3 = L_12;
		RuntimeObject* L_13;
		L_13 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_3), NULL);
		V_0 = ((agg_sqlite3_context_t7AF70002EDC01CAA770CE2E2C7DE817FEBCEBE07*)IsInstClass((RuntimeObject*)L_13, agg_sqlite3_context_t7AF70002EDC01CAA770CE2E2C7DE817FEBCEBE07_il2cpp_TypeInfo_var));
	}

IL_0049:
	{
		agg_sqlite3_context_t7AF70002EDC01CAA770CE2E2C7DE817FEBCEBE07* L_14 = V_0;
		intptr_t L_15 = ___context0;
		NullCheck(L_14);
		agg_sqlite3_context_fix_ptr_m1A20B24DEF5D9E1199E5A60A31376373947B024E(L_14, L_15, NULL);
		agg_sqlite3_context_t7AF70002EDC01CAA770CE2E2C7DE817FEBCEBE07* L_16 = V_0;
		return L_16;
	}
}
// System.Void SQLitePCL.function_hook_info::call_scalar(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void function_hook_info_call_scalar_mAA7975A8E3B3EDBE7C1FCDFC02178C7F72DDD7BB (function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* __this, intptr_t ___context0, int32_t ___num_args1, intptr_t ___argsptr2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&scalar_sqlite3_context_t520AE3E6198561DEF6B32657E820E9B8FBDE0509_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	scalar_sqlite3_context_t520AE3E6198561DEF6B32657E820E9B8FBDE0509* V_0 = NULL;
	sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		intptr_t L_0 = ___context0;
		RuntimeObject* L_1 = __this->____user_data_3;
		scalar_sqlite3_context_t520AE3E6198561DEF6B32657E820E9B8FBDE0509* L_2 = (scalar_sqlite3_context_t520AE3E6198561DEF6B32657E820E9B8FBDE0509*)il2cpp_codegen_object_new(scalar_sqlite3_context_t520AE3E6198561DEF6B32657E820E9B8FBDE0509_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		scalar_sqlite3_context__ctor_mE4C296D9999B1489512214B36C283EFBBA65B72F(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = ___num_args1;
		sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* L_4 = (sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894*)(sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894*)SZArrayNew(sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (IntPtr_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Marshal_SizeOf_mA7461E70E172F97FDCA69F23C727E6966D1B32F9(L_6, NULL);
		V_2 = L_7;
		V_3 = 0;
		goto IL_0041;
	}

IL_0028:
	{
		intptr_t L_8 = ___argsptr2;
		int32_t L_9 = V_3;
		int32_t L_10 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_11;
		L_11 = Marshal_ReadIntPtr_mFC19D4C04BF9018E1BF846CF5185EAF4B7A25D97(L_8, ((int32_t)il2cpp_codegen_multiply(L_9, L_10)), NULL);
		V_4 = L_11;
		sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* L_12 = V_1;
		int32_t L_13 = V_3;
		intptr_t L_14 = V_4;
		sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* L_15 = (sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD*)il2cpp_codegen_object_new(sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		sqlite3_value__ctor_m653B23B5B2873FC7E8AB166AAE5E00151A929676(L_15, L_14, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD*)L_15);
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0041:
	{
		int32_t L_17 = V_3;
		int32_t L_18 = ___num_args1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0028;
		}
	}
	{
		delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* L_19 = __this->____func_scalar_0;
		scalar_sqlite3_context_t520AE3E6198561DEF6B32657E820E9B8FBDE0509* L_20 = V_0;
		RuntimeObject* L_21 = __this->____user_data_3;
		sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* L_22 = V_1;
		NullCheck(L_19);
		delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D_inline(L_19, L_20, L_21, L_22, NULL);
		return;
	}
}
// System.Void SQLitePCL.function_hook_info::call_step(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void function_hook_info_call_step_m50C9070AFF7A909228C5C298AE3CB348571F9FF9 (function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* __this, intptr_t ___context0, intptr_t ___agg_context1, int32_t ___num_args2, intptr_t ___argsptr3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* V_0 = NULL;
	sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		intptr_t L_0 = ___context0;
		intptr_t L_1 = ___agg_context1;
		sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* L_2;
		L_2 = function_hook_info_get_context_mAB02E6F7CA2611530E05A39863DBD6FE1CF323B5(__this, L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = ___num_args2;
		sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* L_4 = (sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894*)(sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894*)SZArrayNew(sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (IntPtr_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Marshal_SizeOf_mA7461E70E172F97FDCA69F23C727E6966D1B32F9(L_6, NULL);
		V_2 = L_7;
		V_3 = 0;
		goto IL_003e;
	}

IL_0024:
	{
		intptr_t L_8 = ___argsptr3;
		int32_t L_9 = V_3;
		int32_t L_10 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_11;
		L_11 = Marshal_ReadIntPtr_mFC19D4C04BF9018E1BF846CF5185EAF4B7A25D97(L_8, ((int32_t)il2cpp_codegen_multiply(L_9, L_10)), NULL);
		V_4 = L_11;
		sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* L_12 = V_1;
		int32_t L_13 = V_3;
		intptr_t L_14 = V_4;
		sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* L_15 = (sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD*)il2cpp_codegen_object_new(sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		sqlite3_value__ctor_m653B23B5B2873FC7E8AB166AAE5E00151A929676(L_15, L_14, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD*)L_15);
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_003e:
	{
		int32_t L_17 = V_3;
		int32_t L_18 = ___num_args2;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0024;
		}
	}
	{
		delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* L_19 = __this->____func_step_1;
		sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* L_20 = V_0;
		RuntimeObject* L_21 = __this->____user_data_3;
		sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* L_22 = V_1;
		NullCheck(L_19);
		delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511_inline(L_19, L_20, L_21, L_22, NULL);
		return;
	}
}
// System.Void SQLitePCL.function_hook_info::call_final(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void function_hook_info_call_final_m41F22B0B1C88975CAE40BD2E8A8F2ACAB962C76E (function_hook_info_t2884BE4D2AF455A249E6382005E52E62CDB7E017* __this, intptr_t ___context0, intptr_t ___agg_context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* V_0 = NULL;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		intptr_t L_0 = ___context0;
		intptr_t L_1 = ___agg_context1;
		sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* L_2;
		L_2 = function_hook_info_get_context_mAB02E6F7CA2611530E05A39863DBD6FE1CF323B5(__this, L_0, L_1, NULL);
		V_0 = L_2;
		delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* L_3 = __this->____func_final_2;
		sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* L_4 = V_0;
		RuntimeObject* L_5 = __this->____user_data_3;
		NullCheck(L_3);
		delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98_inline(L_3, L_4, L_5, NULL);
		intptr_t L_6 = ___agg_context1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_7;
		L_7 = Marshal_ReadIntPtr_mFFEE0F8AA606A53DB0BB3B6CE5E6A0A5E1673E4E(L_6, NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_8;
		L_8 = GCHandle_op_Explicit_m500B99BF54D923E624C5235A4B370A37C8B7050C(L_7, NULL);
		V_1 = L_8;
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_1), NULL);
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
// System.Void SQLitePCL.function_hook_info/agg_sqlite3_context::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void agg_sqlite3_context__ctor_m2FD4EE33CC38CC17ADF6466615FE093912A8C168 (agg_sqlite3_context_t7AF70002EDC01CAA770CE2E2C7DE817FEBCEBE07* __this, RuntimeObject* ___v0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___v0;
		sqlite3_context__ctor_mD3A1FF371768B7E9C88EC86EFE32952B8D89D71F(__this, L_0, NULL);
		return;
	}
}
// System.Void SQLitePCL.function_hook_info/agg_sqlite3_context::fix_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void agg_sqlite3_context_fix_ptr_m1A20B24DEF5D9E1199E5A60A31376373947B024E (agg_sqlite3_context_t7AF70002EDC01CAA770CE2E2C7DE817FEBCEBE07* __this, intptr_t ___p0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		sqlite3_context_set_context_ptr_m75037F45D04497B679E79EF821D191289E5917A3_inline(__this, L_0, NULL);
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
// System.Void SQLitePCL.function_hook_info/scalar_sqlite3_context::.ctor(System.IntPtr,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scalar_sqlite3_context__ctor_mE4C296D9999B1489512214B36C283EFBBA65B72F (scalar_sqlite3_context_t520AE3E6198561DEF6B32657E820E9B8FBDE0509* __this, intptr_t ___p0, RuntimeObject* ___v1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___v1;
		sqlite3_context__ctor_mD3A1FF371768B7E9C88EC86EFE32952B8D89D71F(__this, L_0, NULL);
		intptr_t L_1 = ___p0;
		sqlite3_context_set_context_ptr_m75037F45D04497B679E79EF821D191289E5917A3_inline(__this, L_1, NULL);
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
// System.Void SQLitePCL.authorizer_hook_info::.ctor(SQLitePCL.delegate_authorizer,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void authorizer_hook_info__ctor_m356DDFFD020722A4AB519EE7BB5513B56AF063B4 (authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A* __this, delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* ___func0, RuntimeObject* ___v1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* L_0 = ___func0;
		__this->____func_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____func_0), (void*)L_0);
		RuntimeObject* L_1 = ___v1;
		__this->____user_data_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____user_data_1), (void*)L_1);
		return;
	}
}
// SQLitePCL.authorizer_hook_info SQLitePCL.authorizer_hook_info::from_ptr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A* authorizer_hook_info_from_ptr_mC44A09EE9B591911C860012BA7A404E9CDC22E7E (intptr_t ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___p0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_op_Explicit_m500B99BF54D923E624C5235A4B370A37C8B7050C(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		return ((authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A*)IsInstClass((RuntimeObject*)L_2, authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A_il2cpp_TypeInfo_var));
	}
}
// System.Int32 SQLitePCL.authorizer_hook_info::call(System.Int32,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z,SQLitePCL.utf8z)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t authorizer_hook_info_call_mF1D0501AEBFE5DFE6FD3DA44EC327A13D0FADCBF (authorizer_hook_info_t27B31C9940EEBF2F29DD86AED0B1A0A04487768A* __this, int32_t ___action_code0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param01, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param12, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName3, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___inner_most_trigger_or_view4, const RuntimeMethod* method) 
{
	{
		delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* L_0 = __this->____func_0;
		RuntimeObject* L_1 = __this->____user_data_1;
		int32_t L_2 = ___action_code0;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_3 = ___param01;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_4 = ___param12;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_5 = ___dbName3;
		utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 L_6 = ___inner_most_trigger_or_view4;
		NullCheck(L_0);
		int32_t L_7;
		L_7 = delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F_inline(L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
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
// System.String SQLitePCL.EntryPointAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EntryPointAttribute_get_Name_mB690110C74A5EEC536B754756E3629051CEE6834 (EntryPointAttribute_t153F60F730CBAB2CE127F07F09554695F9B9D075* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SQLitePCL.EntryPointAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntryPointAttribute_set_Name_m865E8DAD340EDE93960B660C46F3CA0602439808 (EntryPointAttribute_t153F60F730CBAB2CE127F07F09554695F9B9D075* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void SQLitePCL.EntryPointAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntryPointAttribute__ctor_m7BA2A2ED5DA1D962B034DC1070BF85312E284359 (EntryPointAttribute_t153F60F730CBAB2CE127F07F09554695F9B9D075* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___name0;
		EntryPointAttribute_set_Name_m865E8DAD340EDE93960B660C46F3CA0602439808_inline(__this, L_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* sqlite3_stmt_get_db_m31DCFD46B918941ED21CAD5F953201B59EF259CF_inline (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* __this, const RuntimeMethod* method) 
{
	{
		sqlite3_tE144FE5AD2EDE033B98BE41F3E6D40AE2469BEA2* L_0 = __this->____db_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t sqlite3_stmt_get_ptr_mF5030B60EB110512D248A632A61AE2F899580B58_inline (sqlite3_stmt_t1D3FD1CE508E61E06BBEC8B87AA8785A0D1BF99F* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* sqlite3_context_get_user_data_m2B56AA945EBDDC7B032007BA993E2B0D6311E609_inline (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____user_data_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t sqlite3_context_get_ptr_m12CD2A3168656A686B6D7455A6A8251F31149259_inline (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____p_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t sqlite3_value_get_ptr_mAF588DD3703B49533D61586741960A38A4515AD9_inline (sqlite3_value_t4BD1685B8485EB3F407B6A313AC87C00236FD4DD* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____p_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void strdelegate_log_Invoke_m842E897F6C69BDB8575B290BD38D45D2BCE5836B_inline (strdelegate_log_t9801FBF160619DC2B734037012DD9A1EAEED29D1* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, String_t* ___msg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___errorCode1, ___msg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void strdelegate_trace_Invoke_m8AA89BE8E36E17DFE6DB85D1739714ECCA307779_inline (strdelegate_trace_t4473F983A242D2840BDD4294A62F9959A52E32D7* __this, RuntimeObject* ___user_data0, String_t* ___s1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___s1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void strdelegate_profile_Invoke_mAEAC18BB166E7E4AD12E832AB3271B5F627E80F4_inline (strdelegate_profile_t6EDF34607A42C7B65462A3297A727D1C74442D3C* __this, RuntimeObject* ___user_data0, String_t* ___statement1, int64_t ___ns2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___statement1, ___ns2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void strdelegate_update_Invoke_m6503D6CB91DE4001C843CC89EADA17C91C2C48B1_inline (strdelegate_update_t7749C43B6F3ED8734D7D5FE0A31A3654803A2886* __this, RuntimeObject* ___user_data0, int32_t ___type1, String_t* ___database2, String_t* ___table3, int64_t ___rowid4, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, String_t*, String_t*, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___type1, ___database2, ___table3, ___rowid4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t strdelegate_collation_Invoke_mC35A71E4C150D418EACA88ED49C49E7BF24F5537_inline (strdelegate_collation_t494B6745B46C09D34DA973B6D3CA857C38457A1E* __this, RuntimeObject* ___user_data0, String_t* ___s11, String_t* ___s22, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___s11, ___s22, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t strdelegate_exec_Invoke_m0CA6282D89A624A4CD2ACC4D5B8C616524E11CA6_inline (strdelegate_exec_t463CF8B8A2625117546BC31DF4EE8F8F2000C583* __this, RuntimeObject* ___user_data0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___values1, ___names2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t strdelegate_authorizer_Invoke_m0806118189372541E94DAFCB9B10B7D727322D34_inline (strdelegate_authorizer_t542E7D4A1FBD8A63121A57AA4AA928B3C11D2C29* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, String_t* ___param02, String_t* ___param13, String_t* ___dbName4, String_t* ___inner_most_trigger_or_view5, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___handle0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___handle0;
		__this->___handle_0 = L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void utf8z__ctor_m64264B0A6C4180B53CC206E21F3C5642074A919B_inline (utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25* __this, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___a0, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A L_0 = ___a0;
		__this->___sp_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___sp_0))->____pinnable_0), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FuncName_set_name_m2E558A596C0258BE6EE151C469BCD07A6426A937_inline (FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FuncName_set_n_mBBC1FE0A2863C200708D2CE3BAB22423DA29259E_inline (FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CnU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FuncName_get_n_m91D9E17080DD4D1D59BD9879BE61EBCF5C88E0C4_inline (FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CnU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FuncName_get_name_mB74437A157D3DF6F5D2A693DC4B2C5DC3E47D648_inline (FuncName_tFDE2AD1AF3A77477BB2CB603A71892EEDE9FA29A* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void delegate_log_Invoke_m7F58C1CA179773A980ACF2CC9AA4126442C1DF19_inline (delegate_log_tE18367F8F9FEC29177DF17197EC57B54B04E5712* __this, RuntimeObject* ___user_data0, int32_t ___errorCode1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___msg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___errorCode1, ___msg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void commit_hook_info_set__func_m2283E27CCE511047C4028072A7FCC50E1354A281_inline (commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* __this, delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* ___value0, const RuntimeMethod* method) 
{
	{
		delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* L_0 = ___value0;
		__this->___U3C_funcU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_funcU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void commit_hook_info_set__user_data_mA2C1CEA31C422E0678A0176851D9623090CFE266_inline (commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3C_user_dataU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_user_dataU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* commit_hook_info_get__func_m05BEEED3611D2441FE7BB1D3FA2DC7B53F14B46D_inline (commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* __this, const RuntimeMethod* method) 
{
	{
		delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* L_0 = __this->___U3C_funcU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* commit_hook_info_get__user_data_mD65F8F042015B81A6FD9D5CB216FF346F0AB68C6_inline (commit_hook_info_tB926B425FE1E7B690A3C92BB526B96E9C11E2E78* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_user_dataU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t delegate_commit_Invoke_mA8E52920E0CC7255ECB87873D46319CD422BBDD8_inline (delegate_commit_tFB9621864DD3318A8343B71F10623E409A6A551A* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void delegate_rollback_Invoke_mAA6288311B15CD014CAAF1A0EA7028AAEB2086C8_inline (delegate_rollback_t9C71A4F72D71A2E27A4B866E7496F8254CF08174* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void delegate_trace_Invoke_mEC4A798E165818F35389BE87682A93FB110F133E_inline (delegate_trace_t305C5668766EF69B59A7CA173C227301583E2172* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___statement1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void delegate_profile_Invoke_mA00F91E75A7BD01FE57F7D49D798C29C92A5C4C1_inline (delegate_profile_tBCB8F1F2018A12E6A5EB205454BFD82CA0182779* __this, RuntimeObject* ___user_data0, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___statement1, int64_t ___ns2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___statement1, ___ns2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t delegate_progress_Invoke_mC2216C164A3D1DA376BB2433339EBBACF1549218_inline (delegate_progress_t2315CA638C6F11381A7046E279792FDCBC421710* __this, RuntimeObject* ___user_data0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void delegate_update_Invoke_mD0F246D71F98DCB5E6735541741EBFE040541349_inline (delegate_update_t56D212B3CC0976C795F39D25F683364DBF6ABC80* __this, RuntimeObject* ___user_data0, int32_t ___type1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___database2, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___table3, int64_t ___rowid4, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___type1, ___database2, ___table3, ___rowid4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t delegate_collation_Invoke_m45C2589D00C885C7339696D897EE7944FAD1AE7C_inline (delegate_collation_t8DE04E00895A6B578A732989AFCE272264DF5CCF* __this, RuntimeObject* ___user_data0, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s11, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A ___s22, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___s11, ___s22, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t delegate_exec_Invoke_m1B9FB2F758B87C294230C26E4B4D30AE2845AC0B_inline (delegate_exec_t41D7BC9F896A9FF945FC4548BFA2CB5B698D3AD3* __this, RuntimeObject* ___user_data0, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___values1, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___names2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___values1, ___names2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GCHandle_op_Explicit_m67A1C3E8BC6C8163C5775AE62A514000D00CD9B6_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_0 = ___value0;
		intptr_t L_1 = L_0.___handle_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void delegate_function_scalar_Invoke_m1434CA5165CF6781827D277E6C65480ADD67032D_inline (delegate_function_scalar_t6ACAAB11456A0DAC29290263706F889CF8639EE5* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C*, RuntimeObject*, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ctx0, ___user_data1, ___args2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void delegate_function_aggregate_step_Invoke_m8152DE1ACF18832F4D8D6E25968E5C2C64EA4511_inline (delegate_function_aggregate_step_t0FAD6EBC679FFDE154D560BFED981933489B6957* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894* ___args2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C*, RuntimeObject*, sqlite3_valueU5BU5D_t8DE0FEFC735FE16A1877E152BA6750433C4C2894*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ctx0, ___user_data1, ___args2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void delegate_function_aggregate_final_Invoke_m5C3D2C71AE77D93A8F8AB9785DB37D28FC5DBD98_inline (delegate_function_aggregate_final_t8B6A92360745F4E49F100C9F709467A57C153FD0* __this, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* ___ctx0, RuntimeObject* ___user_data1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ctx0, ___user_data1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void sqlite3_context_set_context_ptr_m75037F45D04497B679E79EF821D191289E5917A3_inline (sqlite3_context_tEC606503DE111D8B720AE90A4A514F7B8D99C37C* __this, intptr_t ___p0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___p0;
		__this->____p_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t delegate_authorizer_Invoke_mC936893BDC1041434042F3CA020B0346C7EDF56F_inline (delegate_authorizer_tCD3D6AAEEEB5C24F8531B924B9317AD676C25933* __this, RuntimeObject* ___user_data0, int32_t ___action_code1, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param02, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___param13, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___dbName4, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25 ___inner_most_trigger_or_view5, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, utf8z_t829B6DD60834A606DBA0DFA173B38441D91E4E25, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___user_data0, ___action_code1, ___param02, ___param13, ___dbName4, ___inner_most_trigger_or_view5, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EntryPointAttribute_set_Name_m865E8DAD340EDE93960B660C46F3CA0602439808_inline (EntryPointAttribute_t153F60F730CBAB2CE127F07F09554695F9B9D075* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m343287F757FBDC558F3E69B80AAD5171016D231B_gshared_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* ReadOnlySpan_1_get_Item_mD58E12F152DAF67682BD56218B9EC5A0CC3CC1A7_gshared_inline (ReadOnlySpan_1_t6F910E7283F7E67D8D480958244C54E753B2F70A* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->____length_2;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m46AF5939C05FD5C1B41793773BB5AD23228DC4C0(NULL);
	}

IL_000e:
	{
		Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230* L_2 = (Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230*)__this->____pinnable_0;
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		intptr_t L_3 = (intptr_t)__this->____byteOffset_1;
		V_0 = L_3;
		void* L_4;
		L_4 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_0), NULL);
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		int32_t L_6 = ___index0;
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_add<uint8_t,int32_t>(L_5, L_6);
		return L_7;
	}

IL_0030:
	{
		Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230* L_8 = (Pinnable_1_t56301F541914F683B7478D6FF6BA0B90D8DE6230*)__this->____pinnable_0;
		NullCheck(L_8);
		uint8_t* L_9 = (uint8_t*)(&L_8->___Data_0);
		intptr_t L_10 = (intptr_t)__this->____byteOffset_1;
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_9, L_10);
		int32_t L_12 = ___index0;
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_add<uint8_t,int32_t>(L_11, L_12);
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_4_Invoke_mF686DB15C7046521DFA2350715743471581C6580_gshared_inline (Func_4_t969FE6B8E28BD4E700C6BA2ED5F8794B88E37083* __this, intptr_t ___arg10, intptr_t ___arg21, int32_t ___arg32, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
