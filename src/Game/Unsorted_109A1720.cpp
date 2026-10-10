// Game/Unsorted_109A1720.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109A0310.h"
#include "Game/Class_10e56bc0.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x109A1720 ?FUN_109a1720@@YAXPAX@Z
void FUN_109a1720(void* Memory)
{
    new ((EInternal*)Memory) Class_10e56bc0();
}

// FUNCTION: 0x109A1740 ?FUN_109a1740@@YAXPAVClass_109A0310@@@Z
void FUN_109a1740(Class_109A0310* p1)
{
    if (p1)
        p1->FUN_109a0310();
}
