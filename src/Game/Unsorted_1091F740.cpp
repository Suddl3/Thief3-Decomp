// Game/Unsorted_1091F740.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1091F9B0.h"
#include "Game/Class_109203B0.h"
#include "Game/Class_1091F740.h"

extern "C" long _time32(long* Timer);

extern int DAT_10f31960;

extern int DAT_10f31958;

extern int DAT_10f3195c;

extern bool DAT_10f31964;

extern int DAT_10f2c8c4;

class Class_10948260
{
public:
    void FUN_10948260();

    char Unknown00[0x1AC];
};

class Class_1091F9B0_Unknown0C
{
public:
    char Unknown00[0xC];
    int Unknown0C;
    char Unknown10[0x44];
    Class_10948260* Unknown54;
};

class Class_1091F740_Param0
{
public:
    char Unknown00[0x50];
    void* Unknown50;
    char Unknown54[0x20];
    void* Unknown74;
    char Unknown78[0x2C];
    void* UnknownA4;
};

class Class_1091F740_Item
{
public:
    char Unknown00[0x48];
    bool Unknown48;
};

class Class_1091F740_Unknown00
{
public:
    char Unknown00[0x49];
    bool Unknown49;
};

struct Struct_1091F740_Entry
{
    Class_1091F740_Unknown00* Unknown00;
    bool Unknown04;
    char Unknown05[3];
};

class Class_1091F740_Unknown44
{
public:
    char Unknown00[0x48];
    bool Unknown48;
    char Unknown49[0xD7];
    int Unknown120;
    char Unknown124[4];
    Struct_1091F740_Entry* Unknown128;
};

struct Struct_1091F740_S
{
    char Unknown00[8];
    int Unknown08;
    char Unknown0C[4];
    Class_1091F740_Item** Unknown10;
    char Unknown14[0x10];
};

struct Struct_1091F740_Unknown54
{
    char Unknown00[0x48];
    bool Unknown48;
    char Unknown49[0x163];
};

class Class_1091F740_Unknown0C
{
public:
    char Unknown00[0xC];
    int Unknown0C;
    char Unknown10[0x40];
    Struct_1091F740_S* Unknown50;
    Struct_1091F740_Unknown54* Unknown54;
};

// FUNCTION: 0x1091F740 ?FUN_1091f740@Class_1091F740@@QAEXPAVClass_1091F740_Param0@@@Z
void Class_1091F740::FUN_1091f740(Class_1091F740_Param0* Param)
{
    if (Param)
    {
        Param->Unknown50 = 0;
        Param->Unknown74 = 0;
        Param->UnknownA4 = 0;
    }
    if (Unknown0C != 0)
    {
        for (int i = 0; i < Unknown0C->Unknown0C; i++)
        {
            Unknown0C->Unknown54[i].Unknown48 = false;
            for (int j = 0; j < Unknown0C->Unknown50[i].Unknown08; j++)
                Unknown0C->Unknown50[i].Unknown10[j]->Unknown48 = false;
        }
    }
    for (int i = 0; i < Unknown30; i++)
        Unknown38[i]->Unknown48 = false;
    for (int i = 0; i < Unknown3C; i++)
    {
        Unknown44[i]->Unknown48 = false;
        for (int j = 0; j < Unknown44[i]->Unknown120; j++)
        {
            Unknown44[i]->Unknown128[j].Unknown04 = false;
            Unknown44[i]->Unknown128[j].Unknown00->Unknown49 = false;
        }
    }
}

// FUNCTION: 0x1091F9B0 ?FUN_1091f9b0@Class_1091F9B0@@QAEXXZ
void Class_1091F9B0::FUN_1091f9b0()
{
    if (Unknown0C)
    {
        for (int i = 0; i < Unknown0C->Unknown0C; i++)
            Unknown0C->Unknown54[i].FUN_10948260();
    }
    for (int i = 0; i < Unknown30; i++)
        Unknown38[i]->FUN_10948260();
}

// FUNCTION: 0x109203B0 ?FUN_109203b0@Class_109203B0@@QAEPAV1@XZ
Class_109203B0* Class_109203B0::FUN_109203b0()
{
    Unknown00 = _time32(0);
    Unknown30 = 0;
    Unknown34 = 0;
    Unknown38 = 0;
    Unknown3C = 0;
    Unknown40 = 0;
    Unknown44 = 0;
    Unknown0C = 0;
    Unknown2C = 0;
    Unknown48 = 1;
    DAT_10f31960 = 0;
    DAT_10f31958 = 0;
    DAT_10f3195c = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    Unknown18 = 0;
    DAT_10f31964 = false;
    Unknown1C = -1;
    DAT_10f2c8c4 = 0;
    Unknown4C = true;
    Unknown4D = true;
    return this;
}
