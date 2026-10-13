// Game/Unsorted_10C59330.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C576F0.h"
#include "Game/Class_10C5A1F0.h"
#include "Game/Class_10C576F0_Node.h"

// FUNCTION: 0x10C59330 ?FUN_10c59330@Class_10C5A1F0@@QAEXH@Z
void Class_10C5A1F0::FUN_10c59330(int A)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_10C576F0_Node* Node = ((Class_10C576F0_Node**)m_Buckets)[i];
        while (Node)
        {
            Class_10C576F0_Node* Next = Node->Next;
            ::operator delete(Node);
            Node = Next;
        }
    }
    Unknown04 = 0;
    Unknown0C = 0;
    Unknown00 = 0;
    ::operator delete(m_Buckets);
    m_Buckets = 0;
    if (!Unknown10[0])
        ((Class_10C576F0*)this)->Rehash(A);
}
