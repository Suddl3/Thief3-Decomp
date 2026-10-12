// Game/Unsorted_10930A80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/ListPool.h"
#include "Game/Node_10932350.h"

// FUNCTION: 0x10932350 ?Remove@ListPool@@QAEXPAUNode_10932350@@@Z
void ListPool::Remove(Node_10932350* Node)
{
    if (!Node->m_Prev)
        m_Head = Node->m_Next;
    else
        Node->m_Prev->m_Next = Node->m_Next;
    if (!Node->m_Next)
        m_Tail = Node->m_Prev;
    else
        Node->m_Next->m_Prev = Node->m_Prev;
    m_Count--;
}
