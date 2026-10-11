// Game/Unsorted_10B4F930.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class AGarrett
{
public:
    char Unknown00[0x450];
    unsigned char bInBowDraw : 1;
    unsigned char isCrouching : 1;
};

struct Static_10B3AC60
{
public:
    int FUN_10b3ac90();
};

Static_10B3AC60* FUN_10b3ac60();

class Class_10AC9AE0
{
public:
    void FUN_10ac9ae0();
    void FUN_10ac9b40(AGarrett* Garrett);

    char Unknown00[4];
    void* Unknown04;
};

class Class_10ABB6B0;

class Class_10ABDC10;

class Class_10AC2E40;

class Class_10AC91B0;

class Class_10AC92F0;

class Class_10AC99D0;

class Class_10ACA550;

class Class_10ACA6A0;

class Class_10ACB8B0;

class Class_10ACF3A0;

class Class_10B1D500;

class Class_10E7ED00;

class UObject;

class Class_10F3A3D8
{
public:
    char Unknown00[8];
    UObject* Unknown08;
    Class_10B1D500* Unknown0C;
    Class_10AC2E40* Unknown10;
    char Pad14[0xd4];
    Class_10ABB6B0* Unknown0E8;
    char PadEC[0x10];
    Class_10ACF3A0* UnknownFC;
    char Pad100[0x8];
    Class_10E7ED00* Unknown108;
    char Pad10C[0x4];
    Class_10ACB8B0* Unknown110;
    char Pad114[0xc];
    Class_10ACA6A0* Unknown120;
    Class_10ACA550* Unknown124;
    char Pad128[0xc];
    Class_10AC9AE0* Unknown134;
    Class_10AC99D0* Unknown138;
    Class_10AC92F0* Unknown13C;
    Class_10AC91B0* Unknown140;
    char Pad144[0xc];
    Class_10ABDC10* Unknown150;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

class Class_10E7EC88
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10b4f7b0(AGarrett* Garrett);
    virtual void FUN_10b4f860(AGarrett* Garrett);
    virtual int Virtual4();
    virtual int FUN_10b4f930(AGarrett* Garrett, int Key);

    void FUN_10b4f590(int X);
    FVector FUN_10b4f690(AGarrett* Garrett);

    char Unknown04[0xC];
    bool Unknown10;
    bool Unknown11;
    FVector Unknown14;
    FVector Unknown20;
    int Unknown2C;
};

// FUNCTION: 0x10B4F930 ?FUN_10b4f930@Class_10E7EC88@@UAEHPAVAGarrett@@H@Z
int Class_10E7EC88::FUN_10b4f930(AGarrett* Garrett, int Key)
{
    if (Key != 0x53 && Key != 0x56 && Key != 0x59 && Key != 0x5c)
    {
        Unknown11 = true;
        return Garrett->bInBowDraw ? 0x13 : 0;
    }
    Unknown11 = true;
    FUN_10b4f590(FUN_10b3ac60()->FUN_10b3ac90());
    Unknown20 = FUN_10b4f690(Garrett);
    Unknown14 = FVector(0.0f, 0.0f, 0.0f);
    DAT_10f3a3d8->Unknown134->FUN_10ac9b40(Garrett);
    return Virtual4();
}
