// Game/AAITaggedVolume.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "AICore/AICoreClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10B934D0 ??_GAAITaggedVolume@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B93500's definition in this unit.

// FUNCTION: 0x10B93500 ??1AAITaggedVolume@@UAE@XZ
AAITaggedVolume::~AAITaggedVolume()
{
    ConditionalDestroy();
}

// FUNCTION: 0x10B95130 ?InternalConstructor@AAITaggedVolume@@SAXPAX@Z
void AAITaggedVolume::InternalConstructor(void* X)
{
    new ((EInternal*)X) AAITaggedVolume();
}
