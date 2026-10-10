// Game/Unsorted_10A4ABF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10A492B0.h"
#include "Game/Class_10A492B0_Node.h"
#include "Game/Class_10A4B710.h"

// FUNCTION: 0x10A4B710 ?FUN_10a4b710@Class_10A4B710@@QAEXH@Z
void Class_10A4B710::FUN_10a4b710(int Size)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_10A492B0_Node* Node = Unknown14[i];
        while (Node)
        {
            Class_10A492B0_Node* Next = Node->Next;
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
        FUN_10a4ab10(Size);
}
