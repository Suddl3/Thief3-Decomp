// Game/Unsorted_10C1A960_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C7D570.h"

double GetTimeSeconds();

extern float DAT_10eafbdc;

class Class_10E98D08
{
public:
    ~Class_10E98D08() {}

    virtual int Virtual0() = 0;
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual float Virtual6(int A);
    virtual bool FUN_10c1aa10(int Param);

    char Unknown04[4];
    Class_10C7D570* Unknown08;
    char Unknown0C[0x1C];
    float Unknown28;
    char Unknown2C[0x1B];
    bool Unknown47;
};

// FUNCTION: 0x10C1AA10 ?FUN_10c1aa10@Class_10E98D08@@UAE_NH@Z
bool Class_10E98D08::FUN_10c1aa10(int Param)
{
    if (Unknown47)
        return true;
    float A = Unknown08->FUN_10dbd510()->FUN_10bbdad0(0x10054e);
    if (Param <= 10)
    {
        float B = Unknown28;
        if (!(GetTimeSeconds() - B > A))
            return false;
    }
    if (Virtual6(0) <= DAT_10eafbdc)
        return true;
    return false;
}
