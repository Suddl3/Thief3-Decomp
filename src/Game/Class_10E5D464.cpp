// Game/Class_10E5D464.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10E5D464.h"

class Class_10E5D360
{
public:
    Class_10E5D360(int Value) : Unknown04(Value) {}

    virtual ~Class_10E5D360() {}
    virtual void Virtual1();
    virtual int FUN_10b9caa0(Class_10E5D360* Other);

    int Unknown04;
};

class Class_10E5D464;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E5D464* Obj, int B, int C, Class_10E5D360* D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10A11F30 ??0Class_10E5D464@@QAE@H@Z
Class_10E5D464::Class_10E5D464(int Value)
    : Unknown04(Value)
{
    {
        Class_10E5D360 Local1(0x80038);
        DAT_10f46da0->Virtual1(this, 1, -1, &Local1);
    }
    {
        Class_10E5D360 Local2(0x4000687);
        DAT_10f46da0->Virtual1(this, 1, -1, &Local2);
    }
    {
        Class_10E5D360 Local3(0x1000029);
        DAT_10f46da0->Virtual1(this, 1, -1, &Local3);
    }
    {
        Class_10E5D360 Local4(0x4067b);
        DAT_10f46da0->Virtual1(this, 1, -1, &Local4);
    }
    {
        Class_10E5D360 Local5(0x4002002b);
        DAT_10f46da0->Virtual1(this, 1, -1, &Local5);
    }
}
