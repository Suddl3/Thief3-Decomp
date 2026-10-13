// Game/Class_10B91800.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B912E0.h"
#include "Game/Class_10B91800.h"
#include "Game/Class_10DAAF90.h"
#include "Game/Class_10905A90_Member.h"

// FUNCTION: 0x10B91320 ?CopyFrom@Class_10B91800@@QAEXH@Z
void Class_10B91800::CopyFrom(int A)
{
    Class_10B91800* Other = (Class_10B91800*)A;
    FUN_10b90980(Other->m_Count);
    for (int i = 0; i < m_Count; i++)
        m_Elements[i].FUN_10daaf90(&Other->m_Elements[i]);
}

// FUNCTION: 0x10B91800 ?Assign@Class_10B91800@@QAEPAV1@H@Z
Class_10B91800* Class_10B91800::Assign(int A)
{
    Unknown04 = 0;
    m_Count = 0;
    m_Elements = 0;
    CopyFrom(A);
    return this;
}
