// Game/UPuddleMarkLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x109A0C40 ??_GUPuddleMarkLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x109A0C60's definition in this unit.

// FUNCTION: 0x109A0C60 ??1UPuddleMarkLinkDataObject@@UAE@XZ
UPuddleMarkLinkDataObject::~UPuddleMarkLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109A1830 ?InternalConstructor@UPuddleMarkLinkDataObject@@SAXPAX@Z
void UPuddleMarkLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) UPuddleMarkLinkDataObject();
}
