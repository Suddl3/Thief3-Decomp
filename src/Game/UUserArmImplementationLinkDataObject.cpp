// Game/UUserArmImplementationLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x109A12F0 ??_GUUserArmImplementationLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x109A1310's definition in this unit.

// FUNCTION: 0x109A1310 ??1UUserArmImplementationLinkDataObject@@UAE@XZ
UUserArmImplementationLinkDataObject::~UUserArmImplementationLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109A18E0 ?InternalConstructor@UUserArmImplementationLinkDataObject@@SAXPAX@Z
void UUserArmImplementationLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) UUserArmImplementationLinkDataObject();
}
