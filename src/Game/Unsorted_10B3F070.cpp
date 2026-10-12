// Game/Unsorted_10B3F070.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E7E538.h"
#include "Game/Class_10B54760.h"
#include "Game/Class_10B542D0.h"
#include "Game/cString.h"
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

    void ResetIfPending();
    void Reset();
    void FUN_10b3f280(Class_10B3F830_Arg* A);
    void OnLockPicked(Class_10B3F830_Arg* A);

    char Unknown04[0x48];
    bool m_ResetPending;
    char Pad4D[0x3];
};

extern Struct_10AA3520* DAT_10f35dec;

extern Class_10F3A3D8* DAT_10f3a3d8;

Class_10B542D0* GetLockPickWindowManager();

Class_10A174E0* GetStats();

// FUNCTION: 0x10B3F830 ?OnLockPicked@Class_10B3ED20@@QAEXPAVClass_10B3F830_Arg@@@Z
void Class_10B3ED20::OnLockPicked(Class_10B3F830_Arg* A)
{
    Reset();
    ((Class_10A3C550*)DAT_10f35dec->Unknown94)->Start(cString("LPOpenLock"));
    ((Class_10B54760*)GetLockPickWindowManager())->AdvanceToNext();
    DAT_10f3a3d8->UnknownFC->Unlock(A->Unknown458);
    FUN_10b3f280(A);
    FName Name("sta_lockspicked", FNAME_Add);
    int Count = GetStats()->Virtual0(Name);
    GetStats()->Virtual1(Name.Value, Count + 1);
    {
        FName Total("sta_lockspickedtotal", FNAME_Add);
        Name = Total;
    }
    int TotalCount = GetStats()->Virtual0(Name);
    GetStats()->Virtual1(Name.Value, TotalCount + 1);
}
