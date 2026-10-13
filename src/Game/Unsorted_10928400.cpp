// Game/Unsorted_10928400.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_109275D0.h"
#include "Game/Class_10C56E40.h"
#include "Game/Class_10928400.h"

class Class_10928400_Arg_Unknown00
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

// FUNCTION: 0x10928400 ?FUN_10928400@Class_10928400@@QAEXVClass_10C56E40@@@Z
void Class_10928400::FUN_10928400(Class_10C56E40 Arg)
{
    int Key;
    for (int* It = UnknownC8.Unknown04; It != UnknownD0; ++It)
    {
        if (*It == (int)Arg.Unknown00)
        {
            UnknownC8.FUN_109275d0(&Key, It);
            return;
        }
    }
}

// FUNCTION: 0x10928AA0 ?NormalToColor@@YAIABVFVector@@@Z
unsigned int NormalToColor(const FVector& V)
{
    FVector N = (V + FVector(1.0f, 1.0f, 1.0f)) * 127.5f;
    unsigned int Color = 0xFFFFFFFF;
    Color = (Color << 8) | (unsigned char)N.X;
    Color = (Color << 8) | (unsigned char)N.Y;
    Color = (Color << 8) | (unsigned char)N.Z;
    return Color;
}
