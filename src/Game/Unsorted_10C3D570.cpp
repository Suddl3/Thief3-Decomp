// Game/Unsorted_10C3D570.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109BBBA0.h"
#include "Game/Class_10E9B240.h"

class Class_10E9B168
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
    virtual void FUN_10c3d570();

    char Unknown04[0x14];
    char Unknown18;
    char Unknown19[0x3B];
    int Unknown54;
    char Unknown58[0xC];
    Class_109BBBA0* Unknown64;
};

class Class_10E9B370
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
    virtual void Stop();

    char Unknown04[0x14];
    bool m_bActive;
    char Unknown19[0x27];
    int m_Handle;
    char Unknown44[0xC];
    Class_109BBBA0* Unknown50;
};

// FUNCTION: 0x10C3D570 ?FUN_10c3d570@Class_10E9B168@@UAEXXZ
void Class_10E9B168::FUN_10c3d570()
{
    if (Unknown54 >= 0)
    {
        Unknown64->FUN_109bbba0(Unknown54);
        Unknown54 = -1;
    }
    Unknown18 = 0;
}

// FUNCTION: 0x10C3D5E0 ?Stop@Class_10E9B370@@UAEXXZ
void Class_10E9B370::Stop()
{
    if (m_Handle >= 0)
    {
        Unknown50->FUN_109bbba0(m_Handle);
        m_Handle = -1;
    }
    m_bActive = false;
}

// FUNCTION: 0x10C3D890 ?Stop@Class_10E9B240@@UAEXXZ
void Class_10E9B240::Stop()
{
    if (Unknown60 >= 0)
    {
        Unknown70->FUN_109bbba0(Unknown60);
        Unknown60 = -1;
    }
    m_Active = false;
}
