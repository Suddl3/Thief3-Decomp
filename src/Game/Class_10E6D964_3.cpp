// Game/Class_10E6D964_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAB590_Param.h"
#include "Game/Object_10AA7BF0.h"

class cConEvent
{
public:
    cConEvent();

    virtual ~cConEvent();

    int Unknown04;
};

class Class_10E6D964 : public cConEvent
{
public:
    Class_10E6D964();

    virtual ~Class_10E6D964();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int FUN_10aa7bf0(Class_10AAB590_Param* Writer);

    Object_10AA7BF0* Unknown08;
    void* Unknown0C;
    int Unknown10;
};

// FUNCTION: 0x10AA7BF0 ?FUN_10aa7bf0@Class_10E6D964@@UAEHPAVClass_10AAB590_Param@@@Z
int Class_10E6D964::FUN_10aa7bf0(Class_10AAB590_Param* Writer)
{
    Writer->Virtual0(&Unknown04);
    Writer->Virtual0(&Unknown10);
    Writer->Virtual0(Unknown08->Virtual5());
    Unknown08->Virtual19(Writer);
    return 1;
}
