// Game/Unsorted_10B554E0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B3AC90.h"

struct Static_10B3AC60;

Static_10B3AC60* FUN_10b3ac60();

int FUN_10af42f0(char** A, const char* B);

long FUN_10af3710(const char* A);

class Class_10B55680_Unknown15C
{
public:
    void FUN_10dd8610(void* A, float B);
    void FUN_10dd86a0(void* A, float B);
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
    char Pad128[0x10];
    Class_10AC99D0* Unknown138;
    Class_10AC92F0* Unknown13C;
    Class_10AC91B0* Unknown140;
    char Pad144[0xc];
    Class_10ABDC10* Unknown150;
    char Pad154[0x8];
    Class_10B55680_Unknown15C* Unknown15C;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

// FUNCTION: 0x10B55680 ?HandleGlyphCommand@@YGHPADH@Z
int __stdcall HandleGlyphCommand(char* Line, int B)
{
    if (FUN_10af42f0(&Line, "USEGLYPH"))
    {
        void* Obj = ((Class_10B3AC90*)FUN_10b3ac60())->FUN_10b3ac90();
        DAT_10f3a3d8->Unknown15C->FUN_10dd8610(Obj, (float)FUN_10af3710(Line));
        return 1;
    }
    if (FUN_10af42f0(&Line, "RECHARGEGLYPH"))
    {
        void* Obj = ((Class_10B3AC90*)FUN_10b3ac60())->FUN_10b3ac90();
        DAT_10f3a3d8->Unknown15C->FUN_10dd86a0(Obj, (float)FUN_10af3710(Line));
        return 1;
    }
    return 0;
}
