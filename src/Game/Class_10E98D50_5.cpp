// Game/Class_10E98D50_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C1B930.h"
#include "Game/FArchive.h"

class UObject;

class Class_10E98D08
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
    virtual void Virtual9();

    void FUN_10c1b1a0(FArchive& Ar);
};

class Class_10E98D50 : public Class_10E98D08
{
public:
    virtual void Serialize(FArchive& Ar);

    char Unknown04[0x44];
    UObject* m_Info;
    bool m_Disabled;
};

// FUNCTION: 0x10C1B800 ?Serialize@Class_10E98D50@@UAEXAAVFArchive@@@Z
void Class_10E98D50::Serialize(FArchive& Ar)
{
    FUN_10c1b1a0(Ar);
    Ar.Virtual6(&m_Info);
    if (Ar.Unknown0C >= 0x40)
        Ar.Serialize(&m_Disabled, 1);
}

// FUNCTION: 0x10C1B930 ?Reset@Class_10C1B930@@QAEXXZ
void Class_10C1B930::Reset()
{
    Unknown2C = 0;
    Unknown3C = 0;
    Unknown34 = 0;
    Unknown47 = 1;
}
