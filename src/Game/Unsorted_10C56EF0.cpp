// Game/Unsorted_10C56EF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C57430.h"

struct Struct_10C57430
{
    Struct_10C57430* Unknown00;
    Struct_10C57430* Unknown04;
    Struct_10C57430* Unknown08;
    char Unknown0C[0x29];
    bool Unknown35;
};

// FUNCTION: 0x10C57430 ?FUN_10c57430@Class_10C57430@@QAEXPAUStruct_10C57430@@@Z
void Class_10C57430::FUN_10c57430(Struct_10C57430* Node)
{
    Struct_10C57430* Left = Node->Unknown08;
    Node->Unknown08 = Left->Unknown00;
    if (!Left->Unknown00->Unknown35)
        Left->Unknown00->Unknown04 = Node;
    Left->Unknown04 = Node->Unknown04;
    if (Node == Unknown04->Unknown04)
        Unknown04->Unknown04 = Left;
    else if (Node == Node->Unknown04->Unknown00)
        Node->Unknown04->Unknown00 = Left;
    else
        Node->Unknown04->Unknown08 = Left;
    Left->Unknown00 = Node;
    Node->Unknown04 = Left;
}
