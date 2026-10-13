// Game/UInterestLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x109A0640 ??_GUInterestLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x109A0660's definition in this unit.

// FUNCTION: 0x109A0660 ??1UInterestLinkDataObject@@UAE@XZ
UInterestLinkDataObject::~UInterestLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109A1790 ?InternalConstructor@UInterestLinkDataObject@@SAXPAX@Z
void UInterestLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) UInterestLinkDataObject();
}
