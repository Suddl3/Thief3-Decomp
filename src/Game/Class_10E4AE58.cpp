// Game/Class_10E4AE58.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cD3DStateCache.h"
#include "Game/Class_10955C80.h"

class cD3DStateCache;

class Class_10955C80;

extern cD3DStateCache* DAT_10f31be0;

class Class_10E4AE58
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void ApplyStages(bool A);

    char Unknown04[0x2C];
    unsigned int m_Flags;
    char Unknown34[0x94];
    Class_10955C80 Unknown0C8;
    char Unknown0C9[0x37];
    Class_10955C80 Unknown100;
    char Unknown101[0x117];
    Class_10955C80 Unknown218;
};

// FUNCTION: 0x10956880 ?ApplyStages@Class_10E4AE58@@UAEX_N@Z
void Class_10E4AE58::ApplyStages(bool A)
{
    if (m_Flags & 2)
        Unknown0C8.ApplyStage(0, 0);
    else if (m_Flags & 0x80)
        Unknown218.ApplyStage(0, 0);
    else
        DAT_10f31be0->FUN_10936bf0(0);
    if (A)
    {
        if (m_Flags & 4)
            Unknown100.ApplyStage(0, 1);
        else
        {
            DAT_10f31be0->FUN_10936bf0(2);
            return;
        }
    }
}
