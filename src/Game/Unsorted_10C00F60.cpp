// Game/Unsorted_10C00F60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E97AF8.h"

// FUNCTION: 0x10C01090 ?FUN_10c01090@Class_10E97AF8@@UAEHPB_J0@Z
int Class_10E97AF8::FUN_10c01090(const __int64* A, const __int64* B)
{
    if (*A == *B)
        return 0;
    if (*A > *B)
        return 1;
    return -1;
}
