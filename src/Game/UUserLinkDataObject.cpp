// Game/UUserLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x109A1380 ??_GUUserLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x109A13A0's definition in this unit.

// FUNCTION: 0x109A13A0 ??1UUserLinkDataObject@@UAE@XZ
UUserLinkDataObject::~UUserLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109A18F0 ?InternalConstructor@UUserLinkDataObject@@SAXPAX@Z
void UUserLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) UUserLinkDataObject();
}
