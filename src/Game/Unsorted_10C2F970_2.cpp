// Game/Unsorted_10C2F970_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C30D10.h"
#include "Game/Class_10C30D10_Field18.h"
#include "Game/Class_10C30D10_Node.h"
#include "Game/Class_10C30DD0.h"
#include "Game/Class_10C30DD0_Field18.h"
#include "Game/Class_10C30DD0_Node.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x10C30D10 ?Insert@Class_10C30D10@@QAEIABH0@Z
unsigned int Class_10C30D10::Insert(const int& Key, const int& Value)
{
    if (!m_FixedSize && m_Collisions > m_BucketCount * 0.2)
        Rehash(m_BucketCount * 2);
    Class_10C30D10_Node* Node = new(0, 0, 0, 0, 0) Class_10C30D10_Node;
    Node->Key = Key;
    Node->Value = Value;
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

// FUNCTION: 0x10C30DD0 ?FUN_10c30dd0@Class_10C30DD0@@QAEIABH0@Z
unsigned int Class_10C30DD0::FUN_10c30dd0(const int& Key, const int& Value)
{
    if (!Unknown10 && Unknown00 > Unknown0C * 0.2)
        FUN_10c30f60(Unknown0C * 2);
    Class_10C30DD0_Node* Node = new(0, 0, 0, 0, 0) Class_10C30DD0_Node;
    Node->Key = Key;
    Node->Value = Value;
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << Unknown08) - 1);
    }
    if (Unknown14[Index])
        Unknown00++;
    Node->Next = Unknown14[Index];
    Unknown14[Index] = Node;
    Unknown04++;
    return Index;
}

// FUNCTION: 0x10C30E90 ?Rehash@Class_10C30D10@@QAEXH@Z
void Class_10C30D10::Rehash(int Size)
{
    int OldSize = m_BucketCount;
    Class_10C30D10_Node** OldBuckets = m_Buckets;
    m_Buckets = new(0, 0, 0, 0, 0) Class_10C30D10_Node*[Size];
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
        Class_10C30D10_Node* Node = OldBuckets[j];
        while (Node)
        {
            Insert(Node->Key, Node->Value);
            Class_10C30D10_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}

// FUNCTION: 0x10C30F60 ?FUN_10c30f60@Class_10C30DD0@@QAEXH@Z
void Class_10C30DD0::FUN_10c30f60(int Size)
{
    int OldSize = Unknown0C;
    Class_10C30DD0_Node** OldBuckets = Unknown14;
    Unknown14 = new(0, 0, 0, 0, 0) Class_10C30DD0_Node*[Size];
    Unknown0C = Size;
    Unknown08 = 0;
    while (Size >>= 1)
        Unknown08++;
    Unknown04 = 0;
    Unknown00 = 0;
    for (int i = 0; i < Unknown0C; i++)
        Unknown14[i] = 0;
    for (int j = 0; j < OldSize; j++)
    {
        Class_10C30DD0_Node* Node = OldBuckets[j];
        while (Node)
        {
            FUN_10c30dd0(Node->Key, Node->Value);
            Class_10C30DD0_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}
