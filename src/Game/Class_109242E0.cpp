// Game/Class_109242E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10924270_Unknown00
{
public:
    virtual void __stdcall Virtual0();
    virtual void __stdcall Virtual1();
    virtual void __stdcall Virtual2();
};

class Class_10924270_Unknown04
{
public:
    virtual void __stdcall Virtual0();
    virtual void __stdcall Virtual1();
    virtual void __stdcall Virtual2();
};

class Class_10924270_Unknown08
{
public:
    virtual void __stdcall Virtual0();
    virtual void __stdcall Virtual1();
    virtual void __stdcall Virtual2();
};

class Class_10924270_Unknown0C
{
public:
    virtual void __stdcall Virtual0();
    virtual void __stdcall Virtual1();
    virtual void __stdcall Virtual2();
};

struct Struct_10924270
{
    Class_10924270_Unknown00* Unknown00;
    Class_10924270_Unknown04* Unknown04;
    Class_10924270_Unknown08* Unknown08;
    char Pad0C[0x14];
};

class Class_109242E0
{
public:
    void FUN_10924270();

    char Unknown00[0x08];
    Class_10924270_Unknown08* Unknown08;
    Class_10924270_Unknown0C* Unknown0C;
    char Unknown10[0x4C];
    Struct_10924270 Unknown5C[3];
};

// FUNCTION: 0x10924270 ?FUN_10924270@Class_109242E0@@QAEXXZ
void Class_109242E0::FUN_10924270()
{
    if (Unknown08)
    {
        Unknown08->Virtual2();
        Unknown08 = 0;
    }
    if (Unknown0C)
    {
        Unknown0C->Virtual2();
        Unknown0C = 0;
    }
    for (int i = 0; i < 3; i++)
    {
        if (Unknown5C[i].Unknown00)
        {
            Unknown5C[i].Unknown00->Virtual2();
            Unknown5C[i].Unknown00 = 0;
        }
        if (Unknown5C[i].Unknown08)
        {
            Unknown5C[i].Unknown08->Virtual2();
            Unknown5C[i].Unknown08 = 0;
        }
        if (Unknown5C[i].Unknown04)
        {
            Unknown5C[i].Unknown04->Virtual2();
            Unknown5C[i].Unknown04 = 0;
        }
    }
}
