// Game/Class_10A4C5F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A4C5F0.h"
#include "Game/Class_10F46DA0.h"
#include "Game/Class_10F3A3D8.h"
#include "Game/Class_10AD0490.h"

extern Class_10F46DA0* DAT_10f46da0;

extern Class_10F3A3D8* DAT_10f3a3d8;

struct Struct_10ACB200_B
{
    char Unknown00[4];
    int Unknown04;
};

struct Struct_10ACB200_C
{
    char Unknown00[4];
    int* Unknown04;
};

// FUNCTION: 0x10ACB200 ?FUN_10acb200@Class_10A4C5F0@@QAEXHHH@Z
void Class_10A4C5F0::FUN_10acb200(int A, int B, int C)
{
    int* Ptr = ((Struct_10ACB200_C*)C)->Unknown04;
    if (((Struct_10ACB200_B*)B)->Unknown04 == 0x80056a)
    {
        if (Ptr && *Ptr)
            DAT_10f46da0->Virtual1((Class_10E8C35C_Secondary*)this, 0x10, (Struct_10C14320*)A, -1);
        else
            DAT_10f46da0->Virtual3((Class_10E5D650*)this, 0x10, A, -1);
        return;
    }
    if (((Struct_10ACB200_B*)B)->Unknown04 == 0x800182)
    {
        if (Ptr && *Ptr)
            ((Class_10AD0490*)DAT_10f3a3d8->UnknownFC)->FUN_10ad03f0((Class_1098E3D0*)A);
    }
}

// FUNCTION: 0x10ACB2E0 ?Virtual0@Class_10A4C5F0@@UAEXHHHH@Z
void Class_10A4C5F0::Virtual0(int Msg, int A, int B, int C)
{
    switch (Msg)
    {
    case 1:
        FUN_10acb200(A, B, C);
        break;
    case 0x10:
        FUN_10acb280(A, B, C);
        break;
    }
}
