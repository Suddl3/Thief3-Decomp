// Game/Unsorted_1094D9F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1094D9F0.h"

class IDirect3DDevice8
{
public:
    virtual long __stdcall Virtual0();
    virtual long __stdcall Virtual1();
    virtual long __stdcall Virtual2();
    virtual long __stdcall Virtual3();
    virtual long __stdcall Virtual4();
    virtual long __stdcall Virtual5();
    virtual long __stdcall Virtual6();
    virtual long __stdcall Virtual7();
    virtual long __stdcall Virtual8();
    virtual long __stdcall Virtual9();
    virtual long __stdcall Virtual10();
    virtual long __stdcall Virtual11();
    virtual long __stdcall Virtual12();
    virtual long __stdcall Virtual13();
    virtual long __stdcall Virtual14();
    virtual long __stdcall Virtual15();
    virtual long __stdcall Virtual16();
    virtual long __stdcall Virtual17();
    virtual long __stdcall Virtual18();
    virtual long __stdcall Virtual19();
    virtual long __stdcall Virtual20();
    virtual long __stdcall Virtual21();
    virtual long __stdcall Virtual22();
    virtual long __stdcall Virtual23();
    virtual long __stdcall Virtual24();
    virtual long __stdcall Virtual25();
    virtual long __stdcall Virtual26();
    virtual long __stdcall Virtual27();
    virtual long __stdcall Virtual28();
    virtual long __stdcall Virtual29();
    virtual long __stdcall Virtual30();
    virtual long __stdcall Virtual31();
    virtual long __stdcall Virtual32();
    virtual long __stdcall Virtual33();
    virtual long __stdcall Virtual34();
    virtual long __stdcall Virtual35();
    virtual long __stdcall Virtual36();
    virtual long __stdcall Virtual37();
    virtual long __stdcall Virtual38();
    virtual long __stdcall Virtual39();
    virtual long __stdcall Virtual40();
    virtual long __stdcall Virtual41();
    virtual long __stdcall Virtual42();
    virtual long __stdcall Virtual43();
    virtual long __stdcall Virtual44();
    virtual long __stdcall Virtual45();
    virtual long __stdcall Virtual46();
    virtual long __stdcall Virtual47();
    virtual long __stdcall Virtual48();
    virtual long __stdcall Virtual49();
    virtual long __stdcall Virtual50();
    virtual long __stdcall Virtual51();
    virtual long __stdcall Virtual52();
    virtual long __stdcall Virtual53();
    virtual long __stdcall Virtual54();
    virtual long __stdcall Virtual55();
    virtual long __stdcall Virtual56();
    virtual long __stdcall Virtual57();
    virtual long __stdcall Virtual58();
    virtual long __stdcall Virtual59();
    virtual long __stdcall Virtual60();
    virtual long __stdcall SetTexture(unsigned long Stage, void* Texture);
};

extern IDirect3DDevice8* GDirect3DDevice8;

class Class_10936AC0
{
public:
    char Unknown00[0x1C];
    void* Unknown1C[8];
};

extern Class_10936AC0* DAT_10f31be0;

struct Struct_1094D9F0
{
    char Unknown00[0x30];
    void* Unknown30;
};

// FUNCTION: 0x1094D9F0 ?FUN_1094d9f0@Class_1094D9F0@@QAEXH@Z
void Class_1094D9F0::FUN_1094d9f0(int Stage)
{
    Struct_1094D9F0* Info = Unknown14[Stage];
    if (Info)
    {
        void* Texture = Info->Unknown30;
        void** Slot = &DAT_10f31be0->Unknown1C[Stage];
        if (*Slot != Texture)
        {
            GDirect3DDevice8->SetTexture(Stage, Texture);
            *Slot = Texture;
        }
    }
    else
    {
        void** Slot = &DAT_10f31be0->Unknown1C[Stage];
        if (*Slot)
        {
            GDirect3DDevice8->SetTexture(Stage, 0);
            *Slot = 0;
        }
    }
}
