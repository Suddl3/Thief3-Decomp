// Game/Unsorted_10ABB4E0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10ABB580.h"

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10ABB580 ?Free@Class_10ABB580@@QAEXXZ
void Class_10ABB580::Free()
{
    Resize(0);
    if (m_AllocBytes)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        m_AllocBytes = 0;
    }
}
