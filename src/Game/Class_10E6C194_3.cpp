// Game/Class_10E6C194_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"

class Class_10AA8240
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual Class_109081E0 Virtual2();
};

class Class_10E6C194
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Read(Class_10AA8240* Obj);

    Class_109081E0 Unknown04;
};

// FUNCTION: 0x10AA8240 ?Read@Class_10E6C194@@UAEHPAVClass_10AA8240@@@Z
int Class_10E6C194::Read(Class_10AA8240* Obj)
{
    Unknown04 = Obj->Virtual2();
    return 1;
}
