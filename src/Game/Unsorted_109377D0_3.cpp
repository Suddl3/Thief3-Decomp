// Game/Unsorted_109377D0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first.
#include "Game/IDirect3DDevice8.h"
#include "Game/Class_109373D0.h"

extern IDirect3DDevice8* GDirect3DDevice8;

// FUNCTION: 0x109389B0 ?FUN_109389b0@Class_109373D0@@QAEXXZ
void Class_109373D0::FUN_109389b0()
{
    ResetTextureStages();
    GDirect3DDevice8->SetRenderState(0x34, 0);
    GDirect3DDevice8->SetRenderState(0x1b, 0);
    GDirect3DDevice8->SetRenderState(0xf, 0);
    GDirect3DDevice8->SetRenderState(0x18, 4);
    GDirect3DDevice8->SetRenderState(0xe, 0);
    GDirect3DDevice8->SetRenderState(0x16, 3);
    GDirect3DDevice8->SetRenderState(0x89, 0);
    GDirect3DDevice8->SetRenderState(0xa8, 7);
}
