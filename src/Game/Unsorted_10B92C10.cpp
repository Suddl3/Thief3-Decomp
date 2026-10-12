// Game/Unsorted_10B92C10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10990D10.h"
#include "Game/Class_10E89A8C.h"
#include "Game/FCoords.h"
#include "Game/Class_10B92DB0.h"

class Class_10E894C8
{
public:
    virtual void FUN_10b92cb0(int p1);

    Class_10990D10* Unknown04;
};

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10B92C10 ?Clone@Class_10E89A8C@@UAEPAV1@XZ
Class_10E89A8C* Class_10E89A8C::Clone()
{
    return new(0, 0, 0, 0, 0) Class_10E89A8C(Unknown04);
}

// FUNCTION: 0x10B92CB0 ?FUN_10b92cb0@Class_10E894C8@@UAEXH@Z
void Class_10E894C8::FUN_10b92cb0(int p1)
{
    if (Unknown04)
        Unknown04->FUN_10990d10();
}

// FUNCTION: 0x10B92DB0 ?SetDefaults@Class_10B92DB0@@QAEPAV1@XZ
Class_10B92DB0* Class_10B92DB0::SetDefaults()
{
    m_Coords.FCoords::FCoords(FVector(0, 0, 0));
    Unknown30.X = 0.0f;
    Unknown30.Y = 1.0f;
    Unknown30.Z = 0.0f;
    Unknown3C = 0.05f;
    Unknown40 = 0.5f;
    Unknown44 = 0.4f;
    Unknown48 = 0;
    return this;
}
