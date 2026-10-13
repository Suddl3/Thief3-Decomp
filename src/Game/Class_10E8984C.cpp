// Game/Class_10E8984C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B90750_Arg1.h"
#include "Game/Class_10B90750_Item.h"

extern void* DAT_10f05c30[];

struct Struct_10B90750_Vec;

class Class_10E8984C
{
public:
    void FUN_10b91f10(int A, char* B, void* C, int D, int E);
    void FUN_10b92330(Class_10B90750_Arg1* Arg, int B, int C);
};

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
