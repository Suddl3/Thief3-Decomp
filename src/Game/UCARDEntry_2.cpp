// Game/UCARDEntry_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Engine/EngineClasses.h"

// FUNCTION: 0x1098ACA0 ?InternalConstructor@UCARDEntry@@SAXPAX@Z
void UCARDEntry::InternalConstructor(void* p)
{
    new (p) UCARDEntry;
}
