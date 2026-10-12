// Game/Class_10E6C290.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAB590_Param.h"

class Class_10E6C290
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int Write(Class_10AAB590_Param* Writer);

    int Unknown04;
    int Unknown08;
    char Unknown0C[4];
    int* Unknown10;
    int Unknown14;
};

// FUNCTION: 0x10AA9100 ?Write@Class_10E6C290@@UAEHPAVClass_10AAB590_Param@@@Z
int Class_10E6C290::Write(Class_10AAB590_Param* Writer)
{
    Writer->Virtual0(&Unknown04);
    Writer->Virtual1(Unknown14);
    Writer->Virtual1(Unknown08);
    for (int i = 0; i < Unknown08; i++)
        Writer->Virtual0(&Unknown10[i]);
    return 1;
}
