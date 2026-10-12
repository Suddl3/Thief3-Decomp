// Game/Unsorted_10956840.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cD3DStateCache.h"
#include "Game/Class_10955C80.h"

void FUN_1092bdb0(void* Memory);

class Class_10E4AE8C
{
public:
    void FreeEntry(int Index);

    char Unknown00[0x29C];
    void* m_Entries[1];
};

class Class_10956DB0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int);

    void Reset();

    char Unknown04[0x290];
    char Unknown294;
    int Unknown298;
    int m_Entries[9];
};

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

// FUNCTION: 0x10956DB0 ?Reset@Class_10956DB0@@QAEXXZ
void Class_10956DB0::Reset()
{
    for (int i = 0; i < 9; i++)
        m_Entries[i] = 0;
    Unknown298 = 0;
    Virtual5(0);
    Unknown294 = 0;
}

// FUNCTION: 0x10956F20 ?FreeEntry@Class_10E4AE8C@@QAEXH@Z
void Class_10E4AE8C::FreeEntry(int Index)
{
    if (m_Entries[Index])
    {
        FUN_1092bdb0(m_Entries[Index]);
        m_Entries[Index] = 0;
    }
}
