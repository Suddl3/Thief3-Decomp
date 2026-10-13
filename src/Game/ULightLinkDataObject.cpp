// Game/ULightLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x109A06D0 ??_GULightLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x109A06F0's definition in this unit.

// FUNCTION: 0x109A06F0 ??1ULightLinkDataObject@@UAE@XZ
ULightLinkDataObject::~ULightLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109A17A0 ?InternalConstructor@ULightLinkDataObject@@SAXPAX@Z
void ULightLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) ULightLinkDataObject();
}
