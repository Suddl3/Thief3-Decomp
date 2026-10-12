// Game/Unsorted_10BF0AE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10E97B00.h"
#include "Game/Class_10BEFAB0.h"
#include "Game/Class_10BC9A50.h"

class Class_10BFF460
{
public:
    float FUN_10bff250();
};

float GetFrameDeltaTime();

// The address of an object passed by reference.
inline Class_10E97B00* AddressOf(const Class_10E97B00& Object)
{
    return (Class_10E97B00*)&Object;
}

// FUNCTION: 0x10BF0AE0 ?UpdateSummon@Class_10BC9A50@@QAEXPAVClass_10BFF460@@@Z
void Class_10BC9A50::UpdateSummon(Class_10BFF460* Target)
{
    if (Unknown260 >= 0.0f)
    {
        double Saved = Unknown260;
        Unknown260 = (float)(Saved - GetFrameDeltaTime());
    }
    if (Target)
    {
        if (Target->FUN_10bff250() < Unknown264 && Unknown260 < 0.0f)
        {
            {
                cString Text("summon");
                FUN_10bc7d70(AddressOf(Class_10E97B00("+summon:fight")), 0x14, 9, &Text, true);
            }
            Unknown260 = GetRandomInRange();
        }
    }
}
