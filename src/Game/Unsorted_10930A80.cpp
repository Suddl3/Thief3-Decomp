// Game/Unsorted_10930A80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10932350.h"
#include "Game/Node_10932350.h"

// FUNCTION: 0x10932350 ?FUN_10932350@Class_10932350@@QAEXPAUNode_10932350@@@Z
void Class_10932350::FUN_10932350(Node_10932350* Node)
{
    if (!Node->UnknownA8)
        Unknown00 = Node->UnknownAC;
    else
        Node->UnknownA8->UnknownAC = Node->UnknownAC;
    if (!Node->UnknownAC)
        Unknown04 = Node->UnknownA8;
    else
        Node->UnknownAC->UnknownA8 = Node->UnknownA8;
    Unknown08--;
}
