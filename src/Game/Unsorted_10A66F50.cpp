// Game/Unsorted_10A66F50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class FCoords
{
public:
    FCoords& FUN_10961af0(const FRotator& Rot);

    FVector Origin;
    FVector XAxis;
    FVector YAxis;
    FVector ZAxis;
};

extern FCoords DAT_10f46de8;

class Class_10A66F50
{
public:
    int Unknown00[14];
    FRotator Unknown38;
};

class Class_10E6B490
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual FVector* FUN_10a66f50();

    int Unknown04;
    Class_10A66F50* Unknown08;
    FCoords Unknown0C;
};

// FUNCTION: 0x10A66F50 ?FUN_10a66f50@Class_10E6B490@@UAEPAVFVector@@XZ
FVector* Class_10E6B490::FUN_10a66f50()
{
    if (Unknown08)
    {
        const FRotator& Rotation = Unknown08->Unknown38;
        FCoords Coords = DAT_10f46de8;
        FCoords Result = Coords.FUN_10961af0(Rotation);
        Unknown0C.XAxis = Result.XAxis;
        Unknown0C.YAxis = Result.YAxis;
        Unknown0C.ZAxis = Result.ZAxis;
    }
    return &Unknown0C.XAxis;
}
