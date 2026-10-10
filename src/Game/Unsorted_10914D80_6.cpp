// Game/Unsorted_10914D80_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10914D80.h"
#include "Game/Class_10914D80_Node.h"
#include "Game/Class_10915830.h"

// FUNCTION: 0x109154F0 ?FUN_109154f0@Class_10915830@@QAEXH@Z
void Class_10915830::FUN_109154f0(int Size)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_10914D80_Node* Node = Unknown14[i];
        while (Node)
        {
            Class_10914D80_Node* Next = Node->Next;
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
        FUN_10914e60(Size);
}
