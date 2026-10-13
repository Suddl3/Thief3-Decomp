// Game/Class_10E98FD8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E98FD8.h"
#include "Game/FArchive.h"
#include "Game/Object_10BFBD00.h"
#include "Game/Class_10E98D08.h"

extern float DAT_10eafbdc;

extern float DAT_10e8d904;

class Class_10FF667C
{
public:
    char Unknown00[0x18];
    Object_10BFBD00* Unknown18;
};

extern Class_10FF667C* DAT_10ff667c;

// FUNCTION: 0x10C1ADC0 ?FUN_10c1adc0@Class_10E98FD8@@UAEXPAX@Z
void Class_10E98FD8::FUN_10c1adc0(void* p1)
{
    if (p1 == Unknown4c)
        Unknown4c = 0;
}

// FUNCTION: 0x10C1B750 ?FUN_10c1b750@Class_10E98FD8@@UAE_NPAV1@@Z
bool Class_10E98FD8::FUN_10c1b750(Class_10E98FD8* A)
{
    if (A->Unknown04 == Unknown04)
    {
        float Diff = A->Unknown48 - Unknown48;
        if (!(Diff >= DAT_10eafbdc))
            Diff = -Diff;
        if (Diff < DAT_10e8d904)
            return true;
    }
    return false;
}

// FUNCTION: 0x10C1B790 ?Serialize@Class_10E98FD8@@UAEXAAVFArchive@@@Z
void Class_10E98FD8::Serialize(FArchive& Ar)
{
    FUN_10c1b1a0(Ar);
    Ar.Serialize(&Unknown48, 4);
    if (Ar.Unknown0C >= 0x6a)
        DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown4C);
}
