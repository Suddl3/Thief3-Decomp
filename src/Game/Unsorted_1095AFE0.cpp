// Game/Unsorted_1095AFE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1095AFE0.h"
#include "Game/Class_1095B040.h"
#include "Game/Class_1095B070.h"
#include "Game/TimeManager.h"

double FUN_1095af80();

void FUN_1092bdb0(void* Block);

struct Struct_1095AFE0_Unknown04 {};

struct Struct_1095AFE0_Unknown08 {};

// FUNCTION: 0x1095AFE0 ?Clear@Class_1095AFE0@@QAEXXZ
void Class_1095AFE0::Clear()
{
    for (int i = 0; i < Unknown0C; i++)
        FUN_1092bdb0(Unknown08[i]);
    if (Unknown04)
        delete Unknown04;
    if (Unknown08)
        delete Unknown08;
    Unknown0C = 0;
    Unknown04 = 0;
    Unknown08 = 0;
}

// FUNCTION: 0x1095B040 ?UpdateTime@Class_1095B040@@QAEXH@Z
void Class_1095B040::UpdateTime(int A)
{
    if (TimeManager::Instance()->IsPaused())
        m_Time = FUN_1095af80();
    else
        m_Time = TimeManager::Instance()->GetGameTime();
}

// FUNCTION: 0x1095B070 ?PickEntry@Class_1095B070@@QAEHXZ
int Class_1095B070::PickEntry()
{
    if (!Unknown08)
        return 0;
    return Unknown08[(int)(m_Rate * Unknown00) % Unknown0C];
}
