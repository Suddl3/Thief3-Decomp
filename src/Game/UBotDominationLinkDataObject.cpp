// Game/UBotDominationLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x1099F870 ??_GUBotDominationLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x1099F890's definition in this unit.

// FUNCTION: 0x1099F890 ??1UBotDominationLinkDataObject@@UAE@XZ
UBotDominationLinkDataObject::~UBotDominationLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109A1630 ?InternalConstructor@UBotDominationLinkDataObject@@SAXPAX@Z
void UBotDominationLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) UBotDominationLinkDataObject();
}
