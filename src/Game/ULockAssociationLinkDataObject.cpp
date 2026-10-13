// Game/ULockAssociationLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x109A0850 ??_GULockAssociationLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x109A0870's definition in this unit.

// FUNCTION: 0x109A0870 ??1ULockAssociationLinkDataObject@@UAE@XZ
ULockAssociationLinkDataObject::~ULockAssociationLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109A17C0 ?InternalConstructor@ULockAssociationLinkDataObject@@SAXPAX@Z
void ULockAssociationLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) ULockAssociationLinkDataObject();
}
