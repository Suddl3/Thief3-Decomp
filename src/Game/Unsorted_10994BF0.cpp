// Game/Unsorted_10994BF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10994BF0 ?ConstructAAmbientLightVolume@@YAXPAX@Z
void ConstructAAmbientLightVolume(void* Memory)
{
    new ((EInternal*)Memory) AAmbientLightVolume();
}
