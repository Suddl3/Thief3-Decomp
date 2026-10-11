// Game/Unsorted_1092D570.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1092D610_Unknown30.h"
#include "Game/IDirect3DDevice8.h"

extern class IDirect3DDevice8* GDirect3DDevice8;

class Class_1092D610_Unknown00
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

class Class_1092D610_Unknown08
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

class Class_10D660B0
{
public:
    ~Class_10D660B0();

    char Unknown00[0xC];
};

class Class_1092D610
{
public:
    ~Class_1092D610();

    Class_1092D610_Unknown00* Unknown00;
    int Unknown04;
    Class_1092D610_Unknown08* Unknown08;
    unsigned int Unknown0C;
    unsigned int Unknown10;
    unsigned int Unknown14;
    char Unknown18[0x18];
    Class_1092D610_Unknown30 Unknown30;
    Class_10D660B0 Unknown40;
    Class_10D660B0 Unknown4C;
    Class_10D660B0 Unknown58;
    Class_10D660B0 Unknown64;
    Class_10D660B0 Unknown70;
};

// FUNCTION: 0x1092D610 ??1Class_1092D610@@QAE@XZ
Class_1092D610::~Class_1092D610()
{
    if (Unknown00)
    {
        Unknown00->Virtual2();
        Unknown00 = 0;
    }
    if (Unknown08)
    {
        Unknown08->Virtual2();
        Unknown08 = 0;
    }
    GDirect3DDevice8->Virtual90(Unknown0C);
    GDirect3DDevice8->Virtual90(Unknown10);
    GDirect3DDevice8->Virtual90(Unknown14);
}
