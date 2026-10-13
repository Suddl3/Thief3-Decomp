// Game/Unsorted_10B13900.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "T3Player/T3PlayerClasses.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x10B15370 ?FUN_10b15370@@YAXPAX@Z
void FUN_10b15370(void* Memory)
{
    new ((EInternal*)Memory) UT3Game();
}
