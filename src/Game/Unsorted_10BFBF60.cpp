// Game/Unsorted_10BFBF60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10978090.h"
#include "Game/Class_10C1AAC0.h"
#include "Game/Class_10BFBF60.h"

extern float DAT_10e49c68;

class Class_10BFBF60_Unknown10
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual float Virtual6(int A);
};

// FUNCTION: 0x10BFBF60 ?IsAllowed@Class_10BFBF60@@QAE_NPAVClass_10C08940@@@Z
bool Class_10BFBF60::IsAllowed(Class_10C08940* Value)
{
    for (int i = 0; i < Unknown08; i++)
    {
        if (Unknown10[i]->FUN_10978090() == Value && !((Class_10C1AAC0*)Unknown10[i])->FUN_10c1aac0())
        {
            if (((Class_10BFBF60_Unknown10*)Unknown10[i])->Virtual6(0) > DAT_10e49c68)
                return false;
        }
    }
    return true;
}
