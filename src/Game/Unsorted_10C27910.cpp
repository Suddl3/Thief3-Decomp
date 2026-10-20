// Game/Unsorted_10C27910.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C27CB0.h"
#include "Game/Struct_10C27CB0.h"
#include "Game/Class_10D38640.h"

struct Struct_10C05610;

void ExpandBoundsList(Struct_10C05610* A, Struct_10C27CB0* B, Struct_10C27CB0* C, bool* D);

struct Struct_10D38640;

float FUN_10c05810(Struct_10D38640* A, int B);

float FUN_10c057a0(Struct_10D38640* A, int B);

class Class_10C27B80_Param1
{
public:
    int Unknown00;
    char Unknown04[4];
    Class_10D38640** Unknown08;
};

// FUNCTION: 0x10C27B80 ?FUN_10c27b80@@YAXPAVClass_10C27B80_Param1@@PAM1@Z
void FUN_10c27b80(Class_10C27B80_Param1* A, float* Min, float* Max)
{
    for (int i = 0; i < A->Unknown00; i++)
    {
        Struct_10D38640* Item = A->Unknown08[i]->FUN_10d38640();
        float Min0 = FUN_10c05810(Item, 0);
        if (i == 0 || Min0 < Min[0])
            Min[0] = Min0;

        Item = A->Unknown08[i]->FUN_10d38640();
        float Min1 = FUN_10c05810(Item, 1);
        if (i == 0 || Min1 < Min[1])
            Min[1] = Min1;

        Item = A->Unknown08[i]->FUN_10d38640();
        float Min2 = FUN_10c05810(Item, 2);
        if (i == 0 || Min2 < Min[2])
            Min[2] = Min2;

        Item = A->Unknown08[i]->FUN_10d38640();
        float Max0 = FUN_10c057a0(Item, 0);
        if (i == 0 || Max0 > Max[0])
            Max[0] = Max0;

        Item = A->Unknown08[i]->FUN_10d38640();
        float Max1 = FUN_10c057a0(Item, 1);
        if (i == 0 || Max1 > Max[1])
            Max[1] = Max1;

        Item = A->Unknown08[i]->FUN_10d38640();
        float Max2 = FUN_10c057a0(Item, 2);
        if (i == 0 || Max2 > Max[2])
            Max[2] = Max2;
    }
}

// FUNCTION: 0x10C27CB0 ?FUN_10c27cb0@Class_10C27CB0@@QAEXPAUStruct_10C05610@@HHHHHH@Z
void Class_10C27CB0::FUN_10c27cb0(Struct_10C05610* A, int B, int C, int D, int E, int F, int G)
{
    bool Flag = false;
    Struct_10C27CB0 First;
    Struct_10C27CB0 Second;
    ExpandBoundsList(A, &First, &Second, &Flag);
    FUN_10c27a20(First, Second, B, C, D, E, F, G);
}
