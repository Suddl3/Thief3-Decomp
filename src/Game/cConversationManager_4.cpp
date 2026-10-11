// Game/cConversationManager_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cConversationManager.h"
#include "Game/Struct_10A13110.h"

class Class_10A80E60;

// FUNCTION: 0x10A13110 ?FindEntryByKey@cConversationManager@@UAEPAUStruct_10A13110@@H@Z
Struct_10A13110* cConversationManager::FindEntryByKey(int Key)
{
    for (int i = 0; i < m_EntryCount; i++)
    {
        if (m_Entries[i].Unknown00 == Key)
            return &m_Entries[i];
    }
    return 0;
}
