// Game/cStateStack_15.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first.
#include <string.h>
#include "Game/Class_10BC4020.h"
#include "Game/cIntArray.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned int Count);

class Class_10B9E410_Item;

class Class_10B9E410_Member;

class cStateStack;

int FUN_10b9eb60(int A);

// include/Game/Class_10B9E410_Item.h copied whole, with Virtual4 taking the argument it is called with.
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
};

// include/Game/cStateStack.h copied whole, with FUN_10b9cad0 and FUN_10b9ed70 added.
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
    void FUN_10b9ed70(int Index);

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

// FUNCTION: 0x10B9ED70 ?FUN_10b9ed70@cStateStack@@QAEXH@Z
void cStateStack::FUN_10b9ed70(int Index)
{
    int Target = FUN_10b9eb60(Index);
    if (Target != 0)
    {
        cIntArray* Array = (cIntArray*)&m_Count;
        Index = 0;
        if (Array->Count > 0)
        {
            for (;;)
            {
                if (Index >= Array->Count)
                    return;
                if (m_Stack[Index]->Virtual3() == Target)
                    break;
                Index++;
            }
            if (Index >= 0)
            {
                while (Array->Count > Index)
                {
                    if (Array->Count > 0)
                    {
                        int Top = Array->Count - 1;
                        Class_10B9E410_Item* Item = m_Stack[Top];
                        Item->Virtual21();
                        ((Class_10BC4020*)Item)->FUN_10bc4020(0);
                        int R = Item->Virtual3();
                        if (Top != Array->Count - 1)
                        {
                            int From = Top + 1;
                            int To = Top;
                            int Count = Array->Count - Top - 1;
                            if (From != To && Count)
                                memmove(Array->Data + To, Array->Data + From, Count * sizeof(int));
                        }
                        Array->SetCount(Array->Count - 1);
                        Item->Virtual4(1);
                        if (Array->Count > 0)
                            FUN_10b9cad0(m_Stack[Array->Count - 1], R, 1);
                    }
                }
            }
        }
    }
}
