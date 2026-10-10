// Game/Unsorted_1095A510.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1095A660.h"
#include "Game/IDirect3DDevice8.h"
#include "Game/Struct_10919190.h"

extern IDirect3DDevice8* GDirect3DDevice8;

void FUN_10919190(Struct_10919190* Matrix);

void FUN_109192e0(int A, int B, int C);

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
