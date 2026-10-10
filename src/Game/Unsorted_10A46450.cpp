// Game/Unsorted_10A46450.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>
#include "Core/Core.h"

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* Block);
};

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
class Class_109081E0
{
public:
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

class Class_10E50610
{
public:
    virtual ~Class_10E50610() {}
};

class Class_10A46520
{
public:
    ~Class_10A46520();

    Class_10E50610 Unknown00;
    Class_109081E0 Unknown04;
};

extern float DAT_10eafbdc;

struct Struct_10A46450
{
    char Unknown00[0x20];
    FVector Unknown20;
};

class Class_10A46450_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual Struct_10A46450* Virtual6();
};

float FUN_10a48820(float A, float B, float C);

class Class_10A46450
{
public:
    float FUN_10a46450(float A);

    char Unknown00[0xB0];
    Class_10A46450_Member* Unknown0B0;
};

// FUNCTION: 0x10A46450 ?FUN_10a46450@Class_10A46450@@QAEMM@Z
float Class_10A46450::FUN_10a46450(float A)
{
    Class_10A46450_Member* Member = Unknown0B0;
    if (!Member)
        return DAT_10eafbdc;
    Struct_10A46450* Result = Member->Virtual6();
    if (!Result)
        return DAT_10eafbdc;
    FVector Dir = Result->Unknown20;
    float Length = sqrt(Dir.X * Dir.X + Dir.Y * Dir.Y + Dir.Z * Dir.Z);
    return FUN_10a48820(A, Length, 1.0f);
}

// FUNCTION: 0x10A46520 ??1Class_10A46520@@QAE@XZ
Class_10A46520::~Class_10A46520()
{
}
