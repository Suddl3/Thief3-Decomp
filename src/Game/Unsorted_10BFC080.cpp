// Game/Unsorted_10BFC080.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFC110.h"

class Class_10C08940;

class Class_10BAA6B0_Param;

class Class_10978090Result;

// Game/Class_10978090.h does not declare FUN_10c3dd60, which the search calls on each entry: this copy has it.
class Class_10978090
{
public:
    virtual void Virtual0();
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

// FUNCTION: 0x10BFC110 ?FindBestFor@Class_10BFC110@@QAEPAVClass_10978090@@PAVClass_10C08940@@@Z
Class_10978090* Class_10BFC110::FindBestFor(Class_10C08940* Owner)
{
    if (Unknown14 != 0 && Unknown14->FUN_10978090() == Owner)
        return Unknown14;
    float Best = 0.0f;
    Class_10978090* Result = 0;
    for (int i = 0; i < Unknown08; i++)
    {
        Class_10978090* Obj = Unknown10[i];
        if (Obj->FUN_10978090() == Owner)
        {
            if (Obj->Class_10978090::FUN_10c3dd60() > Best)
            {
                Best = Obj->Class_10978090::FUN_10c3dd60();
                Result = Obj;
            }
        }
    }
    return Result;
}
