// Game/Unsorted_10C04DC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Struct_10C05A50.h"
#include "Game/Struct_10C05610_Item.h"

float FUN_10c054b0(float A, float B, float C, float D, float E);

float FUN_10c05a50(const Struct_10C05A50* A, const Struct_10C05A50* B);

int FUN_109688a0(int A, int B, int C);

void FUN_10c05480(int* A, int B);

// FUNCTION: 0x10C053C0 ?FUN_10c053c0@@YAXPAUStruct_10C05610_Item@@PAM1PA_N@Z
void FUN_10c053c0(struct Struct_10C05610_Item* Item, float* Min, float* Max, bool* Done)
{
    if (!*Done)
    {
        Min[0] = Item->Unknown00;
        Max[0] = Item->Unknown00;
        Min[1] = Item->Unknown04;
        Max[1] = Item->Unknown04;
        Min[2] = Item->Unknown08;
        Max[2] = Item->Unknown08;
        *Done = true;
        return;
    }
    if (Item->Unknown00 < Min[0])
        Min[0] = Item->Unknown00;
    if (Item->Unknown00 > Max[0])
        Max[0] = Item->Unknown00;
    if (Item->Unknown04 < Min[1])
        Min[1] = Item->Unknown04;
    if (Item->Unknown04 > Max[1])
        Max[1] = Item->Unknown04;
    if (Item->Unknown08 < Min[2])
        Min[2] = Item->Unknown08;
    if (Item->Unknown08 > Max[2])
        Max[2] = Item->Unknown08;
}

// FUNCTION: 0x10C05480 ?FUN_10c05480@@YAXPAHH@Z
void FUN_10c05480(int* A, int B)
{
    int Value = *A;
    if (Value > B && Value < 0xffff - B)
    {
        if (Value < 0x7fff)
            *A = B;
        else
            *A = 0xffff - B;
    }
}

// FUNCTION: 0x10C054B0 ?FUN_10c054b0@@YAMMMMMM@Z
float FUN_10c054b0(float A, float B, float C, float D, float E)
{
    float Slope = (E - C) / (D - B);
    return Slope * A + (C - B * Slope);
}

// FUNCTION: 0x10C055D0 ?FUN_10c055d0@@YA?AVFVector@@PBV1@@Z
FVector FUN_10c055d0(const FVector* V)
{
    return FVector(V->Y, -V->X, V->Z);
}

// FUNCTION: 0x10C05A50 ?FUN_10c05a50@@YAMPBUStruct_10C05A50@@0@Z
float FUN_10c05a50(const Struct_10C05A50* A, const Struct_10C05A50* B)
{
    float X = B->Unknown00 - A->Unknown00;
    float Y = B->Unknown04 - A->Unknown04;
    return X * X + Y * Y;
}

// FUNCTION: 0x10C061A0 ?FUN_10c061a0@@YA_NHHH@Z
bool FUN_10c061a0(int A, int B, int C)
{
    return FUN_109688a0(A, B, C) != 0;
}
