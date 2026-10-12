// Game/Unsorted_10920970_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4AA80.h"
#include "Game/Class_10920A90.h"
#include "Game/Class_10A0C5F0.h"

struct Struct_109236B0
{
    char Unknown00[0xC];
    int Unknown0C;
    char Unknown10[4];
    Struct_109236B0** Unknown14;
};

// FUNCTION: 0x109236B0 ?VisitTree@Class_10920A90@@QAEXPAUStruct_109236B0@@HH@Z
void Class_10920A90::VisitTree(Struct_109236B0* A, int B, int C)
{
    FUN_10920fa0(A, B, C);
    for (int i = 0; i < A->Unknown0C; i++)
        VisitTree(A->Unknown14[i], B, C);
}
