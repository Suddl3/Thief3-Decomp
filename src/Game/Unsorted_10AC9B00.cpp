// Game/Unsorted_10AC9B00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10ACA3E0.h"
#include "Game/TimeManager.h"

extern float DAT_10eafbdc;

extern float DAT_10e49684;

class Class_10AC9F60_Unknown0C
{
public:
    int Unknown00;
    char Unknown04;
    bool Unknown05;
    char Pad06[0x6];
    float Unknown0C;
    float Unknown10;
    float Unknown14;
    float Unknown18;
};

class Class_10AC9F60
{
public:
    float FUN_10ac9f60(int Key);

    char Pad00[0x4];
    int Count;
    char Pad08[0x4];
    Class_10AC9F60_Unknown0C** Unknown0C;
};

// FUNCTION: 0x10AC9F60 ?FUN_10ac9f60@Class_10AC9F60@@QAEMH@Z
float Class_10AC9F60::FUN_10ac9f60(int Key)
{
    for (int i = 0; i < Count; i++)
    {
        if (Unknown0C[i]->Unknown00 == Key)
        {
            if ((Unknown0C[i]->Unknown0C < DAT_10eafbdc || Unknown0C[i]->Unknown14 == DAT_10eafbdc)
                && Unknown0C[i]->Unknown10 > Unknown0C[i]->Unknown18)
            {
                float Result = (Unknown0C[i]->Unknown10 - Unknown0C[i]->Unknown18) / (DAT_10e49684 - Unknown0C[i]->Unknown18);
                Unknown0C[i]->Unknown10 = -1.0f;
                Unknown0C[i]->Unknown05 = true;
                return Result;
            }
            break;
        }
    }
    return DAT_10eafbdc;
}

// FUNCTION: 0x10ACA3E0 ?FUN_10aca3e0@Class_10ACA3E0@@QAEXM@Z
void Class_10ACA3E0::FUN_10aca3e0(float Time)
{
    Time += TimeManager::Instance()->FUN_10d3edc0();
    for (int i = 0; i < m_Count; i++)
        FUN_10aca180(m_Elements[i], Time);
}
