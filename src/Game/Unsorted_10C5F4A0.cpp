// Game/Unsorted_10C5F4A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A68AE0.h"
#include "Game/Class_10C603C0.h"
#include "Game/Class_Field00.h"

extern float DAT_10e4a718;

class Class_10C5F4A0_Unknown08_Unknown08
{
public:
    char Pad00[0xc];
    float Unknown0C;
    char Pad10[0x8];
};

class Class_10C5F4A0_Unknown08
{
public:
    int Unknown00;
    int Unknown04;
    Class_10C5F4A0_Unknown08_Unknown08* Unknown08;
};

class Class_10C5F4A0_Unknown00
{
public:
    char Pad00[0x8];
    Class_10C5F4A0_Unknown08* Unknown08;
};

class Class_10C5F4A0
{
public:
    float FUN_10c5f4a0(int A);

    Class_10C5F4A0_Unknown00* Unknown00;
};

// FUNCTION: 0x10C5F4A0 ?FUN_10c5f4a0@Class_10C5F4A0@@QAEMH@Z
float Class_10C5F4A0::FUN_10c5f4a0(int A)
{
    float Min = DAT_10e4a718;
    int Count = Unknown00->Unknown08[A].Unknown00;
    Class_10C5F4A0_Unknown08* Entry = &Unknown00->Unknown08[A];
    int Done = 0;
    if (Count >= 4)
    {
        float* V = &Entry->Unknown08[1].Unknown0C;
        int Groups = ((unsigned)(Count - 4) >> 2) + 1;
        Done = Groups * 4;
        do
        {
            if (V[-6] < Min) Min = V[-6];
            if (V[0] < Min) Min = V[0];
            if (V[6] < Min) Min = V[6];
            if (V[12] < Min) Min = V[12];
            V += 24;
        } while (--Groups);
    }
    if (Done < Count)
    {
        float* V = &Entry->Unknown08[Done].Unknown0C;
        int Rest = Count - Done;
        do
        {
            if (*V < Min) Min = *V;
            V += 6;
        } while (--Rest);
    }
    return Min;
}

// FUNCTION: 0x10C603C0 ?FUN_10c603c0@Class_10C603C0@@QAEXXZ
void Class_10C603C0::FUN_10c603c0()
{
    Field00->Field24.CopyFrom();
}
