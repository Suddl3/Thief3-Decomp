// Game/State_FrobAlarm.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/State_FrobAlarm.h"
#include "Game/cString.h"
#include "Game/Class_10BB8300.h"
#include "Game/Class_10BDAF90.h"
#include "Game/Class_10BDF6F0.h"
#include "Game/Class_10BE40A0.h"
#include "Game/Class_10BE40B0.h"
#include "Game/Class_10BE4FA0.h"
#include "Game/cTacticMoveToPoint.h"
#include "Game/FArchive.h"
#include "Game/Struct_10BDF0A0.h"
#include "Game/Class_10BDF0A0.h"
#include "Game/Class_10E95F40.h"
#include "Game/Class_10E960D8.h"
#include "Game/cYellowAlert.h"
#include "Game/Class_10E96810.h"
#include "Game/Class_10E97B00.h"

void __stdcall FUN_109e3c90(int A);

void FUN_10bc6a80();

extern void* DAT_10e95be8[];

void FUN_10bc6a80(void);

// FUNCTION: 0x10BE2E20 ?FUN_10be2e20@State_FrobAlarm@@QAEXXZ
void State_FrobAlarm::FUN_10be2e20()
{
    *(void**)this = (void*)DAT_10e95be8;
    FUN_10bc6a80();
}

// FUNCTION: 0x10BE2E30 ?FUN_10be2e30@State_FrobAlarm@@UAEXH@Z
void State_FrobAlarm::FUN_10be2e30(int A)
{
    FUN_109e3c90(A);
    if (Unknown40 == A)
        Unknown40 = 0;
}
