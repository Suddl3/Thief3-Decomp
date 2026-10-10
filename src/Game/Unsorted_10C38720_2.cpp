// Game/Unsorted_10C38720_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C0A9A0.h"
#include "Game/Class_10C38E40.h"
#include "Game/Class_10C38EB0_Member.h"
#include "Game/Class_10C7D570.h"

class Class_10FF667C
{
public:
    char Unknown00[0x1C];
    Class_10C0A9A0* Unknown1C;
};

extern Class_10FF667C* DAT_10ff667c;

// FUNCTION: 0x10C38E40 ?FUN_10c38e40@Class_10C38E40@@QAEXH@Z
void Class_10C38E40::FUN_10c38e40(int A)
{
    if (Unknown106)
    {
        void* X = Unknown48->Virtual34()->FUN_10c7d570();
        DAT_10ff667c->Unknown1C->FUN_10c0a9a0(X);
    }
    else
    {
        Unknown106 = true;
    }
    void* Y = Unknown48->Virtual34()->FUN_10c7d570();
    DAT_10ff667c->Unknown1C->FUN_10c09f50(DAT_10ff667c->Unknown1C->FUN_10c099a0(A), Y);
}
