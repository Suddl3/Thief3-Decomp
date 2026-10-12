// Game/Unsorted_10C29020_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10971570.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10BBA080.h"
#include "Game/Class_10C29410.h"

class Class_10DBD510;

class Class_10C292E0
{
public:
    void FUN_10c292e0(int Id, double Value);
};

double GetTimeSeconds();

// FUNCTION: 0x10C29380 ?Start@Class_10C29410@@QAEXH@Z
void Class_10C29410::Start(int Value)
{
    double Scale = Unknown00->GetRandomInRange();
    m_EndTime = GetTimeSeconds() + Scale;
    float Local = 0.0f;
    ((Class_1098E330*)Value)->FUN_1098e330(0x100790, (int*)&Local);
    ((Class_10C292E0*)Value)->FUN_10c292e0(0x40100781, GetTimeSeconds() + Local);
    Unknown1C = Unknown00->RollChance();
    if (!Unknown1C)
        ((Class_10971570*)Value)->FUN_10971570(0x4200077e, &Unknown1D);
    Unknown20 = 0;
}
