// Game/Unsorted_10924270_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first.
extern "C" void* memset(void*, int, unsigned);

class Class_109242E0_Unknown04;

class Class_109242E0_Unknown0C;

class Class_109242E0_Unknown64;

class Class_109242E0_Unknown04
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
    virtual void __stdcall Virtual26(int A, int B, int C, int D, Class_109242E0_Unknown64** E);
};

class Class_109242E0_Unknown0C
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
    virtual void __stdcall Virtual8(int* Out);
};

class Class_109242E0_Unknown64
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void __stdcall Virtual2();
};

class Class_109242E0
{
public:
    void FUN_109242e0(int Param);
    void Refresh();

    char Unknown00[0x4];
    Class_109242E0_Unknown04* Unknown04;
    char Unknown08[0x4];
    Class_109242E0_Unknown0C* Unknown0C;
    char Unknown10[0x3C];
    int Unknown4C;
    int Unknown50;
    char Unknown54[0x10];
    Class_109242E0_Unknown64* Unknown64;
};

// FUNCTION: 0x109242E0 ?FUN_109242e0@Class_109242E0@@QAEXH@Z
void Class_109242E0::FUN_109242e0(int Param)
{
    if (Param > 0)
    {
        if (Unknown64 == 0)
        {
            int Local[8];
            memset(Local, 0, sizeof(Local));
            Unknown0C->Virtual8(Local);
            Unknown04->Virtual26(Unknown4C, Unknown50, Local[0], 0, &Unknown64);
        }
    }
    else if (Unknown64)
    {
        Unknown64->Virtual2();
        Unknown64 = 0;
    }
}
