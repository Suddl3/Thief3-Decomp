// Game/Class_10A873D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A85940.h"
#include "Game/Class_10A85940_Node.h"
#include "Game/Class_10A873D0.h"
#include "Game/Class_10E6C390.h"

// FUNCTION: 0x10A86490 ?Reset@Class_10A873D0@@QAEXH@Z
void Class_10A873D0::Reset(int Size)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_10A85940_Node* Node = Unknown14[i];
        while (Node)
        {
            Class_10A85940_Node* Next = Node->Next;
            ::operator delete(Node);
            Node = Next;
        }
    }
    Unknown04 = 0;
    Unknown0C = 0;
    Unknown00 = 0;
    ::operator delete(Unknown14);
    Unknown14 = 0;
    if (!Unknown10)
        Rehash(Size);
}

// FUNCTION: 0x10A873D0 ?FUN_10a873d0@Class_10A873D0@@QAEXXZ
void Class_10A873D0::FUN_10a873d0()
{
    Reset(0x40);
    ::operator delete(Unknown14);
    Unknown04 = 0;
    Unknown0C = 0;
    Unknown14 = 0;
    Unknown00 = 0;
}
