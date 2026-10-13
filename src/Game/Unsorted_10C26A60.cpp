// Game/Unsorted_10C26A60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C26980.h"
#include "Game/Class_10C26A60.h"
#include "Game/Class_10C26E80.h"
#include "Game/cIntArray.h"
#include "Game/cPositionList.h"
#include "Game/MC_MoveToPoint.h"
#include "Game/Struct_10C26A60.h"
#include "Game/Struct_10C266F0.h"

extern void* DAT_10e99298[];

class Class_10E99298 : public Class_10C26980
{
public:
    Class_10E99298* Construct(int A, int B, int C, int D);
};

extern void* DAT_10e992d4[];

class Class_10E992D4 : public Class_10C26980
{
public:
    Class_10E992D4* Construct(int A, int B, int C, int D);
};

extern float DAT_10eafbdc;

double GetTimeSeconds();

// FUNCTION: 0x10C26E80 ?Update@Class_10C26E80@@QAEXXZ
void Class_10C26E80::Update()
{
    float Value;
    if (m_LastTime == DAT_10eafbdc)
        Value = 0.1f;
    else
        Value = GetTimeSeconds() - m_LastTime;
    FUN_10c26d60();
    Virtual3();
    Virtual4(Value);
    Virtual5();
    m_LastTime = (float)GetTimeSeconds();
}

// FUNCTION: 0x10C27010 ?Construct@Class_10E99298@@QAEPAV1@HHHH@Z
Class_10E99298* Class_10E99298::Construct(int A, int B, int C, int D)
{
    this->Class_10C26980::Class_10C26980(A, B, C, D, 90.0f, 90.0f);
    Unknown00 = DAT_10e99298;
    return this;
}

// FUNCTION: 0x10C27050 ?Construct@Class_10E992D4@@QAEPAV1@HHHH@Z
Class_10E992D4* Class_10E992D4::Construct(int A, int B, int C, int D)
{
    this->Class_10C26980::Class_10C26980(A, B, C, D, 180.0f, 0.0f);
    Unknown00 = DAT_10e992d4;
    return this;
}
