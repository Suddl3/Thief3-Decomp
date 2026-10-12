// Game/Class_10E6C14C_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10AAB590_Param.h"

class Class_10E6C14C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int CopyFromParam(Class_10AAB590_Param* Writer);

    cString Unknown04;
    cString Unknown08;
    int Unknown0C;
};

// FUNCTION: 0x10AA7F80 ?CopyFromParam@Class_10E6C14C@@UAEHPAVClass_10AAB590_Param@@@Z
int Class_10E6C14C::CopyFromParam(Class_10AAB590_Param* Writer)
{
    Unknown04 = Writer->Virtual2();
    Unknown08 = Writer->Virtual2();
    Unknown0C = Writer->Virtual3();
    return 1;
}
