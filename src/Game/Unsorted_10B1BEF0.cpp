// Game/Unsorted_10B1BEF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_1090A780.h"

// FUNCTION: 0x10B1BEF0 ?FUN_10b1bef0@@YGXHAAVcString@@@Z
void __stdcall FUN_10b1bef0(int State, cString& Out)
{
    switch (State)
    {
    case 0:
        Out.FUN_1090a590("Incomplete");
        return;
    case 1:
        Out.FUN_1090a590("Complete");
        return;
    case 3:
        Out.FUN_1090a590("Cancelled");
        return;
    case 2:
        Out.FUN_1090a590("Failed");
        return;
    case 4:
        Out.FUN_1090a590("Hidden");
        return;
    }
}
