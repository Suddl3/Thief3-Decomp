// Game/Unsorted_10939380.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_10939380.h"
#include "Game/Class_109394C0.h"
#include "Game/Class_1093BCB0.h"
#include "Game/Class_1093C750.h"
#include "Game/Struct_1093BCB0.h"

struct Struct_10939380
{
    Struct_10939380* Unknown00;
    Struct_10939380* Unknown04;
    Struct_10939380* Unknown08;
    char Unknown0C[5];
    char Unknown11;
};

// FUNCTION: 0x10939380 ?RotateRight@Class_10939380@@QAEXPAUStruct_10939380@@@Z
void Class_10939380::RotateRight(Struct_10939380* Node)
{
    Struct_10939380* Left = Node->Unknown00;
    Node->Unknown00 = Left->Unknown08;
    if (!Left->Unknown08->Unknown11)
        Left->Unknown08->Unknown04 = Node;
    Left->Unknown04 = Node->Unknown04;
    if (Node == m_Head->Unknown04)
        m_Head->Unknown04 = Left;
    else if (Node == Node->Unknown04->Unknown08)
        Node->Unknown04->Unknown08 = Left;
    else
        Node->Unknown04->Unknown00 = Left;
    Left->Unknown08 = Node;
    Node->Unknown04 = Left;
}

// FUNCTION: 0x109394C0 ?Reset@Class_109394C0@@QAEPAV1@XZ
Class_109394C0* Class_109394C0::Reset()
{
    Unknown08 = 0;
    Unknown0c = 0;
    Unknown10 = 0;
    return this;
}

// FUNCTION: 0x1093BCB0 ?FUN_1093bcb0@Class_1093BCB0@@QAEHPAUStruct_1093BCB0@@@Z
int Class_1093BCB0::FUN_1093bcb0(Struct_1093BCB0* Info)
{
    if (FUN_1093b260(Info->Unknown04, &Info))
        return Info->Unknown54;
    return -1;
}
