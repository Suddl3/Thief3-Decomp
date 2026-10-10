// Game/Unsorted_109501A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern "C" __declspec(dllimport) void __stdcall _BinkClose(void* Handle);

void operator delete(void* Ptr);

class Class_10950230;

extern Class_10950230* DAT_10f31a64;

void FUN_109e29d0();

class Class_109501A0_Com
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

struct Struct_109501A0
{
    void* Unknown00;
    Class_109501A0_Com* Unknown04;
};

struct Struct_109501A0_Engine
{
    char Unknown00[0x68];
    int Unknown68;
    int Unknown6C;
    int Unknown70;
};

class UEngine
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
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();

    char Unknown04[0x34];
    Struct_109501A0_Engine* Unknown38;
};

extern UEngine* GEngine;

class Class_109501A0
{
public:
    void FUN_109501a0();

    Struct_109501A0* Unknown00;
    char Unknown04[2];
    bool Unknown06;
    char Unknown07[9];
    int Unknown10;
    int Unknown14;
    int Unknown18;
};

// FUNCTION: 0x109501A0 ?FUN_109501a0@Class_109501A0@@QAEXXZ
void Class_109501A0::FUN_109501a0()
{
    _BinkClose(Unknown00->Unknown00);
    if (Unknown00->Unknown04 != 0)
    {
        Unknown00->Unknown04->Virtual2();
        Unknown00->Unknown04 = 0;
    }
    delete Unknown00;
    Unknown00 = 0;
    DAT_10f31a64 = 0;
    FUN_109e29d0();
    if (Unknown06)
    {
        GEngine->Unknown38->Unknown70 = Unknown10;
        GEngine->Unknown38->Unknown6C = Unknown14;
        GEngine->Unknown38->Unknown68 = Unknown18;
        GEngine->Virtual35();
    }
}
