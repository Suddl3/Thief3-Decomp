// Game/Class_10E4A538_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"

extern "C" void* memset(void*, int, unsigned);

struct Struct_1093FFE0;

struct Struct_109400A0;

class Class_109400A0_Arg;

class Class_109400A0_Unknown13C;

class Class_109400A0_Unknown140;

class Class_10E4A538
{
public:
    virtual void FUN_109412f0();
    virtual void Virtual1();
    virtual void Virtual2();

    ~Class_10E4A538();

    char FUN_10940970();
    void FUN_10940c50();
    void FUN_1093ffe0(int Width, int Height, Struct_1093FFE0* Out);
    void FUN_109400a0(Class_109400A0_Arg* Arg);

    int Unknown04;
    Class_109081E0 Unknown08[47];
    char UnknownC4[0xBC];
    Class_109081E0 Unknown180[47];
    char Pad23C[0xc0];
    int Unknown2FC;
};

struct Struct_1093FFE0
{
};

struct Struct_109400A0
{
    unsigned int Unknown00;
    unsigned int Unknown04;
    unsigned int Unknown08;
    unsigned int Unknown0C;
    unsigned int Unknown10;
    unsigned int Unknown14;
    unsigned int Width;
    unsigned int Height;
};

class Class_109400A0_Unknown13C
{
public:
    char Pad00[0x18];
    int Width;
    int Height;
};

class Class_109400A0_Unknown140
{
public:
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
    virtual int __stdcall Virtual14(unsigned int Level, Struct_109400A0* Desc);
};

class Class_109400A0_Arg
{
public:
    char Pad00[0x5c];
    int Unknown5C;
    char Pad60[0xdc];
    Class_109400A0_Unknown13C* Unknown13C;
    Class_109400A0_Unknown140* Unknown140;
    char Pad144[0x80];
    Struct_1093FFE0 Unknown1C4;
};

// FUNCTION: 0x109400A0 ?FUN_109400a0@Class_10E4A538@@QAEXPAVClass_109400A0_Arg@@@Z
void Class_10E4A538::FUN_109400a0(Class_109400A0_Arg* Arg)
{
    if (Arg->Unknown13C != 0)
    {
        FUN_1093ffe0((int)(float)Arg->Unknown13C->Width, (int)(float)Arg->Unknown13C->Height, &Arg->Unknown1C4);
        return;
    }
    if (Arg->Unknown140 != 0)
    {
        Struct_109400A0 Desc;
        memset(&Desc, 0, sizeof(Desc));
        Arg->Unknown140->Virtual14(0, &Desc);
        FUN_1093ffe0((int)(float)Desc.Width, (int)(float)Desc.Height, &Arg->Unknown1C4);
        return;
    }
    Arg->Unknown5C |= 0x800;
}
