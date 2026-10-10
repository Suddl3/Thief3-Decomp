// Game/Unsorted_10B3AE00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B19300.h"
#include "Game/Class_10B22020.h"
#include "Game/Static_10B18D00.h"

struct Struct_10B19300_Param;

Class_10B19300* FUN_10b190e0();

Static_10B18D00* FUN_10b18d00();

int FUN_10b1dbf0();

// FUNCTION: 0x10B3AE00 ?FUN_10b3ae00@@YGXPAVClass_10B22020@@@Z
void __stdcall FUN_10b3ae00(Class_10B22020* A)
{
    if (!FUN_10b1dbf0() && A->Unknown54E != true)
    {
        FUN_10b190e0()->FUN_10b19460(A);
        return;
    }
    FUN_10b18d00()->FUN_10b18d20(A);
    FUN_10b190e0()->FUN_10b19300((Struct_10B19300_Param*)A, 1.0f);
}
