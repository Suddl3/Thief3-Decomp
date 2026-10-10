// Game/Class_10E49C6C_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E49C6C.h"

extern bool DAT_10f2c758;

// FUNCTION: 0x10930170 ?FUN_10930170@Class_10E49C6C@@QAEXHH@Z
void Class_10E49C6C::FUN_10930170(int A, int B)
{
    if (!DAT_10f2c758 && FUN_10925160(B))
    {
        for (int i = 0; i < Unknown50; i++)
            FUN_1092fae0(A, 5, Unknown58[i]);
        FUN_10925190(5);
    }
}
