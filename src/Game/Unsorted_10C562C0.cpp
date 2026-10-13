// Game/Unsorted_10C562C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C54970.h"
#include "Game/Class_10C562C0.h"

Class_10905A90_Member* GetAllocator();

extern Class_10C562C0* DAT_10ff70cc;

// FUNCTION: 0x10C562C0 ?FUN_10c562c0@@YAPAVClass_10C562C0@@XZ
Class_10C562C0* FUN_10c562c0()
{
    if (!DAT_10ff70cc)
    {
        GetAllocator()->Virtual8(0, 0);
        DAT_10ff70cc = new Class_10C562C0;
        GetAllocator()->Virtual9();
    }
    return DAT_10ff70cc;
}
