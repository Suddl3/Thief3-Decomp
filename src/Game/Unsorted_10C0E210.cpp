// Game/Unsorted_10C0E210.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C0C150.h"

extern void* DAT_10e50610;

class Class_10E50610
{
public:
    virtual ~Class_10E50610() { *(void**)this = (void*)&DAT_10e50610; }
};

class Class_10E5D360 : public Class_10E50610
{
public:
    Class_10E5D360(int Value) : Unknown04(Value) {}

    virtual void Virtual1();
    virtual int IsEqual(Class_10E5D360* Other);

    int Unknown04;
};

class cIntArray
{
public:
    cIntArray() : Unknown00(0), m_CapacityBytes(0), Unknown08(0) {}
    ~cIntArray();

    int Unknown00;
    int m_CapacityBytes;
    int Unknown08;
};

struct Item_10C0C150;

class Class_10C0E320_Unknown04
{
public:
    Class_10C0E320_Unknown04* Unknown00;
    Class_10C0E320_Unknown04* Unknown04;
    Class_10C0E320_Unknown04* Unknown08;
    char Unknown0c[0x8];
    char Unknown14;
    char Unknown15;
};

class Class_10C0C110
{
public:
    Class_10C0C110()
    {
        Unknown04 = FUN_10c0c110();
        Unknown04->Unknown15 = 1;
        Unknown04->Unknown04 = Unknown04;
        Unknown04->Unknown00 = Unknown04;
        Unknown04->Unknown08 = Unknown04;
        Unknown08 = 0;
    }

    ~Class_10C0C110();

    Class_10C0E320_Unknown04* FUN_10c0c110();

    int Unknown00;
    Class_10C0E320_Unknown04* Unknown04;
    int Unknown08;
};

struct Struct_10C0E320_Unknown34
{
    Struct_10C0E320_Unknown34() : Unknown00(0), Unknown04(0) {}

    int Unknown00;
    int Unknown04;
};

class Class_10E97CA8;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E97CA8* Obj, int B, int C, void* D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E97CA8
{
public:
    Class_10E97CA8();

    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();

    cIntArray Unknown04;
    Class_10C0C150 Unknown10;
    Class_10C0C110 Unknown1c;
    cIntArray Unknown28;
    Struct_10C0E320_Unknown34 Unknown34;
};

// FUNCTION: 0x10C0E320 ??0Class_10E97CA8@@QAE@XZ
Class_10E97CA8::Class_10E97CA8()
{
    Class_10E5D360 Local1(0x2047b);
    DAT_10f46da0->Virtual1(this, 1, -1, &Local1);
    Class_10E5D360 Local2(0x8006c9);
    DAT_10f46da0->Virtual1(this, 1, -1, &Local2);
    Class_10E5D360 Local3(0x8005cf);
    DAT_10f46da0->Virtual1(this, 1, -1, &Local3);
    DAT_10f46da0->Virtual1(this, 7, -1, (void*)-1);
    DAT_10f46da0->Virtual1(this, 0x14, -1, (void*)-1);
    DAT_10f46da0->Virtual1(this, 0x22, -1, (void*)-1);
    DAT_10f46da0->Virtual1(this, 0x26, -1, (void*)-1);
    DAT_10f46da0->Virtual1(this, 0x42, -1, (void*)-1);
}
