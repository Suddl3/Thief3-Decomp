// Game/Unsorted_10930A80_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10932830.h"
#include "Game/Class_10932830_Node.h"
#include "Game/Class_109329F0.h"

// FUNCTION: 0x109329F0 ?FUN_109329f0@Class_109329F0@@QAEXH@Z
void Class_109329F0::FUN_109329f0(int Size)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_10932830_Node* Node = Unknown14[i];
        while (Node)
        {
            Class_10932830_Node* Next = Node->Next;
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
        FUN_10932910(Size);
}
