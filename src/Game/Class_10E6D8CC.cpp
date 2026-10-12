// Game/Class_10E6D8CC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cIntArray.h"

extern void* DAT_10e6d8cc[];

class Class_10E6D8CC
{
public:
    void FUN_10aa63f0();

    void** VTable;
    cIntArray Unknown04;
    int Unknown10;
};

// FUNCTION: 0x10AA63F0 ?FUN_10aa63f0@Class_10E6D8CC@@QAEXXZ
void Class_10E6D8CC::FUN_10aa63f0()
{
    VTable = DAT_10e6d8cc;
    Unknown04.~cIntArray();
}
