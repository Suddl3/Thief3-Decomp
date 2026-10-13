// Game/Unsorted_10BB8740_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
// Declarations first.
#include "Game/Class_10AA82C0.h"
#include "Game/Class_10BB8830.h"

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
    virtual int Virtual6(int A, int B);
    virtual void Virtual7();
    virtual Class_10BAA6B0_Param* Virtual8();

    Class_10978090Result* FUN_10978090();

    Class_10C08940* Unknown04;
    int Unknown08;
};

bool FUN_10c006d0(Class_10978090Result* A);

class Class_10BB8830_FUN_10aa82c0
{
public:
    int Unknown00;
    char Pad04[0x4];
    Class_10978090** Unknown08;
};

// FUNCTION: 0x10BB8830 ?FUN_10bb8830@Class_10BB8830@@QAE_NXZ
bool Class_10BB8830::FUN_10bb8830()
{
    if (Unknown2CC == 0)
    {
        return false;
    }
    for (int i = ((Class_10BB8830_FUN_10aa82c0*)Unknown30.FUN_10aa82c0())->Unknown00 - 1; i >= 0; i--)
    {
        Class_10978090* Item = ((Class_10BB8830_FUN_10aa82c0*)Unknown30.FUN_10aa82c0())->Unknown08[i];
        if (Item->FUN_10978090() && Item->FUN_10978090() == Unknown2CC)
        {
            if (FUN_10c006d0(Item->FUN_10978090()))
            {
                return true;
            }
        }
    }
    return false;
}
