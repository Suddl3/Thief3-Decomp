// Game/Unsorted_1091E420.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <math.h>
#include "Game/Class_1091ED80.h"
#include "Game/IDirect3DDevice8.h"

extern void* DAT_10e49a0c[];

class Class_10E49A0C {
    void* Unknown00;
public:
    void FUN_1091f350();
};

class IDirect3DBaseTexture8;

extern IDirect3DDevice8* GDirect3DDevice8;

class Class_10936AC0
{
public:
    void FUN_1091ef90();

    char Unknown00[0x1C];
    IDirect3DBaseTexture8* Unknown1C[4];
};

extern float DAT_10e49684;

// FUNCTION: 0x1091ED80 ?FUN_1091ed80@Class_1091ED80@@QAEMXZ
float Class_1091ED80::FUN_1091ed80()
{
    float Length = sqrtf(Unknown00 * Unknown00 + Unknown04 * Unknown04 + Unknown08 * Unknown08);
    if (Length < 0.0001f)
        return Length;
    float Scale = DAT_10e49684 / Length;
    Unknown00 *= Scale;
    Unknown04 *= Scale;
    Unknown08 *= Scale;
    return Length;
}

// FUNCTION: 0x1091EF40 ?FUN_1091ef40@@YGHPAM0@Z
int __stdcall FUN_1091ef40(float* A, float* B)
{
    float Distance = A[0] * B[0] + A[1] * B[1] + A[2] * B[2] + B[3];
    if (Distance < -0.001f)
        return 1;
    if (Distance > 0.001f)
        return 0;
    return 2;
}

// FUNCTION: 0x1091EF90 ?FUN_1091ef90@Class_10936AC0@@QAEXXZ
void Class_10936AC0::FUN_1091ef90()
{
    for (int i = 0; i < 4; i++)
    {
        Unknown1C[i] = 0;
        if (GDirect3DDevice8)
            GDirect3DDevice8->SetTexture(i, 0);
    }
}

// FUNCTION: 0x1091F350 ?FUN_1091f350@Class_10E49A0C@@QAEXXZ
void Class_10E49A0C::FUN_1091f350()
{
    Unknown00 = (void*)DAT_10e49a0c;
}
