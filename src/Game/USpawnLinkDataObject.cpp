// Game/USpawnLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x109A0FE0 ??_GUSpawnLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x109A1000's definition in this unit.

// FUNCTION: 0x109A1000 ??1USpawnLinkDataObject@@UAE@XZ
USpawnLinkDataObject::~USpawnLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x109A1890 ?InternalConstructor@USpawnLinkDataObject@@SAXPAX@Z
void USpawnLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) USpawnLinkDataObject();
}
