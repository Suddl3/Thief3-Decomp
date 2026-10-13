// Game/UReferenceLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x109A0CD0 ??_GUReferenceLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x109A0CF0's definition in this unit.

// FUNCTION: 0x109A0CF0 ??1UReferenceLinkDataObject@@UAE@XZ
UReferenceLinkDataObject::~UReferenceLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109A1840 ?InternalConstructor@UReferenceLinkDataObject@@SAXPAX@Z
void UReferenceLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) UReferenceLinkDataObject();
}
