// Game/Unsorted_10C38720_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C0A9A0.h"
#include "Game/Class_10C38EB0.h"
#include "Game/Class_10C38EB0_Member.h"
#include "Game/Class_10C7D570.h"

class Class_10FF667C
{
public:
    char Unknown00[0x1C];
    Class_10C0A9A0* Unknown1C;
};

extern Class_10FF667C* DAT_10ff667c;

// FUNCTION: 0x10C38EB0 ?RebindHandle@Class_10C38EB0@@QAEXH@Z
void Class_10C38EB0::RebindHandle(int A)
{
    if (m_HasHandle)
    {
        void* X = Unknown48->Virtual34()->FUN_10c7d570();
        DAT_10ff667c->Unknown1C->RemoveFromAll(X);
    }
    else
    {
        m_HasHandle = true;
    }
    void* Y = Unknown48->Virtual34()->FUN_10c7d570();
    DAT_10ff667c->Unknown1C->FUN_10c09f50(A, Y);
}
