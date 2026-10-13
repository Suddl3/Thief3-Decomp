// Game/Unsorted_10C29470.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C29410.h"

double GetTimeSeconds();

extern float DAT_10eafbdc;

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
