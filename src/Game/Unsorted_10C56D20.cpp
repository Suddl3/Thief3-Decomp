// Game/Unsorted_10C56D20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C56D20.h"

struct Struct_10C56D20
{
    Struct_10C56D20* Unknown00;
    Struct_10C56D20* Unknown04;
    Struct_10C56D20* Unknown08;
    char Unknown0C[0x29];
    bool Unknown35;
};

// FUNCTION: 0x10C56D20 ?RotateRight@Class_10C56D20@@QAEXPAUStruct_10C56D20@@@Z
void Class_10C56D20::RotateRight(Struct_10C56D20* Node)
{
    Struct_10C56D20* Left = Node->Unknown00;
    Node->Unknown00 = Left->Unknown08;
    if (!Left->Unknown08->Unknown35)
        Left->Unknown08->Unknown04 = Node;
    Left->Unknown04 = Node->Unknown04;
    if (Node == Unknown04->Unknown04)
        Unknown04->Unknown04 = Left;
    else if (Node == Node->Unknown04->Unknown08)
        Node->Unknown04->Unknown08 = Left;
    else
        Node->Unknown04->Unknown00 = Left;
    Left->Unknown08 = Node;
    Node->Unknown04 = Left;
}
