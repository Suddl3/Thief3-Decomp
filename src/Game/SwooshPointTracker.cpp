// Game/SwooshPointTracker.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/SwooshPointTracker.h"

struct Entry_10AA5390
{
    char Unknown00[0x1C];
};

// FUNCTION: 0x10AA5390 ?AddPoint@SwooshPointTracker@@UAEXABUEntry_10AA5390@@@Z
void SwooshPointTracker::AddPoint(const Entry_10AA5390& Item)
{
    if (m_Count == m_Capacity)
        RemoveFront(1);
    ((Entry_10AA5390*)m_Points)[(m_Head + m_Count) % m_Capacity] = Item;
    m_Count++;
}
