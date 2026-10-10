// Game/Unsorted_10929DC0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_1092A370.h"
#include "Game/Class_1092A370_Node.h"
#include "Game/Class_1092BA00.h"

// FUNCTION: 0x1092BA00 ?FUN_1092ba00@Class_1092BA00@@QAEXH@Z
void Class_1092BA00::FUN_1092ba00(int Size)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_1092A370_Node* Node = Unknown14[i];
        while (Node)
        {
            Class_1092A370_Node* Next = Node->Next;
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
        FUN_1092a450(Size);
}
