// Game/Class_10E49E50_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <vector>

class Class_109336B0_Unknown14
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

class Class_109336B0_Unknown0C
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
    virtual int __stdcall Virtual23(int A, int B, int C, int D, Class_109336B0_Unknown14** E);
};

struct Struct_109336B0_Item
{
    char Unknown00[0x14];
    Class_109336B0_Unknown14* Unknown14;
    int Unknown18;
};

class Class_10E49E50
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Release();
    virtual void FUN_109336b0(int A);

    char Unknown04[8];
    Class_109336B0_Unknown0C* Unknown0C;
    char Unknown10[4];
    unsigned int Unknown14;
    char Unknown18[8];
    std::vector<Struct_109336B0_Item*> Unknown20;
};

// FUNCTION: 0x109336B0 ?FUN_109336b0@Class_10E49E50@@UAEXH@Z
void Class_10E49E50::FUN_109336b0(int A)
{
    if (Unknown14 & 2)
        return;
    for (std::vector<Struct_109336B0_Item*>::iterator It = Unknown20.begin(); It != Unknown20.end(); ++It)
    {
        Struct_109336B0_Item* Item = *It;
        if (Item->Unknown14 == 0)
        {
            Class_109336B0_Unknown14* Local = 0;
            Unknown0C->Virtual23(Item->Unknown18, 8, 0, (Unknown14 >> 1) & 1, &Local);
            Item->Unknown14 = Local;
            Local->Virtual1();
            if (Local)
                Local->Virtual2();
        }
    }
}
