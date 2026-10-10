// Game/Unsorted_109516E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10939570.h"
#include "Game/Class_10951A40.h"
#include "Game/Struct_One2.h"
#include "Game/Struct_One4.h"
#include "Game/Struct_Pair0.h"
#include "Game/Struct_Zero4.h"
#include "Game/Struct_Zero5.h"
#include "Game/Class_10E4AC6C.h"

extern Class_10939570* DAT_10f323fc;

class Class_10951900
{
public:
    void FUN_10951660();
    void FUN_10951900(int* A, int B);

    char Unknown00[4];
    int Unknown04;
    char Unknown08[0x18];
    void* Unknown20;
    char Unknown24[4];
    int Unknown28;
};

class Class_10951540
{
public:
    bool FUN_10951540(void* A);
};

// FUNCTION: 0x109516E0 ?FUN_109516e0@Class_10951A40@@QAEXXZ
void Class_10951A40::FUN_109516e0()
{
    for (int i = 0; i < Unknown40; i++)
    {
        Class_10951540* Item = Unknown48[i];
        if (Item->FUN_10951540(&Unknown4C))
        {
            delete Item;
            Unknown48[i] = 0;
        }
    }
}

// FUNCTION: 0x10951780 ??0Class_10E4AC6C@@QAE@XZ
Class_10E4AC6C::Class_10E4AC6C() : Unknown04(0)
{
    Unknown0C = 1.0f;
    Unknown10 = 1.0f;
    Unknown14 = 1.0f;
    Unknown18 = 1.0f;
    Unknown2C = 1.0f;
    Unknown30 = 1.0f;
    Unknown34 = 1.0f;
    Unknown38 = 1.0f;
    Unknown1C = 1.0f;
    Unknown28 = 0;
    Unknown3C = 0;
}

// FUNCTION: 0x10951900 ?FUN_10951900@Class_10951900@@QAEXPAHH@Z
void Class_10951900::FUN_10951900(int* A, int B)
{
    FUN_10951660();
    Unknown28 = B;
    if (B)
    {
        Unknown20 = DAT_10f323fc->FUN_1093bd40(A, 0, 0);
        if (!Unknown20)
            Unknown28 = 0;
        else if (Unknown28 == 1)
            Unknown04 |= 0x400;
    }
}

// FUNCTION: 0x10951A60 ??_GClass_10E4AC6C@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10951780's definition in this unit.
