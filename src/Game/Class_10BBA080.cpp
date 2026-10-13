// Game/Class_10BBA080.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBA080.h"
#include "Game/Class_10BC9D40.h"
#include "Game/Class_10BBDC30.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10DBD510.h"
#include "Game/Class_1098E330.h"
#include "Game/cBoneAimController.h"
#include "Game/Class_10BB95C0.h"
#include "Game/Class_10BB9FC0.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10E9925C.h"

class Class_10BE3FF0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
};

float appFrand();

// FUNCTION: 0x10BB8C60 ?FUN_10bb8c60@Class_10BBA080@@QAEEXZ
unsigned char Class_10BBA080::FUN_10bb8c60()
{
    Class_10BE3FF0* Obj = FUN_10bb89d0();
    if (Obj)
    {
        if (Obj->Virtual3() == 2)
            return 1;
        if (Obj->Virtual3() == 3)
            return 2;
        if (Obj->Virtual3() == 4)
            return 3;
        Class_10BC9D40* Current = GetCurrent();
        if (Current && Current->Virtual3() == 0x29)
            return 3;
    }
    return 0;
}

// FUNCTION: 0x10BB8E00 ?RollChance@Class_10BBA080@@QAE_NXZ
bool Class_10BBA080::RollChance()
{
    if (FUN_10bb8c60() <= 1)
    {
        Class_10DBD510* Obj = Unknown08;
        return appFrand() < Obj->FUN_10dbd510()->FUN_10bbdbc0(0x10078e);
    }
    else
    {
        Class_10DBD510* Obj = Unknown08;
        return appFrand() < Obj->FUN_10dbd510()->FUN_10bbdbc0(0x10078f);
    }
}

// FUNCTION: 0x10BB8E70 ?GetRandomInRange@Class_10BBA080@@QAEMXZ
float Class_10BBA080::GetRandomInRange()
{
    float Min;
    float Max;
    if (FUN_10bb8c60() <= 1)
    {
        Min = Unknown08->FUN_10dbd510()->FUN_10bbdbc0(0x100786);
        Max = Unknown08->FUN_10dbd510()->FUN_10bbdbc0(0x100787);
    }
    else
    {
        Min = Unknown08->FUN_10dbd510()->FUN_10bbdbc0(0x100789);
        Max = Unknown08->FUN_10dbd510()->FUN_10bbdbc0(0x10078a);
    }
    return Min + (Max - Min) * appFrand();
}

// FUNCTION: 0x10BBA080 ?FUN_10bba080@Class_10BBA080@@QAEHPAVClass_1098E330@@@Z
int Class_10BBA080::FUN_10bba080(Class_1098E330* Obj)
{
    Obj->FUN_1098e330(0x48000782, (int*)&Obj);
    if (FUN_10bb8c60() <= 1)
        return ((int)Obj & 1) > 0;
    return ((int)Obj & 2) > 0;
}
