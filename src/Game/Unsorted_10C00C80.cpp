// Game/Unsorted_10C00C80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C00F30.h"
#include "Game/cHashMap.h"
#include "Game/Class_10C00F60_Field18.h"
#include "Game/Class_10C00F60_Node.h"
#include "Game/Class_10C01140.h"
#include "Game/Class_10C01140_Field18.h"
#include "Game/Class_10C01140_Node.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

struct Struct_10C00F30
{
    char Unknown00[0xC];
    int Unknown0C;
};

// FUNCTION: 0x10C00F30 ?ClearMatching@Class_10C00F30@@QAEXH@Z
void Class_10C00F30::ClearMatching(int A)
{
    for (int i = 0; i < m_Count; i++)
    {
        Struct_10C00F30* Entry = m_Entries[i];
        if (Entry->Unknown0C == A)
            Entry->Unknown0C = 0;
    }
}

// FUNCTION: 0x10C01140 ?Insert@Class_10C01140@@QAEIABH0@Z
unsigned int Class_10C01140::Insert(const int& Key, const int& Value)
{
    if (!Unknown10 && Unknown00 > Unknown0C * 0.2)
        Rehash(Unknown0C * 2);
    Class_10C01140_Node* Node = new(0, 0, 0, 0, 0) Class_10C01140_Node;
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

// FUNCTION: 0x10C01200 ?Rehash@cHashMap@@QAEXH@Z
void cHashMap::Rehash(int Size)
{
    int OldSize = m_BucketCount;
    Class_10C00F60_Node** OldBuckets = m_Buckets;
    m_Buckets = new(0, 0, 0, 0, 0) Class_10C00F60_Node*[Size];
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
        Class_10C00F60_Node* Node = OldBuckets[j];
        while (Node)
        {
            Insert(Node->Key, Node->Value);
            Class_10C00F60_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}

// FUNCTION: 0x10C012D0 ?Rehash@Class_10C01140@@QAEXH@Z
void Class_10C01140::Rehash(int Size)
{
    int OldSize = Unknown0C;
    Class_10C01140_Node** OldBuckets = Unknown14;
    Unknown14 = new(0, 0, 0, 0, 0) Class_10C01140_Node*[Size];
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
        Class_10C01140_Node* Node = OldBuckets[j];
        while (Node)
        {
            Insert(Node->Key, Node->Value);
            Class_10C01140_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    delete OldBuckets;
}
