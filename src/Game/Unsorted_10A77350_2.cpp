// Game/Unsorted_10A77350_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/cString.h"
#include "Game/Class_10970890.h"
#include "Game/Class_1098E330.h"

extern const char DAT_10e4a3c0[];

class Object_10970890
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual cString Virtual2();
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
    virtual int Virtual21();
    virtual cString& Virtual22(int Index);
};

class Class_10A773F0_Param
{
public:
    FString Unknown00;
    FString Unknown0C;
};

// FUNCTION: 0x10A773F0 ?FUN_10a773f0@@YG_NPAVClass_1098E330@@PAVClass_10A773F0_Param@@@Z
bool __stdcall FUN_10a773f0(Class_1098E330* A, Class_10A773F0_Param* Out)
{
    Class_10970890* Mgr = A->FUN_10991eb0();
    if (Mgr)
    {
        Object_10970890* Obj = Mgr->FUN_10970890();
        if (Obj)
        {
            Out->Unknown00 = *Obj->Virtual2();
            int Index = Mgr->Unknown5C;
            if (Index == -1)
            {
                Out->Unknown0C = DAT_10e4a3c0;
                return true;
            }
            Out->Unknown0C = *Mgr->FUN_10970890()->Virtual22(Index);
            return true;
        }
    }
    return false;
}
