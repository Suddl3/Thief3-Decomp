// Game/Unsorted_1092F130.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10928760.h"
#include "Game/Class_1092F130.h"
#include "Game/Class_10E49C6C.h"

Class_10905A90_Member* FUN_10905aa0();

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int Count);

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

extern Class_10BFBD70 DAT_10f31b9c;

extern Class_1092F130** DAT_10f31ba4;

// FUNCTION: 0x1092F130 ?FUN_1092f130@Class_1092F130@@QAEXXZ
void Class_1092F130::FUN_1092f130()
{
    for (int i = 0; i < Unknown0C; i++)
        Unknown14[i]->FUN_1092f130();
    FUN_10905aa0()->Virtual8(0, 0);
    int Index = DAT_10f31b9c.Unknown00;
    DAT_10f31b9c.FUN_10bfbd70(DAT_10f31b9c.Unknown00 + 1);
    DAT_10f31ba4[Index] = this;
    FUN_10905aa0()->Virtual9();
}

// FUNCTION: 0x1092F830 ??0Class_10E49C6C@@QAE@XZ
Class_10E49C6C::Class_10E49C6C()
{
}

// FUNCTION: 0x10930630 ??_GClass_10E49C6C@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x1092F830's definition in this unit.
