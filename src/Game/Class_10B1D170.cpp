// Game/Class_10B1D170.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10B1D170.h"
#include "Game/Class_10E79488.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Class_10B1BD70.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e79544[];

class Class_10E79544
{
public:
    Class_10E79544()
    {
        Unknown00 = DAT_10e79544;
    }

    void* Unknown00;
};

class Class_10F46D9C
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
    virtual void Virtual20(int Size, Class_10E79544* Obj, const cString& Name);
};

extern Class_10F46D9C* DAT_10f46d9c;

// FUNCTION: 0x10B1C520 ?FUN_10b1c520@Class_10B1D170@@QAEXXZ
void Class_10B1D170::FUN_10b1c520()
{
    Class_10E79544* Obj = new (0, 0, 0, 0, 0) Class_10E79544;
    DAT_10f46d9c->Virtual20(0x24, Obj, cString("InventoryClass"));
}

// FUNCTION: 0x10B1D170 ?FUN_10b1d170@Class_10B1D170@@QAEXXZ
void Class_10B1D170::FUN_10b1d170()
{
    FUN_10b1c520();
    FUN_10b1c5c0();
    FUN_10b1cab0();
}
