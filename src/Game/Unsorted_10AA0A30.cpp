// Game/Unsorted_10AA0A30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6D330.h"
#include "Game/Class_10F352D8.h"

// Declarations first
class Class_10F352D8_Result;

class Class_10F352D8_Result
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
    virtual bool Virtual10();
};

class Class_10AA0A30
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int Virtual5(int Index);
};

extern Class_10F352D8* DAT_10f352d8;

bool FUN_10a858c0(int Key);

void FUN_10a871d0(int Key);

void FUN_10a87a70(int Key);

// FUNCTION: 0x10AA0A30 ?FUN_10aa0a30@Class_10E6D330@@UAEHHHPAVClass_10AA0A30@@@Z
int Class_10E6D330::FUN_10aa0a30(int A, int B, Class_10AA0A30* C)
{
    Class_10F352D8_Result* R = DAT_10f352d8->Virtual22(C->Virtual5(0));
    if (R)
    {
        if (R->Virtual10())
        {
            if (!FUN_10a858c0((int)R))
                FUN_10a871d0((int)R);
        }
        else
        {
            FUN_10a87a70((int)R);
        }
    }
    return 1;
}
