// Game/Unsorted_10936A60_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109367A0.h"
#include "Game/IDirect3DDevice8.h"

extern IDirect3DDevice8* GDirect3DDevice8;

// FUNCTION: 0x10936A60 ?Reset@Class_109367A0@@QAEXXZ
void Class_109367A0::Reset()
{
    float* Value = &Unknown2c[0][0];
    for (int i = 0; i < 96; i++)
    {
        Value[0] = -100.0f;
        Value[1] = -100.0f;
        Value[2] = -100.0f;
        Value[3] = -100.0f;
        Value += 4;
    }
    FUN_109367a0();
    if (GDirect3DDevice8)
    {
        GDirect3DDevice8->SetVertexShader(2);
        GDirect3DDevice8->SetPixelShader(0);
    }
    Unknown6ac = -1;
    Unknown6b0 = -1;
}
