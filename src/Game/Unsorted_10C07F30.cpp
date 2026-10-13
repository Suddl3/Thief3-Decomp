// Game/Unsorted_10C07F30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C07F30.h"

class Class_10E5D360
{
public:
    Class_10E5D360(int Value) : Unknown04(Value) {}

    virtual ~Class_10E5D360() {}
    virtual void Virtual1();
    virtual int IsEqual(Class_10E5D360* Other);

    int Unknown04;
};

class Class_10C07F30;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10C07F30* Obj, int B, int C, Class_10E5D360* D);
};

extern Class_10F46DA0* DAT_10f46da0;

extern bool DAT_10ffc854;

// FUNCTION: 0x10C07F30 ?FUN_10c07f30@Class_10C07F30@@QAEXH@Z
void Class_10C07F30::FUN_10c07f30(int X)
{
    if (!DAT_10ffc854)
    {
        Unknown04 = X;
        FUN_10c07ab0(X);
        {
            Class_10E5D360 Local1(0x80848);
            DAT_10f46da0->Virtual1(this, 1, X, &Local1);
        }
        {
            Class_10E5D360 Local2(0x200849);
            DAT_10f46da0->Virtual1(this, 1, X, &Local2);
        }
    }
}
