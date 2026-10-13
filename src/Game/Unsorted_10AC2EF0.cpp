// Game/Unsorted_10AC2EF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

class Class_10AC3810;

class Class_10AC3810_Unknown04;

extern void* DAT_10e6f61c[];

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(Class_10AC3810* Obj);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10AC3810_Unknown04
{
public:
    virtual ~Class_10AC3810_Unknown04();
};

class Class_10AC3810
{
public:
    ~Class_10AC3810();

    void* Unknown00;
    Class_10AC3810_Unknown04* Unknown04;
    char Pad08[0x550];
    cIntArray Unknown558;
};

// FUNCTION: 0x10AC3810 ??1Class_10AC3810@@QAE@XZ
Class_10AC3810::~Class_10AC3810()
{
    Unknown00 = DAT_10e6f61c;
    DAT_10f46da0->Virtual2(this);
    if (Unknown04)
    {
        delete Unknown04;
        Unknown04 = 0;
    }
    Unknown558.SetCount(0);
}
