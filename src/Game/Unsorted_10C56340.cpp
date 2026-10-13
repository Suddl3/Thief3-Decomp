// Game/Unsorted_10C56340.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C56000.h"
#include "Game/Class_10C56C70.h"
#include "Game/Class_10C559A0.h"

class Class_10C56C70_Unknown4C;

class Class_10C5B8F0;

class Class_10C56C70_Unknown4C
{
public:
    char Pad00[0x8];
    int Unknown08;
};

class Class_10C5B8F0
{
public:
    void FUN_10c5b8f0(int A);
};

Class_10C5B8F0* FUN_10c5c660();

// FUNCTION: 0x10C56C70 ?FUN_10c56c70@Class_10C56C70@@QAEXH@Z
void Class_10C56C70::FUN_10c56c70(int Item)
{
    for (int i = 0; i < Unknown40.m_Count; i++)
    {
        if (((Class_10C56C70_Unknown4C*)Unknown40.m_Data[i].Unknown4C)->Unknown08 == Item)
        {
            if (Unknown40.m_Data[i].Unknown48)
            {
                FUN_10c5c660()->FUN_10c5b8f0(Unknown40.m_Data[i].Unknown44);
            }
            Unknown40.FUN_10c55ef0(i, Unknown40.m_Count - 1);
            Unknown40.FUN_10c56000(Unknown40.m_Count - 1);
            return;
        }
    }
}
