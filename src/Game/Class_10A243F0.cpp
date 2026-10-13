// Game/Class_10A243F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A243F0.h"
#include "Game/Class_10A24540.h"
#include "Game/Class_10A250D0_Field18.h"
#include "Game/cString.h"
#include "Game/Class_10A250D0.h"
#include "Game/Class_10A250D0_Node.h"

// FUNCTION: 0x10A24580 ?Free@Class_10A243F0@@QAEXXZ
void Class_10A243F0::Free()
{
    Resize(0);
    if (m_BufferBytes)
    {
        GetAllocator()->Virtual5(m_Buffer);
        m_Buffer = 0;
        m_BufferBytes = 0;
    }
}
