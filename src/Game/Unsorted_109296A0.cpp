// Game/Unsorted_109296A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109296A0.h"

struct Struct_109296A0_Node
{
    char Unknown00[0xC];
    Struct_109296A0_Node* Unknown0C;
    Struct_109296A0_Node* Unknown10;
};

// FUNCTION: 0x109296A0 ?FUN_109296a0@Class_109296A0@@QAEXPAUStruct_109296A0_Node@@@Z
void Class_109296A0::FUN_109296a0(Struct_109296A0_Node* Node)
{
    if (!Node)
        return;
    if (Node->Unknown0C == 0)
        Unknown00 = Node->Unknown10;
    else
        Node->Unknown0C->Unknown10 = Node->Unknown10;
    if (Node->Unknown10 == 0)
        Unknown04 = Node->Unknown0C;
    else
        Node->Unknown10->Unknown0C = Node->Unknown0C;
    Unknown08--;
    Struct_109296A0_Node* Last = Unknown10;
    Unknown10 = Node;
    if (Last == 0)
        Unknown0C = Node;
    else
        Last->Unknown10 = Node;
    Node->Unknown10 = 0;
    Node->Unknown0C = Last;
    Unknown14++;
}
