// Game/Class_10B152C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B152C0.h"
#include "Game/cIntArray.h"
#include "Game/Class_10E7A9C0.h"

class Class_10E7AAE8;

class Class_10B255F0;

class Class_10B1B8A0;

class cMenuInput;

Class_10E7A9C0* FUN_10dd85a0();

Class_10E7AAE8* FUN_10b26cb0();

Class_10B255F0* GetSelection();

Class_10B1B8A0* FUN_10b1b600();

cMenuInput* GetMenuInput();

// FUNCTION: 0x10B152C0 ?AddToLists@Class_10B152C0@@QAEXHPAVClass_10E7A9C0@@@Z
void Class_10B152C0::AddToLists(int Mask, Class_10E7A9C0* Obj)
{
    unsigned int Bit = 1;
    for (int i = 0; i < 32; i++, Bit <<= 1)
    {
        if (Mask & Bit)
        {
            int Index = BitLists[i].Count;
            BitLists[i].SetCount(Index + 1);
            ((Class_10E7A9C0**)BitLists[i].Data)[Index] = Obj;
        }
    }
}

// FUNCTION: 0x10B15300 ?FUN_10b15300@Class_10B152C0@@QAEXH@Z
void Class_10B152C0::FUN_10b15300(int A)
{
    AddToLists(0x47, FUN_10dd85a0());
    AddToLists(0x3e, (Class_10E7A9C0*)FUN_10b26cb0());
    AddToLists(4, (Class_10E7A9C0*)GetSelection());
    AddToLists(0x80, (Class_10E7A9C0*)FUN_10b1b600());
    AddToLists(0x80, (Class_10E7A9C0*)GetMenuInput());
    if (Unknown34)
        Unknown34->Register(this);
}
