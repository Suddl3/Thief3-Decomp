// Game/Class_10A37F30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A37F30.h"
#include "Game/Class_1090A780.h"
#include "Game/cString.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A382D0.h"

extern const char DAT_10e47660[];

// FUNCTION: 0x10A38F00 ?FUN_10a38f00@Class_10A37F30@@QAE?AVcString@@XZ
cString Class_10A37F30::FUN_10a38f00()
{
    if (!Unknown59C)
        return cString(DAT_10e47660);
    return *Unknown5A4;
}

// FUNCTION: 0x10A38F40 ?FUN_10a38f40@Class_10A37F30@@QAEMXZ
float Class_10A37F30::FUN_10a38f40()
{
    if (Unknown59C != 0 && FindItemByName(*Unknown5A4)->Unknown40)
    {
        Class_10A382D0* Result = FindItemByName(FUN_10a38f00());
        float Value = Result->Unknown38;
        if (Value != 0.0f)
            return Value;
    }
    return Unknown44;
}
