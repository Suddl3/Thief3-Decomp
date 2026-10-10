// Game/Unsorted_1090EED0_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_1090F080.h"
#include "Game/Class_1090F080_Node.h"
#include "Game/Class_1090FF70.h"

// FUNCTION: 0x1090FC80 ?FUN_1090fc80@Class_1090FF70@@QAEXH@Z
void Class_1090FF70::FUN_1090fc80(int Size)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_1090F080_Node* Node = Unknown14[i];
        while (Node)
        {
            Class_1090F080_Node* Next = Node->Next;
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
        FUN_1090f1e0(Size);
}
