// Game/Unsorted_10A11F30_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFBD70.h"

class Class_10E5D464;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(Class_10E5D464* Obj);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E5D464
{
public:
    virtual void FUN_10a11ec0(int A, int B, int C, int D);
    ~Class_10E5D464();

    int Unknown04;
    Class_10BFBD70 Unknown08;
    Class_10BFBD70 Unknown14;
    Class_10BFBD70 Unknown20;
};

// FUNCTION: 0x10A12060 ??1Class_10E5D464@@QAE@XZ
Class_10E5D464::~Class_10E5D464()
{
    if (DAT_10f46da0)
        DAT_10f46da0->Virtual2(this);
}
