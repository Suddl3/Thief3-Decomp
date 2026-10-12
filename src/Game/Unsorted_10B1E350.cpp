// Game/Unsorted_10B1E350.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include <math.h>
#include "Game/Struct_10B1DD70_Param.h"

FVector FUN_10b1de50(Struct_10B1DD70_Param* A);

class Class_10B1F260_Virtual6
{
public:
    char Pad00[0x14];
    FVector Unknown14;
};

class Class_10B1F260_Unknown0B0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual Class_10B1F260_Virtual6* Virtual6();
};

class Class_10B1F260_A
{
public:
    char Unknown00[0x2c];
    FVector Unknown2C;
    char Pad38[0x78];
    Class_10B1F260_Unknown0B0* Unknown0B0;
    char PadB4[0x29c];
    FVector Unknown350;
    char Pad35C[0xf8];
    float Unknown454;
};

// FUNCTION: 0x10B1E450 ?FUN_10b1e450@@YAXPAUStruct_10B1DD70_Param@@@Z
void FUN_10b1e450(Struct_10B1DD70_Param* A)
{
    FVector Offset = FUN_10b1de50(A) * 28.0f;
    FVector Twice = Offset + Offset;
    A->Unknown44 = A->Unknown44 - Twice.X;
    A->Unknown48 = A->Unknown48 - Twice.Y;
    A->Unknown4C = A->Unknown4C - Twice.Z;
}

// FUNCTION: 0x10B1F260 ?MoveTowardTarget@@YAXH@Z
void MoveTowardTarget(int A)
{
    Class_10B1F260_A* Obj = (Class_10B1F260_A*)A;
    if (Obj->Unknown2C.X != Obj->Unknown350.X || Obj->Unknown2C.Y != Obj->Unknown350.Y || Obj->Unknown2C.Z != Obj->Unknown350.Z)
    {
        FVector Delta = Obj->Unknown350 - Obj->Unknown2C;
        float Max = Obj->Unknown454 * 100.0f;
        FVector Out;
        if (sqrt(Delta.X * Delta.X + Delta.Y * Delta.Y + Delta.Z * Delta.Z) <= Max)
        {
            Out = Delta;
        }
        else
        {
            Delta.Normalize();
            Out = Delta * Max;
        }
        Obj->Unknown0B0->Virtual6()->Unknown14 = Out;
    }
}
