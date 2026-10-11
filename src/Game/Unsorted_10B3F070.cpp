// Game/Unsorted_10B3F070.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E7E538.h"
#include "Game/Class_10B54760.h"
#include "Game/Class_10B542D0.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10A174E0.h"
#include "Game/Class_1098E3D0.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Class_10F3A3D8.h"
#include "Core/Core.h"
#include "Game/Class_10A3C550.h"
#include "Game/Class_10ACF3A0.h"

class Class_10B3F830_Arg
{
public:
    char Pad00[0x458];
    Class_1098E3D0* Unknown458;
};

class Class_10B3ED20 : public Class_10E7E538
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();

    void FUN_10b3ed20();
    void FUN_10b3ea80();
    void FUN_10b3f280(Class_10B3F830_Arg* A);
    void FUN_10b3f830(Class_10B3F830_Arg* A);

    char Unknown04[0x48];
    bool Unknown4C;
    char Pad4D[0x3];
};

extern Struct_10AA3520* DAT_10f35dec;

extern Class_10F3A3D8* DAT_10f3a3d8;

Class_10B542D0* FUN_10b546f0();

Class_10A174E0* FUN_10a18230();

// FUNCTION: 0x10B3F830 ?FUN_10b3f830@Class_10B3ED20@@QAEXPAVClass_10B3F830_Arg@@@Z
void Class_10B3ED20::FUN_10b3f830(Class_10B3F830_Arg* A)
{
    FUN_10b3ea80();
    ((Class_10A3C550*)DAT_10f35dec->Unknown94)->FUN_10a3c550(Class_109081E0("LPOpenLock"));
    ((Class_10B54760*)FUN_10b546f0())->FUN_10b54760();
    DAT_10f3a3d8->UnknownFC->FUN_10acffa0(A->Unknown458);
    FUN_10b3f280(A);
    FName Name("sta_lockspicked", FNAME_Add);
    int Count = FUN_10a18230()->Virtual0(Name);
    FUN_10a18230()->Virtual1(Name.Value, Count + 1);
    {
        FName Total("sta_lockspickedtotal", FNAME_Add);
        Name = Total;
    }
    int TotalCount = FUN_10a18230()->Virtual0(Name);
    FUN_10a18230()->Virtual1(Name.Value, TotalCount + 1);
}
