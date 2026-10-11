// Game/Unsorted_10B9FA50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B9FBE0.h"
#include "Game/Class_10B9FC20.h"
#include "Game/Class_10E8C008.h"

Class_10905A90_Member* GetAllocator();

struct Struct_10BA0080
{
    int Count;
    int Unknown04;
    Class_10E8C008** Items;
};

// FUNCTION: 0x10B9FBE0 ?FUN_10b9fbe0@Class_10B9FBE0@@QAEXXZ
void Class_10B9FBE0::FUN_10b9fbe0()
{
    FUN_10b9f620(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10B9FC20 ?FUN_10b9fc20@Class_10B9FC20@@QAEXXZ
void Class_10B9FC20::FUN_10b9fc20()
{
    FUN_10b9f6d0(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10BA0080 ?FUN_10ba0080@@YAXPAUStruct_10BA0080@@@Z
void FUN_10ba0080(Struct_10BA0080* Array)
{
    for (int i = 0; i < Array->Count; i++)
        delete Array->Items[i];
    Array->Count = 0;
}
