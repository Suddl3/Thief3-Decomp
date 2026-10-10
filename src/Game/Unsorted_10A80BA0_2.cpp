// Game/Unsorted_10A80BA0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/TimeManager.h"

class Class_10E6C1F0_Unknown10
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int Virtual5();
};

class Class_10E6C1F0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int FUN_10a80bc0(int A);
    virtual int Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual bool Virtual11();

    char Unknown04[0xC];
    Class_10E6C1F0_Unknown10* Unknown10;
};

// FUNCTION: 0x10A80BC0 ?FUN_10a80bc0@Class_10E6C1F0@@UAEHH@Z
int Class_10E6C1F0::FUN_10a80bc0(int A)
{
    if (TimeManager::Instance()->IsPaused())
        return 0;
    int Result = Virtual6();
    if (Result)
    {
        Result = Unknown10->Virtual5();
        if (Result && !A)
            Result = Virtual11();
    }
    return Result;
}
