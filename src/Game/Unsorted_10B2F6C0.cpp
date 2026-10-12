// Game/Unsorted_10B2F6C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10B2F6A0.h"

// FUNCTION: 0x10B2F6C0 ?SetName@Class_10B2F6A0@@QAEXABVClass_109081E0@@@Z
void Class_10B2F6A0::SetName(const Class_109081E0& Name)
{
    if (m_Label)
    {
        m_Name = Name;
        RefreshLabel();
    }
}
