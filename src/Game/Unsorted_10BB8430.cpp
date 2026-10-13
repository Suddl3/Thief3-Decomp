// Game/Unsorted_10BB8430.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BB8480.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10DBD510.h"
#include "Game/cRandomInterval.h"
#include "Game/SoundSchema.h"

double GetTimeSeconds();

// FUNCTION: 0x10BB8480 ?IsTimeUp@Class_10BB8480@@QAE_NXZ
bool Class_10BB8480::IsTimeUp()
{
    if (GetTimeSeconds() > m_EndTime)
        return true;
    return false;
}
