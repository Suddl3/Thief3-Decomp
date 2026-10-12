// Game/Unsorted_10C1BEE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C1B840.h"
#include "Game/Class_10E99068.h"
#include "Game/Class_10E990B0.h"
#include "Game/Class_10E990F8.h"

extern void* DAT_10e99020[];

class Class_10E99020 : public Class_10C1B840
{
public:
    Class_10E99020* Initialize(int A, int B, int C, int D, float E, float F);
};

extern void* DAT_10e99068[];

extern void* DAT_10e990b0[];

extern void* DAT_10e990f8[];

// FUNCTION: 0x10C1C000 ?Initialize@Class_10E99020@@QAEPAV1@HHHHMM@Z
Class_10E99020* Class_10E99020::Initialize(int A, int B, int C, int D, float E, float F)
{
    this->Class_10C1B840::Class_10C1B840(D, A, C, (int)E, (int)F, 1.0f);
    Unknown00 = DAT_10e99020;
    return this;
}

// FUNCTION: 0x10C1C130 ?Initialize@Class_10E99068@@QAEPAV1@HHHMM@Z
Class_10E99068* Class_10E99068::Initialize(int A, int B, int C, float D, float E)
{
    this->Class_10C1B840::Class_10C1B840(A, B, C, (int)D, (int)E, 1.0f);
    Unknown00 = DAT_10e99068;
    return this;
}

// FUNCTION: 0x10C1C170 ?Initialize@Class_10E990B0@@QAEPAV1@HHHMM@Z
Class_10E990B0* Class_10E990B0::Initialize(int A, int B, int C, float D, float E)
{
    this->Class_10C1B840::Class_10C1B840(A, B, C, (int)D, (int)E, 1.0f);
    Unknown00 = DAT_10e990b0;
    return this;
}

// FUNCTION: 0x10C1C1B0 ?Initialize@Class_10E990F8@@QAEPAV1@HHHMM@Z
Class_10E990F8* Class_10E990F8::Initialize(int A, int B, int C, float D, float E)
{
    this->Class_10C1B840::Class_10C1B840(A, B, C, (int)D, (int)E, 1.0f);
    Unknown00 = DAT_10e990f8;
    return this;
}
