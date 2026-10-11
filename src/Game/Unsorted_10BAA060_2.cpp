// Game/Unsorted_10BAA060_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10971570.h"

class Class_10C0E6D0
{
public:
    Class_10971570* FUN_10c0e6d0(unsigned Key);
};

class Class_10B9BDA0_Member;

class Class_10BFB910;

class Class_10BFFF60;

class Class_10C07ED0;

class Class_10C08590;

class Class_10C08E80;

class Class_10C099A0;

class Class_10FF667C_Unknown18;

class Class_10FF667C
{
public:
    Class_10FF667C();

    char Unknown00[0x8];
    Class_10C0E6D0* Unknown08;
    Class_10BFFF60* Unknown0C;
    char Pad10[0x4];
    Class_10B9BDA0_Member* Unknown14;
    Class_10FF667C_Unknown18* Unknown18;
    Class_10C099A0* Unknown1C;
    char Pad20[0x4];
    Class_10C08E80* Unknown24;
    Class_10BFB910* Unknown28;
    Class_10C08590* Unknown2C;
    Class_10C07ED0* Unknown30;
    char Pad34[0xc];
    int Unknown40;
    char Pad44[0x8];
    int Unknown4C;
    char Pad50[0x4];
    int Unknown54;
    int Unknown58;
    int Unknown5C;
    int Unknown60;
    int Unknown64;
    int Unknown68;
    int Unknown6C;
    int Unknown70;
    int Unknown74;
    int Unknown78;
    char Pad7C[0x20];
    float Unknown9C;
    float UnknownA0;
    char PadA4[0x4];
    float UnknownA8;
    char PadAC[0x8];
};

extern Class_10FF667C* DAT_10ff667c;

// FUNCTION: 0x10BAA060 ?FUN_10baa060@@YGHHI@Z
int __stdcall FUN_10baa060(int Kind, unsigned Key)
{
    Class_10971570* Obj = DAT_10ff667c->Unknown08->FUN_10c0e6d0(Key);
    if (!Obj)
        return Kind;
    int Id = 0;
    switch (Kind)
    {
    case 0:
        Id = 0x20004a9;
        break;
    case 1:
        Id = 0x20004aa;
        break;
    case 2:
        Id = 0x20004ab;
        break;
    case 3:
        Id = 0x20004ac;
        break;
    case 4:
        Id = 0x20004ad;
        break;
    }
    unsigned char Flag = 0;
    Obj->FUN_10971570(Id, (bool*)&Flag);
    switch (Flag)
    {
    case 0:
        return 0;
    case 1:
        return 1;
    case 3:
        return 3;
    case 4:
        return 4;
    default:
        return 2;
    }
}
