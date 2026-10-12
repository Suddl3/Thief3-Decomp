// Game/Unsorted_10BFCB00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10978090.h"
#include "Game/Class_Field04.h"
#include "Game/Class_10AF4B90.h"
#include "Game/Class_10AF4BB0.h"
#include "Game/Class_10C1B0F0.h"

extern float DAT_10eafbdc;

class Class_10BFD210
{
public:
    float FUN_10bfc3a0();
    void FUN_10bfd210();
    void FUN_10bfc680(float Value);
    void FUN_10bfd4c0(float Value);
    void FUN_10bfd0a0(Class_10C1B0F0* A, float B);

    char Pad00[0x1];
};

extern float DAT_10e49684;

struct Class_10BFCF80_Unknown00
{
    float Unknown00;
    float Unknown04;
    int Unknown08;
};

// The class whose destructor (0x10BAEBA0) is out of line; its body is inlined at each scope exit.
class Class_10BAEBA0 : public Class_10AF4BB0
{
public:
    ~Class_10BAEBA0()
    {
        FUN_10d660b0();
        FUN_10af3bd0(0, Unknown04, sizeof(Class_10BFCF80_Unknown00));
    }
    void FUN_10d660b0();
};

// FUNCTION: 0x10BFCF80 ?FUN_10bfcf80@@YAMPAVClass_10C7D570@@M@Z
float FUN_10bfcf80(Class_10C7D570* Obj, float Key)
{
    {
        Class_10BAEBA0 Names;
        ((Class_Field04*)((Class_10978090*)Obj->FUN_10dbd510())->FUN_10978090())->FUN_1098e290(0x4000611, (FString*)&Names);
        Class_10BFCF80_Unknown00* Entries = (Class_10BFCF80_Unknown00*)Names.Unknown00;
        for (int i = 0; i < Names.Unknown04; i++)
        {
            if (Key <= Entries[i].Unknown00)
            {
                return Entries[i].Unknown04;
            }
        }
    }
    return DAT_10e49684;
}

// FUNCTION: 0x10BFD0A0 ?FUN_10bfd0a0@Class_10BFD210@@QAEXPAVClass_10C1B0F0@@M@Z
void Class_10BFD210::FUN_10bfd0a0(Class_10C1B0F0* A, float B)
{
    float V = A->Virtual6(0);
    if (FUN_10bfc3a0() + V > B)
    {
        B = B - FUN_10bfc3a0();
        if (B > DAT_10eafbdc)
            A->FUN_10c1b0f0(B);
        else
            A->FUN_10c1b0f0(0.0f);
    }
}
