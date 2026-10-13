// Game/Class_10E6C170_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"

Class_10905A90_Member* GetAllocator();

class Class_10AA8110_Param
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual cString Virtual2();
};

class Class_10E6C170
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int CopyFromParam(Class_10AA8110_Param* Src);

    cString Unknown04;
    cString Unknown08;
};

// FUNCTION: 0x10AA8110 ?CopyFromParam@Class_10E6C170@@UAEHPAVClass_10AA8110_Param@@@Z
int Class_10E6C170::CopyFromParam(Class_10AA8110_Param* Src)
{
    Unknown04 = Src->Virtual2();
    Unknown08 = Src->Virtual2();
    return 1;
}
