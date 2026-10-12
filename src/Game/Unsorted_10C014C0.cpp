// Game/Unsorted_10C014C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C00F60_Node.h"
#include "Game/Class_10C00F60.h"
#include "Game/Class_10C00F60_Field18.h"

// FUNCTION: 0x10C014C0 ?Remove@Class_10C00F60@@QAE_NABH@Z
bool Class_10C00F60::Remove(const int& Key)
{
    if (!m_NoResize && m_Count < m_BucketCount * 0.05 && m_BucketCount > 64)
        Rehash(m_BucketCount / 2);
    unsigned int Index = FUN_10c00b40(Key);
    for (Class_10C00F60_Node* Node = m_Buckets[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
    {
        if (m_KeyCompare.Virtual1(Key, Node->Key) == 0)
        {
            if (Prev || Node->Next)
                Unknown00--;
            if (!Prev)
                m_Buckets[Index] = Node->Next;
            else
                Prev->Next = Node->Next;
            m_Count--;
            delete Node;
            return true;
        }
    }
    return false;
}
