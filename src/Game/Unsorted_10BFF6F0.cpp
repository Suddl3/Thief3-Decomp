// Game/Unsorted_10BFF6F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFF600.h"

class Class_10BBEFA0
{
public:
    void* FUN_10bbefa0();
};

class Class_10BBEFB0
{
public:
    void* FUN_10bbefb0();
};

// FUNCTION: 0x10BFF6F0 ?FUN_10bff6f0@Class_10BFF600@@QAEPAXHPBMD@Z
void* Class_10BFF600::FUN_10bff6f0(int A, const float* B, char C)
{
    int Result = FUN_10bff600(A, B);
    if (!Result)
        return 0;
    if (C == 1)
        return ((Class_10BBEFA0*)Result)->FUN_10bbefa0();
    return ((Class_10BBEFB0*)Result)->FUN_10bbefb0();
}
