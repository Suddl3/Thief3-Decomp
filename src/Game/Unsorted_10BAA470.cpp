// Game/Unsorted_10BAA470.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10C05A80.h"
#include "Game/PawnWrapper.h"

extern float DAT_10eafbdc;

extern const char DAT_10e8d69c[];

float DistanceSquared3D(const Struct_10C05A80* A, const Struct_10C05A80* B);

void FUN_10905ff0(const char* Message);

class Class_10BAA5F0_Field34
{
public:
    char Unknown00[0x2C];
    Struct_10C05A80 Unknown2C;
};

// FUNCTION: 0x10BAA5F0 ?QuickProximityTest@PawnWrapper@@QAE_NPAVClass_10BAA5F0_Field34@@MM@Z
bool PawnWrapper::QuickProximityTest(Class_10BAA5F0_Field34* A, float B, float C)
{
    if (A == m_Pawn)
    {
        FUN_10905ff0(DAT_10e8d69c);
        return false;
    }
    float Diff = A->Unknown2C.Unknown08 - m_Pawn->Unknown2C.Unknown08;
    if (!(Diff >= DAT_10eafbdc))
        Diff = -Diff;
    if (Diff > C)
        return false;
    float Dist = DistanceSquared3D(&A->Unknown2C, &m_Pawn->Unknown2C);
    if (Dist > B * B)
        return false;
    return true;
}
