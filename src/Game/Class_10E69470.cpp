// Game/Class_10E69470.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10E69470.h"

// FUNCTION: 0x10A5B530 ?FUN_10a5b530@Class_10E69470@@QAEXXZ
void Class_10E69470::FUN_10a5b530()
{
    FUN_10905aa0()->Virtual8(0, 0);
    if (Unknown1DC)
    {
        Class_109081E0* Str = Unknown1E4;
        if (Str->Unknown00)
        {
            char* Block = Str->Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Str->Unknown00 = 0;
        }
    }
    FUN_10905aa0()->Virtual9();
    Unknown1D8 = 0;
    Unknown1D4 = 0;
    Virtual56(0);
    Unknown1C8 = 0;
}
