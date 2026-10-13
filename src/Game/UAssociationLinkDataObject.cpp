// Game/UAssociationLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x1099F3E0 ??_GUAssociationLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x1099F400's definition in this unit.

// FUNCTION: 0x1099F400 ??1UAssociationLinkDataObject@@UAE@XZ
UAssociationLinkDataObject::~UAssociationLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109A15C0 ?InternalConstructor@UAssociationLinkDataObject@@SAXPAX@Z
void UAssociationLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) UAssociationLinkDataObject();
}
