// Game/Unsorted_10C27100.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C27100.h"
#include "Game/cPositionList.h"
#include "Game/Class_10E93B5C.h"

// FUNCTION: 0x10C27100 ?Update@Class_10C27100@@QAEXXZ
void Class_10C27100::Update()
{
    if (m_Child && !m_Child->FUN_10c3c2c0(0))
    {
        if (m_Child)
        {
            delete m_Child;
            m_Child = 0;
        }
        m_Active = false;
        m_Finished = true;
    }
}
