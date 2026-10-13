// Game/Unsorted_10C20050_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

struct Struct_10C20010
{
    float Unknown00;
    float Unknown04;
    float Unknown08;

    bool IsWithin(const float* Center, float RadiusSq) const
    {
        float dx = Unknown00 - Center[0];
        float dy = Unknown04 - Center[1];
        float dz = Unknown08 - Center[2];
        float Sum = dz * dz;
        Sum += dx * dx;
        Sum += dy * dy;
        return Sum < RadiusSq;
    }
};

class Class_10C20010
{
public:
    Struct_10C20010 FUN_10c20010();

    Struct_10C20010 Unknown00;
};

class Class_10C20050
{
public:
    void FindInRadius(float* Center, float Radius, cIntArray* Out);

    int Unknown00;
    int Unknown04;
    int* Unknown08;
};

// FUNCTION: 0x10C20050 ?FindInRadius@Class_10C20050@@QAEXPAMMPAVcIntArray@@@Z
void Class_10C20050::FindInRadius(float* Center, float Radius, cIntArray* Out)
{
    Radius = Radius * Radius;
    for (int i = 0; i < Unknown00; i++)
    {
        Class_10C20010* Item = (Class_10C20010*)Unknown08[i];
        if (Item->FUN_10c20010().IsWithin(Center, Radius))
        {
            int Index = Out->Count;
            Out->SetCount(Index + 1);
            Out->Data[Index] = (int)Item;
        }
    }
}
