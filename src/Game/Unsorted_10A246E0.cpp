// Game/Unsorted_10A246E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// The placement delete that pairs with Ion Storm's new.
#include "Game/Class_109081E0.h"
#include "Game/Class_10A250D0.h"
#include "Game/Class_10A250D0_Node.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x10A250D0 ?Insert@Class_10A250D0@@QAEIABVClass_109081E0@@0@Z
unsigned int Class_10A250D0::Insert(const Class_109081E0& Key, const Class_109081E0& Value)
{
    if (!m_FixedSize && m_Collisions > m_BucketCount * 0.2)
        Rehash(m_BucketCount * 2);
    Class_10A250D0_Node* Node = new(0, 0, 0, 0, 0) Class_10A250D0_Node;
    Node->Unknown00 = Key;
    Node->Unknown04 = Value;
    unsigned int Index;
    {
        const void* Data;
        int Length;
        m_KeyTraits.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << m_BucketBits) - 1);
    }
    if (m_Buckets[Index])
        m_Collisions++;
    Node->Next = m_Buckets[Index];
    m_Buckets[Index] = Node;
    m_Count++;
    return Index;
}
