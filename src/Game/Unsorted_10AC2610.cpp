// Game/Unsorted_10AC2610.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AC2E40.h"
#include "Game/GarrettOnCamera.h"
#include "Game/Options.h"
#include "Game/cIntArray.h"
#include "Game/Class_10E6F61C.h"
#include "Engine/EngineClasses.h"

class UClient
{
public:
    char Unknown00[0x68];
    float Unknown68;
    float Unknown6C;
    float Unknown70;
};

extern UEngine* GEngine;

Options* GetOptions();

class cT3Camera
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
    virtual float FUN_10ac2cc0();
};

class Class_1098E330
{
public:
    void FUN_1098e330(int Id, int* Out);
};

struct Struct_10AA3520
{
    char Unknown00[8];
    Class_1098E330* Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10AC2610 ?FUN_10ac2610@GarrettOnCamera@@UAEHM@Z
int GarrettOnCamera::FUN_10ac2610(float Value)
{
    if (Value < 0.33f)
        return 1;
    return 0;
}

// FUNCTION: 0x10AC2CC0 ?FUN_10ac2cc0@cT3Camera@@UAEMXZ
float cT3Camera::FUN_10ac2cc0()
{
    float Saved70 = GEngine->Client->Unknown70;
    float Saved68 = GEngine->Client->Unknown68;
    float Saved6C = GEngine->Client->Unknown6C;
    GetOptions()->FUN_10ab5c60(8);
    float Result = GEngine->Client->Unknown70;
    GEngine->Client->Unknown70 = Saved70;
    GEngine->Client->Unknown68 = Saved68;
    GEngine->Client->Unknown6C = Saved6C;
    return Result;
}

// FUNCTION: 0x10AC2E40 ?GetFraction@Class_10AC2E40@@QAEMXZ
float Class_10AC2E40::GetFraction()
{
    float Current = m_Current;
    float Max = 75.0f;
    if (DAT_10f35dec->Unknown08)
        DAT_10f35dec->Unknown08->FUN_1098e330(0x100534, (int*)&Max);
    return Current / Max;
}

// FUNCTION: 0x10AC39B0 ?HandleMessage@Class_10E6F61C@@UAEXHHHH@Z
void Class_10E6F61C::HandleMessage(int p1, int p2, int p3, int p4)
{
    if (p1 == 0x5a)
        Unknown558.SetCount(0);
}
