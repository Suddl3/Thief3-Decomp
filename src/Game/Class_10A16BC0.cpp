// Game/Class_10A16BC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A15D50.h"
#include "Game/Class_10A16BC0.h"
#include "Game/Class_10A15D50_Node.h"
#include "Game/Class_10A16BF0.h"
#include "Game/Class_10A18E80.h"
#include "Game/Class_10C00A60.h"

// FUNCTION: 0x10A16370 ?FUN_10a16370@Class_10A16BC0@@QAEXH@Z
void Class_10A16BC0::FUN_10a16370(int A)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_10A15D50_Node* Node = ((Class_10A15D50_Node**)Unknown14)[i];
        while (Node)
        {
            Class_10A15D50_Node* Next = Node->Next;
            ::operator delete(Node);
            Node = Next;
        }
    }
    Unknown04 = 0;
    Unknown0C = 0;
    Unknown00 = 0;
    ::operator delete(Unknown14);
    Unknown14 = 0;
    if (!Unknown10[0])
        ((Class_10A15D50*)this)->Rehash(A);
}

// FUNCTION: 0x10A16BC0 ?FUN_10a16bc0@Class_10A16BC0@@QAEXXZ
void Class_10A16BC0::FUN_10a16bc0()
{
    FUN_10a16370(0x40);
    ::operator delete(Unknown14);
    Unknown04 = 0;
    Unknown0C = 0;
    Unknown14 = 0;
    Unknown00 = 0;
}
