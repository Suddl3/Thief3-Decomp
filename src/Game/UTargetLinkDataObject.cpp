// Game/UTargetLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x109A1190 ??_GUTargetLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x109A11B0's definition in this unit.

// FUNCTION: 0x109A11B0 ??1UTargetLinkDataObject@@UAE@XZ
UTargetLinkDataObject::~UTargetLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109A18C0 ?InternalConstructor@UTargetLinkDataObject@@SAXPAX@Z
void UTargetLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) UTargetLinkDataObject();
}
