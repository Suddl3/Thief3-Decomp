// Game/Unsorted_10919CB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1091C820.h"
#include "Game/Class_1091CC80.h"
#include "Game/Class_1091DEE0.h"
#include "Game/Class_10919CB0.h"

extern Class_1091DEE0* DAT_10f2c928;

extern float DAT_10e49684;

struct Struct_10919CB0_A
{
    char Unknown00[0x1C];
    int Unknown1C;
};

struct Struct_10919CB0_B
{
    float Unknown00;
    char Unknown04[4];
    float Unknown08;
    char Unknown0C[4];
};

// FUNCTION: 0x10919CB0 ?FUN_10919cb0@Class_10919CB0@@QAEMEE@Z
float Class_10919CB0::FUN_10919cb0(unsigned char A, unsigned char B)
{
    float Result = DAT_10e49684;
    int Index = A - Unknown18;
    if (Unknown2C && Index < Unknown20)
    {
        if (B & 8)
            return (int)((Unknown0C[Index].Unknown08 - Unknown0C[Index].Unknown00) * Unknown04->Unknown1C * Unknown10);
        Result = (Unknown0C[Index].Unknown08 - Unknown0C[Index].Unknown00) * Unknown04->Unknown1C * DAT_10f2c928->Unknown28 * Unknown10;
    }
    return (int)Result;
}

// FUNCTION: 0x1091C820 ?Free@Class_1091C820@@QAEXXZ
void Class_1091C820::Free()
{
    Clear(0x40);
    ::operator delete(Unknown14);
    Unknown04 = 0;
    Unknown0C = 0;
    Unknown14 = 0;
    Unknown00 = 0;
}

// FUNCTION: 0x1091CC80 ?Free@Class_1091CC80@@QAEXXZ
void Class_1091CC80::Free()
{
    FUN_1091c850(0x40);
    ::operator delete(Unknown14);
    Unknown04 = 0;
    Unknown0C = 0;
    Unknown14 = 0;
    Unknown00 = 0;
}
