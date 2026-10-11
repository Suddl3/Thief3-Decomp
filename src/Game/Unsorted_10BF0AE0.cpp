// Game/Unsorted_10BF0AE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"
#include "Game/Class_10E97B00.h"
#include "Game/Class_10BEFAB0.h"

class Class_10BFF460
{
public:
    float FUN_10bff250();
};

float FUN_10c00490();

class Class_10BC9A50 : public Class_10BEFAB0
{
public:
    void FUN_10bf0ae0(Class_10BFF460* Target);
    void FUN_10bc7d70(Class_10E97B00* Name, int Flags, int Count, Class_109081E0* Out, bool Flag);

    char Pad08[0x258];
    float Unknown260;
    float Unknown264;
};

// The address of an object passed by reference.
inline Class_10E97B00* AddressOf(const Class_10E97B00& Object)
{
    return (Class_10E97B00*)&Object;
}

// FUNCTION: 0x10BF0AE0 ?FUN_10bf0ae0@Class_10BC9A50@@QAEXPAVClass_10BFF460@@@Z
void Class_10BC9A50::FUN_10bf0ae0(Class_10BFF460* Target)
{
    if (Unknown260 >= 0.0f)
    {
        double Saved = Unknown260;
        Unknown260 = (float)(Saved - FUN_10c00490());
    }
    if (Target)
    {
        if (Target->FUN_10bff250() < Unknown264 && Unknown260 < 0.0f)
        {
            {
                Class_109081E0 Text("summon");
                FUN_10bc7d70(AddressOf(Class_10E97B00("+summon:fight")), 0x14, 9, &Text, true);
            }
            Unknown260 = FUN_10befab0();
        }
    }
}
