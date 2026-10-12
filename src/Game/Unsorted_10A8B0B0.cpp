// Game/Unsorted_10A8B0B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109022E0.h"
#include "Game/Class_1090FD40.h"
#include "Game/cTriggerSoundSchemaParam.h"
#include "Game/Class_10C4CD50.h"

void WriteString(void* Stream, int* Value);

void WriteInt(void* Stream, int Value);

class cTriggerPropertyParam
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
    virtual void WriteValue(int A, void* Stream);

    char Unknown04[4];
    int Unknown08;
    int Unknown0C;
};

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

class Class_10E6C6C4
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int SetValue(const Class_109022E0& Name);

    FName m_Value;
};

extern int DAT_10f3a1dc;

extern void* DAT_10e6c610[];

extern Class_1090FD40 DAT_10f3a1e0;

void FUN_10c3fbd0();

struct Class_10E6C610
{
    void* VTable;
};

Class_10C4CD50* FUN_10c4cd50();

// FUNCTION: 0x10A8B1E0 ?Reset@cTriggerSoundSchemaParam@@UAEXXZ
void cTriggerSoundSchemaParam::Reset()
{
    FUN_10c3fbd0();
    DAT_10f3a1e0.FUN_1090f2c0(0);
    DAT_10f3a1dc = 0;
    Class_10C4CD50* Mgr = FUN_10c4cd50();
    Class_10E6C610 Event;
    Event.VTable = DAT_10e6c610;
    Mgr->Virtual8(&Event);
}

// FUNCTION: 0x10A8B640 ?WriteValue@cTriggerPropertyParam@@UAEXHPAX@Z
void cTriggerPropertyParam::WriteValue(int A, void* Stream)
{
    WriteInt(Stream, Unknown08);
    WriteString(Stream, &Unknown0C);
}

// FUNCTION: 0x10A8C080 ?SetValue@Class_10E6C6C4@@UAEHABVClass_109022E0@@@Z
int Class_10E6C6C4::SetValue(const Class_109022E0& Name)
{
    const char* Text = Name.Unknown00 ? Name.Unknown00 : DAT_10e47660;
    m_Value = FName(Text, FNAME_Add);
    return 0;
}
