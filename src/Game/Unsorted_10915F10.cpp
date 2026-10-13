// Game/Unsorted_10915F10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109169E0.h"
#include "Game/cString.h"

extern "C" char* _strupr(char* String);

// FUNCTION: 0x109169E0 ?FUN_109169e0@Class_109169E0@@QAEHABVClass_1090A780@@@Z
int Class_109169E0::FUN_109169e0(const Class_1090A780& Name)
{
    int Found = 0;
    {
        cString Local(*(const cString*)&Name);
        if (Local.Unknown00)
        {
            _strupr(Local.Unknown00);
        }
        Unknown08.FUN_10c49740((int*)&Local, (Entry_10C32C30**)&Found);
    }
    return Found;
}
