// Game/Unsorted_10BFC1B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFC1B0.h"

class Class_10978090Result;

class Class_10C08940;

class Class_10BAA6B0_Param;

class Class_10978090
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual void Virtual5();
    virtual float Virtual6(int A);
    virtual void Virtual7();
    virtual Class_10BAA6B0_Param* Virtual8();

    Class_10978090Result* FUN_10978090();

    Class_10C08940* Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10BFC1B0 ?FUN_10bfc1b0@Class_10BFC1B0@@QAEMPAVClass_10978090Result@@@Z
float Class_10BFC1B0::FUN_10bfc1b0(Class_10978090Result* A)
{
    float Sum = 0.0f;
    for (int i = 0; i < Unknown08; i++)
    {
        Class_10978090* Item = Unknown10[i];
        Class_10978090Result* Result = Item->FUN_10978090();
        if (Result != 0 && A == Result)
        {
            float V = Item->Virtual6(0);
            if (V > 0.1f)
                Sum += V;
        }
    }
    return Sum;
}
