// Game/Unsorted_10940490.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109403A0.h"
#include "Game/Struct_109403A0.h"

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
    virtual int __stdcall Virtual41();
    virtual int __stdcall Virtual42();
    virtual int __stdcall Virtual43();
    virtual int __stdcall Virtual44();
    virtual int __stdcall Virtual45();
    virtual int __stdcall Virtual46();
    virtual int __stdcall Virtual47();
    virtual int __stdcall Virtual48();
    virtual int __stdcall Virtual49();
    virtual int __stdcall Virtual50();
    virtual int __stdcall Virtual51();
    virtual int __stdcall Virtual52();
    virtual int __stdcall Virtual53();
    virtual int __stdcall Virtual54();
    virtual int __stdcall Virtual55();
    virtual int __stdcall Virtual56();
    virtual int __stdcall Virtual57();
    virtual int __stdcall Virtual58();
    virtual int __stdcall Virtual59();
    virtual int __stdcall Virtual60();
    virtual long __stdcall SetTexture(unsigned long Stage, void* Texture);
    virtual int __stdcall Virtual62();
    virtual int __stdcall Virtual63(int A, int B, int C);
};

extern IDirect3DDevice8* GDirect3DDevice8;

class cD3DStateCache
{
public:
    void SetStageBorder(int A, bool B);

    char Unknown00[0x1C];
    void* Unknown1C[8];
};

extern cD3DStateCache* DAT_10f31be0;

class IDirect3DBaseTexture8;

// FUNCTION: 0x109405D0 ?FUN_109405d0@Class_109403A0@@QAEXPAUStruct_109403A0@@@Z
void Class_109403A0::FUN_109405d0(Struct_109403A0* Material)
{
    FUN_1093fcd0(Material);
    DAT_10f31be0->SetStageBorder(2, false);
    GDirect3DDevice8->Virtual63(2, 0x18, 2);
    void* Texture = Material->Unknown140;
    if (Texture)
    {
        void** Slot = &DAT_10f31be0->Unknown1C[2];
        if (*Slot != Texture)
        {
            GDirect3DDevice8->SetTexture(2, Texture);
            *Slot = Texture;
        }
    }
    else
    {
        void** Slot = &DAT_10f31be0->Unknown1C[3];
        void* Tex = Unknown300;
        if (*Slot != Tex)
        {
            GDirect3DDevice8->SetTexture(3, Tex);
            *Slot = Tex;
        }
    }
}
