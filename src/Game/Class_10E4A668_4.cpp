// Game/Class_10E4A668_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109481D0.h"
#include "Game/Struct_109481F0.h"

class Class_10942050_Unknown04
{
public:
    char Unknown00[0x4C];
    bool Unknown4C;
    char Unknown4D[0x23F];
    bool Unknown28C;
};

struct Struct_10942050_Entry
{
    int Unknown00;
    Class_10942050_Unknown04* Unknown04;
    char Unknown08[0x1C];
};

class Class_10E4A668
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9(int A, int B);
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void FUN_10942830();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual bool FUN_10942050();

    char Unknown04[0xAC];
    Struct_109481F0* Unknown0B0;
    char Unknown0B4[0x3C];
    int Unknown0F0;
    char Unknown0F4[0x3C];
    Struct_10942050_Entry* Unknown130;
};

// FUNCTION: 0x10942050 ?FUN_10942050@Class_10E4A668@@UAE_NXZ
bool Class_10E4A668::FUN_10942050()
{
    if (((Class_109481D0*)this)->HasFlags(0x400))
        return false;
    for (int i = 0; i < Unknown0F0; i++)
    {
        Class_10942050_Unknown04* Object = Unknown130[i].Unknown04;
        if (!Object)
            return false;
        if (Object->Unknown4C && !Object->Unknown28C)
            return false;
    }
    return true;
}
