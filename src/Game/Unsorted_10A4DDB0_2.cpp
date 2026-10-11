// Game/Unsorted_10A4DDB0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A18E80.h"
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10A4DEA0.h"

class Object_10A18FC0 : public Class_10A18E80
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int Virtual2();
    virtual int Virtual3();
    virtual void Virtual4(int A, int B);
    virtual void Virtual5(int A, int B, int C, int D);
    virtual void Virtual6(int A, int B);

    char Pad01[0x3];
    char Pad643[0x1];
};

Object_10A18FC0* FUN_10a18fc0();

// FUNCTION: 0x10A4DEA0 ?FUN_10a4dea0@Class_10A4DEA0@@QAEXPAVClass_10BFBD70@@@Z
void Class_10A4DEA0::FUN_10a4dea0(Class_10BFBD70* Set)
{
    for (int i = 0; i < 0xff; i++)
    {
        if (Unknown324[i] != 0x40)
        {
            if (Set->FindIndex(i) == -1)
                FUN_10a18fc0()->Virtual5(0, i, 3, 0);
        }
    }
}
