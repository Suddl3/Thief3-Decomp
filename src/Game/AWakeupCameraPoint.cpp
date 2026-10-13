// Game/AWakeupCameraPoint.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "T3Game/T3GameClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10AB3D80 ??_GAWakeupCameraPoint@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10AB3DB0's definition in this unit.

// FUNCTION: 0x10AB3DB0 ??1AWakeupCameraPoint@@UAE@XZ
AWakeupCameraPoint::~AWakeupCameraPoint()
{
    ConditionalDestroy();
}

// FUNCTION: 0x10AB4D20 ?InternalConstructor@AWakeupCameraPoint@@SAXPAX@Z
void AWakeupCameraPoint::InternalConstructor(void* X)
{
    new ((EInternal*)X) AWakeupCameraPoint();
}
