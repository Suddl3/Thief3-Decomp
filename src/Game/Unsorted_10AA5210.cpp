// Game/Unsorted_10AA5210.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA52C0.h"
#include "Game/SwooshPointTracker.h"

// FUNCTION: 0x10AA52C0 ?FUN_10aa52c0@Class_10AA52C0@@QAEXXZ
void Class_10AA52C0::FUN_10aa52c0()
{
    FUN_10aa5250(0);
    FUN_10aa5240();
}

// FUNCTION: 0x10AA5360 ?RemoveFront@SwooshPointTracker@@UAEXH@Z
void SwooshPointTracker::RemoveFront(int A)
{
    m_Head = (m_Head + A) % m_Capacity;
    m_Count -= A;
}
