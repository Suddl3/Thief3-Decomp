// Game/cT3Camera.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Struct_10AC14A0.h"

class Class_10A37810
{
public:
    int FUN_10a37810();
};

class Class_10A37860 : public Class_10A37810
{
public:
    bool FUN_10a37860();
};

class cT3Camera : public Class_10A37860
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual bool FUN_10ac1640();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void SetRotation(const FRotator& R);

    char Unknown04[8];
    FRotator Unknown0C;
    char Unknown18[0x20];
    FRotator m_Rotation;
    char Unknown44[0x5BC];
    Struct_10AC14A0* Unknown600;
};

// FUNCTION: 0x10AC14A0 ?SetRotation@cT3Camera@@UAEXABVFRotator@@@Z
void cT3Camera::SetRotation(const FRotator& R)
{
    FRotator Flat = R;
    Flat.Roll = 0;
    m_Rotation = Flat;
    if (Unknown600)
    {
        Unknown600->Unknown14 = Flat;
        Unknown0C = Flat;
    }
}
