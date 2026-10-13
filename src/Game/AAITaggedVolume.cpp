// Game/AAITaggedVolume.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "AICore/AICoreClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10B95130 ?InternalConstructor@AAITaggedVolume@@SAXPAX@Z
void AAITaggedVolume::InternalConstructor(void* X)
{
    new ((EInternal*)X) AAITaggedVolume();
}
