// Game/Unsorted_10BAA470.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10C05A80.h"

extern float DAT_10eafbdc;

extern const char DAT_10e8d69c[];

float FUN_10c05a80(const Struct_10C05A80* A, const Struct_10C05A80* B);

void FUN_10905ff0(const char* Message);

class Class_10BAA5F0_Field34
{
public:
    char Unknown00[0x2C];
    Struct_10C05A80 Unknown2C;
};

class Class_10BAA5F0
{
public:
    bool FUN_10baa5f0(Class_10BAA5F0_Field34* A, float B, float C);

    char Unknown00[0x34];
    Class_10BAA5F0_Field34* Unknown34;
};

// FUNCTION: 0x10BAA5F0 ?FUN_10baa5f0@Class_10BAA5F0@@QAE_NPAVClass_10BAA5F0_Field34@@MM@Z
bool Class_10BAA5F0::FUN_10baa5f0(Class_10BAA5F0_Field34* A, float B, float C)
{
    if (A == Unknown34)
    {
        FUN_10905ff0(DAT_10e8d69c);
        return false;
    }
    float Diff = A->Unknown2C.Unknown08 - Unknown34->Unknown2C.Unknown08;
    if (!(Diff >= DAT_10eafbdc))
        Diff = -Diff;
    if (Diff > C)
        return false;
    float Dist = FUN_10c05a80(&A->Unknown2C, &Unknown34->Unknown2C);
    if (Dist > B * B)
        return false;
    return true;
}
