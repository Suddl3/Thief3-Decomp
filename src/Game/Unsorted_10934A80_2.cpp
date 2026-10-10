// Game/Unsorted_10934A80_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109343B0.h"
#include "Game/Class_10934D10.h"
#include "Game/IDirect3DDevice8.h"

class IDirect3DVertexBuffer8;

Class_10905A90_Member* FUN_10905aa0();

// FUNCTION: 0x10934D10 ?FUN_10934d10@Class_10934D10@@QAEJXZ
long Class_10934D10::FUN_10934d10()
{
    FUN_10905aa0()->Virtual8(0, 0);
    long Result = Unknown0C->CreateVertexBuffer(Unknown10, 0x208, 0, 0, &Unknown1C);
    FUN_10905aa0()->Virtual9();
    Unknown20.FUN_109343b0(&Unknown1C);
    return Result;
}
