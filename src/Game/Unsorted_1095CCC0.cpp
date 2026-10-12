// Game/Unsorted_1095CCC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1095CCC0.h"

struct Struct_1095CCC0
{
    Struct_1095CCC0* Unknown00;
    Struct_1095CCC0* Unknown04;
    Struct_1095CCC0* Unknown08;
    char Unknown0C[5];
    bool Unknown11;
};

// FUNCTION: 0x1095CCC0 ?RotateLeft@Class_1095CCC0@@QAEXPAUStruct_1095CCC0@@@Z
void Class_1095CCC0::RotateLeft(Struct_1095CCC0* N)
{
    Struct_1095CCC0* P = N->Unknown08;
    N->Unknown08 = P->Unknown00;
    if (!P->Unknown00->Unknown11)
        P->Unknown00->Unknown04 = N;
    P->Unknown04 = N->Unknown04;
    if (N == m_Head->Unknown04)
    {
        m_Head->Unknown04 = P;
        P->Unknown00 = N;
        N->Unknown04 = P;
        return;
    }
    Struct_1095CCC0* R = N->Unknown04;
    if (N == R->Unknown00)
    {
        R->Unknown00 = P;
        P->Unknown00 = N;
        N->Unknown04 = P;
        return;
    }
    R->Unknown08 = P;
    P->Unknown00 = N;
    N->Unknown04 = P;
}
