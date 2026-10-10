// Game/Class_10E6BBD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1098E330.h"
#include "Game/Class_10E6BBD0.h"

// FUNCTION: 0x10A75560 ?FUN_10a75560@Class_10E6BBD0@@QAEXH_N@Z
void Class_10E6BBD0::FUN_10a75560(int A, bool B)
{
    int Flag = 0;
    if (!(((Class_1098E330*)A)->FUN_1098e330(0x80064b, &Flag) && Flag))
    {
        FUN_10a74df0(A);
        if (B)
            FUN_10a74ec0(A);
    }
}
