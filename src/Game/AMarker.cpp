// Game/AMarker.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Engine/EngineClasses.h"

// FUNCTION: 0x1098E490 ?InternalConstructor@AMarker@@SAXPAX@Z
void AMarker::InternalConstructor(void* p)
{
    new (p) AMarker;
}
