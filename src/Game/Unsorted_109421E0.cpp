// Game/Unsorted_109421E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10942BB0.h"
#include "Game/Class_10942BF0.h"
#include "Game/cShortArray.h"

extern "C" void* memcpy(void* Dest, const void* Src, unsigned Count);

class Class_10E4A9C8
{
public:
    void FUN_10948680();
    void FUN_109421e0();

    char Unknown00[0x58];
    int Unknown58;
    int Unknown5C;
    int Unknown60;
    char Unknown64[0x80];
    int UnknownE4;
    int UnknownE8;
    int UnknownEC;
    int UnknownF0;
    int UnknownF4;
    int UnknownF8;
    int UnknownFC;
    int Unknown100;
    int Unknown104;
    char Unknown108[8];
    int Unknown110;
    int Unknown114;
    int Unknown118;
    int Unknown11C;
    int Unknown120;
    int Unknown124;
    int Unknown128;
    int Unknown12C;
    int Unknown130;
    char Unknown134[0x24];
    int Unknown158;
    bool Unknown15C;
    char Unknown15D[3];
    int Unknown160;
    int Unknown164;
    int Unknown168;
    char Unknown16C[0xC];
    int Unknown178;
    int Unknown17C;
    int Unknown180;
    int Unknown184;
    int Unknown188;
    int Unknown18C;
    int Unknown190;
    int Unknown194;
    int Unknown198;
    int Unknown19C;
    int Unknown1A0;
    int Unknown1A4;
    int Unknown1A8;
};

class Class_10942A30_Result
{
public:
    void FUN_10d3a970(int A);
    int FUN_10d3a8c0(int A, char* B, int C, int D, int E);
};

Class_10942A30_Result* FUN_10d3a810();

extern int DAT_10eff4bc;

extern int DAT_10eff4c0;

extern int DAT_10eff4c4;

extern int DAT_10eff4c8;

extern int DAT_10eff4cc;

extern int DAT_10eff4d0;

extern int DAT_10eff4d4;

extern char DAT_10e4a630[];

extern char DAT_10e4a620[];

extern char DAT_10e4a60c[];

extern char DAT_10e4a5f8[];

extern char DAT_10e4a5e4[];

extern char DAT_10e4a5d0[];

extern char DAT_10e4a5c0[];

// FUNCTION: 0x109421E0 ?FUN_109421e0@Class_10E4A9C8@@QAEXXZ
void Class_10E4A9C8::FUN_109421e0()
{
    Unknown5C = -1;
    Unknown58 |= 7;
    Unknown60 |= 0x809;
    FUN_10948680();

    Unknown164 = 0;
    Unknown168 = 0;
    Unknown130 = 0;
    Unknown128 = 0;
    Unknown12C = 0;
    UnknownF4 = 0;
    UnknownF8 = 0;
    UnknownEC = 0;
    UnknownFC = 0;
    Unknown104 = 0;
    Unknown100 = 0;
    UnknownE4 = 0;
    UnknownE8 = 0;
    UnknownF0 = 0;
    Unknown11C = 0;
    Unknown178 = -1;
    Unknown158 = 0;
    Unknown160 = 0;
    Unknown120 = 0;
    Unknown124 = 1;
    Unknown15C = false;
    Unknown110 = 0;
    Unknown114 = 0;
    Unknown118 = 0;
    Unknown17C = 0;
    Unknown180 = 0;
    Unknown184 = 0;
    Unknown188 = 0;
    Unknown18C = 0;
    Unknown190 = 0;
    Unknown194 = 0;
    Unknown198 = 0;
    Unknown19C = 0;
    Unknown1A0 = 0;
    Unknown1A4 = 0;
    Unknown1A8 = 0;

    if (DAT_10eff4bc < 0)
    {
        FUN_10d3a810()->FUN_10d3a970(3);
        DAT_10eff4bc = FUN_10d3a810()->FUN_10d3a8c0(3, DAT_10e4a630, 0, 0, 1);
        DAT_10eff4c0 = FUN_10d3a810()->FUN_10d3a8c0(3, DAT_10e4a620, 0, 0, 1);
        DAT_10eff4c4 = FUN_10d3a810()->FUN_10d3a8c0(3, DAT_10e4a60c, 0, 0, 1);
        DAT_10eff4c8 = FUN_10d3a810()->FUN_10d3a8c0(3, DAT_10e4a5f8, 0, 0, 1);
        DAT_10eff4cc = FUN_10d3a810()->FUN_10d3a8c0(3, DAT_10e4a5e4, 0, 0, 1);
        DAT_10eff4d0 = FUN_10d3a810()->FUN_10d3a8c0(3, DAT_10e4a5d0, 0, 0, 1);
        DAT_10eff4d4 = FUN_10d3a810()->FUN_10d3a8c0(3, DAT_10e4a5c0, 0, 0, 1);
    }
}

// FUNCTION: 0x10942760 ?ReadData@@YGXPAXHHPBDPAH@Z
void __stdcall ReadData(void* Dest, int Size, int Count, const char* Source, int* Position)
{
    memcpy(Dest, Source + *Position, Size * Count);
    *Position += Size * Count;
}

// FUNCTION: 0x10942BB0 ?SetBits@Class_10942BB0@@QAEXHI@Z
void Class_10942BB0::SetBits(int Flag, unsigned int Value)
{
    if (Flag == 0)
        Unknown158Bits19To31 = Value;
    else
        Unknown158Bits0To18 = Value;
}

// FUNCTION: 0x10942BF0 ?GetBits@Class_10942BF0@@QAEHH@Z
int Class_10942BF0::GetBits(int Flag)
{
    if (Flag == 0)
        return (Unknown158 >> 0x13) & 0x1fff;
    return Unknown158 & 0x7ffff;
}
