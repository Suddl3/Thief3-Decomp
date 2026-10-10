// Game/Unsorted_10C013C0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C01140.h"
#include "Game/Class_10C01140_Node.h"
#include "Game/Class_10C01FC0.h"

// FUNCTION: 0x10C016B0 ?FUN_10c016b0@Class_10C01FC0@@QAEXH@Z
void Class_10C01FC0::FUN_10c016b0(int Size)
{
    for (int i = 0; i < Unknown0C; i++)
    {
        Class_10C01140_Node* Node = Unknown14[i];
        while (Node)
        {
            Class_10C01140_Node* Next = Node->Next;
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
        FUN_10c012d0(Size);
}
