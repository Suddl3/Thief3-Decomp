// Game/cStateStack_12.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BA9FD0.h"
#include "Game/Class_10BB7580.h"

struct Struct_10B98C50
{
    char Unknown00[8];
    Class_10BA9FD0* Unknown08;
};

class Class_10B9E410_Item
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();

    char Unknown04[0x44];
    bool Unknown48;
};

class Class_10B9E410_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual int Virtual7(Struct_10B98C50* A);
};

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
    void FUN_10b9df70();

    char Unknown00[0xC];
    Struct_10B98C50* Unknown0C;
    int m_Count;
    char Unknown14[4];
    Class_10B9E410_Item** m_Stack;
    int Unknown1C;
    int Unknown20;
    char Unknown24[0x14];
    Class_10B9E410_Member* m_Member;
};

// FUNCTION: 0x10B9DF70 ?FUN_10b9df70@cStateStack@@QAEXXZ
void cStateStack::FUN_10b9df70()
{
    if (((Class_10BB7580*)Unknown0C->Unknown08->FUN_10ba9fd0())->FUN_10bb7580())
    {
        Class_10B9E410_Item* Last = Top();
        if (Last)
        {
            if (Last->Virtual3() == 5)
            {
                if (Last->Unknown48)
                    Last->Unknown48 = false;
                return;
            }
            if (Last->Virtual3() == 0x23)
                FUN_10b9d8d0();
        }
        Struct_10B98C50* Obj = Unknown0C;
        int Result = m_Member->Virtual7(Obj);
        if (Result)
            ApplyNextState(Result);
    }
}
