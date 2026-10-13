// Game/cRagdollBlockData.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E89384.h"
#include "Game/Class_10b888d0_Entry.h"
#include "Game/Class_Unknown00.h"
#include "Game/Struct_10B87560.h"
#include "Game/Struct_10B88840.h"
#include "Game/cRagdollBlockData.h"
#include "Game/Class_10B888D0.h"
#include "Game/Class_10B888E0.h"

// FUNCTION: 0x10B88840 ?Reset@cRagdollBlockData@@QAEPAV1@XZ
cRagdollBlockData* cRagdollBlockData::Reset()
{
    Unknown30 = false;
    for (int i = 0; i < 4; i++)
    {
        Unknown00[i].Unknown00 = 0;
        Unknown00[i].Unknown04 = 0;
        Unknown00[i].Unknown08 = false;
    }
    return this;
}
