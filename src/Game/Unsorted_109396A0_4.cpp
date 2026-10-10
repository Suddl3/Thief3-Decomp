// Game/Unsorted_109396A0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_1093AF30.h"
#include "Game/Class_1093AF30_Node.h"
#include "Game/Class_1093C750.h"

// FUNCTION: 0x1093B450 ?FUN_1093b450@Class_1093C750@@QAEXH@Z
void Class_1093C750::FUN_1093b450(int Size)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_1093AF30_Node* Node = Unknown14[i];
        while (Node)
        {
            Class_1093AF30_Node* Next = Node->Next;
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
        FUN_1093b040(Size);
}
