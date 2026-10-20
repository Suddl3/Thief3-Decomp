// Game/Class_10E8984C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B90750_Arg1.h"
#include "Game/Class_10B90750_Item.h"
#include "Game/Class_10E8984C.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E88D60.h"
#include "Game/Class_10E88D64.h"
#include "Game/Class_10E89818.h"
#include "Game/Class_10E89824.h"

extern void* DAT_10f05c30[];

struct Struct_10B90750_Vec;

extern void* DAT_10e8984c[];

// FUNCTION: 0x10B90320 ??0Class_10E8984C@@QAE@XZ
Class_10E8984C::Class_10E8984C()
{
    *(void**)this = DAT_10e8984c;
    *(int*)&m_Flags = 0;
}

// FUNCTION: 0x10B92330 ?FUN_10b92330@Class_10E8984C@@QAEXPAVClass_10B90750_Arg1@@HH@Z
void Class_10E8984C::FUN_10b92330(Class_10B90750_Arg1* Arg, int B, int C)
{
    char Buffer[0x30];
    int Count = Arg->Unknown30;
    for (int i = 0; i < Count; i++)
    {
        Class_10B90750_Item* Item = Arg->FUN_10d9af30(i);
        if (Item && Item->Unknown08 == 3)
        {
            Item->FUN_10da0840(Buffer);
            if (Item->Unknown14)
                FUN_10b91f10(Item->Unknown14, Buffer, DAT_10f05c30, B, C);
        }
    }
}
