// Game/Unsorted_10A243F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A243F0.h"
#include "Game/Class_10A24540.h"
#include "Game/Class_10A250D0_Field18.h"
#include "Game/cString.h"
#include "Game/Class_10A250D0.h"
#include "Game/Class_10A250D0_Node.h"

// FUNCTION: 0x10A24540 ?ReplaceChar@Class_10A24540@@QAEXDD@Z
void Class_10A24540::ReplaceChar(char Old, char New)
{
    for (int i = 0; i < (m_Chars == 0 ? 0 : ((int*)m_Chars)[-1]); i++)
    {
        if (m_Chars[i] == Old)
            m_Chars[i] = New;
    }
}
