// Game/Unsorted_10A38F40_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10A382D0.h"
#include "Game/Class_10A37F30.h"

struct Struct_10A378B0;

// FUNCTION: 0x10A38F40 ?FUN_10a38f40@Class_10A37F30@@QAEMXZ
float Class_10A37F30::FUN_10a38f40()
{
    if (Unknown59C != 0 && FUN_10a382d0(*Unknown5A4)->Unknown40)
    {
        Class_10A382D0* Result = FUN_10a382d0(FUN_10a38f00());
        float Value = Result->Unknown38;
        if (Value != 0.0f)
            return Value;
    }
    return Unknown44;
}
