// Game/Unsorted_10952210.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10952390.h"
#include "Game/Class_109522D0.h"

struct Struct_10952390_A
{
    char Unknown00[0x4C];
    bool Unknown4C;
};

struct Struct_10952390_B
{
    int Unknown00;
    int Unknown04;
};

// Declarations first.
extern float DAT_10eafbdc;

// FUNCTION: 0x109522D0 ?Advance@Class_109522D0@@QAEXMPAM0@Z
void Class_109522D0::Advance(float A, float* B, float* C)
{
    if (Unknown18 != DAT_10eafbdc)
    {
        float T = A * Unknown18 + Unknown30;
        Unknown30 = T;
        if (T > Unknown28)
            Unknown30 = T - Unknown28 + Unknown20;
        *B = Unknown30;
    }
    else
    {
        float V = Unknown38;
        Unknown30 = V;
        *B = V;
    }
    if (Unknown1C != DAT_10eafbdc)
    {
        float T = A * Unknown1C + Unknown34;
        Unknown34 = T;
        if (T > Unknown2C)
            Unknown34 = T - Unknown2C + Unknown24;
        *C = Unknown34;
    }
    else
    {
        float V = Unknown3C;
        Unknown34 = V;
        *C = V;
    }
}

// FUNCTION: 0x10952390 ?FUN_10952390@Class_10952390@@QAE_NXZ
bool Class_10952390::FUN_10952390()
{
    if (Unknown04)
    {
        if (Unknown04->Unknown04 & 0x400)
            return true;
    }
    return Unknown00->Unknown4C;
}
