// Game/Unsorted_10C48C00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C48320.h"
#include "Game/Class_10C48320_Node.h"
#include "Game/Class_10C49230.h"

// FUNCTION: 0x10C48C00 ?FUN_10c48c00@Class_10C49230@@QAEXH@Z
void Class_10C49230::FUN_10c48c00(int Size)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_10C48320_Node* Node = Unknown14[i];
        while (Node)
        {
            Class_10C48320_Node* Next = Node->Next;
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
        FUN_10c484d0(Size);
}
