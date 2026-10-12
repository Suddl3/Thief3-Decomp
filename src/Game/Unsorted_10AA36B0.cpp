// Game/Unsorted_10AA36B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E97B00.h"
#include "Game/Class_10AA44B0_Node.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr);

class Class_10AA44B0
{
public:
    void Clear(int A);
    void Free();
    void Rehash(int Size);
    unsigned int Insert(const Class_10E97B00& Key, const Class_109081E0& Value);

    int m_Collisions;
    int m_Count;
    int m_BucketBits;
    int m_BucketCount;
    bool m_FixedSize;
    char Pad11[0x3];
    Class_10AA44B0_Node** m_Buckets;
};

// FUNCTION: 0x10AA36B0 ?Rehash@Class_10AA44B0@@QAEXH@Z
void Class_10AA44B0::Rehash(int Size)
{
    int OldSize = m_BucketCount;
    Class_10AA44B0_Node** OldTable = m_Buckets;
    m_Buckets = (Class_10AA44B0_Node**)operator new(Size * sizeof(Class_10AA44B0_Node*), 0, 0, 0, 0, 0);
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
        Class_10AA44B0_Node* Node = OldTable[j];
        while (Node)
        {
            Insert(*Node, Node->Unknown04);
            Class_10AA44B0_Node* Next = Node->Next;
            delete Node;
            Node = Next;
        }
    }
    ::operator delete(OldTable);
}
