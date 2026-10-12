// Game/Unsorted_10B61030.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A51A40.h"
#include "Game/Class_10B61030.h"

class Class_10A58B70
{
public:
    int GetValueAt(int Index);
};

class Class_10E83E20 : public Class_10A58B70
{
public:
    int GetAdjustedValueAt(int Index);

    char Unknown00[0x1D4];
    int m_AdjustMode;
    char Unknown1D8[0x24];
    int m_Adjustment;
};

// FUNCTION: 0x10B61030 ?FUN_10b61030@Class_10B61030@@QAEXH@Z
void Class_10B61030::FUN_10b61030(int A)
{
    Unknown1F8 = A;
    if (Unknown1DC)
    {
        Unknown1DC->SetValueAt(0, A);
        Unknown1DC->SetValueAt(1, A);
        Unknown1DC->SetValueAt(2, A);
    }
}

// FUNCTION: 0x10B61080 ?GetAdjustedValueAt@Class_10E83E20@@QAEHH@Z
int Class_10E83E20::GetAdjustedValueAt(int Index)
{
    int Result = GetValueAt(Index);
    if (m_AdjustMode == 3)
        Result += m_Adjustment;
    return Result;
}
