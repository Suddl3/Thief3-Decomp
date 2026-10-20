// Game/Unsorted_10A141D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A151A0.h"
#include "Game/Class_1090FD40.h"
#include <string.h>
#include "Game/cString.h"
#include "Game/Class_10A14270.h"

class cIntArray
{
public:
    void FUN_10c00a60(int A);

    int Unknown00;
    int Unknown04;
};

class Object_10A14540_A
{
public:
    virtual ~Object_10A14540_A();
};

class cConversationManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Clear();

    char Unknown04[4];
    cIntArray m_ChildCount;
    Object_10A14540_A** m_Children;
    Class_1090FD40 Unknown14;
};

extern const char DAT_10e47660[];

class Class_10A14270_Unknown10
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
    virtual cString* Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29(int A);
};

// FUNCTION: 0x10A14270 ?FUN_10a14270@Class_10A14270@@QAEHHPAPBD@Z
int Class_10A14270::FUN_10a14270(int A, const char** Name)
{
    for (int i = 0; i < Unknown08; i++)
    {
        cString* Record = Unknown10[i]->Virtual15();
        const char* Have = DAT_10e47660;
        if (Record->Unknown00)
            Have = Record->Unknown00;
        const char* Want = *Name ? *Name : DAT_10e47660;
        if (strcmp(Want, Have) == 0)
            Unknown10[i]->Virtual29(A);
    }
    return 1;
}

// FUNCTION: 0x10A14540 ?Clear@cConversationManager@@UAEXXZ
void cConversationManager::Clear()
{
    for (int i = 0; i < m_ChildCount.Unknown00; i++)
    {
        delete m_Children[i];
        m_Children[i] = 0;
    }
    m_ChildCount.FUN_10c00a60(0);
    Unknown14.SetCount(0);
    Unknown14.SetCount(0);
}

// FUNCTION: 0x10A151A0 ?Free@Class_10A151A0@@QAEXXZ
void Class_10A151A0::Free()
{
    FUN_10a15060(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Elements);
        m_Elements = 0;
        m_CapacityBytes = 0;
    }
}
