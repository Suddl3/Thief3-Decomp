// Game/Unsorted_10938F10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4A538.h"
#include "Game/IDirect3DDevice8.h"

extern IDirect3DDevice8* GDirect3DDevice8;

void __stdcall FUN_10938f10(int Mode);

struct Struct_10938F80
{
    int Unknown00;
    char Unknown04;
    bool Unknown05;
    bool Unknown06;
    char Unknown07;
    int Unknown08;
};

extern Class_10E4A538* DAT_10f2c8e4;

void FUN_10938230();

void FUN_10938330();

void FUN_10938520();

void FUN_109387c0();

void FUN_109388c0();

void FUN_10938a50();

// FUNCTION: 0x10938F10 ?FUN_10938f10@@YGXH@Z
void __stdcall FUN_10938f10(int A)
{
    if (DAT_10f2c8e4)
        DAT_10f2c8e4->Unknown2FC = 0;
    switch (A)
    {
    case 1:
        FUN_10938230();
        return;
    case 2:
        FUN_10938330();
        return;
    case 3:
        FUN_10938520();
        return;
    case 4:
        FUN_109387c0();
        return;
    case 5:
        FUN_109388c0();
        return;
    case 6:
        FUN_10938a50();
    }
}

// FUNCTION: 0x10938F80 ?FUN_10938f80@@YGXPAUStruct_10938F80@@@Z
void __stdcall FUN_10938f80(Struct_10938F80* P)
{
    FUN_10938f10(P->Unknown00);
    GDirect3DDevice8->SetRenderState(7, P->Unknown05);
    if (P->Unknown05)
    {
        GDirect3DDevice8->SetRenderState(14, P->Unknown06);
        GDirect3DDevice8->SetRenderState(23, P->Unknown08);
    }
}
