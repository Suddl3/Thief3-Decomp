// Game/Unsorted_1091B430.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_1091B430.h"

struct Struct_1091B430
{
    int Unknown00;
    int Unknown04;
    cString Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
};

struct Struct_1091B430_Node
{
    int Unknown00;
    Struct_1091B430 Unknown04;
};

// FUNCTION: 0x1091B430 ?GetValue@Class_1091B430@@QAE?AUStruct_1091B430@@XZ
Struct_1091B430 Class_1091B430::GetValue()
{
    return m_Node->Unknown04;
}
