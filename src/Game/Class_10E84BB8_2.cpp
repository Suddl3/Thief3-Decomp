// Game/Class_10E84BB8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B66980_Unknown158.h"
#include "Game/Class_10B66980_Unknown198.h"
#include "Game/Class_10B6BD50.h"

class Class_10E84BB8
{
public:
    void FUN_10b66980(int Index);
    void FUN_10b66770(int Index);

    char Unknown00[0x150];
    int Unknown150;
    char Unknown154[4];
    Class_10B66980_Unknown158 Unknown158;
    Class_10B6BD50* Unknown184;
    char Unknown188[0x10];
    Class_10B66980_Unknown198** Unknown198;
};

// FUNCTION: 0x10B66980 ?FUN_10b66980@Class_10E84BB8@@QAEXH@Z
void Class_10E84BB8::FUN_10b66980(int Index)
{
    Class_10B66980_Unknown198* Object = Unknown198[Index];
    if (Object->Unknown1F0 == Object->Unknown1E8)
    {
        Object->Virtual122();
        return;
    }
    Object->Virtual124();
    int Slot = Unknown150 + Index;
    int Field = Object->Unknown1F0;
    int Value = Unknown184->LookupValue(Slot, Field);
    Unknown184->SetField(Slot, &Unknown158, Value);
    FUN_10b66770(Index);
}
