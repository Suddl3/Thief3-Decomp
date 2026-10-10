// Game/Class_10E664F8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E664F8.h"

class Class_10E6D208
{
public:
    virtual ~Class_10E6D208() {}
    virtual Class_10E6D208* FUN_10a2f220();
};

class Class_10E66500 : public Class_10E6D208
{
public:
    virtual ~Class_10E66500() {}
    virtual int FUN_10a2f1a0(Class_10E66500* A);

    int Unknown04;
    bool Unknown08;
    char Unknown09[0xF];
};

class Class_10E664F8;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E664F8* Obj, int B, int C, Class_10E66500* D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10A36D80 ??0Class_10E664F8@@QAE@XZ
Class_10E664F8::Class_10E664F8()
{
    Class_10E66500 Local;
    Local.Unknown04 = 0;
    Local.Unknown08 = true;
    DAT_10f46da0->Virtual1(this, 0x28, -1, &Local);
    DAT_10f46da0->Virtual1(this, 0x29, -1, &Local);
}
