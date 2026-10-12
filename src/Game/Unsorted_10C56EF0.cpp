// Game/Unsorted_10C56EF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C57430.h"
#include "Game/cString.h"
#include "Game/Class_10C57310.h"

struct Struct_10C57430
{
    Struct_10C57430* Unknown00;
    Struct_10C57430* Unknown04;
    Struct_10C57430* Unknown08;
    char Unknown0C[0x29];
    bool Unknown35;
};

extern "C" int tolower(int C);

extern float DAT_10eafbdc;

class Class_10C57310_Unknown00
{
public:
    char Unknown00[0x1C];
    bool Unknown1C;
    bool Unknown1D;
    bool Unknown1E;
    bool Unknown1F;
};

// FUNCTION: 0x10C57310 ?SetFlag@Class_10C57310@@QAE_NPAVcString@@M@Z
bool Class_10C57310::SetFlag(cString* A, float B)
{
    switch (tolower(*A->Unknown00))
    {
    case 'b':
        m_Flags->Unknown1C = B != DAT_10eafbdc ? 1 : 0;
        return 1;
    case 'c':
        m_Flags->Unknown1E = B != DAT_10eafbdc ? 1 : 0;
        return 1;
    case 'r':
        m_Flags->Unknown1D = B != DAT_10eafbdc ? 1 : 0;
        return 1;
    case 's':
        m_Flags->Unknown1F = B != DAT_10eafbdc ? 1 : 0;
        return 1;
    default:
        return 0;
    }
}

// FUNCTION: 0x10C57430 ?RotateLeft@Class_10C57430@@QAEXPAUStruct_10C57430@@@Z
void Class_10C57430::RotateLeft(Struct_10C57430* Node)
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
