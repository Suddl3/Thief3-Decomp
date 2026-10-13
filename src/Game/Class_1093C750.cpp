// Game/Class_1093C750.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_1093AF30.h"
#include "Game/Class_1093AF30_Node.h"
#include "Game/Class_1093C750.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_10939380.h"
#include "Game/Class_109394C0.h"
#include "Game/Class_1093BCB0.h"
#include "Game/Struct_1093BCB0.h"

// FUNCTION: 0x1093B450 ?Reset@Class_1093C750@@QAEXH@Z
void Class_1093C750::Reset(int Size)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_1093AF30_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_1093AF30_Node* Next = Node->Next;
            Node->Key.~cString();
            ::operator delete(Node);
            Node = Next;
        }
    }
    m_Count = 0;
    m_BucketCount = 0;
    m_Collisions = 0;
    ::operator delete(m_Buckets);
    m_Buckets = 0;
    if (!m_NoAutoGrow)
        Rehash(Size);
}

// FUNCTION: 0x1093C750 ?Free@Class_1093C750@@QAEXXZ
void Class_1093C750::Free()
{
    Reset(0x40);
    ::operator delete(m_Buckets);
    m_Count = 0;
    m_BucketCount = 0;
    m_Buckets = 0;
    m_Collisions = 0;
}
