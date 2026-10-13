// Game/Unsorted_10A53C00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A53C00.h"
#include "Game/Class_1090A780.h"
#include "Game/cString.h"

extern const char DAT_10e47660[];

// FUNCTION: 0x10A53C00 ?GetStateName@Class_10A53C00@@QAE?AVcString@@H@Z
cString Class_10A53C00::GetStateName(int State)
{
    switch (State)
    {
    case 0:
        return cString("Normal");
    case 1:
        return cString("Selected");
    case 2:
        return cString("Pressed");
    case 3:
        return cString("Disabled");
    }
    return cString(DAT_10e47660);
}
