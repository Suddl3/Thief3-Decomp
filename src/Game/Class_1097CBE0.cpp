// Game/Class_1097CBE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/cString.h"
#include "Game/Class_1096BD50.h"
#include "Game/Class_1097B240.h"
#include "Game/Class_1097B790.h"
#include "Game/Class_1097CAA0.h"
#include "Game/Class_1097CAE0.h"
#include "Game/Class_1097CB20.h"
#include "Game/Class_1097CB60.h"
#include "Game/Class_1097CBA0.h"
#include "Game/Class_1097CBE0.h"
#include "Game/USkeletalMesh.h"
#include "Game/Class_1097B240_Node.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_1097B760.h"

// FUNCTION: 0x1097C880 ?Clear@Class_1097CBE0@@QAEXH@Z
void Class_1097CBE0::Clear(int Size)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_1097B240_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_1097B240_Node* Next = Node->Next;
            Node->Key.~cString();
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
        Resize(Size);
}

// FUNCTION: 0x1097CBE0 ?Free@Class_1097CBE0@@QAEXXZ
void Class_1097CBE0::Free()
{
    Clear(0x40);
    ::operator delete(m_Buckets);
    Unknown04 = 0;
    m_BucketCount = 0;
    m_Buckets = 0;
    Unknown00 = 0;
}
