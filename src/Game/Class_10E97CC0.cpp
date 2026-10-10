// Game/Unsorted_10C0E5C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Struct_10C0EE30.h"

Class_10905A90_Member* FUN_10905aa0();

class Class_10BFBD70
{
public:
    Class_10BFBD70() : Unknown00(0), Unknown04(0), Unknown08(0) {}

    void FUN_10bfbd70(int Count);

    ~Class_10BFBD70()
    {
        FUN_10bfbd70(0);
        if (Unknown04)
        {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

class Class_10E97CC0;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E97CC0* Obj, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E97CC0
{
public:
    Class_10E97CC0();

    virtual void FUN_10c0ee30(int A, int B, Struct_10C0EE30* C, int D);

    void FUN_10c0eb00();

    Class_10BFBD70 Unknown04;
    int Unknown10;
};

// FUNCTION: 0x10C0EA20 ??0Class_10E97CC0@@QAE@XZ
Class_10E97CC0::Class_10E97CC0()
{
    Unknown10 = 0;
    DAT_10f46da0->Virtual1(this, 0x5a, -1, -1);
}
