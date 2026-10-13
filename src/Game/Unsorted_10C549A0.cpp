// Game/Unsorted_10C549A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AFCF40.h"
#include "Game/Class_10C55800.h"
#include "Game/SoundSimulator.h"
#include "Game/TimeManager.h"
#include "Game/Class_10C55090.h"

class Class_10C549E0_Object
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual int Virtual15(int Time);
};

struct Struct_10C549E0
{
    char Unknown00[8];
    Class_10C549E0_Object* Unknown08;
};

// FUNCTION: 0x10C549E0 ?CompareByTime@@YAHPAPAUStruct_10C549E0@@0@Z
int CompareByTime(Struct_10C549E0** A, Struct_10C549E0** B)
{
    Struct_10C549E0* ItemA = *A;
    Struct_10C549E0* ItemB = *B;
    int Time = TimeManager::Instance()->FUN_10afcf40();
    return ItemB->Unknown08->Virtual15(Time) - ItemA->Unknown08->Virtual15(Time);
}
