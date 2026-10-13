// Game/Unsorted_10AA7360.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10B1D660.h"
#include "Game/Class_10AA7530.h"

bool FUN_1090f010(const int* A, const int* B);

class Class_109E3D60_Member;

class Class_10A0C740;

class Class_10A35330;

class Class_10A37780;

class Class_10A3C2E0;

class Class_10A67BC0;

class Class_10A6FED0_Owner;

class Class_10A79E60;

class Class_10AA3520_Member;

class Class_10B1BD70;

class Class_10B21560;

class Class_10B37FE0_Unknown0B4;

class Class_10E6B764;

class Object_10B4CA50_A;

class Object_10B55450;

class Object_10BBAB80;

struct Struct_109E3CB0;

class Struct_10AA3520_Unknown78;

struct Struct_10AA3520
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual cString Virtual3(const cString& Key);

    Class_10B1D660* GetUnknown0C() { return Unknown0C; }

    char Unknown04[4];
    Class_10B21560* Unknown08;
    Class_10B1D660* Unknown0C;
    Class_10A37780* Unknown10;
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

// FUNCTION: 0x10AA7530 ?FUN_10aa7530@Class_10AA7530@@QAEXHH@Z
void Class_10AA7530::FUN_10aa7530(int A, int B)
{
    if (FUN_1090f010((const int*)A, (const int*)&Unknown10))
    {
        Unknown10 = *(const cString*)B;
        Unknown0C = DAT_10f35dec->Virtual3(Unknown10);
    }
    if (FUN_1090f010((const int*)A, (const int*)&Unknown1C))
    {
        Unknown1C = *(const cString*)B;
        Unknown18 = DAT_10f35dec->Virtual3(Unknown1C);
    }
}
