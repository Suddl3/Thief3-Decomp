// Game/Unsorted_10C08F00_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E97BEC.h"
#include "Game/cAIManager.h"
#include "Game/Struct_10C09A10.h"
#include "Game/Class_10BAF8E0.h"

Struct_10C09A10* FUN_10b8b660(int A);

// FUNCTION: 0x10C09A10 ?FUN_10c09a10@@YG_NH@Z
bool __stdcall FUN_10c09a10(int A)
{
    Struct_10C09A10* Obj = FUN_10b8b660(A);
    if (Obj == 0)
        return true;
    return Obj->Unknown0C == 0;
}

// FUNCTION: 0x10C0AD70 ??0Class_10E97BEC@@QAE@XZ
Class_10E97BEC::Class_10E97BEC()
{
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
}

// FUNCTION: 0x10C0AE90 ??_GClass_10E97BEC@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10C0AD70's definition in this unit.

// FUNCTION: 0x10C0B040 ?FUN_10c0b040@cAIManager@@UAE_NXZ
bool cAIManager::FUN_10c0b040()
{
    return Unknown08 < 8;
}

// FUNCTION: 0x10C0BDC0 ?FUN_10c0bdc0@@YGXHPAVClass_10BAF8E0@@@Z
void __stdcall FUN_10c0bdc0(int p1, Class_10BAF8E0* p2)
{
    p2->FUN_10baf8e0(p1);
}
