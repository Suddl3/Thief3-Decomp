// Game/Unsorted_10C25EF0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cCharArray.h"
#include "Game/Class_10C064D0.h"

int FUN_10b0fdb0();

void InitGrid8x8(cCharArray* Array);

class Class_10C25EB0
{
public:
    char FUN_10c25fb0();

    Class_10C064D0* m_Grid;
    int m_Row;
    int m_Column;
};

// FUNCTION: 0x10C25FB0 ?FUN_10c25fb0@Class_10C25EB0@@QAEDXZ
char Class_10C25EB0::FUN_10c25fb0()
{
    if (!m_Grid)
        return 0;
    int Y = m_Column;
    int X = m_Row;
    cCharArray* Array = &m_Grid->Unknown04;
    InitGrid8x8(Array);
    int Index = FUN_10b0fdb0() * X + Y;
    return Array->m_Data[Index];
}
