// Game/Unsorted_10BAF8E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10BAF8E0.h"

class Class_10BAF8E0_Item
{
public:
    virtual void Virtual0(int Param);
};

class Class_10C0C460
{
public:
    void FUN_10c0c460(cIntArray& Found);
};

class Class_10BFFF60;

class Class_10B9BDA0_Member;

class Class_10FF667C_Unknown18;

class Class_10C099A0;

class Class_10C08E80;

class Class_10BFB910;

class Class_10C08590;

class Class_10C07ED0;

class Class_10FF667C
{
public:
    Class_10FF667C();

    char Unknown00[0xC];
    Class_10BFFF60* Unknown0C;
    Class_10C0C460* Unknown10;
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

// FUNCTION: 0x10BAF8E0 ?Dispatch@Class_10BAF8E0@@QAEXH@Z
void Class_10BAF8E0::Dispatch(int Param)
{
    if (FindIndex(0x4b) != -1)
    {
        cIntArray Found;
        DAT_10ff667c->Unknown10->FUN_10c0c460(Found);
        while (Found.Count > 0)
        {
            Class_10BAF8E0_Item* Item = (Class_10BAF8E0_Item*)Found.Data[0];
            Item->Virtual0(Param);
            delete Item;
            int Index = Found.Count - 1;
            int Old = Found.Data[0];
            Found.Data[0] = Found.Data[Index];
            Found.Data[Index] = Old;
            Found.SetCount(Found.Count - 1);
        }
    }
}
