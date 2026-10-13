// Game/UPuddleConnectorLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x109A0BB0 ??_GUPuddleConnectorLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x109A0BD0's definition in this unit.

// FUNCTION: 0x109A0BD0 ??1UPuddleConnectorLinkDataObject@@UAE@XZ
UPuddleConnectorLinkDataObject::~UPuddleConnectorLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109A1820 ?InternalConstructor@UPuddleConnectorLinkDataObject@@SAXPAX@Z
void UPuddleConnectorLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) UPuddleConnectorLinkDataObject();
}
