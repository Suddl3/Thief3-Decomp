// Game/Unsorted_10C15DC0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C15E60.h"

struct Struct_10C15E60_Node
{
    char Unknown00[4];
    void* Unknown04;
    Struct_10C15E60_Node* Unknown08;
};

// FUNCTION: 0x10C15E60 ?FUN_10c15e60@Class_10C15E60@@QAEXPAX@Z
void Class_10C15E60::FUN_10c15e60(void* Source)
{
    Struct_10C15E60_Node* Node = Unknown04;
    if (!Node)
        return;
    if (Node->Unknown04 == Source)
    {
        Unknown04 = Node->Unknown08;
        Unknown08--;
        return;
    }
    Struct_10C15E60_Node* Prev = Node;
    while (Node)
    {
        if (Node->Unknown04 == Source)
        {
            Prev->Unknown08 = Node->Unknown08;
            Unknown08--;
            return;
        }
        Prev = Node;
        Node = Node->Unknown08;
    }
}
