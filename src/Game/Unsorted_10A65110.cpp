// Game/Unsorted_10A65110.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/cTextRenderer.h"
#include "Game/Struct_1091A610.h"
#include "Game/Class_10A65480.h"
#include "Game/Class_1091CB20.h"

double FUN_10d20ec0(double A);

class Class_10919C40;

// FUNCTION: 0x10A65480 ?GetMaxTextWidth@Class_10A65480@@QAEHXZ
int Class_10A65480::GetMaxTextWidth()
{
    int Max = 0;
    for (int I = 0; I < m_Strings->FUN_1091cb20(); I++)
    {
        cString Name = m_Strings->FUN_1091cbc0(I, 4);
        float Value = m_Font->MeasureText((const Struct_1091A610*)&Name, 8);
        int Ms = (int)FUN_10d20ec0(Value);
        if (Ms > Max)
            Max = Ms;
    }
    return Max;
}
