// Game/Unsorted_10919730.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10924AE0.h"
#include "Game/Struct_10924210.h"
#include "Game/Class_10937730.h"

class IDirect3D8;

class Class_1093E930_Member;

class Class_10953590;

// Copied from include/Game/IDirect3DDevice8.h; slot 41 takes the viewport it is passed.
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
    virtual int __stdcall Virtual25();
    virtual int __stdcall Virtual26();
    virtual int __stdcall Virtual27();
    virtual int __stdcall Virtual28();
    virtual int __stdcall Virtual29();
    virtual int __stdcall Virtual30();
    virtual int __stdcall Virtual31();
    virtual int __stdcall Virtual32();
    virtual int __stdcall Virtual33();
    virtual int __stdcall Virtual34();
    virtual int __stdcall Virtual35();
    virtual int __stdcall Virtual36();
    virtual int __stdcall Virtual37();
    virtual int __stdcall Virtual38();
    virtual int __stdcall Virtual39();
    virtual int __stdcall Virtual40();
    virtual long __stdcall Virtual41(const Struct_10924210* Viewport);
};

// Copied from include/Game/Class_1093E930.h with FUN_1093ec90 added.
class Class_1093E930
{
public:
    void FUN_1093e550();
    Class_1093E930* FUN_1093e930();
    bool FUN_1093ec90();

    Class_1093E930_Member* Unknown00;
    Class_1093E930_Member* Unknown04;
    bool Unknown08;
    char Pad09[0x3];
};

// Copied from include/Game/Class_10939570.h with FUN_109397b0 added.
class Class_10939570
{
public:
    char FUN_10939570();
    void FUN_1093bce0(Class_10953590* Param);
    void* FUN_1093bd40(int* A, int B, int C);
    void FUN_1093b5e0();
    void FUN_109397b0();
    char Pad00[0x1];
};

Class_10905A90_Member* GetAllocator();

void FUN_10919490();

bool FUN_10918f40();

extern bool DAT_10f2c8b0;

extern bool DAT_10f2c8b1;

extern IDirect3D8* GDirect3D8;

extern IDirect3DDevice8* GDirect3DDevice8;

extern Struct_10924210 DAT_10f2c780;

extern Class_10924AE0* DAT_10f3199c;

extern Class_1093E930* DAT_10f340ac;

extern Class_10937730* DAT_10f31bdc;

extern Class_10939570* DAT_10f323fc;

// FUNCTION: 0x10919A10 ?FUN_10919a10@@YA_NPAVIDirect3D8@@PAVIDirect3DDevice8@@_N@Z
bool FUN_10919a10(IDirect3D8* D3D, IDirect3DDevice8* Device, bool Flag)
{
    FUN_10919490();
    if (!DAT_10f2c8b0)
    {
        GDirect3D8 = D3D;
        DAT_10f2c8b0 = true;
        DAT_10f2c8b1 = true;
        GDirect3DDevice8 = Device;
        Device->Virtual41(&DAT_10f2c780);
        if (!Flag)
        {
            GetAllocator()->Virtual8(0, 0);
            bool Ok = DAT_10f3199c->FUN_10924be0((Class_10924BE0*)GDirect3DDevice8);
            GetAllocator()->Virtual9();
            if (Ok)
            {
                GetAllocator()->Virtual8(0, 0);
                Ok = DAT_10f340ac->FUN_1093ec90();
                GetAllocator()->Virtual9();
                if (Ok)
                {
                    if (FUN_10918f40())
                    {
                        GetAllocator()->Virtual8(0, 0);
                        Ok = DAT_10f31bdc->FUN_10937690();
                        GetAllocator()->Virtual9();
                        if (Ok)
                        {
                            DAT_10f323fc->FUN_109397b0();
                            return true;
                        }
                    }
                }
            }
            return false;
        }
    }
    return true;
}
