// Game/cConversationManager_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cConversationManager.h"
#include "Game/Class_10E5D548_Unknown10.h"

// FUNCTION: 0x10A13090 ?FUN_10a13090@cConversationManager@@UAEHH@Z
int cConversationManager::FUN_10a13090(int Param)
{
    for (int i = 0; i < m_ChildCount; i++)
        m_Children[i]->Virtual29(Param);
    return 1;
}
