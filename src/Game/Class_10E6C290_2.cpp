// Game/Class_10E6C290_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10A81D20.h"
#include "Game/Class_10AAB590_Param.h"

class Class_10E6C290
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Read(Class_10AAB590_Param* Writer);

    Class_109081E0 Unknown04;
    Class_10A81D20 Unknown08;
    int Unknown14;
};

// FUNCTION: 0x10AA9350 ?Read@Class_10E6C290@@UAEHPAVClass_10AAB590_Param@@@Z
int Class_10E6C290::Read(Class_10AAB590_Param* Writer)
{
    Unknown04 = Writer->Virtual2();
    Unknown14 = Writer->Virtual3();
    int Count = Writer->Virtual3();
    Unknown08.FUN_10a80e90(Count);
    for (int i = 0; i < Unknown08.Unknown00; i++)
        ((Class_109081E0*)Unknown08.Unknown08)[i] = Writer->Virtual2();
    return 1;
}
