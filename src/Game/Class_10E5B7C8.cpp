// Game/Class_10E5B7C8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E5B7C8.h"
#include "Game/Class_109E3C40.h"
#include <list>
#include "Game/Class_109E6520_Field18.h"
#include "Game/cStringIntHashTable.h"
#include "Game/TimeManager.h"
#include "Game/Class_109E6410.h"
#include "Game/cString.h"
#include "Game/Class_109E6520_Node.h"

class Class_10E5B7C8_Unknown88
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
    virtual void Virtual16(int A);
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
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual bool Virtual54();
};

// FUNCTION: 0x109E3C60 ?SetPending@Class_10E5B7C8@@UAE_NH@Z
bool Class_10E5B7C8::SetPending(int p1)
{
    m_Pending = p1;
    return true;
}

// FUNCTION: 0x109E3C70 ?FlushPending@Class_10E5B7C8@@QAEXXZ
void Class_10E5B7C8::FlushPending()
{
    int Old = m_Pending;
    m_Pending = 0;
    FUN_109e87f0(Old);
}

// FUNCTION: 0x109E4FB0 ?ClearItems@Class_10E5B7C8@@QAEXXZ
void Class_10E5B7C8::ClearItems()
{
    for (int i = 0; i < m_ItemCount; i++)
    {
        if (m_Items[i])
        {
            delete m_Items[i];
            m_Items[i] = 0;
        }
    }
}

// FUNCTION: 0x109E64E0 ?FUN_109e64e0@Class_10E5B7C8@@UAEXXZ
void Class_10E5B7C8::FUN_109e64e0()
{
    for (std::list<Class_10E5B7C8_Unknown88*>::iterator It = Unknown88.begin(); It != Unknown88.end(); ++It)
    {
        Class_10E5B7C8_Unknown88* Item = *It;
        if (Item->Virtual54())
            Item->Virtual16(1);
    }
}
