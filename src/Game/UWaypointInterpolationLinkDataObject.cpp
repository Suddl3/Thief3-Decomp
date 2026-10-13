// Game/UWaypointInterpolationLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x109A14A0 ??_GUWaypointInterpolationLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x109A14C0's definition in this unit.

// FUNCTION: 0x109A14C0 ??1UWaypointInterpolationLinkDataObject@@UAE@XZ
UWaypointInterpolationLinkDataObject::~UWaypointInterpolationLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109A1910 ?InternalConstructor@UWaypointInterpolationLinkDataObject@@SAXPAX@Z
void UWaypointInterpolationLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) UWaypointInterpolationLinkDataObject();
}
