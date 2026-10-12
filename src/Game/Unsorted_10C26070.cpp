// Game/Unsorted_10C26070.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10C26030.h"
#include "Game/Class_10B9FBE0.h"
#include "Game/Class_10C26070.h"

int FUN_10b0fdb0();

double GetTimeSeconds();

void InitGrid(Class_10B9FBE0* Array);

void FUN_10c25f40(Struct_10C26030* Data);

class Class_10C26070_Unknown00
{
public:
    char Unknown00[0x10];
    Class_10B9FBE0 Unknown10;
    Struct_10C26030 Unknown1C;
};

// FUNCTION: 0x10C26070 ?GetValueWithin@Class_10C26070@@QAEDM@Z
char Class_10C26070::GetValueWithin(float Margin)
{
    if (!m_Grid)
        return 0;
    int Column = m_Column;
    int Row = m_Row;
    Struct_10C26030* Data = &m_Grid->Unknown1C;
    FUN_10c25f40(Data);
    float Value = Data->Unknown08[FUN_10b0fdb0() * Row + Column];
    if (Value < GetTimeSeconds() - Margin && m_Grid)
    {
        Column = m_Column;
        Row = m_Row;
        Class_10B9FBE0* Array = &m_Grid->Unknown10;
        InitGrid(Array);
        int Index = FUN_10b0fdb0() * Row + Column;
        Array->m_Data[Index] = 0;
    }
    Column = m_Column;
    Row = m_Row;
    Class_10B9FBE0* Array = &m_Grid->Unknown10;
    InitGrid(Array);
    int Index = FUN_10b0fdb0() * Row + Column;
    return Array->m_Data[Index];
}
