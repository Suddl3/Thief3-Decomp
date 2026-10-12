// Game/cConversation_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10905A90_Member.h"

class cString;

Class_10905A90_Member* GetAllocator();

// Copied from include/Game/Class_1090FD40.h with FUN_1090f160 (the find that returns -1) added.
class Class_1090FD40
{
public:
    int Add(const cString& Item);
    int FUN_1090f160(const cString& Item);
    void FUN_1090f2c0(int Count);
    void FUN_1090fd00();
    void FUN_10a37f80(int A, int B, int C);
    void RemoveAt(int Index);
    void Insert(int Index, const cString& Value);
    void FUN_10a5b5b0(int A, int B);
    void RemoveUnordered(int Index);
    void Empty()
    {
        FUN_1090f2c0(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            Unknown04 = 0;
        }
    }

    int m_Count;
    int Unknown04;
    cString* m_Items;
};

// The pointee of cConversation's Unknown0C: slot 1 says whether to skip the item.
class Class_10A83AC0_Unknown0C
{
public:
    virtual void Virtual0();
    virtual int Virtual1();

    char Unknown04[0xC];
    cString Unknown10;
    char Unknown14[0x8];
    cString Unknown1C;
};

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
    virtual void FUN_10a83ac0(Class_1090FD40* A);

    int m_ConEvents;
    char Unknown08[4];
    Class_10A83AC0_Unknown0C** Unknown0C;
};

// FUNCTION: 0x10A83AC0 ?FUN_10a83ac0@cConversation@@UAEXPAVClass_1090FD40@@@Z
void cConversation::FUN_10a83ac0(Class_1090FD40* A)
{
    A->FUN_1090f2c0(0);
    for (int i = 0; i < m_ConEvents; i++)
    {
        if (Unknown0C[i]->Virtual1() == 0)
        {
            Class_10A83AC0_Unknown0C* Item = Unknown0C[i];
            if (A->FUN_1090f160(Item->Unknown10) == -1)
            {
                int Count = A->m_Count;
                A->FUN_1090f2c0(Count + 1);
                A->m_Items[Count] = Item->Unknown10;
            }
            if (A->FUN_1090f160(Item->Unknown1C) == -1)
            {
                int Count = A->m_Count;
                A->FUN_1090f2c0(Count + 1);
                A->m_Items[Count] = Item->Unknown1C;
            }
        }
    }
}
