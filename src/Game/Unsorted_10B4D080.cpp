// Game/Unsorted_10B4D080.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10ACA6A0.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10F3A3D8.h"

class Class_10970890;

class Class_1098E330;

class Class_10B39870;

class Class_Field0c_D;

struct Struct_10B1E010_Param;

struct Struct_10B1DCA0_Param;

extern Class_10F3A3D8* DAT_10f3a3d8;

class FVector
{
public:
    float x;
    float y;
    float z;

    FVector(const FVector& V)
    {
        x = V.x;
        y = V.y;
        z = V.z;
    }
};

FVector __cdecl FUN_10b1e0f0(Struct_10B1E010_Param* A);

FVector __cdecl GetFlatForward(Struct_10B1DCA0_Param* A);

class Class_1098E3D0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

class Class_10B39780
{
public:
    int FUN_10b39780();

    char Unknown00[0xc];
    Class_Field0c_D* Unknown0c;
};

class Class_1098E330
{
public:
    virtual void Virtual93();
    virtual void Virtual94();
    virtual void Virtual95();
    virtual void Virtual96();
    virtual void Virtual97();
    virtual void Virtual98();
    virtual void Virtual99();
    virtual void Virtual100();
    virtual void Virtual101();
    virtual void Virtual102();
    virtual void Virtual103();
    virtual void Virtual104();
    virtual int Virtual105();

    int GetPropertyValue(int Id, int* Out);
    Class_10970890* FUN_10991eb0();
    int FUN_10b22000();

    char Pad04[0x20];
    int Unknown24;
    char Pad28[0x4];
    int Unknown2C;
    char Pad30[0x94];
    unsigned int m_Flags;
    char PadC8[0x2c];
    int UnknownF4;
    int UnknownF8;
    int UnknownFC;
    int Unknown100;
    int Unknown104;
    int Unknown108;
    char Pad10C[0x340];
    int Unknown44C;
    unsigned char Unknown450;
    char Pad451[0x57];
    float Unknown4A8;
    float Unknown4AC;
};

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    Class_10B39870* GetLinkedObject();
    void FUN_10b4fbf0(int A, int B, float C, float D, int E, int F, float G);

    char Unknown04[4];
    int Unknown08;
    union
    {
        int unknown_0c;
        int m_LinkedObject;
    };
};

class Class_10E81590 : public Class_10AA82D0
{
public:
    virtual void Virtual1();
    virtual void FUN_10b4d300(Class_1098E330* A);

    unsigned char Unknown10;
};

// FUNCTION: 0x10B4D300 ?FUN_10b4d300@Class_10E81590@@UAEXPAVClass_1098E330@@@Z
void Class_10E81590::FUN_10b4d300(Class_1098E330* A)
{
    Unknown10 = 0;

    Class_1098E3D0* Obj;
    DAT_10f3a3d8->Unknown120->FUN_10aca6a0(&Obj, 0x14, 0);
    if (Obj)
    {
        Obj->Virtual2();
    }

    bool b = A->Unknown4A8 <= A->Unknown4AC;
    bool c;
    if (A->FUN_10b22000() != 0)
    {
        int State = ((Class_10B39780*)GetLinkedObject())->FUN_10b39780();
        if (State == 0xfc)
        {
            FVector V1(FUN_10b1e0f0((Struct_10B1E010_Param*)A));
            FVector V2(GetFlatForward((Struct_10B1DCA0_Param*)A));
            c = (V1.x*V2.x + V1.y*V2.y + V1.z*V2.z >= 0.0f);
        }
        else
        {
            c = (State == 0xfd);
        }
    }
    else
    {
        c = (A->Unknown44C == 3);
    }

    if (b)
    {
        if (A->Unknown450 & 2)
        {
            if (c)
            {
                ((Class_10B39530*)GetLinkedObject())->Play(0xf9, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
                return;
            }
            ((Class_10B39530*)GetLinkedObject())->Play(0xfb, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
            return;
        }
        if (c)
        {
            ((Class_10B39530*)GetLinkedObject())->Play(0xf8, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
            return;
        }
        ((Class_10B39530*)GetLinkedObject())->Play(0xfa, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        return;
    }
    if (A->Unknown450 & 2)
    {
        if (c)
        {
            ((Class_10B39530*)GetLinkedObject())->Play(0xf5, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
            return;
        }
        ((Class_10B39530*)GetLinkedObject())->Play(0xf7, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        return;
    }
    if (c)
    {
        ((Class_10B39530*)GetLinkedObject())->Play(0xf4, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        return;
    }
    ((Class_10B39530*)GetLinkedObject())->Play(0xf6, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
}
