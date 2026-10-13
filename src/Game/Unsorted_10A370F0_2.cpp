// Game/Unsorted_10A370F0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_1096D780_Field98.h"
#include "Game/Class_10D9FEE0.h"
#include "Game/Class_1096D780.h"

// FUNCTION: 0x10A37210 ?MoveTo@@YA_NPAVClass_1096D780@@PBVFVector@@@Z
bool MoveTo(Class_1096D780* A, const FVector* B)
{
    bool Result = static_cast<Class_1096D780_Field98*>(A->Get())->Virtual43(A, *B, 0, 0, 0) != 0;
    if (A->UnknownB0)
    {
        ((Class_10D9FEE0*)A->UnknownB0)->FUN_10da07c0(*B);
        Result = true;
    }
    return Result;
}
