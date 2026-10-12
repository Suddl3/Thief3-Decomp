// Game/Unsorted_10C1A670.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C1A690.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10C1A690 ?Free@Class_10C1A690@@QAEXXZ
void Class_10C1A690::Free()
{
    if (Unknown04)
    {
        int* Obj = Unknown04 - 1;
        GetAllocator()->Virtual5(Obj);
        Unknown04 = 0;
    }
}
