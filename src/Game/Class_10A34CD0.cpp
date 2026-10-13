// Game/Class_10A34CD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A34C10.h"
#include "Game/Class_10A34CD0.h"
#include "Game/Class_10C40740.h"

class Class_10A34C10_Node
{
public:
    Class_10C40740 Key;
    int Value;
    Class_10A34C10_Node* Next;
};

// FUNCTION: 0x10A34CD0 ?FUN_10a34cd0@Class_10A34CD0@@QAEXH@Z
void Class_10A34CD0::FUN_10a34cd0(int A)
{
    for (int i = 0; i < m_BucketCount; i++)
    {
        Class_10A34C10_Node* Node = m_Buckets[i];
        while (Node)
        {
            Class_10A34C10_Node* Next = Node->Next;
            Node->Key.~Class_10C40740();
            ::operator delete(Node);
            Node = Next;
        }
    }
    Unknown04 = 0;
    m_BucketCount = 0;
    Unknown00 = 0;
    ::operator delete(m_Buckets);
    m_Buckets = 0;
    if (!m_FixedSize)
        reinterpret_cast<Class_10A34C10*>(this)->Rehash(A); // the call resolves to Class_10A34C10::Rehash
}
