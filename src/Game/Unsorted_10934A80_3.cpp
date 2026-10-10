// Game/Unsorted_10934A80_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10934D60.h"
#include "Game/IDirect3DDevice8.h"

class IDirect3DSurface8;

extern IDirect3DDevice8* GDirect3DDevice8;

Class_10905A90_Member* FUN_10905aa0();

// FUNCTION: 0x10934D60 ?FUN_10934d60@Class_10934D60@@QAEPAV1@XZ
Class_10934D60* Class_10934D60::FUN_10934d60()
{
    Unknown00 = 0;
    FUN_10905aa0()->Virtual8(0, 0);
    GDirect3DDevice8->CreateImageSurface(0x80, 0x80, 0x16, &Unknown00);
    FUN_10905aa0()->Virtual9();
    return this;
}
