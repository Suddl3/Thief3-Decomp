// Game/UElevatorFloorMarkerLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x1099FBD0 ??_GUElevatorFloorMarkerLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x1099FBF0's definition in this unit.

// FUNCTION: 0x1099FBF0 ??1UElevatorFloorMarkerLinkDataObject@@UAE@XZ
UElevatorFloorMarkerLinkDataObject::~UElevatorFloorMarkerLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109A1690 ?InternalConstructor@UElevatorFloorMarkerLinkDataObject@@SAXPAX@Z
void UElevatorFloorMarkerLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) UElevatorFloorMarkerLinkDataObject();
}
