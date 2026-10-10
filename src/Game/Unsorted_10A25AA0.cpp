// Game/Unsorted_10A25AA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A250D0.h"
#include "Game/Class_10A250D0_Node.h"
#include "Game/Class_10A288C0.h"

// FUNCTION: 0x10A264E0 ?FUN_10a264e0@Class_10A288C0@@QAEXH@Z
void Class_10A288C0::FUN_10a264e0(int Size)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_10A250D0_Node* Node = Unknown14[i];
        while (Node)
        {
            Class_10A250D0_Node* Next = Node->Next;
            Node->~Class_10A250D0_Node();
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
        FUN_10a251b0(Size);
}
