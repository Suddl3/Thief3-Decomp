// Game/Class_10E6C14C_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"

class Class_10AAB590_Param
{
public:
    virtual void Virtual0(int* Value);
    virtual void Virtual1(int Value);
    virtual Class_109081E0 Virtual2();
    virtual int Virtual3();
};

class Class_10E6C14C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int FUN_10aa7f80(Class_10AAB590_Param* Writer);

    Class_109081E0 Unknown04;
    Class_109081E0 Unknown08;
    int Unknown0C;
};

// FUNCTION: 0x10AA7F80 ?FUN_10aa7f80@Class_10E6C14C@@UAEHPAVClass_10AAB590_Param@@@Z
int Class_10E6C14C::FUN_10aa7f80(Class_10AAB590_Param* Writer)
{
    Unknown04 = Writer->Virtual2();
    Unknown08 = Writer->Virtual2();
    Unknown0C = Writer->Virtual3();
    return 1;
}
