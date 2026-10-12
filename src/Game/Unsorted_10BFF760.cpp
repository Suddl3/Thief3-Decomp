// Game/Unsorted_10BFF760.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"

extern float DAT_10eafbdc;

float FUN_10c05bc0(int A, int B, int C, float D);

class Class_10BBF5D0
{
public:
    cIntArray* FUN_10bbf5d0();
};

class Class_10BFFF00_Src
{
public:
    char Unknown00[0xC0];
    Class_10BBF5D0 Unknown0C0;
};

// FUNCTION: 0x10BFFF00 ?FUN_10bfff00@@YGXPAVClass_10BFFF00_Src@@PAVcIntArray@@@Z
void __stdcall FUN_10bfff00(Class_10BFFF00_Src* Src, cIntArray* Dst)
{
    for (int i = 0; i < Src->Unknown0C0.FUN_10bbf5d0()->Count; i++)
    {
        int Value = Src->Unknown0C0.FUN_10bbf5d0()->Data[i];
        int Index = Dst->Count;
        Dst->SetCount(Index + 1);
        Dst->Data[Index] = Value;
    }
}

// FUNCTION: 0x10C00280 ?FUN_10c00280@@YAHHHH@Z
int FUN_10c00280(int A, int B, int C)
{
    int Result = A + B;
    if (B > 0)
    {
        while (Result >= C)
            Result -= C;
    }
    else
    {
        while (Result < 0)
            Result += C;
    }
    return Result;
}

// FUNCTION: 0x10C003A0 ?FUN_10c003a0@@YAHHHH@Z
int FUN_10c003a0(int A, int B, int C)
{
    if (FUN_10c05bc0(A, B, C, 1.0f) > DAT_10eafbdc)
        return 1;
    return 0;
}
