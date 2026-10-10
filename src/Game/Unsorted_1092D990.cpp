// Game/Unsorted_1092D990.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1092D990.h"
#include "Game/IDirect3DDevice8.h"

class IDirect3DTexture8;

extern IDirect3DDevice8* GDirect3DDevice8;

Class_10905A90_Member* FUN_10905aa0();

// FUNCTION: 0x1092D990 ?FUN_1092d990@Class_1092D990@@QAEXXZ
void Class_1092D990::FUN_1092d990()
{
    FUN_10905aa0()->Virtual8(0, 0);
    GDirect3DDevice8->CreateTexture(0x100, 0x80, 1, 1, 0x15, 0, &Unknown00);
    GDirect3DDevice8->CreateTexture(0x100, 0x80, 1, 1, 0x15, 0, &Unknown04);
}
