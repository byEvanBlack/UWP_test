#include "il2cpp-config.h"
#include "Debugger.h"
#include "vm-utils/Debugger.h"
#include <Windows.h>
#undef GetCurrentDirectory

namespace il2cpp
{
namespace icalls
{
namespace mscorlib
{
namespace System
{
namespace Diagnostics
{
    bool Debugger::IsAttached_internal()
    {
        return utils::Debugger::GetIsDebuggerAttached();
    }

    bool Debugger::IsLogging()
    {
return true;
    }

    void Debugger::Log_icall(int32_t level, Il2CppString** category, Il2CppString** message)
    {
OutputDebugStringW(message->chars);
#if IL2CPP_MONO_DEBUGGER
        utils::Debugger::Log(level, *category, *message);
#endif
    }
} /* namespace Diagnostics */
} /* namespace System */
} /* namespace mscorlib */
} /* namespace icalls */
} /* namespace il2cpp */
