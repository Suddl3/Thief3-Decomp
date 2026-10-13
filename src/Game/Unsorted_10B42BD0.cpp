// Game/Unsorted_10B42BD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B435B0.h"
#include "Game/Class_10ACEE90.h"
#include "Game/Class_10B16930.h"
#include "Game/Class_1092D420.h"

class Class_10B79140
{
public:
    void FUN_10b79140();
};

Class_10ACEE90* FUN_10acee60();


extern Class_10B435B0* DAT_10ff6530;

void* GetWindowManager();

extern Class_1092D420* DAT_10f31b88;

class Class_10B42BD0_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
};

class Class_10B42BD0
{
public:
    char Unknown00[0x120];
    Class_10B42BD0_Member* Unknown120;
    char Unknown124[0xC];
    bool Unknown130;
};

// FUNCTION: 0x10B42BD0 ?FUN_10b42bd0@@YAXPAVClass_10B42BD0@@@Z
void FUN_10b42bd0(Class_10B42BD0* P)
{
    ((Class_10B16930*)GetWindowManager())->FUN_10b16ef0(0);
    P->Unknown120->Virtual3();
    if (P->Unknown130)
        DAT_10f31b88->FUN_1092d350(-1, -1);
}

// FUNCTION: 0x10B43360 ?FUN_10b43360@@YAXH@Z
void FUN_10b43360(int A)
{
    if (A == 1)
    {
        Class_10B435B0* Manager = DAT_10ff6530;
        FUN_10acee60()->FUN_10acf0a0();
        Manager->Virtual41()->FUN_10b79140();
    }
    else
        DAT_10ff6530->Virtual123();
}
