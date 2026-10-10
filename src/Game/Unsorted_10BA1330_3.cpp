// Game/Unsorted_10BA1330_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BA1330.h"
#include "Game/Class_10BA1330_Node.h"
#include "Game/Class_10BA1660.h"

// FUNCTION: 0x10BA15C0 ?FUN_10ba15c0@Class_10BA1660@@QAEXH@Z
void Class_10BA1660::FUN_10ba15c0(int Size)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_10BA1330_Node* Node = Unknown14[i];
        while (Node)
        {
            Class_10BA1330_Node* Next = Node->Next;
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
        FUN_10ba13f0(Size);
}
