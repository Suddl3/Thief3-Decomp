// Game/Class_10C32C70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C30D10.h"
#include "Game/Class_10C30D10_Node.h"
#include "Game/Class_10C32C70.h"
#include "Core/Core.h"
#include "Game/Class_10C2F970.h"
#include "Game/Class_10C30640.h"
#include "Game/Class_10C30700.h"
#include "Game/Class_10C30700_Unknown140.h"
#include "Game/Class_10C66590.h"
#include "Game/Class_10C7D570.h"
#include "Game/USkeletalMesh.h"

// FUNCTION: 0x10C325E0 ?Reset@Class_10C32C70@@QAEXH@Z
void Class_10C32C70::Reset(int Size)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_10C30D10_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_10C30D10_Node* Next = Node->Next;
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

// FUNCTION: 0x10C32C70 ?Release@Class_10C32C70@@QAEXXZ
void Class_10C32C70::Release()
{
    Reset(0x40);
    ::operator delete(m_Buckets);
    m_Count = 0;
    m_BucketCount = 0;
    m_Buckets = 0;
    m_Collisions = 0;
}
