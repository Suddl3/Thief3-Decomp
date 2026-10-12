// Game/Unsorted_10C49AB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <list>
#include "Game/Class_10C49E20.h"

// FUNCTION: 0x10C49E20 ?AllocateId@Class_10C49E20@@QAEHXZ
int Class_10C49E20::AllocateId()
{
    if (!m_FreeIds.empty())
    {
        int Value = m_FreeIds.front();
        m_FreeIds.pop_front();
        return Value;
    }
    return ++m_NextId - 1;
}
