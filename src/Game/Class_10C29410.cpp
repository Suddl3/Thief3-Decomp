// Game/Class_10C29410.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10971570.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10BBA080.h"
#include "Game/Class_10C29410.h"

class Class_10C292E0
{
public:
    void FUN_10c292e0(int Id, double Value);
};

double GetTimeSeconds();

extern float DAT_10eafbdc;

// FUNCTION: 0x10C29380 ?Start@Class_10C29410@@QAEXH@Z
void Class_10C29410::Start(int Value)
{
    double Scale = m_Random->GetRandomInRange();
    m_EndTime = GetTimeSeconds() + Scale;
    float Local = 0.0f;
    ((Class_1098E330*)Value)->FUN_1098e330(0x100790, (int*)&Local);
    ((Class_10C292E0*)Value)->FUN_10c292e0(0x40100781, GetTimeSeconds() + Local);
    Unknown1C = m_Random->RollChance();
    if (!Unknown1C)
        ((Class_10971570*)Value)->FUN_10971570(0x4200077e, &Unknown1D);
    Unknown20 = 0;
}

// FUNCTION: 0x10C294D0 ?Update@Class_10C29410@@QAEXXZ
void Class_10C29410::Update()
{
    if (m_Queue.Count > 0 && GetTimeSeconds() > m_EndTime && !(Unknown20 > DAT_10eafbdc))
    {
        cIntArray& Queue = m_Queue;
        int Index = Queue.Count - 1;
        int Front = Queue.Data[0];
        int Last = Queue.Data[Index];
        Queue.Data[0] = Last;
        Queue.Data[Index] = Front;
        Queue.SetCount(Queue.Count - 1);
        if (m_Queue.Count > 0)
            Start(m_Queue.Data[0]);
    }
}
