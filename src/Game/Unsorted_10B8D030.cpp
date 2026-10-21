// Game/Unsorted_10B8D030.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

// The greater of the two, as a reference to the one that is greater.
inline const float& GreaterOf(const float& A, const float& B)
{
    return A < B ? B : A;
}

// The object whose bounds the function reads: a vtable, then its type tag.
class Class_10B8D030_Unknown20
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(FVector* Min, FVector* Max);

    char Unknown04[0x4];
    int Unknown08;
};

class Class_10B8D030
{
public:
    void FUN_10b8d030(FVector* Min, FVector* Max);

    int Unknown00;
    char Unknown04[0x4];
    Class_10B8D030_Unknown20** Unknown08;
    char Unknown0C[0x14];
    Class_10B8D030_Unknown20* Unknown20;
    bool Unknown24;
};

// FUNCTION: 0x10B8D030 ?FUN_10b8d030@Class_10B8D030@@QAEXPAVFVector@@0@Z
void Class_10B8D030::FUN_10b8d030(FVector* Min, FVector* Max)
{
    FVector BoxMax(-3.4028235e+38f, -3.4028235e+38f, -3.4028235e+38f);
    FVector BoxMin(3.4028235e+38f, 3.4028235e+38f, 3.4028235e+38f);

    if (Unknown24)
    {
        Class_10B8D030_Unknown20* Object = Unknown20;
        if (Object && Object->Unknown08 == 3)
        {
            FVector BoundsMax;
            FVector BoundsMin;
            Object->Virtual4(&BoundsMin, &BoundsMax);
            BoxMax.X = GreaterOf(BoxMax.X, BoundsMax.X);
            BoxMax.Y = GreaterOf(BoxMax.Y, BoundsMax.Y);
            BoxMax.Z = GreaterOf(BoxMax.Z, BoundsMax.Z);
            BoxMin.X = (BoxMin.X < BoundsMin.X) ? BoxMin.X : BoundsMin.X;
            BoxMin.Y = (BoxMin.Y < BoundsMin.Y) ? BoxMin.Y : BoundsMin.Y;
            BoxMin.Z = (BoxMin.Z < BoundsMin.Z) ? BoxMin.Z : BoundsMin.Z;
        }
    }
    else
    {
        for (int i = 0; i < Unknown00; i++)
        {
            Class_10B8D030_Unknown20* Item = Unknown08[i];
            if (Item && Item->Unknown08 == 3)
            {
                FVector BoundsMax;
                FVector BoundsMin;
                Item->Virtual4(&BoundsMin, &BoundsMax);
                BoxMax.X = GreaterOf(BoxMax.X, BoundsMax.X);
                BoxMax.Y = GreaterOf(BoxMax.Y, BoundsMax.Y);
                BoxMax.Z = GreaterOf(BoxMax.Z, BoundsMax.Z);
                BoxMin.X = (BoxMin.X < BoundsMin.X) ? BoxMin.X : BoundsMin.X;
                BoxMin.Y = (BoxMin.Y < BoundsMin.Y) ? BoxMin.Y : BoundsMin.Y;
                BoxMin.Z = (BoxMin.Z < BoundsMin.Z) ? BoxMin.Z : BoundsMin.Z;
            }
        }
    }

    *Max = BoxMax;
    *Min = BoxMin;
}
