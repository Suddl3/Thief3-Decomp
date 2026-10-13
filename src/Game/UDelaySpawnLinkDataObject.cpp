// Game/UDelaySpawnLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x109A0490 ??_GUDelaySpawnLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x109A04B0's definition in this unit.

// FUNCTION: 0x109A04B0 ??1UDelaySpawnLinkDataObject@@UAE@XZ
UDelaySpawnLinkDataObject::~UDelaySpawnLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109A1760 ?InternalConstructor@UDelaySpawnLinkDataObject@@SAXPAX@Z
void UDelaySpawnLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) UDelaySpawnLinkDataObject();
}
