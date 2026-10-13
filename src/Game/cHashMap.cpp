// Game/cHashMap.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C00F60_Node.h"
#include "Game/cHashMap.h"
#include "Game/Class_10C00F60_Field18.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10C00F60 ?Insert@cHashMap@@QAEIABH0@Z
unsigned int cHashMap::Insert(const int& Key, const int& Value)
{
    if (!m_NoResize && m_Collisions > m_BucketCount * 0.2)
        Rehash(m_BucketCount * 2);
    Class_10C00F60_Node* Node = new(0, 0, 0, 0, 0) Class_10C00F60_Node;
    Node->Key = Key;
    Node->Value = Value;
    unsigned int Index = GetBucketIndex(Key);
    if (m_Buckets[Index])
        m_Collisions++;
    Node->Next = m_Buckets[Index];
    m_Buckets[Index] = Node;
    m_Count++;
    return Index;
}

// FUNCTION: 0x10C014C0 ?Remove@cHashMap@@QAE_NABH@Z
bool cHashMap::Remove(const int& Key)
{
    if (!m_NoResize && m_Count < m_BucketCount * 0.05 && m_BucketCount > 64)
        Rehash(m_BucketCount / 2);
    unsigned int Index = GetBucketIndex(Key);
    for (Class_10C00F60_Node* Node = m_Buckets[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
    {
        if (m_KeyCompare.Virtual1(Key, Node->Key) == 0)
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
