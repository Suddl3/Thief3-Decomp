// Game/Unsorted_10C485A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C48260.h"
#include "Game/Class_10C48260_Node.h"
#include "Game/Class_10C49200.h"

class Class_10C48160
{
public:
    Class_10C48160(int A);

    int Unknown00;
    int Unknown04;
};

// FUNCTION: 0x10C48B80 ?Reset@Class_10C49200@@QAEXH@Z
void Class_10C49200::Reset(int Size)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_10C48260_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_10C48260_Node* Next = Node->Next;
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
