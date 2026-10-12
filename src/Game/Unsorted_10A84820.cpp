// Game/Unsorted_10A84820.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109022E0.h"
#include "Game/Class_10E6C390.h"

extern const char DAT_10e47660[];

enum EFindName
{
    FNAME_Find = 0,
    FNAME_Add = 1
};

class FName
{
public:
    FName(const char* Name, EFindName FindType);

    unsigned long Value;
};

class Class_10A84CE0
{
public:
    void FUN_10a84ce0(const Class_109022E0& Name);

    char Unknown00[4];
    FName Unknown04;
};

class Class_10E6C390;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(Class_10E6C390* Obj, int A, int B, int C);
};

extern Class_10F46DA0* DAT_10f46da0;

class cFlagElementLogic
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual bool HasFlagName(const Class_109022E0& Name);

    FName m_FlagName;
};

// FUNCTION: 0x10A84CB0 ?HasFlagName@cFlagElementLogic@@UAE_NABVClass_109022E0@@@Z
bool cFlagElementLogic::HasFlagName(const Class_109022E0& Name)
{
    const char* Text = Name.Unknown00 ? Name.Unknown00 : DAT_10e47660;
    return m_FlagName.Value == FName(Text, FNAME_Add).Value;
}

// FUNCTION: 0x10A84CE0 ?FUN_10a84ce0@Class_10A84CE0@@QAEXABVClass_109022E0@@@Z
void Class_10A84CE0::FUN_10a84ce0(const Class_109022E0& Name)
{
    const char* Text = Name.Unknown00 ? Name.Unknown00 : DAT_10e47660;
    Unknown04 = FName(Text, FNAME_Add);
}

// FUNCTION: 0x10A84D70 ?Reset@Class_10E6C390@@QAEXXZ
void Class_10E6C390::Reset()
{
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown14 = false;
    Unknown15 = false;
    Unknown10 = 0;
    Unknown2C = 0;
    Unknown30 = -1;
    DAT_10f46da0->Virtual3(this, 0x26, -1, -1);
}
