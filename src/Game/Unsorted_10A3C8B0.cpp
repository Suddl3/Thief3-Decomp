// Game/Unsorted_10A3C8B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10A3C640.h"
#include "Game/Class_10A3C640_Node.h"
#include "Game/Class_10A3C8B0.h"

// FUNCTION: 0x10A3C8B0 ?FUN_10a3c8b0@Class_10A3C8B0@@QAEXH@Z
void Class_10A3C8B0::FUN_10a3c8b0(int Size)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_10A3C640_Node* Node = Unknown14[i];
        while (Node)
        {
            Class_10A3C640_Node* Next = Node->Next;
            Node->Key.~Class_109081E0();
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
        FUN_10a3c7d0(Size);
}
