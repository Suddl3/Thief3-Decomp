// Game/Unsorted_10915B30_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10915D50.h"
#include "Game/Class_10915D50_Node.h"
#include "Game/Class_10916CA0.h"

// FUNCTION: 0x10916B80 ?FUN_10916b80@Class_10916CA0@@QAEXH@Z
void Class_10916CA0::FUN_10916b80(int Size)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_10915D50_Node* Node = Unknown14[i];
        while (Node)
        {
            Class_10915D50_Node* Next = Node->Next;
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
        FUN_10915e30(Size);
}
