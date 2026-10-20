// Game/Unsorted_1092DB20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"

class Class_1093EDB0_Element;

// include/Game/Class_1093EDB0.h copied whole, with the two methods the code
// calls added.
class Class_1093EDB0
{
public:
    void FUN_1093f7a0();
    bool DeleteShaders();
    void FUN_1093f5e0(cString* Name, int A, int B, cString* Value);
    void FUN_1093f180(cString* Name, int A, int B, cString* Value);

    int Unknown00;
    int Unknown04;
    Class_1093EDB0_Element* Unknown08;
};

// The renderer the settings are pushed into.
extern Class_1093EDB0* DAT_10f340c0;

// The flag that picks which way the settings are pushed.
extern bool DAT_10ffc854;

// The names of the post-processing effects.
extern const char DAT_10e49c60[];

extern const char DAT_10e49c58[];

extern const char DAT_10e49c50[];

class Class_1092E700
{
public:
    bool FUN_1092e700();

    char Unknown00[0xC];
    cString Unknown0C;
    cString Unknown10;
    cString Unknown14;
};

// FUNCTION: 0x1092E700 ?FUN_1092e700@Class_1092E700@@QAE_NXZ
bool Class_1092E700::FUN_1092e700()
{
    if (DAT_10ffc854)
    {
        {
            cString Effect(DAT_10e49c60);
            DAT_10f340c0->FUN_1093f5e0(&Effect, 3, 1, &Unknown0C);
        }
        {
            cString Effect(DAT_10e49c58);
            DAT_10f340c0->FUN_1093f5e0(&Effect, 3, 1, &Unknown10);
        }
        {
            cString Effect(DAT_10e49c50);
            DAT_10f340c0->FUN_1093f5e0(&Effect, 3, 1, &Unknown14);
        }
    }
    else
    {
        {
            cString Effect(DAT_10e49c60);
            DAT_10f340c0->FUN_1093f180(&Effect, 3, 1, &Unknown0C);
        }
        {
            cString Effect(DAT_10e49c58);
            DAT_10f340c0->FUN_1093f180(&Effect, 3, 1, &Unknown10);
        }
        {
            cString Effect(DAT_10e49c50);
            DAT_10f340c0->FUN_1093f180(&Effect, 3, 1, &Unknown14);
        }
    }
    return true;
}
