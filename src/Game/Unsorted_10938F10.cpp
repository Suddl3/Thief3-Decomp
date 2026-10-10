// Game/Unsorted_10938F10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

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
    virtual long __stdcall SetRenderState(int State, unsigned long Value);
};

extern IDirect3DDevice8* GDirect3DDevice8;

void __stdcall FUN_10938f10(int Mode);

struct Struct_10938F80
{
    int Unknown00;
    char Unknown04;
    bool Unknown05;
    bool Unknown06;
    char Unknown07;
    int Unknown08;
};

class Class_10E4A538
{
public:
    char Unknown00[0x2FC];
    int Unknown2FC;
};

extern Class_10E4A538* DAT_10f2c8e4;

void FUN_10938230();

void FUN_10938330();

void FUN_10938520();

void FUN_109387c0();

void FUN_109388c0();

void FUN_10938a50();

// FUNCTION: 0x10938F10 ?FUN_10938f10@@YGXH@Z
void __stdcall FUN_10938f10(int A)
{
    if (DAT_10f2c8e4)
        DAT_10f2c8e4->Unknown2FC = 0;
    switch (A)
    {
    case 1:
        FUN_10938230();
        return;
    case 2:
        FUN_10938330();
        return;
    case 3:
        FUN_10938520();
        return;
    case 4:
        FUN_109387c0();
        return;
    case 5:
        FUN_109388c0();
        return;
    case 6:
        FUN_10938a50();
    }
}

// FUNCTION: 0x10938F80 ?FUN_10938f80@@YGXPAUStruct_10938F80@@@Z
void __stdcall FUN_10938f80(Struct_10938F80* P)
{
    FUN_10938f10(P->Unknown00);
    GDirect3DDevice8->SetRenderState(7, P->Unknown05);
    if (P->Unknown05)
    {
        GDirect3DDevice8->SetRenderState(14, P->Unknown06);
        GDirect3DDevice8->SetRenderState(23, P->Unknown08);
    }
}
