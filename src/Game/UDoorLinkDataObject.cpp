// Game/UDoorLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x1099FAB0 ??_GUDoorLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x1099FAD0's definition in this unit.

// FUNCTION: 0x1099FAD0 ??1UDoorLinkDataObject@@UAE@XZ
UDoorLinkDataObject::~UDoorLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109A1670 ?InternalConstructor@UDoorLinkDataObject@@SAXPAX@Z
void UDoorLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) UDoorLinkDataObject();
}
