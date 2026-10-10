// Game/Unsorted_109243F0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class IDirect3DSurface8;

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
    virtual long __stdcall SetRenderTarget(IDirect3DSurface8* RenderTarget, IDirect3DSurface8* ZStencil);
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
    virtual long __stdcall SetRenderState(unsigned long State, unsigned long Value);
};

class Class_10936A40
{
public:
    void FUN_10936a40();
};

class Class_10936AC0 : public Class_10936A40
{
};

extern Class_10936AC0* DAT_10f31be0;

class Class_10924B70
{
public:
    void FUN_109243f0();

    char Unknown00[4];
    IDirect3DDevice8* Unknown04;
    IDirect3DSurface8* Unknown08;
    IDirect3DSurface8* Unknown0C;
    char Unknown10[0x98];
    int UnknownA8;
};

// FUNCTION: 0x109243F0 ?FUN_109243f0@Class_10924B70@@QAEXXZ
void Class_10924B70::FUN_109243f0()
{
    if (Unknown04)
    {
        if (Unknown08 && Unknown0C && UnknownA8 != -1)
            Unknown04->SetRenderTarget(Unknown08, Unknown0C);
        Unknown04->SetRenderState(0xa1, 1);
        if (UnknownA8 != -1)
            DAT_10f31be0->FUN_10936a40();
        UnknownA8 = -1;
    }
}
