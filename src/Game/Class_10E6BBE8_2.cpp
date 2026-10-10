// Game/Class_10E6BBE8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6BBE8.h"

class Class_10E6BBE8;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(Class_10E6BBE8* A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10A757E0 ?FUN_10a757e0@Class_10E6BBE8@@UAEXH@Z
void Class_10E6BBE8::FUN_10a757e0(int A)
{
    Virtual7(A);
    DAT_10f46da0->Virtual3(this, 0x20, A, -1);
}
