// Game/Unsorted_10919240.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10924210
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    float Unknown10;
    float Unknown14;
};

struct Struct_109E44B0
{
    float Unknown00[16];
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
    virtual int __stdcall SetViewport(const Struct_10924210* Viewport);
};

class Class_1091E3E0
{
public:
    void* FUN_1091e3e0();
};

class Class_1091E400 : public Class_1091E3E0
{
};

class Class_1091E940 : public Class_1091E400
{
public:
    void FUN_1091ea50(Struct_10924210* A, int B);
    void FUN_1091eb80();
};

class Class_10E6D8F0
{
public:
    virtual void FUN_10c3e130(int A);

    int Unknown04[5];
};

class Class_109242E0 : public Class_10E6D8F0
{
public:
    Struct_10924210 Unknown18;
};

extern int DAT_10f2c8c4;

extern Class_1091E400* DAT_10f2c8c0;

extern IDirect3DDevice8* GDirect3DDevice8;

extern Struct_10924210 DAT_10f2c780;

extern Class_109242E0* DAT_10f319a0;

extern Struct_109E44B0 DAT_10f2c8e8;

// FUNCTION: 0x10919240 ?FUN_10919240@@YAXPAVClass_1091E940@@H@Z
void FUN_10919240(Class_1091E940* A, int B)
{
    DAT_10f2c8c4 = B;
    DAT_10f2c8c0 = A;
    GDirect3DDevice8->SetViewport(&DAT_10f2c780);
    A->FUN_1091ea50(&DAT_10f2c780, 1);
    A->FUN_1091eb80();
    DAT_10f319a0->Class_10E6D8F0::FUN_10c3e130((int)A);
    DAT_10f319a0->Unknown18 = DAT_10f2c780;
    DAT_10f2c8e8 = *(Struct_109E44B0*)A->FUN_1091e3e0();
}
