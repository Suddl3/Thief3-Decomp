// Game/MC_MoveToPoint.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C271A0.h"
#include "Game/MC_MoveToPoint.h"
#include "Game/FArchive.h"
#include "Game/Class_10C26980.h"
#include "Game/Class_10C26E80.h"
#include "Game/cPositionList.h"
#include "Game/Struct_10C26A60.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* V);

// FUNCTION: 0x10C27090 ?IsCurrent@MC_MoveToPoint@@UAE_NH@Z
bool MC_MoveToPoint::IsCurrent(int A)
{
    if (!Unknown48)
        return false;
    return Unknown48->GetCurrent(A);
}

// FUNCTION: 0x10C2EB90 ?FUN_10c2eb90@MC_MoveToPoint@@UAEXAAVFArchive@@@Z
void MC_MoveToPoint::FUN_10c2eb90(FArchive& Ar)
{
    FUN_10c271a0(Ar);
    FUN_10b052a0(Ar, m_Point);
}
