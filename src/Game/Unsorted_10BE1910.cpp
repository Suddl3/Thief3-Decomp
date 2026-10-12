// Game/Unsorted_10BE1910.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cBoneAimController.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10BE1910.h"
#include "Game/Class_10BFB8D0.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10DBD510.h"
#include "Game/Class_10E95780_Unknown04.h"

extern const char DAT_10e5052c[];

enum EFindName
{
    FNAME_Find = 0,
    FNAME_Add = 1
};

class FName
{
public:
    FName(const char* Name, EFindName FindType = FNAME_Add);

    unsigned long Value;
};

cBoneAimController* GetBoneAimController();

class Class_10FF667C
{
public:
    char Unknown00[0x28];
    Class_10BFB8D0* Unknown28;
};

extern Class_10FF667C* DAT_10ff667c;

class Class_10E95780
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
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void FUN_10be1970();

    Class_10E95780_Unknown04* Unknown04;
};

float appFrand();

struct Struct_10BE1910
{
    char Unknown00[8];
    Class_10DBD510* Unknown08;
};

// FUNCTION: 0x10BE1910 ?FUN_10be1910@Class_10BE1910@@QAEXXZ
void Class_10BE1910::FUN_10be1910()
{
    float Min = Unknown04->Unknown08->FUN_10dbd510(0x1006dd)->GetFloat();
    float Max = Unknown04->Unknown08->FUN_10dbd510(0x1006de)->GetFloat();
    Unknown4C = Min + (Max - Min) * appFrand();
}

// FUNCTION: 0x10BE1970 ?FUN_10be1970@Class_10E95780@@UAEXXZ
void Class_10E95780::FUN_10be1970()
{
    FName Name(DAT_10e5052c, FNAME_Add);
    Class_10C7D570* Item = Unknown04->Unknown08;
    GetBoneAimController()->FUN_10a2c2a0(Item->FUN_10c7d570(), (int*)&Name);
    DAT_10ff667c->Unknown28->FUN_10bfb8d0(3);
}
