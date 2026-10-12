// Game/Unsorted_10B32D70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10B330D0.h"
#include "Game/Class_10B33D70.h"
#include "Game/cIntArray.h"
#include "Game/Class_10B33200.h"

extern void* DAT_10e7bf50[];

class Class_10E81130
{
public:
    Class_10E81130* FUN_10b46080();

    void** Unknown00;
    char Unknown04[0x160];
};

class Class_10E7BF50 : public Class_10E81130
{
public:
    Class_10E7BF50* InitDefaults();

    int Unknown164;
    int Unknown168;
    int Unknown16C;
    cIntArray Unknown170;
    float Unknown17C;
    int Unknown180;
    int Unknown184;
    int Unknown188;
    int Unknown18C;
    Class_10B330D0 Unknown190;
    int Unknown19C;
    int Unknown1A0;
    bool Unknown1A4;
};

// FUNCTION: 0x10B33200 ??0Class_10B33200@@QAE@HABVcString@@0H@Z
Class_10B33200::Class_10B33200(int A, const cString& B, const cString& C, int D)
    : Unknown00(A), Unknown04(B), Unknown08(C), Unknown0C(D)
{
}

// FUNCTION: 0x10B33D70 ?Next@Class_10B33D70@@QAEXXZ
void Class_10B33D70::Next()
{
    if (m_Index < m_Count - 1)
    {
        m_Index++;
        FUN_10b332d0();
        UpdateEndStyles();
    }
}

// FUNCTION: 0x10B33DA0 ?InitDefaults@Class_10E7BF50@@QAEPAV1@XZ
Class_10E7BF50* Class_10E7BF50::InitDefaults()
{
    FUN_10b46080();
    Unknown00 = DAT_10e7bf50;
    Unknown164 = 0;
    Unknown168 = 0;
    Unknown16C = 0;
    Unknown170.cIntArray::cIntArray();
    Unknown17C = 0.65f;
    Unknown180 = 0;
    Unknown184 = 0;
    Unknown188 = 0;
    Unknown190.Class_10B330D0::Class_10B330D0();
    Unknown19C = 0;
    Unknown1A0 = 0;
    Unknown1A4 = false;
    return this;
}
