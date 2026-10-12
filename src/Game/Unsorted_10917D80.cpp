// Game/Unsorted_10917D80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/IDirect3DSurface8.h"
#include "Game/Class_10924E80.h"

struct Struct_10917E40
{
    int Unknown00;
    int* Bits;
};

class IDirect3DDevice8
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
    virtual int __stdcall Virtual3();
    virtual int __stdcall Virtual4();
    virtual int __stdcall Virtual5();
    virtual int __stdcall Virtual6();
    virtual int __stdcall Virtual7();
    virtual int __stdcall Virtual8();
    virtual int __stdcall Virtual9();
    virtual int __stdcall Virtual10();
    virtual int __stdcall Virtual11();
    virtual int __stdcall Virtual12();
    virtual int __stdcall Virtual13();
    virtual int __stdcall Virtual14();
    virtual int __stdcall Virtual15();
    virtual int __stdcall Virtual16();
    virtual int __stdcall Virtual17();
    virtual int __stdcall Virtual18();
    virtual int __stdcall Virtual19();
    virtual int __stdcall Virtual20();
    virtual int __stdcall Virtual21();
    virtual int __stdcall Virtual22();
    virtual int __stdcall Virtual23();
    virtual int __stdcall Virtual24();
    virtual int __stdcall Virtual25(unsigned Width, unsigned Height, int Format, int MultiSample, int Lockable, IDirect3DSurface8** Surface);
    virtual int __stdcall Virtual26();
    virtual int __stdcall Virtual27();
    virtual int __stdcall Virtual28(IDirect3DSurface8* Source, const void* SourceRects, unsigned Count, IDirect3DSurface8* Dest, const void* DestPoints);
};

class Class_1091E940;

class Class_10924100;

void UpdateVideos(float Value);

extern Class_1091E940* DAT_10f2c738;

extern Class_10924100* DAT_10f2c740;

extern Class_10924E80* DAT_10f2c734;

extern IDirect3DDevice8* GDirect3DDevice8;

extern IDirect3DSurface8* DAT_10f2c6e4;

extern IDirect3DSurface8* DAT_10f2c6e8;

extern float DAT_10f2c6ec;

extern float DAT_10efef6c;

extern int DAT_10f2c774;

// FUNCTION: 0x10917E40 ?FUN_10917e40@@YAXM@Z
void FUN_10917e40(float Param)
{
    if (DAT_10f2c738 && DAT_10f2c740)
    {
        DAT_10f2c734->FUN_109251c0(Param);
        UpdateVideos(Param);
    }
    if (DAT_10f2c6ec > DAT_10efef6c)
    {
        if (DAT_10f2c6e4 == 0)
        {
            int Slot = (int)&DAT_10f2c6e4;
            do
            {
                GDirect3DDevice8->Virtual25(8, 8, 0x16, 0, 1, (IDirect3DSurface8**)Slot);
                Slot += 4;
            } while (Slot < (int)&DAT_10f2c6ec);
        }
        GDirect3DDevice8->Virtual28(DAT_10f2c6e4, 0, 0, DAT_10f2c6e8, 0);
        Struct_10917E40 Locked;
        if (DAT_10f2c6e4->Virtual9(&Locked, 0, 0) >= 0)
        {
            int Counter = DAT_10f2c774;
            *Locked.Bits = Counter;
            DAT_10f2c774 = Counter + 1;
            DAT_10f2c6e4->Virtual10();
        }
    }
}
