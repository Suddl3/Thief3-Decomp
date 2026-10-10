// Game/Unsorted_10B9CD50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9CD50.h"

class Class_10B9CD50_Unknown18
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
};

// FUNCTION: 0x10B9CD50 ?FUN_10b9cd50@Class_10B9CD50@@QAE_NH@Z
bool Class_10B9CD50::FUN_10b9cd50(int A)
{
    if (!A)
        return false;
    for (int i = 0; i < Unknown10; i++)
    {
        if (Unknown18[i]->Virtual3() == A)
            return true;
    }
    return false;
}
