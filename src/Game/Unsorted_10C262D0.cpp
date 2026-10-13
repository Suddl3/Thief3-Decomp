// Game/Unsorted_10C262D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C262D0.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10E99298.h"

// FUNCTION: 0x10C262D0 ?SetActive@Class_10C262D0@@QAEX_N@Z
void Class_10C262D0::SetActive(bool A)
{
    if (A == true)
    {
        if (!m_Active)
        {
            m_Active = true;
            Virtual6();
        }
    }
    else if (!A)
    {
        if (m_Active == true)
        {
            Virtual7();
            m_Active = false;
        }
    }
}
