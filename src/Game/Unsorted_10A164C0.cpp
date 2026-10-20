// Game/Unsorted_10A164C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A15C30.h"
#include "Game/Class_10A15C30_Field18.h"
#include "Game/Class_10A15C30_Node.h"

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x10A164C0 ?Remove@Class_10A15C30@@QAE_NPAH@Z
bool Class_10A15C30::Remove(int* Key)
{
    if (!m_NoResize && m_Count < m_BucketCount * 0.05 && m_BucketCount > 64)
        Rehash(m_BucketCount / 2);
    unsigned int Index;
    {
        const void* Data;
        int Length;
        m_KeyCompare.Virtual0(*Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << m_BucketBits) - 1);
    }
    for (Class_10A15C30_Node* Node = m_Buckets[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
    {
        if (m_KeyCompare.Virtual1(*Key, Node->Key) == 0)
        {
            if (Prev || Node->Next)
                m_Collisions--;
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
