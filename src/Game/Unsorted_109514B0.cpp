// Game/Unsorted_109514B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10951530.h"
#include "Game/Class_109523B0.h"
#include "Game/Class_109523C0.h"
#include "Game/Class_10953B60.h"
#include "Game/Class_10956F50.h"
#include "Game/Class_10956F60.h"
#include "Game/Class_10E4AC64.h"
#include "Game/Struct_10951DE0.h"
#include "Game/Struct_10951E80.h"
#include "Game/Struct_10951EB0.h"
#include "Game/Struct_10952020.h"
#include "Game/Struct_109520C0.h"
#include "Game/Struct_109520F0.h"
#include "Game/Struct_10952710.h"
#include "Game/Class_109520C0.h"
#include "Game/Class_10952710.h"

extern void* DAT_10e4ac64;

class Class_10E4AC78
{
public:
    Struct_10951DE0 FUN_10951de0();
    Struct_10951E80 FUN_10951e80();
    Struct_10951EB0 FUN_10951eb0();

    char Unknown00[0xF8];
    Struct_10951E80 UnknownF8;
    Struct_10951EB0 Unknown104;
    Struct_10951DE0 Unknown110;
};

class Class_10E4AD48
{
public:
    Struct_10952020 FUN_10952020();
    Struct_109520F0 FUN_109520f0();

    char Unknown00[0xE4];
    Struct_10952020 UnknownE4;
    char PadF0[0x3c];
    Struct_109520F0 Unknown12C;
};

void FUN_10948890();

struct Struct_109523b0_Field00 {
    char Unknown00[0x28c];
    unsigned char Field28c;
};

struct Struct_109523c0_Field00 {
    char Unknown00[0x290];
    int Field290;
};

extern unsigned int DAT_10f3424c;

extern Class_10953B60 DAT_10f341f8;

extern void* DAT_10e4ae20[];

void FUN_10953490();

class Class_10E4AE20 {
    void* Field00;
public:
    void FUN_109562b0();
};

extern void* DAT_10e4ae58[];

class Class_10E4ADC0
{
public:
    Class_10E4ADC0(int A, int B);

    void** Unknown00;
    char Unknown04[0x290];
};

class Class_10E4AE58 : public Class_10E4ADC0
{
public:
    void FUN_10956830();
    Class_10E4AE58* Init(int A);

    union
    {
        unsigned char Field294;
        unsigned char Unknown294;
    };
    char Pad295[0x3];
};

extern void* DAT_10e4ae8c;

void FUN_10956fa0();

class Class_10E4AE8C
{
public:
    void* Field00;
    void FUN_109570a0();
};

void FUN_1095afe0();

extern unsigned char DAT_10f34480;

extern int DAT_10eff904;

extern unsigned char DAT_10eff908;

extern int DAT_10f3447c;

// FUNCTION: 0x109514B0 ?FUN_109514b0@Class_10E4AC64@@QAEXXZ
void Class_10E4AC64::FUN_109514b0()
{
    Field00 = &DAT_10e4ac64;
}

// FUNCTION: 0x10951530 ?FUN_10951530@Class_10951530@@QAEPAXXZ
void* Class_10951530::FUN_10951530()
{
    return &Unknown4c;
}

// FUNCTION: 0x10951B10 ?FUN_10951b10@@YAIXZ
unsigned int FUN_10951b10()
{
    return 0x188;
}

// FUNCTION: 0x10951DE0 ?FUN_10951de0@Class_10E4AC78@@QAE?AUStruct_10951DE0@@XZ
Struct_10951DE0 Class_10E4AC78::FUN_10951de0()
{
    return Unknown110;
}

// FUNCTION: 0x10951E80 ?FUN_10951e80@Class_10E4AC78@@QAE?AUStruct_10951E80@@XZ
Struct_10951E80 Class_10E4AC78::FUN_10951e80()
{
    return UnknownF8;
}

// FUNCTION: 0x10951EB0 ?FUN_10951eb0@Class_10E4AC78@@QAE?AUStruct_10951EB0@@XZ
Struct_10951EB0 Class_10E4AC78::FUN_10951eb0()
{
    return Unknown104;
}

// FUNCTION: 0x10951F90 ?FUN_10951f90@@YAIXZ
unsigned int FUN_10951f90()
{
    return 0x144;
}

