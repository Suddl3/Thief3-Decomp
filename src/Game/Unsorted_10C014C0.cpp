// Game/Unsorted_10C014C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C00F60_Node.h"
#include "Game/Class_10C00F60.h"
#include "Game/Class_10C00F60_Field18.h"

// FUNCTION: 0x10C014C0 ?FUN_10c014c0@Class_10C00F60@@QAE_NABH@Z
bool Class_10C00F60::FUN_10c014c0(const int& Key)
{
    if (!Unknown10 && Unknown04 < Unknown0C * 0.05 && Unknown0C > 64)
        FUN_10c01200(Unknown0C / 2);
    unsigned int Index = FUN_10c00b40(Key);
    for (Class_10C00F60_Node* Node = Unknown14[Index], *Prev = 0; Node; Prev = Node, Node = Node->Next)
    {
        if (Unknown18.Virtual1(Key, Node->Key) == 0)
        {
            if (Prev || Node->Next)
                Unknown00--;
            if (!Prev)
                Unknown14[Index] = Node->Next;
            else
                Prev->Next = Node->Next;
            Unknown04--;
            delete Node;
            return true;
        }
    }
    return false;
}
