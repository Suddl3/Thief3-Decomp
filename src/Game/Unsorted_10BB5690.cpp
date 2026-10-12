// Game/Unsorted_10BB5690.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10953AC0.h"
#include "Game/Item_10953AC0.h"

// FUNCTION: 0x10BB5810 ?CopyFrom@Class_10953AC0@@QAEXABV1@@Z
void Class_10953AC0::CopyFrom(const Class_10953AC0& Other)
{
    Resize(Other.m_Count);
    for (int i = 0; i < m_Count; i++)
        m_Items[i] = Other.m_Items[i];
}
