// Game/cStateStack_10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10BC4020.h"
#include "Game/cStateStack.h"

class Class_10B9E410_Item
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual void Virtual4(int A);
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
};

class Class_10B9E410_Member;

// FUNCTION: 0x10B9D8D0 ?FUN_10b9d8d0@cStateStack@@QAEXXZ
void cStateStack::FUN_10b9d8d0()
{
    if (((cIntArray*)&m_Count)->Count > 0)
    {
        int Index = ((cIntArray*)&m_Count)->Count - 1;
        Class_10B9E410_Item* Item = (Class_10B9E410_Item*)((cIntArray*)&m_Count)->Data[Index];
        Item->Virtual21();
        ((Class_10BC4020*)Item)->FUN_10bc4020(0);
        int X = Item->Virtual3();
        ((cIntArray*)&m_Count)->RemoveAt(Index);
        Item->Virtual4(1);
        if (((cIntArray*)&m_Count)->Count > 0)
            FUN_10b9cad0((Class_10B9E410_Item*)((cIntArray*)&m_Count)->Data[((cIntArray*)&m_Count)->Count - 1], X, 1);
    }
}
