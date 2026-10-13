// Game/USpawnPoolLinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "T3Game/T3GameClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10AB5000 ??_GUSpawnPoolLinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10AB5020's definition in this unit.

// FUNCTION: 0x10AB5020 ??1USpawnPoolLinkDataObject@@UAE@XZ
USpawnPoolLinkDataObject::~USpawnPoolLinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x10AB53F0 ?InternalConstructor@USpawnPoolLinkDataObject@@SAXPAX@Z
void USpawnPoolLinkDataObject::InternalConstructor(void* X)
{
    new ((EInternal*)X) USpawnPoolLinkDataObject();
}
