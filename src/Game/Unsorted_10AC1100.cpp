// Game/Unsorted_10AC1100.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AC1100.h"
#include "Game/Struct_10AC1100.h"
#include "Game/Struct_10AC1100_Frame.h"

// FUNCTION: 0x10AC1100 ?SetFrames@Class_10AC1100@@QAEPAV1@ABUStruct_10AC1100@@00@Z
Class_10AC1100* Class_10AC1100::SetFrames(const Struct_10AC1100& A, const Struct_10AC1100& B,
                                             const Struct_10AC1100& C)
{
    m_Frames[0].Unknown08 = A;
    m_Frames[0].Unknown14 = B;
    m_Frames[0].Unknown20 = C;
    m_Frames[1] = m_Frames[0];
    m_Frames[2] = m_Frames[0];
    m_Frames[3] = m_Frames[0];
    return this;
}
