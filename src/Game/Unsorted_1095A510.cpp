// Game/Unsorted_1095A510.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1095A660.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Struct_10919190.h"
#include "Game/Class_1095A760.h"
#include "Game/Class_10905A90_Member.h"

extern IDirect3DDevice8* GDirect3DDevice8;

void FUN_10919190(Struct_10919190* Matrix);

void FUN_109192e0(int A, int B, int C);

Class_10905A90_Member* FUN_10905aa0();

struct Struct_1095A760_Element
{
    char Unknown00[0x5C];
};

// FUNCTION: 0x1095A5A0 ?FUN_1095a5a0@Class_1095A760@@QAEXH@Z
void Class_1095A760::FUN_1095a5a0(int NewCount)
{
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Struct_1095A760_Element);
    FUN_10905aa0()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Unknown08 = FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(Struct_1095A760_Element), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Struct_1095A760_Element);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(Struct_1095A760_Element), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Struct_1095A760_Element);
        }
    }
    FUN_10905aa0()->Virtual9();
    Unknown00 = NewCount;
}

// FUNCTION: 0x1095A660 ?FUN_1095a660@Class_1095A660@@QAEXXZ
void Class_1095A660::FUN_1095a660()
{
    Struct_10919190 Identity =
    {
        1.0f, 0.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f, 0.0f,
        0.0f, 0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 0.0f, 1.0f
    };
    FUN_10919190(&Identity);
    FUN_109192e0(Unknown04, Unknown00, 0);
    GDirect3DDevice8->DrawPrimitive(D3DPT_TRIANGLEFAN, 0, Unknown14 - 2);
}
