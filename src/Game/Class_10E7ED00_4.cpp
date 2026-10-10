// Game/Class_10E7ED00_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1098E3D0.h"
#include "Game/Class_10A3C2E0.h"
#include "Game/Class_10E7E6A0.h"
#include "Game/Struct_10AA3520.h"

class AGarrett;

extern Struct_10AA3520* DAT_10f35dec;

void FUN_10b54790();

class AGarrett
{
public:
    char Unknown00[0x450];
    unsigned bInBowDraw : 1;
    unsigned isCrouching : 1;
    unsigned CanDoItemSearch : 1;
    unsigned CanUseItems : 1;
    unsigned bUpdatePhysHeight : 1;
    char Unknown454[4];
    Class_1098E3D0* Unknown458;
};

class Class_10E7ED00 : public Class_10E7E6A0
{
public:
    virtual void FUN_10b3f000(AGarrett* Garrett);
};

// FUNCTION: 0x10B3F000 ?FUN_10b3f000@Class_10E7ED00@@UAEXPAVAGarrett@@@Z
void Class_10E7ED00::FUN_10b3f000(AGarrett* Garrett)
{
    DAT_10f35dec->Unknown94->FUN_10a3c2e0();
    FUN_10b3ed30(Garrett);
    FUN_10b3ae90(Garrett);
    FUN_10b3adc0(Garrett);
    Garrett->CanUseItems = 1;
    {
        int Value = 0;
        Garrett->Unknown458->FUN_1098e3d0(0x8007cc, &Value);
    }
    FUN_10b54790();
    FUN_10b3b130(Garrett);
}
