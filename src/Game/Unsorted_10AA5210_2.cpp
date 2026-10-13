// Game/Unsorted_10AA5210_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10AA52C0.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10AA5250 ?FUN_10aa5250@Class_10AA52C0@@QAEXH@Z
void Class_10AA52C0::FUN_10aa5250(int p1)
{
    if (Unknown00)
    {
        GetAllocator()->Virtual5(Unknown00);
        Unknown00 = 0;
    }
    if (p1)
    {
        GetAllocator()->Virtual8(0, 0);
        Unknown00 = GetAllocator()->Virtual3(Unknown00, p1 * 28, 0, 0, 0, 0);
        GetAllocator()->Virtual9();
    }
    Unknown04 = p1;
}
