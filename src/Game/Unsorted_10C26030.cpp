// Game/Unsorted_10C26030.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10C26030.h"
#include "Game/Class_10C064D0.h"

int FUN_10b0fdb0();

void FUN_10c25f40(Struct_10C26030* Array);

class Class_10C25EB0
{
public:
    void FUN_10c26030(float Value);

    Class_10C064D0* m_Grid;
    int m_Row;
    int m_Column;
};

// FUNCTION: 0x10C26030 ?FUN_10c26030@Class_10C25EB0@@QAEXM@Z
void Class_10C25EB0::FUN_10c26030(float Value)
{
    if (m_Grid)
    {
        int Y = m_Column;
        int X = m_Row;
        Struct_10C26030* Array = &m_Grid->Unknown1C;
        FUN_10c25f40(Array);
        int Index = FUN_10b0fdb0() * X + Y;
        Array->Unknown08[Index] = Value;
    }
}
