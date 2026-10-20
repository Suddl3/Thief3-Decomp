// Game/Class_10C5BB10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C5B990.h"
#include "Game/Class_10C5BA20.h"
#include "Game/Class_10C5BB10.h"

class Class_10C5BA20;

class Class_10C5BB10_Node
{
public:
    Class_10C5B990 Key;
    Class_10C5BB10_Node* Next;
};

unsigned int HashBytes(const void* Data, int Length);

// FUNCTION: 0x10C5BD80 ?FUN_10c5bd80@Class_10C5BB10@@QAE_NABH@Z
bool Class_10C5BB10::FUN_10c5bd80(const int& Key)
{
    if (!Unknown10 && m_Count < m_BucketCount * 0.05 && m_BucketCount > 64)
        FUN_10c5bbf0(m_BucketCount / 2);
    unsigned int Index;
    {
        const void* Data;
        int Length;
        Unknown18.Virtual0(Key, &Data, &Length);
        Index = HashBytes(Data, Length) & ((1 << m_BucketBits) - 1);
    }
    for (Class_10C5BB10_Node* Node = m_Buckets[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
    {
        if (Unknown18.Virtual1(Key, Node->Key) == 0)
        {
            if (Prev || Node->Next)
                m_Collisions--;
            if (!Prev)
                m_Buckets[Index] = Node->Next;
            else
                Prev->Next = Node->Next;
            m_Count--;
            Node->Key.FUN_10c5b990();
            delete Node;
            return true;
        }
    }
    return false;
}
