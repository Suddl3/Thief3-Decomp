// Game/Unsorted_10C09090_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C08DE0.h"
#include "Game/Class_10C09090.h"

class Class_10BAA6B0_Param;

struct Struct_10C09090
{
    char Unknown00[0x10];
    int Unknown10;
    char Unknown14[0x14];
};

// FUNCTION: 0x10C09090 ?FUN_10c09090@Class_10C09090@@QAEXH@Z
void Class_10C09090::FUN_10c09090(int Key)
{
    for (int i = 0; i < m_Count; i++)
    {
        if (m_Params[i] == (Class_10BAA6B0_Param*)Key)
        {
            m_Params[i] = 0;
            FUN_10c08d60();
            return;
        }
    }
    for (int j = 0; j < Unknown08; j++)
    {
        if (Unknown10[j].Unknown10 == Key)
            Unknown10[j].Unknown10 = 0;
    }
}
