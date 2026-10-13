// Game/AAIContextVolume.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "AICore/AICoreClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10B93430 ??_GAAIContextVolume@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B93460's definition in this unit.

// FUNCTION: 0x10B93460 ??1AAIContextVolume@@UAE@XZ
AAIContextVolume::~AAIContextVolume()
{
    ConditionalDestroy();
}

// FUNCTION: 0x10B95120 ?InternalConstructor@AAIContextVolume@@SAXPAX@Z
void AAIContextVolume::InternalConstructor(void* X)
{
    new ((EInternal*)X) AAIContextVolume();
}
