// Game/Unsorted_10C592B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C591A0.h"
#include "Game/Class_10C592B0.h"
#include "Game/Class_10C5A1C0.h"
#include "Game/Class_10E9C7DC.h"
#include "Game/Class_10C592B0_Node.h"

// FUNCTION: 0x10C592B0 ?Reset@Class_10C592B0@@QAEXH@Z
void Class_10C592B0::Reset(int Size)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_10C592B0_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_10C592B0_Node* Next = Node->Next;
            ::operator delete(Node);
            Node = Next;
        }
    }
    m_Count = 0;
    m_BucketCount = 0;
    Unknown00 = 0;
    ::operator delete(m_Buckets);
    m_Buckets = 0;
    if (!Unknown10)
        FUN_10c57620(Size);
}

// FUNCTION: 0x10C59EC0 ?RemoveKey@Class_10E9C7DC@@UAEXH@Z
void Class_10E9C7DC::RemoveKey(int A)
{
    int Key = A;
    m_KeyTable.Remove(&Key);
}

// FUNCTION: 0x10C5A1C0 ?Free@Class_10C5A1C0@@QAEXXZ
void Class_10C5A1C0::Free()
{
    Reset(0x40);
    ::operator delete(m_Buckets);
    Unknown04 = 0;
    Unknown0C = 0;
    m_Buckets = 0;
    Unknown00 = 0;
}
