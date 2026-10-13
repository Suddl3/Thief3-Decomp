// Game/cConversation_9.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A83AC0_Unknown0C.h"
#include "Game/Class_1090FD40.h"

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
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void FUN_10a83b70(Class_1090FD40* A);

    int Unknown04;
    char Unknown08[4];
    Class_10A83AC0_Unknown0C** Unknown0C;
};

// FUNCTION: 0x10A83B70 ?FUN_10a83b70@cConversation@@UAEXPAVClass_1090FD40@@@Z
void cConversation::FUN_10a83b70(Class_1090FD40* A)
{
    A->SetCount(0);
    for (int i = 0; i < Unknown04; i++)
    {
        if (Unknown0C[i]->Virtual1() == 0)
        {
            Class_10A83AC0_Unknown0C* Item = Unknown0C[i];
            if (A->FUN_1090f160(Item->Unknown10) == -1)
            {
                int Count = A->m_Count;
                A->SetCount(Count + 1);
                A->m_Items[Count] = Item->Unknown10;
            }
        }
    }
}
