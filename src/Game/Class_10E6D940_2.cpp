// Game/Class_10E6D940_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAB590_Param.h"
#include "Game/Object_10AA7BF0.h"

class Class_10E6D940
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int FUN_10aa77c0(Class_10AAB590_Param* Writer);

    int Unknown04;
    Object_10AA7BF0* Unknown08;
    char Unknown0C[8];
    int Unknown14;
    int Unknown18;
};

// FUNCTION: 0x10AA77C0 ?FUN_10aa77c0@Class_10E6D940@@UAEHPAVClass_10AAB590_Param@@@Z
int Class_10E6D940::FUN_10aa77c0(Class_10AAB590_Param* Writer)
{
    Writer->Virtual0(&Unknown04);
    Writer->Virtual0(Unknown08->Virtual5());
    Writer->Virtual1(Unknown14);
    Writer->Virtual1(Unknown18);
    Unknown08->Virtual19(Writer);
    return 1;
}
