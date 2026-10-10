// Game/Class_10E6C194_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    Class_109081E0(const char* In);
    Class_109081E0& operator=(const Class_109081E0& In);
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

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
    virtual int FUN_10aa8240(Class_10AA8240* Obj);

    Class_109081E0 Unknown04;
};

// FUNCTION: 0x10AA8240 ?FUN_10aa8240@Class_10E6C194@@UAEHPAVClass_10AA8240@@@Z
int Class_10E6C194::FUN_10aa8240(Class_10AA8240* Obj)
{
    Unknown04 = Obj->Virtual2();
    return 1;
}
