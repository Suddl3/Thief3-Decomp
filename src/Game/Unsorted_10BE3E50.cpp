// Game/Unsorted_10BE3E50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10BB85E0.h"
#include "Game/Class_10BE3FF0.h"
#include "Game/Class_10BFB910.h"
#include "Game/Class_10BFD210.h"
#include "Game/Class_10E90D70.h"
#include "Game/Class_10FF667C.h"

class Class_10BE3FF0_Field04
{
public:
    char Unknown00[0x30];
    Class_10BFD210 Unknown30;
};

double GetTimeSeconds();

extern float DAT_10e49684;

class Class_10E95F40 : public Class_10E90D70
{
public:
    ~Class_10E95F40();
};

void FUN_10c07fe0();

void FUN_10c25610();

class Class_10BF7F90 : public Class_10AA82D0
{
};

class Class_10BC4160
{
public:
    virtual void Virtual0();

    Class_10BF7F90* FUN_10bc4160();
};

class Class_10E8BE68 : public Class_10BC4160
{
public:
    void PopState();
};

extern Class_10FF667C* DAT_10ff667c;

class State_Fetch : public Class_10E8BE68
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
    virtual void FUN_10be3e50();

    bool FUN_10be3b30();

    Class_10BB85E0* Unknown04;
};

// FUNCTION: 0x10BE3E50 ?FUN_10be3e50@State_Fetch@@UAEXXZ
void State_Fetch::FUN_10be3e50()
{
    if (!(FUN_10bc4160() && FUN_10bc4160()->FUN_10aa82d0() == 0) && !FUN_10be3b30())
        return;
    DAT_10ff667c->Unknown28->FUN_10bfb910(4);
    Unknown04->FUN_10bb8ee0(0);
    PopState();
}

// FUNCTION: 0x10BE3F90 ??1Class_10E95F40@@QAE@XZ
Class_10E95F40::~Class_10E95F40()
{
    FUN_10c07fe0();
    FUN_10c25610();
}

// FUNCTION: 0x10BE3FF0 ?FUN_10be3ff0@Class_10BE3FF0@@QAEXXZ
void Class_10BE3FF0::FUN_10be3ff0()
{
    Unknown04->Unknown30.FUN_10bfd210();
    Unknown0C = GetTimeSeconds() - (Virtual65() + DAT_10e49684);
}
