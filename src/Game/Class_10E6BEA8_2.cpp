// Game/Class_10E6BEA8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cIntArray.h"

extern void* DAT_10e6bea8[];

class Class_10E6BEA8
{
public:
    void FUN_10a7dae0();

    void** VTable;
    cIntArray Unknown04;
    int Unknown10;
};

// FUNCTION: 0x10A7DAE0 ?FUN_10a7dae0@Class_10E6BEA8@@QAEXXZ
void Class_10E6BEA8::FUN_10a7dae0()
{
    VTable = DAT_10e6bea8;
    Unknown04.~cIntArray();
}
