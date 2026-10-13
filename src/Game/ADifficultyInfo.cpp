// Game/ADifficultyInfo.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "T3Game/T3GameClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10AB3E20 ??_GADifficultyInfo@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10AB3E50's definition in this unit.

// FUNCTION: 0x10AB3E50 ??1ADifficultyInfo@@UAE@XZ
ADifficultyInfo::~ADifficultyInfo()
{
    ConditionalDestroy();
}

// FUNCTION: 0x10AB4D30 ?InternalConstructor@ADifficultyInfo@@SAXPAX@Z
void ADifficultyInfo::InternalConstructor(void* X)
{
    new ((EInternal*)X) ADifficultyInfo();
}
