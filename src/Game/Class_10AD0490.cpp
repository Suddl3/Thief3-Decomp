// Game/Class_10AD0490.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10ACF9A0.h"
#include "Game/Class_10AD0210.h"
#include "Game/Class_10AF4B90.h"
#include "Game/Class_10B82390.h"
#include "Game/Class_10AD01A0.h"
#include "Game/Class_10AD0200.h"
#include "Game/Class_10AD0490.h"
#include "Game/Class_1098E3D0.h"
#include <new>
#include "Game/Class_10B06220.h"
#include "Game/Class_10A73EF0_Object.h"
#include "Game/Class_10A73EF0_Table.h"

class Class_1098E3D0;

// FUNCTION: 0x10AD03F0 ?FUN_10ad03f0@Class_10AD0490@@QAEXPAVClass_1098E3D0@@@Z
void Class_10AD0490::FUN_10ad03f0(Class_1098E3D0* Obj)
{
    Class_10AD0200 Items;
    Class_10B82390* Found = FUN_10acf690((int)Obj);
    if (Found)
        Found->FUN_10b82390(0x8056b, &Items);
    Items.Unknown0C = 0;
    Found = FUN_10acf690((int)Obj);
    if (Found)
        ((Class_10AD0210*)Found)->CreateItem(0x8056b, (int)&Items);
}

// FUNCTION: 0x10AD0490 ?Lock@Class_10AD0490@@QAEXPAVClass_1098E3D0@@@Z
void Class_10AD0490::Lock(Class_1098E3D0* Obj)
{
    int Value = 1;
    Obj->FUN_1098e3d0(0x800182, &Value);
    FUN_10ad03f0(Obj);
}
