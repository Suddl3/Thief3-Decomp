// Game/Unsorted_10BB7F90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BB8070.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10BFD210.h"
#include "Game/Class_10DBD510.h"
#include "Game/cRandomInterval.h"

extern float DAT_10eafbdc;

float appFrand();

// FUNCTION: 0x10BB7F90 ?RollInterval@cRandomInterval@@QAEXXZ
void cRandomInterval::RollInterval()
{
    float Min = m_Schema->FUN_10dbd510(0x100251)->GetFloat();
    float Max = m_Schema->FUN_10dbd510(0x100252)->GetFloat();
    m_Interval = Min + (Max - Min) * appFrand();
    m_Roll = appFrand();
}

// FUNCTION: 0x10BB8070 ?FUN_10bb8070@Class_10BB8070@@QAE_NXZ
bool Class_10BB8070::FUN_10bb8070()
{
    float L = Unknown30.FUN_10bfc3a0();
    float V = Unknown08->FUN_10dbd510(0x40100242)->GetFloat();
    if (V < L)
        return false;
    if (Unknown298 < DAT_10eafbdc)
        return true;
    return false;
}
