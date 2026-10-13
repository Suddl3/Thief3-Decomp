// Game/Unsorted_10C25640.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10C064D0.h"
#include "Game/Class_10C25770.h"

// FUNCTION: 0x10C25770 ?IndexOf@Class_10C25770@@QAEHPAH@Z
int Class_10C25770::IndexOf(int* Value)
{
    for (int i = 0; i < m_Count; i++)
    {
        if (m_Data[i] == *Value)
            return i;
    }
    return -1;
}
