// Game/Unsorted_10B8B640.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E895D0.h"
#include "Game/Class_10D9FEE0.h"

class Class_10B8B9F0_Unknown10
{
public:
    char Unknown00[0xC];
    Class_10D9FEE0* Unknown0C;
    Class_10D9FEE0* Unknown10;
};

// FUNCTION: 0x10B8B640 ?FUN_10b8b640@Class_10B8B830@@QAE_NXZ
bool Class_10E895D0::FUN_10b8b640()
{
    Class_10B8B9F0_Unknown10* Controller = m_Controller;
    if (!Controller)
        return false;
    if (Controller->Unknown0C != Controller->Unknown10)
    {
        if (!Controller->Unknown0C->FUN_10d9feb0())
            return false;
    }
    return true;
}
