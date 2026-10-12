// Game/Unsorted_10A52BE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A52BE0.h"

// FUNCTION: 0x10A52BE0 ?FUN_10a52be0@Class_10A52BE0@@UAEX_N@Z
void Class_10A52BE0::FUN_10a52be0(bool Param)
{
    if (Param && Virtual54())
    {
        for (int i = 0; i < m_ChildCount; i++)
            m_Children[i]->FUN_10a52be0(Param);
    }
}
