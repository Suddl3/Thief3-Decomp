// Game/Unsorted_10B9B940.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1096D780.h"

Class_10905A90_Member* GetAllocator();

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10A0C740;

class Class_10A35330;

class Class_10A37780;

class Class_10A3C2E0;

class Class_10A67BC0;

class Class_10A6FED0_Owner;

class Class_10A79E60;

class Class_109E3D60_Member;

class Class_10AA3520_Member;

class Class_10B1BD70;

class Class_10B1D660;

class Class_10B21560;

class Class_10B37FE0_Unknown0B4;

class Class_10E6B764;

class Object_10B4CA50_A;

class Object_10B55450;

class Object_10BBAB80;

class Struct_10AA3520_Unknown78;

struct Struct_109E3CB0;

// Struct_10AA3520, copied from include/Game/Struct_10AA3520.h with the field at 0xA8 added.
struct Struct_10AA3520
{
public:
    char Unknown00[8];
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
    void* UnknownA8;
    char PadAC[0x4];
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

class Class_10B9BAB0;

class Class_10BF9570
{
public:
    Class_10BF9570(Class_10B9BAB0* Owner, Class_1096D780* B, int C);

    char Unknown00[0x24];
};

class Class_10BAB6D0
{
public:
    Class_10BAB6D0(Class_1096D780* A, int B, void* C, Class_10BF9570* D, void* E, bool F);

    char Unknown00[0x174];
};

class Class_10B9BAB0_Unknown118
{
public:
    char Unknown00[0x0C];
    int Unknown0C;
    Class_10BAB6D0* Unknown10;
    bool Unknown14;
    Class_10BF9570* Unknown18;
};

class Class_10B9BAB0
{
public:
    void FUN_10b9bab0();

    char Unknown00[0xC0];
    Class_1096D780* UnknownC0;
    char UnknownC4[0x54];
    Class_10B9BAB0_Unknown118* Unknown118;
};

// FUNCTION: 0x10B9BAB0 ?FUN_10b9bab0@Class_10B9BAB0@@QAEXXZ
void Class_10B9BAB0::FUN_10b9bab0()
{
    Class_10B9BAB0_Unknown118* Obj = Unknown118;
    if (Obj->Unknown10 == 0)
    {
        UnknownC0->Get();
        if (Obj->Unknown18 == 0)
        {
            GetAllocator()->Virtual8(0, 0);
            Obj->Unknown18 = new(0, 0, 0, 0, 0) Class_10BF9570(this, UnknownC0, Obj->Unknown0C);
            GetAllocator()->Virtual9();
        }
        GetAllocator()->Virtual8(0, 0);
        Obj->Unknown10 = new(0, 0, 0, 0, 0) Class_10BAB6D0(UnknownC0, Obj->Unknown0C, DAT_10f35dec->UnknownA8, Obj->Unknown18, DAT_10f35dec->UnknownA4, Obj->Unknown14);
        GetAllocator()->Virtual9();
    }
}
