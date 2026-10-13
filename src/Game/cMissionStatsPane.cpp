// Game/cMissionStatsPane.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B78780.h"
#include "Game/cMissionStatsPane.h"

extern void* DAT_10e84d80[];

// FUNCTION: 0x10B67180 ?FUN_10b67180@cMissionStatsPane@@QAEPAV1@XZ
cMissionStatsPane* cMissionStatsPane::FUN_10b67180()
{
    FUN_10b78780();
    Unknown00 = DAT_10e84d80;
    return this;
}
