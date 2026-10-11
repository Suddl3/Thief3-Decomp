// Game/Unsorted_10C592B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C591A0.h"
#include "Game/Class_10C592B0.h"
#include "Game/Class_10C5A1C0.h"
#include "Game/Class_10E9C7DC.h"
#include "Game/Class_10C592B0_Node.h"

// FUNCTION: 0x10C592B0 ?FUN_10c592b0@Class_10C592B0@@QAEXH@Z
void Class_10C592B0::FUN_10c592b0(int Size)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_10C592B0_Node* Node = Unknown14[i];
        while (Node)
        {
            Class_10C592B0_Node* Next = Node->Next;
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
        FUN_10c57620(Size);
}

// FUNCTION: 0x10C59EC0 ?FUN_10c59ec0@Class_10E9C7DC@@UAEXH@Z
void Class_10E9C7DC::FUN_10c59ec0(int A)
{
    int Key = A;
    Unknown0D8.FUN_10c591a0(&Key);
}

// FUNCTION: 0x10C5A1C0 ?FUN_10c5a1c0@Class_10C5A1C0@@QAEXXZ
void Class_10C5A1C0::FUN_10c5a1c0()
{
    FUN_10c592b0(0x40);
    ::operator delete(Unknown14);
    Unknown04 = 0;
    Unknown0C = 0;
    Unknown14 = 0;
    Unknown00 = 0;
}
