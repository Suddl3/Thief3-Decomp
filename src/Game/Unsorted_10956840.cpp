// Game/Unsorted_10956840.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cD3DStateCache.h"
#include "Game/Class_10955C80.h"

void FUN_1092bdb0(void* Memory);

class Class_10E4AE8C
{
public:
    void FUN_10956f20(int Index);

    char Unknown00[0x29C];
    void* Unknown29C[1];
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

    void FUN_10956db0();

    char Unknown04[0x290];
    char Unknown294;
    int Unknown298;
    int Unknown29C[9];
};

class cD3DStateCache;

class Class_10955C80;

extern cD3DStateCache* DAT_10f31be0;

class Class_10E4AE58
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10956880(bool A);

    char Unknown04[0x2C];
    unsigned int m_Flags;
    char Unknown34[0x94];
    Class_10955C80 Unknown0C8;
    char Unknown0C9[0x37];
    Class_10955C80 Unknown100;
    char Unknown101[0x117];
    Class_10955C80 Unknown218;
};

// FUNCTION: 0x10956880 ?FUN_10956880@Class_10E4AE58@@UAEX_N@Z
void Class_10E4AE58::FUN_10956880(bool A)
{
    if (m_Flags & 2)
        Unknown0C8.FUN_10955c80(0, 0);
    else if (m_Flags & 0x80)
        Unknown218.FUN_10955c80(0, 0);
    else
        DAT_10f31be0->FUN_10936bf0(0);
    if (A)
    {
        if (m_Flags & 4)
            Unknown100.FUN_10955c80(0, 1);
        else
        {
            DAT_10f31be0->FUN_10936bf0(2);
            return;
        }
    }
}

// FUNCTION: 0x10956DB0 ?FUN_10956db0@Class_10956DB0@@QAEXXZ
void Class_10956DB0::FUN_10956db0()
{
    for (int i = 0; i < 9; i++)
        Unknown29C[i] = 0;
    Unknown298 = 0;
    Virtual5(0);
    Unknown294 = 0;
}

// FUNCTION: 0x10956F20 ?FUN_10956f20@Class_10E4AE8C@@QAEXH@Z
void Class_10E4AE8C::FUN_10956f20(int Index)
{
    if (Unknown29C[Index])
    {
        FUN_1092bdb0(Unknown29C[Index]);
        Unknown29C[Index] = 0;
    }
}
