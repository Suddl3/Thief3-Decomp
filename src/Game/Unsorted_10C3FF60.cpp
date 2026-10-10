// Game/Unsorted_10C3FF60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C3FF60.h"

struct Struct_10C3FF60
{
    Struct_10C3FF60* Unknown00;
    Struct_10C3FF60* Unknown04;
    Struct_10C3FF60* Unknown08;
    char Unknown0C[0x1D];
    bool Unknown29;
};

// FUNCTION: 0x10C3FF60 ?FUN_10c3ff60@Class_10C3FF60@@QAEXPAUStruct_10C3FF60@@@Z
void Class_10C3FF60::FUN_10c3ff60(Struct_10C3FF60* Node)
{
    Struct_10C3FF60* Left = Node->Unknown00;
    Node->Unknown00 = Left->Unknown08;
    if (!Left->Unknown08->Unknown29)
        Left->Unknown08->Unknown04 = Node;
    Left->Unknown04 = Node->Unknown04;
    if (Node == Unknown1C->Unknown04)
        Unknown1C->Unknown04 = Left;
    else if (Node == Node->Unknown04->Unknown08)
        Node->Unknown04->Unknown08 = Left;
    else
        Node->Unknown04->Unknown00 = Left;
    Left->Unknown08 = Node;
    Node->Unknown04 = Left;
}
