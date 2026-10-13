// Game/Unsorted_10A10070.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Config.h"

extern const char DAT_10e5d3f0[];

extern const char DAT_10e5d400[];

class Class_10A10070_Arg3
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
    virtual int Virtual19();
    virtual void* Virtual20(int I);
};

class Class_10E5D42C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void FUN_10a10070(int A, int B, Class_10A10070_Arg3* C);
    virtual void Virtual4(int A, int B, Class_10A10070_Arg3* C, void* D);
};

// FUNCTION: 0x10A10070 ?FUN_10a10070@Class_10E5D42C@@UAEXHHPAVClass_10A10070_Arg3@@@Z
void Class_10E5D42C::FUN_10a10070(int A, int B, Class_10A10070_Arg3* C)
{
    bool Flag = false;
    Config::Instance()->GetBool(DAT_10e5d3f0, DAT_10e5d400, &Flag, 0);
    if (C && Flag)
    {
        for (int i = 0; i < C->Virtual19(); i++)
        {
            void* Item = C->Virtual20(i);
            Virtual4(A, B, C, Item);
        }
    }
}
