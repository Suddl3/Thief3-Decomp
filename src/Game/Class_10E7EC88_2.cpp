// Game/Class_10E7EC88_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10AC92F0.h"
#include "Game/Class_10AC9AE0.h"
#include "Game/Class_10B3AF40_UnknownB0.h"
#include "Game/Class_10B48890.h"

class AGarrett
{
public:
    char Unknown00[0xB0];
    Class_10B3AF40_UnknownB0* m_physicsObjectPadding;
};

class Class_10F3A3D8
{
public:
    char Unknown00[0x134];
    Class_10AC9AE0* Unknown134;
    char Unknown138[4];
    Class_10AC92F0* Unknown13C;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

class Class_10E7EC88
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10b4f7b0(AGarrett* Garrett);
    virtual void FUN_10b4f860(AGarrett* Garrett);

    void FUN_10b4f510(AGarrett* Garrett);
    FVector FUN_10b4f690(AGarrett* Garrett);

    char Unknown04[0xC];
    bool Unknown10;
    bool Unknown11;
    FVector Unknown14;
    FVector Unknown20;
    int Unknown2C;
};

// FUNCTION: 0x10B4F860 ?FUN_10b4f860@Class_10E7EC88@@UAEXPAVAGarrett@@@Z
void Class_10E7EC88::FUN_10b4f860(AGarrett* Garrett)
{
    if (!Unknown11)
    {
        Class_10B48890* Body = Garrett->m_physicsObjectPadding->Virtual6();
        Body->Unknown14 = FVector(-Unknown14.X, -Unknown14.Y, -Unknown14.Z);
    }
    Unknown20 = FUN_10b4f690(Garrett);
    Unknown14 = FVector(0.0f, 0.0f, 0.0f);
    DAT_10f3a3d8->Unknown13C->FUN_10ac92f0();
    DAT_10f3a3d8->Unknown134->FUN_10ac9ae0();
    Unknown11 = false;
}
