// Game/Unsorted_1091CD10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <math.h>
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1091AA10.h"
#include "Game/Class_1091E1A0.h"
#include "Game/Class_1091E1F0.h"
#include "Game/Class_1091E2E0.h"

extern float DAT_10e49684;

class Class_1091CA00;

Class_10905A90_Member* FUN_10905aa0();

class Class_109081E0
{
public:
    Class_109081E0(const char* In);
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

class Class_1091DEE0 : public Class_1091AA10
{
public:
    Class_1091CA00* FUN_1091dee0(int A);
    Class_1091CA00* FUN_1091dc40(const Class_109081E0& Name);
};

// FUNCTION: 0x1091DEE0 ?FUN_1091dee0@Class_1091DEE0@@QAEPAVClass_1091CA00@@H@Z
Class_1091CA00* Class_1091DEE0::FUN_1091dee0(int A)
{
    Class_1091CA00* Result = FUN_1091dc40(FUN_1091aa10(A));
    return Result;
}

// FUNCTION: 0x1091E1A0 ?FUN_1091e1a0@Class_1091E1A0@@QAEXXZ
void Class_1091E1A0::FUN_1091e1a0()
{
    float Length = sqrtf(Unknown00 * Unknown00 + Unknown04 * Unknown04 + Unknown08 * Unknown08);
    if (Length < 0.0001f)
        return;
    float Scale = DAT_10e49684 / Length;
    Unknown00 *= Scale;
    Unknown04 *= Scale;
    Unknown08 *= Scale;
}

// FUNCTION: 0x1091E1F0 ?FUN_1091e1f0@Class_1091E1F0@@QAEPAV1@HHHHHHHHH@Z
Class_1091E1F0* Class_1091E1F0::FUN_1091e1f0(int A, int B, int C, int D, int E, int F, int G, int H, int I)
{
    Unknown00 = A;
    Unknown04 = B;
    Unknown08 = C;
    Unknown0C = D;
    Unknown10 = E;
    Unknown14 = F;
    Unknown18 = G;
    Unknown1C = H;
    Unknown20 = I;
    return this;
}

// FUNCTION: 0x1091E2E0 ?FUN_1091e2e0@Class_1091E2E0@@QAEXXZ
void Class_1091E2E0::FUN_1091e2e0()
{
    Unknown04[0][0] = Unknown04[1][1] = Unknown04[2][2] = Unknown04[3][3] = 1.0f;
    Unknown04[0][3] = Unknown04[1][3] = Unknown04[2][3] = 0.0f;
    Unknown04[0][1] = Unknown04[0][2] = Unknown04[1][0] = 0.0f;
    Unknown04[3][0] = Unknown04[3][1] = Unknown04[3][2] = 0.0f;
    Unknown04[1][2] = Unknown04[2][0] = Unknown04[2][1] = 0.0f;
    Unknown44 = 0;
    Unknown48 = true;
    Unknown49 = false;
    Unknown4C = 0;
    Unknown50 = 0;
    Unknown54 = 0;
    Unknown5C = -1;
    Unknown60 = 0;
    Unknown58 = 0;
}
