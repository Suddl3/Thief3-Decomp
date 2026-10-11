// Game/Unsorted_10AA2930_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10978090.h"

class Class_10AA2A60_Param
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10978090* Virtual4(int A);
};

class Class_10A37700
{
public:
    void FUN_10a37700();
    void FUN_10a384c0(char* A);

    char Unknown00[0xC];
    FRotator Unknown0C;
    char Pad18[0x314];
    unsigned char Unknown32C;
    char Unknown32D[0x257];
    unsigned char Unknown584;
    char Unknown585[3];
    int Unknown588;
};

class Class_10B1D660;

class Class_10B21560;

class Class_10A37780;

struct Struct_109E3CB0;

class Class_109E3D60_Member;

class Class_10A0C740;

class Class_10A35330;

class Class_10A3C2E0;

class Class_10A67BC0;

class Class_10A6FED0_Owner;

class Class_10A79E60;

class Class_10AA3520_Member;

class Class_10B1BD70;

class Class_10B37FE0_Unknown0B4;

class Class_10E6B764;

class Object_10B4CA50_A;

class Object_10B55450;

class Object_10BBAB80;

class Struct_10AA3520_Unknown78;

struct Struct_10AA3520
{
public:
    Class_10B1D660* GetUnknown0C() { return Unknown0C; }

    char Unknown00[8];
    Class_10B21560* Unknown08;
    Class_10B1D660* Unknown0C;
    Class_10A37700* Unknown10;
    char Pad14[0x8];
    Class_10A6FED0_Owner* Unknown1C;
    char Pad20[0x8];
    Class_109E3D60_Member* Unknown28;
    char Pad2C[0x14];
    Class_10A79E60* Unknown40;
    char Pad44[0x10];
    Class_10A35330* Unknown54;
    char Pad58[0xc];
    Object_10B4CA50_A* Unknown64;
    char Pad68[0x8];
    Class_10A67BC0* Unknown70;
    char Pad74[0x4];
    Struct_10AA3520_Unknown78* Unknown78;
    Class_10E6B764* Unknown7C;
    char Pad80[0x14];
    Class_10A3C2E0* Unknown94;
    char Pad98[0x8];
    Class_10A0C740* UnknownA0;
    void* UnknownA4;
    char PadA8[0x8];
    union
    {
        Object_10B55450* UnknownB0;
        Object_10BBAB80* Unknown0B0;
    };
    Class_10B37FE0_Unknown0B4* Unknown0B4;
    char PadB8[0x4];
    Class_10B1BD70* UnknownBC;
    Class_10AA3520_Member* Unknown0C0;
    char PadC4[0x8];
    Struct_109E3CB0* UnknownCC;
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10E6D418
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10aa2a60(int A, int B, Class_10AA2A60_Param* C);

    Class_10E6D418* FUN_10aa2860();

    union
    {
        void* Field00;
        void* Unknown00;
    };
};

// FUNCTION: 0x10AA2A60 ?FUN_10aa2a60@Class_10E6D418@@UAEHHHPAVClass_10AA2A60_Param@@@Z
int Class_10E6D418::FUN_10aa2a60(int A, int B, Class_10AA2A60_Param* C)
{
    int R0 = (int)C->Virtual4(0)->FUN_10978090();
    int R1 = (int)C->Virtual4(1)->FUN_10978090();
    int R2 = (int)C->Virtual4(2)->FUN_10978090();
    int R3 = (int)C->Virtual4(3)->FUN_10978090();
    if (R3 > 0)
    {
        char Key[4];
        Key[0] = (char)R2;
        Key[3] = (char)R3;
        Key[1] = (char)R1;
        Key[2] = (char)R0;
        DAT_10f35dec->Unknown10->FUN_10a384c0(Key);
    }
    else
    {
        DAT_10f35dec->Unknown10->FUN_10a37700();
    }
    return 1;
}
