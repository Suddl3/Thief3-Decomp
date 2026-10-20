// Game/Unsorted_10A95B80_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/TimeManager.h"

class Class_10A95B80_C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int Virtual6(int A);
};

class Class_10E6CE94
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10a95b80(int A, int B, Class_10A95B80_C* C);
};

// FUNCTION: 0x10A95B80 ?FUN_10a95b80@Class_10E6CE94@@UAEHHHPAVClass_10A95B80_C@@@Z
int Class_10E6CE94::FUN_10a95b80(int A, int B, Class_10A95B80_C* C)
{
    int mode = C->Virtual6(0);
    TimeManager::Instance()->SetPaused(mode == 1);
    return 1;
}
