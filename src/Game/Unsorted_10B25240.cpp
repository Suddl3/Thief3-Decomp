// Game/Unsorted_10B25240.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B25D60.h"
#include "Game/Class_10B25D90.h"
#include "Game/Class_10E7AAAC.h"

extern void* DAT_10e7aa60[];

class Class_10B255F0
{
public:
    Class_10B255F0()
    {
        Unknown00 = DAT_10e7aa60;
        m_ItemIndex = 0;
        m_EntryIndex = 0;
        Unknown14 = 1;
        m_UseListA = 1;
        Unknown38 = 1;
        Unknown18 = 1;
        Unknown1C = false;
        Unknown3C = false;
        Unknown20 = -1.0f;
        Unknown40 = -1.0f;
        Unknown24 = 0;
        Unknown44 = 0;
        Unknown34 = 0;
        Unknown0C = 0;
        Unknown4C = 0;
        Unknown50 = false;
        Unknown51 = false;
        Unknown52 = false;
    }

    void** Unknown00;
    int m_ItemIndex;
    int Unknown08;
    int Unknown0C;
    int m_UseListA;
    int Unknown14;
    int Unknown18;
    bool Unknown1C;
    float Unknown20;
    int Unknown24;
    int Unknown28;
    int m_EntryIndex;
    int Unknown30;
    int Unknown34;
    int Unknown38;
    bool Unknown3C;
    float Unknown40;
    int Unknown44;
    int Unknown48;
    int Unknown4C;
    bool Unknown50;
    bool Unknown51;
    bool Unknown52;
};

// FUNCTION: 0x10B25CD0 ?FUN_10b25cd0@@YAPAVClass_10B255F0@@XZ
Class_10B255F0* FUN_10b25cd0()
{
    static Class_10B255F0 Instance;
    return &Instance;
}

// FUNCTION: 0x10B25D60 ?Advance@Class_10B25D60@@QAEXXZ
void Class_10B25D60::Advance()
{
    if (m_InListA)
        m_Index = FindNextFromListA(&m_InListA);
    else
        m_Index = FindNextFromListB(&m_InListA);
}

// FUNCTION: 0x10B25D90 ?StepBack@Class_10B25D90@@QAEXXZ
void Class_10B25D90::StepBack()
{
    if (m_InListA)
        m_Index = FindPrevFromListA(&m_InListA);
    else
        m_Index = FindPrevFromListB(&m_InListA);
}

// FUNCTION: 0x10B26910 ?FUN_10b26910@Class_10E7AAAC@@UAEXH@Z
void Class_10E7AAAC::FUN_10b26910(int p1)
{
    Unknown10 = 0;
    Unknown0C = 0;
    Unknown08 = 0;
    Unknown04 = 0;
    Unknown20 = 0;
    Unknown1C = 0;
    Unknown18 = 0;
    Unknown14 = 0;
}
