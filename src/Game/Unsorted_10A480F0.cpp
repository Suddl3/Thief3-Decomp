// Game/Unsorted_10A480F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A48140.h"

typedef float FLOAT;

class FVector
{
public:
    FVector() {}
    FVector(FLOAT InX, FLOAT InY, FLOAT InZ) : X(InX), Y(InY), Z(InZ) {}

    FLOAT X, Y, Z;
};

class FCoords
{
public:
    FCoords(const FVector& InOrigin) : Origin(InOrigin), XAxis(1, 0, 0), YAxis(0, 1, 0), ZAxis(0, 0, 1) {}

    FVector Origin;
    FVector XAxis;
    FVector YAxis;
    FVector ZAxis;
};

class Class_10A480F0
{
public:
    Class_10A480F0* FUN_10a480f0();

    int Unknown00;
    int Unknown04;
    FCoords Unknown08;
};

// FUNCTION: 0x10A480F0 ?FUN_10a480f0@Class_10A480F0@@QAEPAV1@XZ
Class_10A480F0* Class_10A480F0::FUN_10a480f0()
{
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown08.FCoords::FCoords(FVector(0, 0, 0));
    return this;
}

// FUNCTION: 0x10A48140 ?FUN_10a48140@Class_10A48140@@QAEPAV1@XZ
Class_10A48140* Class_10A48140::FUN_10a48140()
{
    Unknown00 = 0;
    Unknown28 = 0;
    Unknown2C = -1;
    Unknown30 = -1;
    Unknown38 = 0;
    Unknown60 = 0;
    Unknown64 = -1;
    Unknown68 = -1;
    return this;
}
