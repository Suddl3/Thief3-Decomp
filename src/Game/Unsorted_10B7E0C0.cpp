// Game/Unsorted_10B7E0C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E894C8.h"

class Class_10D9B090;

Class_10905A90_Member* GetAllocator();

Class_10D9B090* FUN_10d9dcb0();

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10CAFD00;

struct Struct_10B7C170;

struct Struct_10D9E5E0_Param;

// The three dwords the manager hands out; the object keeps them at +0x40.
struct Struct_10B7E0C0_Unknown40
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10D9B090
{
public:
    void FUN_10d9e5e0(Struct_10D9E5E0_Param* A);
    void FUN_10d9e490(Struct_10D9E5E0_Param* A);
    int FUN_10d9d640(int A, int B, int C, Struct_10B7C170* Out, int D);
    void FUN_10d9b090();
    void FUN_10d9b100();
    void FUN_10d9b1e0();
    Struct_10B7E0C0_Unknown40* FUN_10d9a5b0(Struct_10B7E0C0_Unknown40* A);

    char Unknown00[4];
    Class_10CAFD00* Unknown04;
    char Pad08[0xb0];
    bool UnknownB8;
};

// The config lookup fills two floats.
struct Struct_10978840
{
    FLOAT Unknown00;
    FLOAT Unknown04;
};

class Class_10B37FE0_Unknown04_Unknown460;

class Class_10B37FE0_Unknown04
{
public:
    int FUN_10978840(int Id, Struct_10978840* Out);

    char Unknown00[0x2C];
    FVector Unknown2C;
    char Pad38[0x428];
    Class_10B37FE0_Unknown04_Unknown460* Unknown460;
};

class Class_10971570
{
public:
    int FUN_10971570(int Id, bool* Out);
    int FUN_109766a0(int A, int B);

    char Pad00[0x1];
    char Pad01[0x23];
    int Unknown24;
};

class Class_10E89540
{
public:
    Class_10E89540(int A, int B);

    char Pad00[0x19];
    bool Unknown19;
    char Pad1A[0x16];
};

class Class_10E893B0
{
public:
    Class_10E893B0();
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16(int A, int B);

    void* Unknown04;
    Class_10E89540* Unknown08;
    void* Unknown0C;
    Class_10E89540* Unknown10;
    char Pad14[0x2C];
    Struct_10B7E0C0_Unknown40 Unknown40;
    char Pad4C[0x24];
    float Unknown70;
    float Unknown74;
    char Pad78[4];
};

// FUNCTION: 0x10B7E0C0 ?FUN_10b7e0c0@@YAPAVClass_10E893B0@@PAVClass_10E89540@@PAVClass_10B37FE0_Unknown04@@@Z
Class_10E893B0* __cdecl FUN_10b7e0c0(Class_10E89540* Target, Class_10B37FE0_Unknown04* Config)
{
    Class_10E893B0* Result = 0;
    if (Target && Config)
    {
        GetAllocator()->Virtual8(0, 0);
        Class_10E893B0* Obj = new(0, 0, 0, 0, 0) Class_10E893B0();
        GetAllocator()->Virtual9();

        Obj->Unknown10 = Target;
        Obj->Unknown08 = Target;
        ((Class_10E894C8*)Target)->FUN_10b8b420((Object_10B8B420*)Obj);

        Struct_10B7E0C0_Unknown40 Local;
        Obj->Unknown40 = *FUN_10d9dcb0()->FUN_10d9a5b0(&Local);

        Struct_10978840 Cfg;
        if (Config->FUN_10978840(0x80466, &Cfg))
        {
            Obj->Unknown74 = Cfg.Unknown04;
            Obj->Unknown70 = Cfg.Unknown00;
        }
        else
        {
            Obj->Unknown74 = 250.0f;
            Obj->Unknown70 = 125.0f;
        }

        bool Flag;
        int Found = ((Class_10971570*)Config)->FUN_10971570(0x2000532, &Flag);
        if (Found || Flag)
            Obj->Virtual16(Flag, 0);
        else
            Obj->Virtual16(7, 0);
        Result = Obj;
        if (Flag == 5)
            Target->Unknown19 = true;
    }
    return Result;
}
