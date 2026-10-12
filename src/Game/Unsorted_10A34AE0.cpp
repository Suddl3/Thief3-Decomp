// Game/Unsorted_10A34AE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A34B90.h"
#include "Game/Class_10A345C0.h"
#include "Game/Class_10A34AE0.h"
#include "Game/Class_10A34B90_Node.h"

struct Struct_10A34AE0
{
    char Unknown00[0x0C];
    int Unknown0C;
};

// FUNCTION: 0x10A34AE0 ?AddPair@Class_10A34AE0@@QAE_NPAUStruct_10A34AE0@@H@Z
bool Class_10A34AE0::AddPair(Struct_10A34AE0* A, int B)
{
    __int64 BValue = ((Struct_10A34AE0*)B)->Unknown0C;
    __int64 AValue = A->Unknown0C;
    __int64 Range[2];
    if (AValue < BValue)
    {
        Range[0] = AValue;
        Range[1] = BValue;
    }
    else
    {
        Range[1] = AValue;
        Range[0] = BValue;
    }
    if (m_PairCounts.FUN_10a345c0(Range, &B))
    {
        B = B + 1;
        m_PairCounts.InsertOrAssign(Range, &B);
        return false;
    }
    B = 1;
    m_PairCounts.Insert(Range, &B);
    return true;
}

// FUNCTION: 0x10A34B90 ?Reset@Class_10A34B90@@QAEXH@Z
void Class_10A34B90::Reset(int Size)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_10A34B90_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_10A34B90_Node* Next = Node->Next;
            ::operator delete(Node);
            Node = Next;
        }
    }
    Unknown04 = 0;
    m_BucketCount = 0;
    Unknown00 = 0;
    ::operator delete(m_Buckets);
    m_Buckets = 0;
    if (!Unknown10)
        Rehash(Size);
}