// FUNCTION: 0x10952020 ?FUN_10952020@Class_10E4AD48@@QAE?AUStruct_10952020@@XZ
Struct_10952020 Class_10E4AD48::FUN_10952020()
{
    return UnknownE4;
}

// FUNCTION: 0x109520C0 ?FUN_109520c0@Class_109520C0@@QAE?AUStruct_109520C0@@XZ
Struct_109520C0 Class_109520C0::FUN_109520c0()
{
    return Unknown120;
}

// FUNCTION: 0x109520F0 ?FUN_109520f0@Class_10E4AD48@@QAE?AUStruct_109520F0@@XZ
Struct_109520F0 Class_10E4AD48::FUN_109520f0()
{
    return Unknown12C;
}

// FUNCTION: 0x10952200 ?FUN_10952200@@YAXXZ
void FUN_10952200()
{
    FUN_10948890();
}

// FUNCTION: 0x109523B0 ?FUN_109523b0@Class_109523B0@@QAEEXZ
unsigned char Class_109523B0::FUN_109523b0()
{
    return Field00->Field28c;
}

// FUNCTION: 0x109523C0 ?FUN_109523c0@Class_109523C0@@QAEHXZ
int Class_109523C0::FUN_109523c0()
{
    return Field00->Field290;
}

// FUNCTION: 0x10952710 ?FUN_10952710@Class_10952710@@QAE?AUStruct_10952710@@XZ
Struct_10952710 Class_10952710::FUN_10952710()
{
    return Unknown70;
}

// FUNCTION: 0x10953A90 ?FUN_10953a90@@YAXHHH@Z
void FUN_10953a90(int Red, int Green, int Blue)
{
    DAT_10f3424c = (0xff << 24) | ((Red & 0xff) << 16) | ((Green & 0xff) << 8) | (Blue & 0xff);
}

// FUNCTION: 0x10953EA0 ?FUN_10953ea0@@YAXXZ
void FUN_10953ea0()
{
    DAT_10f341f8.FUN_10953c90(0);
    DAT_10f341f8.ApplyWorldMatrix();
    DAT_10f341f8.Reset();
}

// FUNCTION: 0x109562B0 ?FUN_109562b0@Class_10E4AE20@@QAEXXZ
void Class_10E4AE20::FUN_109562b0()
{
    Field00 = (void*)DAT_10e4ae20;
    FUN_10953490();
}

// FUNCTION: 0x10956830 ?FUN_10956830@Class_10E4AE58@@QAEXXZ
void Class_10E4AE58::FUN_10956830()
{
    Field294 = 0;
}

// FUNCTION: 0x10956F50 ?FUN_10956f50@Class_10956F50@@QAEXE@Z
void Class_10956F50::FUN_10956f50(unsigned char p1)
{
    Field294 = p1;
}

// FUNCTION: 0x10956F60 ?FUN_10956f60@Class_10956F60@@QAEEXZ
unsigned char Class_10956F60::FUN_10956f60()
{
    return Field294;
}

// FUNCTION: 0x10956F70 ?Init@Class_10E4AE58@@QAEPAV1@H@Z
Class_10E4AE58* Class_10E4AE58::Init(int A)
{
    this->Class_10E4ADC0::Class_10E4ADC0(A, 0);
    Unknown00 = DAT_10e4ae58;
    Unknown294 = 0;
    return this;
}

// FUNCTION: 0x109570A0 ?FUN_109570a0@Class_10E4AE8C@@QAEXXZ
void Class_10E4AE8C::FUN_109570a0()
{
    Field00 = &DAT_10e4ae8c;
    FUN_10956fa0();
}

// FUNCTION: 0x1095B100 ?FUN_1095b100@@YAXXZ
void FUN_1095b100()
{
    FUN_1095afe0();
}

// FUNCTION: 0x1095BC40 ?FUN_1095bc40@@YAXE@Z
void FUN_1095bc40(unsigned char p1)
{
    DAT_10f34480 = p1;
}

// FUNCTION: 0x1095BC50 ?FUN_1095bc50@@YAXH@Z
void FUN_1095bc50(int p1)
{
    DAT_10eff904 = p1;
}

// FUNCTION: 0x1095BC60 ?FUN_1095bc60@@YAXE@Z
void FUN_1095bc60(unsigned char p1)
{
    DAT_10eff908 = p1;
}

// FUNCTION: 0x1095BC70 ?FUN_1095bc70@@YAXH@Z
void FUN_1095bc70(int p1)
{
    DAT_10f3447c = p1;
}
