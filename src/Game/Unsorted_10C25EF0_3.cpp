// Game/Unsorted_10C25EF0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cCharArray.h"
#include "Game/Class_10C064D0.h"

int FUN_10b0fdb0();

void InitGrid(cCharArray* Array);

class Class_10C25EB0
{
public:
    void FUN_10c25ff0(char Value);

    Class_10C064D0* m_Grid;
    int m_Row;
    int m_Column;
};

// FUNCTION: 0x10C25FF0 ?FUN_10c25ff0@Class_10C25EB0@@QAEXD@Z
void Class_10C25EB0::FUN_10c25ff0(char Value)
{
    if (m_Grid)
    {
        int Y = m_Column;
        int X = m_Row;
        cCharArray* Array = &m_Grid->Unknown10;
        InitGrid(Array);
        int Index = FUN_10b0fdb0() * X + Y;
        Array->m_Data[Index] = Value;
    }
}
