// Game/Unsorted_10C31210.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C32330.h"
#include "Game/Class_10C49740.h"

extern float DAT_10eafbdc;

struct Entry_10C32C30;

struct Struct_10C32330
{
    int Unknown00;
    int* Unknown04;
    int* Unknown08;
};

// FUNCTION: 0x10C32330 ?SumValues@Class_10C32330@@QAEMPAUStruct_10C32330@@@Z
float Class_10C32330::SumValues(Struct_10C32330* Arg)
{
    float Sum = 0.0f;
    for (int* P = Arg->Unknown04; P != Arg->Unknown08; P++)
    {
        float Value = 0.0f;
        float Item = !FUN_10c49740(P, (Entry_10C32C30**)&Value) ? DAT_10eafbdc : Value;
        Sum = Item + Sum;
    }
    return Sum;
}
