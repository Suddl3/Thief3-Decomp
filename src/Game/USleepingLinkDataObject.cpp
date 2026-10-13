// Game/USleepingLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x109A0F50 ??_GUSleepingLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x109A0F70's definition in this unit.

// FUNCTION: 0x109A0F70 ??1USleepingLinkDataObject@@UAE@XZ
USleepingLinkDataObject::~USleepingLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109A1880 ?InternalConstructor@USleepingLinkDataObject@@SAXPAX@Z
void USleepingLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) USleepingLinkDataObject();
}
