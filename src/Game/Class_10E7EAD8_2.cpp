// Game/Class_10E7EAD8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AC92E0.h"
#include "Game/Class_10B39530.h"

class AGarrett
{
public:
    char Unknown00[0x54C];
    char Unknown54C;
};

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int GetLinkedObject();
};

class Class_10B3AE70 : public Class_10AA82D0
{
public:
    virtual void Virtual1();

    void FUN_10b3ae70(AGarrett* Garrett);

    char Unknown04[0xC];
};

class Class_10E7EB20 : public Class_10B3AE70
{
public:
    void FUN_10b3b400(AGarrett* Garrett);
};

class Class_10F3A3D8
{
public:
    char Unknown00[0x13C];
    Class_10AC92E0* Unknown13C;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

class Class_10E7EAD8 : public Class_10E7EB20
{
public:
    virtual void FUN_10b4eb60(AGarrett* Garrett);

    int Unknown10;
    char Unknown14[4];
    bool Unknown18;
};

// FUNCTION: 0x10B4EB60 ?FUN_10b4eb60@Class_10E7EAD8@@UAEXPAVAGarrett@@@Z
void Class_10E7EAD8::FUN_10b4eb60(AGarrett* Garrett)
{
    Unknown18 = false;
    ((Class_10B39530*)GetLinkedObject())->FUN_10b39530(0xa6, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    ((Class_10B39530*)GetLinkedObject())->FUN_10b39530(0xa9, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    Unknown10 = 0;
    Garrett->Unknown54C = 3;
    FUN_10b3ae70(Garrett);
    FUN_10b3b400(Garrett);
    DAT_10f3a3d8->Unknown13C->FUN_10ac92e0();
}
