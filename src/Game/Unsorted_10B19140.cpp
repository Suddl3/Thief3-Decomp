// Game/Unsorted_10B19140.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <stdlib.h>
#include "Game/Class_10B193E0.h"

struct Struct_10B193E0
{
    char Unknown00[0x3C];
    int Unknown3C;
    char Unknown40[0x3C4];
    int Unknown404;
    char Unknown408[8];
    float Unknown410;
};

int FUN_10b1dad0(int Value);

// FUNCTION: 0x10B193E0 ?FUN_10b193e0@Class_10B193E0@@QAEXPAUStruct_10B193E0@@@Z
void Class_10B193E0::FUN_10b193e0(Struct_10B193E0* Object)
{
    int Key[3];
    FUN_10b19260(Object, 1.0f);
    FUN_10b19140(Key, Object);
    int Delta = FUN_10b1dad0(Object->Unknown3C - Object->Unknown404);
    if (Key[1] != -1 && abs(Delta) > Key[1])
        Object->Unknown404 = (int)(Object->Unknown404 - Object->Unknown410);
    else
        Unknown30 = 2;
}
