// Game/Unsorted_10AA6050.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B0AED0.h"
#include "Game/Class_10E6D8F0.h"
#include "Game/Struct_10AA6050.h"

typedef unsigned char BYTE;

class FVector
{
public:
    FVector() {}
    FVector(float InX, float InY, float InZ) : X(InX), Y(InY), Z(InZ) {}

    float X, Y, Z;
};

class FBox
{
public:
    FBox() {}
    FBox(int) { Init(); }

    void Init()
    {
        Min = Max = FVector(0, 0, 0);
        IsValid = 0;
    }

    FVector Min;
    FVector Max;
    BYTE IsValid;
};

class FArray
{
public:
    FArray() : Data(0), ArrayNum(0), ArrayMax(0) {}

    void* Data;
    int ArrayNum;
    int ArrayMax;
};

class Class_10AA6120
{
public:
    Class_10AA6120(int A);

    int Unknown00;
    FBox m_Bounds;
    FArray Unknown20;
};

extern Class_10B0AED0* DAT_10f3a248;

// FUNCTION: 0x10AA6120 ??0Class_10AA6120@@QAE@H@Z
Class_10AA6120::Class_10AA6120(int A)
    : Unknown00(A)
{
    m_Bounds.Init();
}

// FUNCTION: 0x10AA61D0 ?ReleaseSharedRef@@YAXXZ
void ReleaseSharedRef()
{
    --DAT_10f3a248->RefCount;
    if (DAT_10f3a248->RefCount == 0)
    {
        delete DAT_10f3a248;
        DAT_10f3a248 = 0;
    }
}

// FUNCTION: 0x10AA6390 ?IsSet@Class_10E6D8F0@@UAEHXZ
int Class_10E6D8F0::IsSet()
{
    bool Result = false;
    if (Unknown18)
        Result = true;
    return Result;
}
