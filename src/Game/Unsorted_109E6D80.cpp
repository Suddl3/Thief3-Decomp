// Game/Unsorted_109E6D80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_109E6520.h"
#include "Game/Class_109E6520_Node.h"
#include "Game/Class_109E7C30.h"

// FUNCTION: 0x109E7C30 ?FUN_109e7c30@Class_109E7C30@@QAEXH@Z
void Class_109E7C30::FUN_109e7c30(int Size)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_109E6520_Node* Node = Unknown14[i];
        while (Node)
        {
            Class_109E6520_Node* Next = Node->Next;
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
        FUN_109e6600(Size);
}
