// Game/Unsorted_10924BE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BCE8F0
{
public:
    unsigned char FUN_10bce8f0(int A);
};

class Class_10924BE0
{
public:
    virtual void __stdcall Virtual0();
    virtual void __stdcall Virtual1();
    virtual void __stdcall Virtual2();
    virtual void __stdcall Virtual3();
    virtual void __stdcall Virtual4();
    virtual void __stdcall Virtual5();
    virtual void __stdcall Virtual6();
    virtual void __stdcall Virtual7();
    virtual void __stdcall Virtual8();
    virtual void __stdcall Virtual9();
    virtual void __stdcall Virtual10();
    virtual void __stdcall Virtual11();
    virtual void __stdcall Virtual12();
    virtual void __stdcall Virtual13();
    virtual void __stdcall Virtual14();
    virtual void __stdcall Virtual15();
    virtual void __stdcall Virtual16();
    virtual void __stdcall Virtual17();
    virtual void __stdcall Virtual18();
    virtual void __stdcall Virtual19();
    virtual void __stdcall Virtual20();
    virtual void __stdcall Virtual21();
    virtual void __stdcall Virtual22();
    virtual void __stdcall Virtual23();
    virtual void __stdcall Virtual24();
    virtual void __stdcall Virtual25();
    virtual void __stdcall Virtual26();
    virtual void __stdcall Virtual27();
    virtual void __stdcall Virtual28();
    virtual void __stdcall Virtual29();
    virtual void __stdcall Virtual30();
    virtual void __stdcall Virtual31();
    virtual void __stdcall Virtual32(int* A);
    virtual void __stdcall Virtual33(int* A);
    virtual void __stdcall Virtual34();
    virtual void __stdcall Virtual35();
    virtual void __stdcall Virtual36();
    virtual void __stdcall Virtual37();
    virtual void __stdcall Virtual38();
    virtual void __stdcall Virtual39();
    virtual void __stdcall Virtual40();
    virtual void __stdcall Virtual41(int* A);
};

class Class_10924AE0
{
public:
    bool FUN_10924ae0();
    bool FUN_10924be0(Class_10924BE0* A);

    bool Unknown00;
    Class_10924BE0* Unknown04;
    int Unknown08;
    int Unknown0C;
    char Unknown10[0x8];
    int Unknown18;
    char Unknown1C[0x14];
    Class_10BCE8F0 Unknown30;
    char Unknown31[0x77];
    int UnknownA8;
};

class Class_109250C0_Item
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int Value);

    char Unknown04[0x44];
    bool Unknown48;
};

struct Struct_109250C0_Entry
{
    char Unknown00[0x10];
    int Unknown10;
    int Unknown14;
    Class_109250C0_Item** Unknown18;
    char Unknown1C[0x28];
};

class Class_109250C0
{
public:
    void FUN_109250c0();

    int Unknown00;
    int Unknown04;
    char Unknown08[0xD4];
    int UnknownDC;
    int UnknownE0;
    Struct_109250C0_Entry* UnknownE4;
};

class Class_10E499F4
{
public:
    void FUN_1091e340();
};

struct Struct_10925390
{
    char Unknown00[0x0C];
    Class_10E499F4* Unknown0C;
    char Unknown10[0x30];
    int Unknown40;
};

class Class_10925390
{
public:
    void FUN_10925390(int Index);

    char Unknown00[0xDC];
    int UnknownDC;
    char UnknownE0[0x4];
    Struct_10925390* UnknownE4;
};

// FUNCTION: 0x10924BE0 ?FUN_10924be0@Class_10924AE0@@QAE_NPAVClass_10924BE0@@@Z
bool Class_10924AE0::FUN_10924be0(Class_10924BE0* A)
{
    if (!Unknown00)
    {
        Unknown04 = A;
        A->Virtual1();
        UnknownA8 = -1;
        if (!Unknown30.FUN_10bce8f0(0))
            return false;
        Unknown04->Virtual41(&Unknown18);
        Unknown04->Virtual32(&Unknown08);
        Unknown04->Virtual33(&Unknown0C);
        FUN_10924ae0();
        Unknown00 = true;
    }
    return true;
}

// FUNCTION: 0x109250C0 ?FUN_109250c0@Class_109250C0@@QAEXXZ
void Class_109250C0::FUN_109250c0()
{
    for (int i = 0; i < UnknownDC; i++)
    {
        Struct_109250C0_Entry* Entry = &UnknownE4[i];
        for (int j = 0; j < Entry->Unknown10; j++)
        {
            Entry->Unknown18[j]->Virtual1(Unknown04);
            Entry->Unknown18[j]->Unknown48 = true;
        }
    }
}

// FUNCTION: 0x10925390 ?FUN_10925390@Class_10925390@@QAEXH@Z
void Class_10925390::FUN_10925390(int Index)
{
    if (Index >= 0 && Index < UnknownDC)
    {
        if (UnknownE4[Index].Unknown40 <= 0)
        {
            UnknownE4[Index].Unknown40 = 0;
            return;
        }
        if (UnknownE4[Index].Unknown40 == 1)
        {
            Class_10E499F4* Object = UnknownE4[Index].Unknown0C;
            if (Object)
            {
                Object->FUN_1091e340();
                delete Object;
                UnknownE4[Index].Unknown0C = 0;
            }
        }
        UnknownE4[Index].Unknown40--;
    }
}
