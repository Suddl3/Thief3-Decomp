// Game/Class_10E84BB8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B66980_Unknown158.h"
#include "Game/Class_10B66980_Unknown198.h"
#include "Game/Class_10B6BD50.h"

class Class_10E84BB8
{
public:
    void FUN_10b66900(int A);
    void FUN_10b66770(int A);

    char Unknown00[0x150];
    int Unknown150;
    char Unknown154[4];
    Class_10B66980_Unknown158 Unknown158;
    Class_10B6BD50* Unknown184;
    char Unknown188[0x10];
    Class_10B66980_Unknown198** Unknown198;
};

// FUNCTION: 0x10B66900 ?FUN_10b66900@Class_10E84BB8@@QAEXH@Z
void Class_10E84BB8::FUN_10b66900(int A)
{
    Class_10B66980_Unknown198* Element = Unknown198[A];
    if (Element->Unknown1F0 == Element->Unknown1EC)
    {
        Element->Virtual122();
        return;
    }
    Element->Virtual123();
    int Index = Unknown150 + A;
    int Key = Element->Unknown1F0;
    int Value = Unknown184->LookupValue(Index, Key);
    Unknown184->SetField(Index, &Unknown158, Value);
    FUN_10b66770(A);
}
