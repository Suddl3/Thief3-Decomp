// Game/Unsorted_10C26A60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C26980.h"
#include "Game/Class_10C26E80.h"
#include "Game/cPositionList.h"
#include "Game/MC_MoveToPoint.h"
#include "Game/Struct_10C26A60.h"

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

class cIntArray
{
public:
    void SetCount(int NewCount);

    int Unknown00;
    int m_CapacityBytes;
    Struct_10C26A60** Unknown08;
};

struct Struct_10C266F0 : public cIntArray {};

void DeleteAll(Struct_10C266F0* Array);

class Class_10C26A60
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    char FUN_10c26500(Struct_10C26A60* Obj, int Arg);
    void Replace(Struct_10C26A60* Obj, int Arg);

    char Unknown04[0x34];
    Struct_10C266F0 Unknown38;
};

extern float DAT_10eafbdc;

double GetTimeSeconds();

// FUNCTION: 0x10C26A60 ?Replace@Class_10C26A60@@QAEXPAUStruct_10C26A60@@H@Z
void Class_10C26A60::Replace(Struct_10C26A60* Obj, int Arg)
{
    if (FUN_10c26500(Obj, Arg) == 1)
    {
        delete Obj;
        return;
    }
    Struct_10C266F0* Array = &Unknown38;
    DeleteAll(Array);
    int Count = Array->Unknown00;
    Array->SetCount(Count + 1);
    Array->Unknown08[Count] = Obj;
    Virtual6();
}

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
