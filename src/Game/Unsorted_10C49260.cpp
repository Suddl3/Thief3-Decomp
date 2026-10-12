// Game/Unsorted_10C49260.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10C49100.h"
#include "Game/Class_10C49100_Field18.h"
#include "Game/Class_10C49100_Node.h"
#include "Game/Class_10D3F830.h"
#include "Game/Class_10E9BB8C.h"
#include "Game/Class_10E9BBC0.h"

struct Struct_10C49860
{
    int Unknown00;
    int Unknown04;
};

int FUN_10c48c80(int A);

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x10C49260 ?Rehash@Class_10C49100@@QAEXH@Z
void Class_10C49100::Rehash(int Size)
{
    int OldSize = m_BucketCount;
    Class_10C49100_Node** OldBuckets = m_Buckets;
    m_Buckets = new(0, 0, 0, 0, 0) Class_10C49100_Node*[Size];
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
        Class_10C49100_Node* Node = OldBuckets[j];
        while (Node)
        {
            Insert(Node->Key, Node->Value);
            Class_10C49100_Node* Next = Node->Next;
            Node->Key.~cString();
            ::operator delete(Node);
            Node = Next;
        }
    }
    delete OldBuckets;
}

// FUNCTION: 0x10C49860 ?FUN_10c49860@Class_10E9BBC0@@UAEXPAUStruct_10C49860@@@Z
void Class_10E9BBC0::FUN_10c49860(Struct_10C49860* A)
{
    int Key = A->Unknown04;
    m_Entries.FUN_10d3f830(&Key);
}
