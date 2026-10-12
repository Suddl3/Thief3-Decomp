// Game/Class_10E6DA40_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAB590_Param.h"

class Class_10E6DA40
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void ReadFields(void* Reader, int Version, int Unused);
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int FUN_10aab590(Class_10AAB590_Param* Writer);

    int Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10AAB590 ?FUN_10aab590@Class_10E6DA40@@UAEHPAVClass_10AAB590_Param@@@Z
int Class_10E6DA40::FUN_10aab590(Class_10AAB590_Param* Writer)
{
    Writer->Virtual0(&Unknown04);
    Writer->Virtual1(Unknown08);
    return 1;
}
