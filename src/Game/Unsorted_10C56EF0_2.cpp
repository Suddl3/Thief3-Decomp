// Game/Unsorted_10C56EF0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C56E40.h"
#include "Game/Class_10C56E40_Field00.h"
#include "Game/Class_10C56EF0.h"

class Class_10C5A160_Y;

// FUNCTION: 0x10C56EF0 ?FUN_10c56ef0@Class_10C56EF0@@QAE_NVClass_10C56E40@@@Z
bool Class_10C56EF0::FUN_10c56ef0(Class_10C56E40 Obj)
{
    switch (Obj.Unknown00->Virtual3())
    {
    case 8:
        if (Obj.Unknown00->Virtual16() < Unknown64)
            return true;
        break;
    case 2:
        if (Obj.Unknown00->Virtual16() < Unknown68)
            return true;
        break;
    }
    return false;
}
