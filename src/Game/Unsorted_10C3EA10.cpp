// Game/Unsorted_10C3EA10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C30DD0.h"
#include "Game/Class_10C30DD0_Node.h"
#include "Game/Class_10C3EA90.h"

// FUNCTION: 0x10C3EA10 ?FUN_10c3ea10@Class_10C3EA90@@QAEXH@Z
void Class_10C3EA90::FUN_10c3ea10(int Size)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_10C30DD0_Node* Node = Unknown14[i];
        while (Node)
        {
            Class_10C30DD0_Node* Next = Node->Next;
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
        FUN_10c30f60(Size);
}
