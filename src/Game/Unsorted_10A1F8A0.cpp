// Game/Unsorted_10A1F8A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"
#include "Game/Class_10970890.h"

class cString;

class Object_10970890
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
    virtual int Virtual21();
    virtual cString& Virtual22(int Index);
    virtual int Virtual23(int Param);
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
    virtual int Virtual38(int A);
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual bool Virtual44(int A);
};

// FUNCTION: 0x10A1F8A0 ?FUN_10a1f8a0@@YGHPAVClass_1098E330@@@Z
int __stdcall FUN_10a1f8a0(Class_1098E330* A)
{
    if (A)
    {
        int Value;
        if (A->GetPropertyValue(0x200478, &Value))
            return Value;
        Class_10970890* C = A->FUN_10991eb0();
        if (C && C->FUN_10970890())
        {
            if (C->Unknown5C != -1)
            {
                Object_10970890* Obj = C->FUN_10970890();
                int Index = C->Unknown5C;
                return Obj->Virtual38(Index);
            }
            return C->FUN_10970890()->Virtual38(0);
        }
    }
    return 0;
}
