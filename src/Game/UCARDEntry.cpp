// Game/UCARDEntry.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"
#include <new>

// FUNCTION: 0x1098AA70 ??_GUCARDEntry@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x1098AA90's definition in this unit.

// FUNCTION: 0x1098AA90 ??1UCARDEntry@@UAE@XZ
UCARDEntry::~UCARDEntry()
{
    ConditionalDestroy();
}

// FUNCTION: 0x1098ACA0 ?InternalConstructor@UCARDEntry@@SAXPAX@Z
void UCARDEntry::InternalConstructor(void* p)
{
    new (p) UCARDEntry;
}
