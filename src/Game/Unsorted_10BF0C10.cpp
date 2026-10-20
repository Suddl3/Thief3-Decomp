// Game/Unsorted_10BF0C10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10AAF570_Result.h"
#include "Game/Class_10BF1C40_Result.h"
#include "Game/Class_10C7D570.h"

// The object GetTargetLinkType returns: its slot 16 and slot 48 are called.
class Class_10BF7F90
{
public:
    void FUN_10bf7f90(int A, int B);
};

class Class_10BC4160
{
public:
    virtual void Virtual0();

    Class_10BF7F90* FUN_10bc4160();
};

class Class_10BC4BF0 : public Class_10BC4160
{
public:
    int GetTargetLinkType();
};

class Class_10BBB8B0
{
public:
    bool FUN_10bbb8b0();

    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

double GetTimeSeconds();

class Class_10BF02E0 : public Class_10BC4BF0
{
public:
    void FUN_10bf0c10(bool A);
    void FUN_10bf02e0(int A);

    Class_10BBB8B0* Unknown04;
    char Unknown08[0x4C];
    int Unknown54;
    int Unknown58;
    int Unknown5C;
    char Unknown60[0xB4];
    int Unknown114;
    int Unknown118;
    float Unknown11C;
    char Unknown120;
    char Unknown121;
    char Unknown122;
    char Unknown123;
    char Unknown124[4];
    int Unknown128;
    int Unknown12C;
    char Unknown130;
    char Unknown131;
    char Unknown132[2];
    int Unknown134;
    char Unknown138;
    char Unknown139[3];
    int Unknown13C;
    char Unknown140[0x35];
    char Unknown175;
    char Unknown176[0x66];
    int Unknown1DC;
    char Unknown1E0[0x3C];
    float Unknown21C;
    float Unknown220;
    char Unknown224[0x34];
    int Unknown258;
    int Unknown25C;
};

// FUNCTION: 0x10BF0C10 ?FUN_10bf0c10@Class_10BF02E0@@QAEX_N@Z
void Class_10BF02E0::FUN_10bf0c10(bool A)
{
    if (FUN_10bc4160())
        FUN_10bc4160()->FUN_10bf7f90(0, 1);
    Unknown13C = 0;
    Unknown138 = 1;
    Unknown122 = 0;
    Unknown258 = 0;
    Unknown25C = 0;
    Unknown114 = 0;
    Unknown118 = 0;
    Unknown128 = 0;
    Unknown12C = 0;
    Unknown134 = 0;
    Unknown130 = 0;
    Unknown131 = 0;
    Class_10AAF570_Result* Target = (Class_10AAF570_Result*)GetTargetLinkType();
    if (!A)
        Unknown54 = Target->Virtual16(0x17, 0, 1) != 0;
    Unknown58 = 0;
    Unknown5C = 0;
    Unknown175 = 0;
    ((Class_10BF1C40_Result*)Unknown04->Unknown08->FUN_10c7d570())->Virtual98();
    int IsTarget = (((Class_10AAF570_Result*)GetTargetLinkType())->Virtual48() == 0xF)
                || (((Class_10AAF570_Result*)GetTargetLinkType())->Virtual48() == 0xC);
    Unknown121 = IsTarget;
    if (Unknown123)
    {
        Unknown134 = Unknown04->FUN_10bbb8b0() ? 1 : 2;
        Unknown220 = GetTimeSeconds() + 1.0;
        if (Unknown134 == 2)
        {
            FUN_10bf02e0((Unknown1DC != 1) + 1);
            return;
        }
        Unknown123 = 0;
    }
}
