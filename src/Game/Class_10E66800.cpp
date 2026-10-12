// Game/Class_10E66800.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E66800.h"

int FUN_1090ecc0(void* A, void* B, int C);

// FUNCTION: 0x10A3C600 ?Compare@Class_10E66800@@UAEHPAX0@Z
int Class_10E66800::Compare(void* A, void* B)
{
    if (FUN_1090ecc0(A, B, 1) == 0)
        return 0;
    return FUN_1090ecc0(A, B, 1) > 0 ? 1 : -1;
}
