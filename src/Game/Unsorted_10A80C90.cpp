// Game/Unsorted_10A80C90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A80C90.h"
#include "Game/TimeManager.h"

class cConversation
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
    virtual void Virtual21();
    virtual void Virtual22();
    virtual int IndexOfConEvent(int Value);

    int m_ConEvents;
    int Unknown08;
    int* Unknown0C;
};

extern const char DAT_10e6c100[];

class cString
{
public:
    cString() : Unknown00(0) {}
    ~cString();

    cString& FUN_1090a590(const char* In);

    char* Unknown00;
};

class Class_10A810F0
{
public:
    Class_10A810F0() { Unknown00.FUN_1090a590(DAT_10e6c100); }

    cString Unknown00;
};

class Class_10E6C104 : public Class_10A810F0
{
public:
    Class_10E6C104();

    virtual ~Class_10E6C104();
};

// FUNCTION: 0x10A80C90 ?FUN_10a80c90@Class_10A80C90@@QAEXXZ
void Class_10A80C90::FUN_10a80c90()
{
    Unknown54 = (float)TimeManager::Instance()->GetGameTime();
}

// FUNCTION: 0x10A80E30 ?IndexOfConEvent@cConversation@@UAEHH@Z
int cConversation::IndexOfConEvent(int Value)
{
    for (int i = 0; i < m_ConEvents; i++)
    {
        if (Unknown0C[i] == Value)
            return i;
    }
    return -1;
}

// FUNCTION: 0x10A810D0 ??_GClass_10E6C104@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A810F0's definition in this unit.

// FUNCTION: 0x10A810F0 ??0Class_10E6C104@@QAE@XZ
Class_10E6C104::Class_10E6C104()
{
}
