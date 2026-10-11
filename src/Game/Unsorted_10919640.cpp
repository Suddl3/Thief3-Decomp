// Game/Unsorted_10919640.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1093E930.h"
#include "Game/Class_1093EDB0.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_1091E400.h"
#include "Game/IDirect3DDevice8.h"

struct Struct_1093FFE0;

class Class_10953590;

// Include/Game/Class_10E4A538.h copied whole; its slot 0 is the deleting destructor at 0x109412F0
// (the header's FUN_109412f0), which the target calls with 1 to delete the object.
class Class_10E4A538
{
public:
    virtual ~Class_10E4A538();
    virtual void Virtual1();
    virtual void Virtual2();

    char FUN_10940970();
    void FUN_10940c50();
    void FUN_1093ffe0(int Width, int Height, Struct_1093FFE0* Out);

    int Unknown04;
    Class_109081E0 Unknown08[47];
    char UnknownC4[0xBC];
    Class_109081E0 Unknown180[47];
    char Pad23C[0xc0];
    int Unknown2FC;
};

// Include/Game/Class_10939570.h copied whole, with FUN_1093b560 and the flag at 0x1c50 added.
class Class_10939570
{
public:
    char FUN_10939570();
    void FUN_1093bce0(Class_10953590* Param);
    void* FUN_1093bd40(int* A, int B, int C);
    void FUN_1093b5e0();
    void FUN_1093b560();

    char Pad00[0x1];
    char Pad01[0x1C4F];
    bool Unknown1C50;
};

class Class_10937730
{
public:
    void FUN_10937730();
};

class IDirect3D8
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

extern Class_10E4A538* DAT_10f2c8e4;

extern Class_1093E930* DAT_10f340ac;

extern Class_1093EDB0* DAT_10f340c0;

extern Class_10939570* DAT_10f323fc;

extern Class_10937730* DAT_10f31bdc;

extern Class_1091E400* DAT_10f2c8c0;

extern bool DAT_10f2c8b0;

extern bool DAT_10f2c8b1;

extern IDirect3DDevice8* GDirect3DDevice8;

extern IDirect3D8* GDirect3D8;

// FUNCTION: 0x10919640 ?FUN_10919640@@YAX_N@Z
void FUN_10919640(bool Param)
{
    if (DAT_10f2c8e4)
    {
        DAT_10f2c8e4->Virtual2();
        delete DAT_10f2c8e4;
        DAT_10f2c8e4 = 0;
    }
    DAT_10f340ac->FUN_1093e550();
    DAT_10f340c0->FUN_1093edb0();
    if (DAT_10f323fc->Unknown1C50)
        DAT_10f323fc->FUN_1093b560();
    DAT_10f31bdc->FUN_10937730();
    if (Param)
    {
        unsigned int Count;
        if (GDirect3DDevice8)
        {
            do
            {
                Count = GDirect3DDevice8->Virtual2();
            } while (Count > 0);
            GDirect3DDevice8 = 0;
        }
        if (GDirect3D8)
        {
            do
            {
                Count = GDirect3D8->Virtual2();
            } while (Count > 0);
            GDirect3D8 = 0;
        }
    }
    else
    {
        if (!DAT_10f2c8b1)
        {
            if (GDirect3DDevice8)
            {
                GDirect3DDevice8->Virtual2();
                GDirect3DDevice8 = 0;
            }
            if (GDirect3D8)
            {
                GDirect3D8->Virtual2();
                GDirect3D8 = 0;
            }
        }
    }
    DAT_10f2c8c0 = 0;
    DAT_10f2c8b1 = 0;
    DAT_10f2c8b0 = 0;
}
