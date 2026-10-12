// Game/Class_10E9B168_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10E9B088.h"
#include "Game/FArchive.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

class Class_10E9AFD0
{
public:
    virtual ~Class_10E9AFD0();

    void FUN_10c3db00(FArchive& Ar);

    char Unknown04[0x18];
};

class Class_10E9B168 : public Class_10E9AFD0
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Serialize(FArchive& Ar);

    FVector m_Position;
    float m_Range;
    bool Unknown2C;
    Class_10E9B088 Unknown30;
};

// FUNCTION: 0x10C3DD80 ?Serialize@Class_10E9B168@@UAEXAAVFArchive@@@Z
void Class_10E9B168::Serialize(FArchive& Ar)
{
    FUN_10c3db00(Ar);
    FUN_10b052a0(Ar, &m_Position);
    Ar.Serialize(&m_Range, 4);
    Ar.Serialize(&Unknown2C, 1);
    Unknown30.FUN_10c3da10((int)&Ar);
}
