// Game/Unsorted_10BB0CD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10C3D3B0.h"
#include "Game/Class_10E8C848.h"
#include "Game/Class_10E8C86C.h"
#include "Game/cMemoryStream.h"
#include "Game/Struct_10BB0B90.h"
#include "Game/Class_10BB1020_B.h"
#include "Game/Class_10BAD190.h"
#include "Game/Class_10BB1140_Item.h"
#include "Game/Class_10BB1140_Source.h"
#include "Game/Class_10B9C9F0.h"

int FUN_10bb0c60(int A);

struct Struct_10AA3520
{
    char Unknown00[8];
    int Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

struct Struct_10BB0B90_Unknown118
{
    char Unknown00[8];
    Class_10B9C9F0* Unknown08;
};

Struct_10BB0B90* FUN_10bb0b90(int A);

// FUNCTION: 0x10BB1020 ?FUN_10bb1020@Class_10E8C848@@UAEHHPAVClass_10BB1020_B@@H@Z
int Class_10E8C848::FUN_10bb1020(int A, Class_10BB1020_B* B, int C)
{
    if (B && B->Virtual8())
    {
        Struct_10BB0B90* Owner = FUN_10bb0b90((int)B);
        if (Owner && Owner->Unknown118 && Owner->Unknown118->Unknown08)
        {
            ((Class_10BAD190*)Owner->Unknown118->Unknown08->FUN_10b9c9f0())->FUN_10bad190(DAT_10f35dec->Unknown08, 1, 1);
            return 1;
        }
    }
    return 0;
}

// FUNCTION: 0x10BB1140 ?FUN_10bb1140@Class_10E8C86C@@UAEHHPAVClass_10BB1140_Item@@PAVClass_10BB1140_Source@@@Z
int Class_10E8C86C::FUN_10bb1140(int p1, Class_10BB1140_Item* Item, Class_10BB1140_Source* Source)
{
    if (Item && Item->Virtual8() && Source && Source->Virtual3() >= 1)
    {
        int Obj = FUN_10bb0c60((int)Item);
        if (Obj)
        {
            float Value = Source->Virtual4(0)->Class_10C3D3B0::FUN_10c3d3b0();
            cMemoryStream* Light = (cMemoryStream*)(((Class_10AA82D0*)Obj)->GetLinkedObject() + 0x30);
            Light->cMemoryStream::SetPosition(Value);
            return 1;
        }
    }
    return 0;
}
