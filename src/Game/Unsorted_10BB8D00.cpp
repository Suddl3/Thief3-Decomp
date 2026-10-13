// Game/Unsorted_10BB8D00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"
#include "Game/cBoneAimController.h"
#include "Game/Class_10BB95C0.h"
#include "Game/Class_10BB9FC0.h"
#include "Game/Class_10BBA080.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10E9925C.h"

struct Struct_10BB8FF0
{
    int Count;
    int Unknown04;
    Class_10E9925C** Items;
};

cBoneAimController* GetBoneAimController();

// FUNCTION: 0x10BB8FF0 ?DeleteItems@@YAXPAUStruct_10BB8FF0@@@Z
void DeleteItems(Struct_10BB8FF0* Array)
{
    for (int i = 0; i < Array->Count; i++)
        delete Array->Items[i];
    Array->Count = 0;
}

// FUNCTION: 0x10BB95C0 ?Contains@Class_10BB95C0@@QAE_NH@Z
bool Class_10BB95C0::Contains(int Value)
{
    return FindIndex(Value) != -1;
}

// FUNCTION: 0x10BB9FC0 ?FUN_10bb9fc0@Class_10BB9FC0@@QAEXXZ
void Class_10BB9FC0::FUN_10bb9fc0()
{
    FUN_10bb9e90();
    if (Unknown284)
        GetBoneAimController()->FUN_10a2c200(Unknown08->FUN_10c7d570(), &Unknown284);
}

// FUNCTION: 0x10BBA080 ?FUN_10bba080@Class_10BBA080@@QAEHPAVClass_1098E330@@@Z
int Class_10BBA080::FUN_10bba080(Class_1098E330* Obj)
{
    Obj->FUN_1098e330(0x48000782, (int*)&Obj);
    if (FUN_10bb8c60() <= 1)
        return ((int)Obj & 1) > 0;
    return ((int)Obj & 2) > 0;
}
