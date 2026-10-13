// Game/Unsorted_1098E580_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E70A50.h"
#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x1098E580 ?ConstructAZoneProperties@@YAXPAVAZoneProperties@@@Z
void ConstructAZoneProperties(AZoneProperties* Object)
{
    if (Object)
        Object->Construct();
}

// FUNCTION: 0x1098E5A0 ?ConstructAMetaProperty@@YAXPAX@Z
void ConstructAMetaProperty(void* Memory)
{
    new ((EInternal*)Memory) AMetaProperty();
}
