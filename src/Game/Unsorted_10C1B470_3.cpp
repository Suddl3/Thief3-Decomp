// Game/Unsorted_10C1B470_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first
#include "Core/Core.h"

class FArchive
{
public:
    virtual ~FArchive();
    virtual void Serialize(void* V, int Length);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7(void* V);

    char Unknown04[0x8];
    int Unknown0C;
};

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

class Object_10BFBD00
{
public:
    virtual void Virtual0();
    virtual void Virtual1(FArchive& Ar, void* Value);
};

class Class_10FF667C
{
public:
    char Unknown00[0x18];
    Object_10BFBD00* Unknown18;
};

extern Class_10FF667C* DAT_10ff667c;

class Class_10C1B1A0
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

    char Unknown04[0x44];
};

class Class_10E98E70 : public Class_10C1B1A0
{
public:
    virtual void FUN_10c1b4d0(FArchive& Ar);

    char Unknown48[0xC];
    int Unknown54;
    int Unknown58;
    bool Unknown5C;
    char Unknown5D[0x3];
    char Unknown60[0x4];
};

// FUNCTION: 0x10C1B4D0 ?FUN_10c1b4d0@Class_10E98E70@@UAEXAAVFArchive@@@Z
void Class_10E98E70::FUN_10c1b4d0(FArchive& Ar)
{
    Class_10C1B1A0::FUN_10c1b1a0(Ar);
    FUN_10b052a0(Ar, &Unknown48);
    Ar.Serialize(&Unknown54, 4);
    Ar.Virtual7(&Unknown58);
    Ar.Serialize(&Unknown5C, 1);
    if (Ar.Unknown0C >= 0x6A)
        DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown60);
}
