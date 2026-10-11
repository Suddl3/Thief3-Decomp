// Game/Unsorted_10C640E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C54970.h"

struct Struct_10C647F0_Vec
{
    float X;
    float Y;
    float Z;

    Struct_10C647F0_Vec(float A, float B, float C) : X(A), Y(B), Z(C) {}
    Struct_10C647F0_Vec operator-(const Struct_10C647F0_Vec& Other) const
    {
        return Struct_10C647F0_Vec(X - Other.X, Y - Other.Y, Z - Other.Z);
    }
};

class Object_10AB5B20
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual Struct_10C647F0_Vec* Virtual3();
};

class Class_10AB5B20
{
public:
    Class_10AB5B20(const Class_10AB5B20& Other)
    {
        Unknown00 = Other.Unknown00;
        if (Unknown00)
            Unknown00->Virtual1();
    }
    ~Class_10AB5B20()
    {
        if (Unknown00)
            Unknown00->Virtual2();
    }
    Class_10AB5B20()
    {
        Unknown00 = 0;
    }
    Class_10AB5B20(Object_10AB5B20* P)
    {
        Unknown00 = P;
        if (Unknown00)
            Unknown00->Virtual1();
    }

    Class_10AB5B20 FUN_10ab5b20();
    bool FUN_10ab5b00(const Class_10AB5B20& Other);

    Object_10AB5B20* Unknown00;
};

class Class_10C562C0 : public Class_10C54970
{
};

Class_10C562C0* FUN_10c562c0();

class Class_10C647F0_Unknown08
{
public:
    virtual void Virtual0();
    virtual bool Virtual1();
};

float FUN_10d4e270(const Struct_10C647F0_Vec& V);

class Class_10C647F0
{
public:
    void FUN_10c647f0(int Param);

    char Unknown00[8];
    Class_10C647F0_Unknown08* Unknown08;
    char Unknown0C[4];
    int Unknown10;
    char Unknown14[0xC];
    Struct_10C647F0_Vec Unknown20;
};

// FUNCTION: 0x10C647F0 ?FUN_10c647f0@Class_10C647F0@@QAEXH@Z
void Class_10C647F0::FUN_10c647f0(int Param)
{
    if (Unknown08->Virtual1())
    {
        Unknown10 = Param + 10;
        return;
    }
    float Dist = FUN_10d4e270(Unknown20 - *FUN_10c562c0()->FUN_10c54970().Unknown00->Virtual3());
    float Scaled = Dist * 0.0010416667f;
    Unknown10 = Scaled > 5.0f ? Param + 5 : (int)(Param + Scaled);
}
