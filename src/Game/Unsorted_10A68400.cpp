// Game/Unsorted_10A68400.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10943600.h"
#include "Game/Class_10A68AE0.h"
#include "Game/Item_10943600.h"

struct Struct_10A68590
{
    char Unknown00[4];
    int Unknown04;
};

struct Struct_10A67E10
{
    int Unknown00;
    int Unknown04;
    float Unknown08;
};

extern float DAT_10e49684;

int FindOrAddIndex(int A);

void FUN_10a67e10(Struct_10A67E10* A, int B, int C, int D);

void FUN_10a67da0(int A, int B, int C, int D, int E, int F, int G);

// FUNCTION: 0x10A68590 ?FUN_10a68590@@YAXHHHHHH@Z
void FUN_10a68590(int A, int B, int C, int D, int E, int F)
{
    Struct_10A67E10 Result;
    int Value = FindOrAddIndex(((Struct_10A68590*)B)->Unknown04);
    FUN_10a67e10(&Result, D, B, Value);
    if (!(Result.Unknown08 > DAT_10e49684))
        FUN_10a67da0(A, B, C, Result.Unknown00, Result.Unknown04, E, F);
}

// FUNCTION: 0x10A68AE0 ?CopyFrom@Class_10A68AE0@@QAEXABV1@@Z
void Class_10A68AE0::CopyFrom(const Class_10A68AE0& Other)
{
    FUN_10da4f50(Other.Unknown00);
    for (int i = 0; i < Unknown00; i++)
        Unknown08[i] = Other.Unknown08[i];
}
