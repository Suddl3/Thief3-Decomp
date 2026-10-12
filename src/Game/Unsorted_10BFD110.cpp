// Game/Unsorted_10BFD110.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10BFD160.h"

class Class_10C08940;

class Class_10BAA6B0_Param;

class Class_10978090
{
public:
    virtual int Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual void Virtual5();
    virtual int Virtual6(int A, int B);
    virtual void Virtual7();
    virtual Class_10BAA6B0_Param* Virtual8();
    virtual float FUN_10c3dd60();

    Class_10C08940* FUN_10978090();

    Class_10C08940* Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10BFD160 ?CollectMatching@Class_10BFD160@@QAEXPAVClass_10C08940@@PAVcIntArray@@M1@Z
void Class_10BFD160::CollectMatching(Class_10C08940* Owner, cIntArray* Ids, float Limit, cIntArray* Out)
{
    if (Owner != 0)
    {
        for (int i = m_Count - 1; i >= 0; i--)
        {
            Class_10978090* Obj = m_Objects[i];
            if (Obj->FUN_10978090() == Owner)
            {
                for (int j = 0; j < Ids->Count; j++)
                {
                    int* Item = &Ids->Data[j];
                    if (Obj->Virtual0() == *Item)
                    {
                        if (!(Obj->Class_10978090::FUN_10c3dd60() > Limit))
                            break;
                        int Index = Out->Count;
                        Out->SetCount(Index + 1);
                        Out->Data[Index] = (int)Obj;
                    }
                }
            }
        }
    }
}
