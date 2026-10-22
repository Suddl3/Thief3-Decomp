// Game/StateEligibility.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBB410.h"
#include "Game/Class_10BFF460.h"
#include "Game/Class_10BFD210.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10BB7F20.h"

class Class_10BC40E0_Owner
{
public:
    char Unknown00[8];
    Class_10C7D570* Unknown08;
    char Unknown0C[0x24];
    Class_10BFD210 Unknown30;
};

// The same native prefix used by matched Class_10E8BE68 units: vptr, owner.
class Class_10E8BE68
{
public:
    virtual void Virtual0();
    bool FUN_10bc40e0();
    Class_10BC40E0_Owner* Unknown04;
};

// FUNCTION: 0x10BC40E0 ?FUN_10bc40e0@Class_10E8BE68@@QAE_NXZ
bool Class_10E8BE68::FUN_10bc40e0()
{
    Class_10BC40E0_Owner* Owner = Unknown04;
    Class_10BFF460* Current = ((Class_10BBB410*)Owner)->GetCurrent();
    if (Current && !Current->FUN_10bff460())
        return false;
    float Level = Owner->Unknown30.FUN_10bfc3a0();
    Class_10BBDB40* Properties = Unknown04->Unknown08->FUN_10dbd510();
    if (Properties->GetFloat(0x40100243) < Level)
        return true;
    if (Properties->GetFloat(0x40100242) < Level && !((Class_10BB7F20*)Unknown04)->FUN_10bb7f20())
        return true;
    return false;
}
