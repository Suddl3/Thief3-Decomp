// Game/cStateMeleeCombat_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AAF570.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_1098E330.h"

int FUN_10af3a20();

class Class_10BF6C70_Unknown04
{
public:
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

class cStateMeleeCombat
{
public:
    int FUN_10bf6c70();

    char Unknown00[4];
    Class_10BF6C70_Unknown04* Unknown04;
};

// FUNCTION: 0x10BF6C70 ?FUN_10bf6c70@cStateMeleeCombat@@QAEHXZ
int cStateMeleeCombat::FUN_10bf6c70()
{
    int A = 0;
    int B = 0;
    Class_10C7D570* Obj = Unknown04->Unknown08;
    if (((Class_1098E330*)((Class_10AAF570*)Obj->FUN_10dbd510())->GetLinkType())->FUN_1098e330(0x2007bf, &A))
    {
        Obj = Unknown04->Unknown08;
        if (((Class_1098E330*)((Class_10AAF570*)Obj->FUN_10dbd510())->GetLinkType())->FUN_1098e330(0x2007c0, &B))
        {
            if (A - B + 1 > 0)
                return FUN_10af3a20() % (A - B + 1) + B;
        }
    }
    return 1;
}
