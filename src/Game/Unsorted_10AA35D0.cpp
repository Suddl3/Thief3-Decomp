// Game/Unsorted_10AA35D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA44B0.h"
#include "Game/Class_10C1A690.h"

// A chained hash table's entry: 12 bytes, allocated per insert. The key is
// a 4-byte slot here, freed through Class_10C1A690 (a 16-byte class elsewhere).
class Class_10AA44B0_Node
{
public:
    int Key;
    int Value;
    Class_10AA44B0_Node* Next;
};

// FUNCTION: 0x10AA3830 ?Clear@Class_10AA44B0@@QAEXH@Z
void Class_10AA44B0::Clear(int Size)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_10AA44B0_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_10AA44B0_Node* Next = Node->Next;
            ((Class_10C1A690*)&Node->Key)->Free();
            ::operator delete(Node);
            Node = Next;
        }
    }
    m_Count = 0;
    m_BucketCount = 0;
    m_Collisions = 0;
    ::operator delete(m_Buckets);
    m_Buckets = 0;
    if (!m_FixedSize)
        Rehash(Size);
}
