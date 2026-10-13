// Game/Class_10A250D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A243F0.h"
#include "Game/Class_10A24540.h"
#include "Game/Class_10A250D0_Field18.h"
#include "Game/cString.h"
#include "Game/Class_10A250D0.h"
#include "Game/Class_10A250D0_Node.h"
#include "Game/Class_10A25040.h"
#include "Game/Class_10A25040_Unknown18.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x10A250D0 ?Insert@Class_10A250D0@@QAEIABVcString@@0@Z
unsigned int Class_10A250D0::Insert(const cString& Key, const cString& Value)
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

// FUNCTION: 0x10A251B0 ?Rehash@Class_10A250D0@@QAEXH@Z
void Class_10A250D0::Rehash(int Size)
{
    int OldSize = m_BucketCount;
    Class_10A250D0_Node** OldBuckets = m_Buckets;
    m_Buckets = new(0, 0, 0, 0, 0) Class_10A250D0_Node*[Size];
    m_BucketCount = Size;
    m_BucketBits = 0;
    while (Size >>= 1)
        m_BucketBits++;
    m_Count = 0;
    m_Collisions = 0;
    for (int i = 0; i < m_BucketCount; i++)
        m_Buckets[i] = 0;
    for (int j = 0; j < OldSize; j++)
    {
        Class_10A250D0_Node* Node = OldBuckets[j];
        while (Node)
        {
            Insert(Node->Unknown00, Node->Unknown04);
            Class_10A250D0_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}

// FUNCTION: 0x10A26430 ?Set@Class_10A250D0@@QAEIABVcString@@0@Z
unsigned int Class_10A250D0::Set(const cString& Key, const cString& Value)
{
    unsigned int Index;
    {
        const void* Data;
        int Length;
        m_KeyTraits.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << m_BucketBits) - 1);
    }
    if (!m_Buckets)
        return (unsigned int)-1;
    for (Class_10A250D0_Node* Node = m_Buckets[Index]; Node; Node = Node->Next)
    {
        if (m_KeyTraits.Virtual1(Key, Node->Unknown00) == 0)
        {
            Node->Unknown04 = Value;
            return Index;
        }
    }
    return Insert(Key, Value);
}
