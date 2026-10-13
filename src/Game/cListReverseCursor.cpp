// Game/cListReverseCursor.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cListReverseCursor.h"
#include "Game/cListCursor.h"
#include "Game/Struct_10B1B8A0_Item.h"
#include "Game/cMenuInput.h"

struct Struct_10B1B8A0_List
{
    int Count;
    int Unknown04;
    Struct_10B1B8A0_Item* Data;

    int Num() const { return Count; }
    Struct_10B1B8A0_Item& operator[](int Index) const { return Data[Index]; }
};

class Class_10B1B8A0
{
public:
    char Unknown00[4];
    Struct_10B1B8A0_List ListA;
    Struct_10B1B8A0_List ListB;
    char Pad1C[0x48];
};

Class_10B1B8A0* FUN_10b1b600();

// FUNCTION: 0x10B25240 ?FindPrevFromListA@cListReverseCursor@@QAEHPAH@Z
int cListReverseCursor::FindPrevFromListA(int* A)
{
    *A = 1;
    if (m_Index > 0)
    {
        for (int Index = m_Index - 1; Index >= 0; Index--)
        {
            if (FUN_10b1b600()->ListA[Index].Count > 0)
                return Index;
        }
    }
    *A = 0;
    for (int Index = FUN_10b1b600()->ListB.Num() - 1; Index > 0; Index--)
    {
        if (FUN_10b1b600()->ListB[Index].Count > 0)
            return Index;
    }
    *A = 1;
    for (int Index = FUN_10b1b600()->ListA.Num() - 1; Index > m_Index; Index--)
    {
        if (FUN_10b1b600()->ListA[Index].Count > 0)
            return Index;
    }
    return 0;
}

// FUNCTION: 0x10B25310 ?FindPrevFromListB@cListReverseCursor@@QAEHPAH@Z
int cListReverseCursor::FindPrevFromListB(int* A)
{
    *A = 0;
    if (m_Index > 0)
    {
        for (int Index = m_Index - 1; Index > 0; Index--)
        {
            if (FUN_10b1b600()->ListB[Index].Count > 0)
                return Index;
        }
    }
    *A = 1;
    for (int Index = FUN_10b1b600()->ListA.Num() - 1; Index >= 0; Index--)
    {
        if (FUN_10b1b600()->ListA[Index].Count > 0)
            return Index;
    }
    *A = 0;
    for (int Index = FUN_10b1b600()->ListB.Num() - 1; Index > m_Index; Index--)
    {
        if (FUN_10b1b600()->ListB[Index].Count > 0)
            return Index;
    }
    return 0;
}

// FUNCTION: 0x10B25D90 ?StepBack@cListReverseCursor@@QAEXXZ
void cListReverseCursor::StepBack()
{
    if (m_InListA)
        m_Index = FindPrevFromListA(&m_InListA);
    else
        m_Index = FindPrevFromListB(&m_InListA);
}
