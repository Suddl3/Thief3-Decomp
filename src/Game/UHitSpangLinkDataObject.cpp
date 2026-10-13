// Game/UHitSpangLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x109A05B0 ??_GUHitSpangLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x109A05D0's definition in this unit.

// FUNCTION: 0x109A05D0 ??1UHitSpangLinkDataObject@@UAE@XZ
UHitSpangLinkDataObject::~UHitSpangLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109A1780 ?InternalConstructor@UHitSpangLinkDataObject@@SAXPAX@Z
void UHitSpangLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) UHitSpangLinkDataObject();
}
