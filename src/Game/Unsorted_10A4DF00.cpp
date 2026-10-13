// Game/Unsorted_10A4DF00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A243F0.h"

struct Struct_10A4E1D0
{
    int Unknown00;
    float Unknown04;
};

// FUNCTION: 0x10A4E1D0 ?FUN_10a4e1d0@Class_10A243F0@@QAEHPAUStruct_10A4E1D0@@@Z
int Class_10A243F0::FUN_10a4e1d0(Struct_10A4E1D0* A)
{
    int Count = Unknown00;
    for (int i = 0; i < Count; i++)
    {
        Struct_10A4E1D0* E = &((Struct_10A4E1D0*)m_Buffer)[i];
        if (A->Unknown00 == E->Unknown00 && A->Unknown04 == E->Unknown04)
            return i;
    }
    Resize(Count + 1);
    Struct_10A4E1D0* E = &((Struct_10A4E1D0*)m_Buffer)[Count];
    E->Unknown00 = A->Unknown00;
    E->Unknown04 = A->Unknown04;
    return Count;
}
