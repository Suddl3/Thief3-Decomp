// Game/cStateStack_9.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BC4020.h"
#include "Game/cIntArray.h"

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

// include/Game/cStateStack.h copied whole, with FUN_10b9cad0 added.
class cStateStack
{
public:
    void FUN_10b9cf60();
    void FUN_10b9cfa0();
    Class_10B9E410_Item* Top()
    {
        if (m_Count == 0)
            return 0;
        return m_Stack[m_Count - 1];
    }
    void FUN_10b9cf20();
    void FUN_10b9e410();
    void ApplyNextState(int A);
    void FUN_10b9d8d0();
    void FUN_10b9dc80(int A);
    void FUN_10b9dcc0();
    void FUN_10b9dc40(int A);
    void FUN_10b9e660();
    void FUN_10b9e690(int A);
    void FUN_10b9eee0();
    void FUN_10b9cad0(Class_10B9E410_Item* Item, int Value, int Flag);

    char Unknown00[0xC];
    int Unknown0C;
    int m_Count;
    char Unknown14[4];
    Class_10B9E410_Item** m_Stack;
    int Unknown1C;
    int Unknown20;
    char Unknown24[0x14];
    Class_10B9E410_Member* m_Member;
};

// FUNCTION: 0x10B9D740 ?ApplyNextState@cStateStack@@QAEXH@Z
void cStateStack::ApplyNextState(int A)
{
    cIntArray* Array = (cIntArray*)&m_Count;
    Class_10B9E410_Item* Current = Top();
    if (Current && Current->Virtual3() == ((Class_10B9E410_Item*)A)->Virtual3())
    {
        ((Class_10B9E410_Item*)A)->Virtual4(1);
        return;
    }
    int R = 0;
    if (Array->Count > 0)
    {
        Class_10B9E410_Item* Item = m_Stack[Array->Count - 1];
        Item->Virtual21();
        ((Class_10BC4020*)Item)->FUN_10bc4020(0);
        R = Item->Virtual3();
    }
    int Count = Array->Count;
    Array->SetCount(Count + 1);
    Array->Data[Count] = A;
    FUN_10b9cad0((Class_10B9E410_Item*)A, R, 0);
}
