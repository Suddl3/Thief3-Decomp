// Game/Unsorted_10A48720.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

class Class_10A48A50_Member
{
public:
    int Unknown00;
    int Unknown04;
};

struct Struct_10A48A50
{
    int Unknown00;
    char Unknown04[4];
    Class_10A48A50_Member** Unknown08;
};

class Class_10A48AB0_Member
{
public:
    char Unknown00[0x54];
    int Unknown54;
};

struct Struct_10A48AB0
{
    int Unknown00;
    char Unknown04[4];
    Class_10A48AB0_Member** Unknown08;
};

class Class_109BBBA0;

struct Arg_10A48720
{
    char Unknown00[4];
};

extern float DAT_10eafbdc;

extern float DAT_10e499a4;

extern float DAT_10e49684;

void FUN_10a48160(float A, float* B, Class_109BBBA0* C, int D, Arg_10A48720 E);

// FUNCTION: 0x10A48720 ?FUN_10a48720@@YAXMPAMMMPAVClass_109BBBA0@@HUArg_10A48720@@@Z
void FUN_10a48720(float A, float* B, float C, float D, Class_109BBBA0* E, int F, Arg_10A48720 G)
{
    if (A == DAT_10eafbdc)
        return;
    if (*B == C)
        return;
    if (D == DAT_10eafbdc)
    {
        FUN_10a48160(C, B, E, F, G);
        return;
    }
    float S = C < *B ? DAT_10e499a4 : DAT_10e49684;
    float V = (A / D) * S + *B;
    if ((S > DAT_10eafbdc && V > C) || (S < DAT_10eafbdc && V < C))
    {
        FUN_10a48160(C, B, E, F, G);
        return;
    }
    FUN_10a48160(V, B, E, F, G);
}

// FUNCTION: 0x10A48A50 ?FUN_10a48a50@@YAXPAUStruct_10A48A50@@PAVcIntArray@@@Z
void FUN_10a48a50(Struct_10A48A50* A, cIntArray* B)
{
    B->Unknown00 = 0;
    for (int i = 0; i < A->Unknown00; i++)
    {
        int Value = A->Unknown08[i]->Unknown04;
        if (Value)
        {
            int Index = B->Unknown00;
            B->SetCount(Index + 1);
            B->Unknown08[Index] = Value;
        }
    }
}

// FUNCTION: 0x10A48AB0 ?FUN_10a48ab0@@YAXPAUStruct_10A48AB0@@PAVcIntArray@@@Z
void FUN_10a48ab0(Struct_10A48AB0* A, cIntArray* B)
{
    B->Unknown00 = 0;
    for (int i = 0; i < A->Unknown00; i++)
    {
        int Value = A->Unknown08[i]->Unknown54;
        if (Value)
        {
            int Index = B->Unknown00;
            B->SetCount(Index + 1);
            B->Unknown08[Index] = Value;
        }
    }
}
