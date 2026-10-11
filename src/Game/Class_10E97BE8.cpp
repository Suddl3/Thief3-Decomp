// Game/Class_10E97BE8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFBD70.h"

class Class_10E97BE8;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(Class_10E97BE8* Obj);
};

extern Class_10F46DA0* DAT_10f46da0;

// Copied from include/Game/Class_10C0A6F0.h with the destructor its members
// need: the same body as Class_10BFBD70's, released through GetAllocator.
class Class_10C0A6F0
{
public:
    ~Class_10C0A6F0()
    {
        FUN_10c0a320(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    void FUN_10c0a320(int Count);
    void FUN_10c0a6f0();

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

// Copied from include/Game/Class_10C09A40.h with the destructor its members need.
class Class_10C09A40
{
public:
    ~Class_10C09A40()
    {
        FUN_10c095f0(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    void FUN_10c095f0(int Count);
    void FUN_10c09a40();

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

class Class_10E97BE8
{
public:
    virtual ~Class_10E97BE8();

    Class_10C0A6F0 Unknown04;
    Class_10C09A40 Unknown10;
    Class_10BFBD70 Unknown1C;
};

// FUNCTION: 0x10C0A7E0 ??1Class_10E97BE8@@UAE@XZ
Class_10E97BE8::~Class_10E97BE8()
{
    DAT_10f46da0->Virtual2(this);
}
