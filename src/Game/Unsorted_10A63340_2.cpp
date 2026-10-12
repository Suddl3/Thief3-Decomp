// Game/Unsorted_10A63340_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1090A780.h"
#include "Game/Class_10E6AC98.h"
#include "Game/Class_10A63340.h"
#include "Game/cIntArray.h"

class Class_1091D800
{
public:
    Class_1090A780 FUN_1091d800(int A, int B);
};

// FUNCTION: 0x10A63340 ?EraseAt@Class_10A63340@@QAEXH@Z
void Class_10A63340::EraseAt(int Index)
{
    if (Index != Unknown00 - 1)
        MoveItems(Index + 1, Index, Unknown00 - Index - 1);
    SetCount(Unknown00 - 1);
}

// FUNCTION: 0x10A63440 ?FUN_10a63440@Class_10E6AC98@@UAE?AVClass_1090A780@@XZ
Class_1090A780 Class_10E6AC98::FUN_10a63440()
{
    if (Unknown1C)
        return Unknown14;
    return Unknown0C->FUN_1091d800(0, 2);
}
