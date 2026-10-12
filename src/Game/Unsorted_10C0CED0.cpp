// Game/Unsorted_10C0CED0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C0EE90.h"
#include "Game/Class_10E98530.h"
#include "Game/Struct_10C0EE30.h"
#include "Game/Class_10E8C4A4.h"
#include "Game/cIntArray.h"
#include "Game/cContextVolumeList.h"
#include "Game/Class_10E97CC0.h"

extern const char DAT_10e47600[];

extern int DAT_10ff6608;

int FUN_10b953b0(const char* Name);

void FUN_10b969a0();

class Class_10E8C378
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
    virtual int GetAISensoryModelClass();
};

extern int DAT_10ff6610;

int FUN_10b95550(const char* Name);

void FUN_10b96bc0();

class Class_10E8C42C
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
    virtual int GetAIMovementModelClass();
};

extern int DAT_10ff660c;

int FUN_10b95480(const char* Name);

void FUN_10b96ab0();

class Class_10E8C3B4
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
    virtual int GetAIBehaviorModelClass();
};

extern int DAT_10ff6614;

int FUN_10b95620(const char* Name);

void FUN_10b96cd0();

class Class_10E8C3F0
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
    virtual int GetAICombatModelClass();
};

extern int DAT_10ff6618;

int FUN_10b956f0(const char* Name);

void FUN_10b96de0();

class Class_10E8C468
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
    virtual int GetAIFactionModelClass();
};

extern void* DAT_10e984bc[];

class Class_10E984BC {
public:
    Class_10E984BC();

    void** Unknown00;
    int m_Elements;
};

extern void* DAT_10e984f4[];

class Class_10E984F4
{
public:
    void* Unknown00;
    int m_Elements;
    Class_10E984F4* Init();
};

class cContextVolumeList;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(cContextVolumeList* Obj);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10C0E510 ??1cContextVolumeList@@UAE@XZ
cContextVolumeList::~cContextVolumeList()
{
    DAT_10f46da0->Virtual2(this);
}

// FUNCTION: 0x10C0EE30 ?HandleMessage@Class_10E97CC0@@UAEXHHPAUStruct_10C0EE30@@H@Z
void Class_10E97CC0::HandleMessage(int A, int B, Struct_10C0EE30* C, int D)
{
    if (A == 0x5A && C && C->Unknown08 == 0)
        FUN_10c0eb00();
}

// FUNCTION: 0x10C0EE90 ?Init@Class_10C0EE90@@QAEPAV1@XZ
Class_10C0EE90* Class_10C0EE90::Init()
{
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown10 = 1.0f;
    return this;
}

// FUNCTION: 0x10C12880 ?GetAISensoryModelClass@Class_10E8C378@@UAEHXZ
int Class_10E8C378::GetAISensoryModelClass()
{
    if (DAT_10ff6608 == 0)
    {
        DAT_10ff6608 = FUN_10b953b0(DAT_10e47600);
        FUN_10b969a0();
    }
    return DAT_10ff6608;
}

// FUNCTION: 0x10C128B0 ?GetAIMovementModelClass@Class_10E8C42C@@UAEHXZ
int Class_10E8C42C::GetAIMovementModelClass()
{
    if (DAT_10ff6610 == 0)
    {
        DAT_10ff6610 = FUN_10b95550(DAT_10e47600);
        FUN_10b96bc0();
    }
    return DAT_10ff6610;
}

// FUNCTION: 0x10C128E0 ?GetAIBehaviorModelClass@Class_10E8C3B4@@UAEHXZ
int Class_10E8C3B4::GetAIBehaviorModelClass()
{
    if (DAT_10ff660c == 0)
    {
        DAT_10ff660c = FUN_10b95480(DAT_10e47600);
        FUN_10b96ab0();
    }
    return DAT_10ff660c;
}

// FUNCTION: 0x10C12910 ?GetAICombatModelClass@Class_10E8C3F0@@UAEHXZ
int Class_10E8C3F0::GetAICombatModelClass()
{
    if (DAT_10ff6614 == 0)
    {
        DAT_10ff6614 = FUN_10b95620(DAT_10e47600);
        FUN_10b96cd0();
    }
    return DAT_10ff6614;
}

// FUNCTION: 0x10C12940 ?GetAIFactionModelClass@Class_10E8C468@@UAEHXZ
int Class_10E8C468::GetAIFactionModelClass()
{
    if (DAT_10ff6618 == 0)
    {
        DAT_10ff6618 = FUN_10b956f0(DAT_10e47600);
        FUN_10b96de0();
    }
    return DAT_10ff6618;
}

// FUNCTION: 0x10C129B0 ?FUN_10c129b0@Class_10E8C4A4@@UAE_NXZ
bool Class_10E8C4A4::FUN_10c129b0()
{
    return Unknown08 != 0;
}

// FUNCTION: 0x10C129F0 ??0Class_10E984BC@@QAE@XZ
Class_10E984BC::Class_10E984BC()
{
    Unknown00 = DAT_10e984bc;
    m_Elements = 0;
}

// FUNCTION: 0x10C12A90 ?Init@Class_10E984F4@@QAEPAV1@XZ
Class_10E984F4* Class_10E984F4::Init()
{
    Unknown00 = DAT_10e984f4;
    m_Elements = 0;
    return this;
}

// FUNCTION: 0x10C12B30 ??0Class_10E98530@@QAE@XZ
Class_10E98530::Class_10E98530()
{
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
}

// FUNCTION: 0x10C132A0 ??_GClass_10E98530@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10C12B30's definition in this unit.
