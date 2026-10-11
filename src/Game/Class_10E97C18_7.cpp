// Game/Class_10E97C18_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10BFBD70.h"

extern void* DAT_10e97c18[];

class Class_10E97C18
{
public:
    void FUN_10c0b920();

    void** VTable;
    char Unknown04[0x10];
    Class_10BFBD70 Unknown14;
};

// FUNCTION: 0x10C0B920 ?FUN_10c0b920@Class_10E97C18@@QAEXXZ
void Class_10E97C18::FUN_10c0b920()
{
    VTable = DAT_10e97c18;
    Unknown14.~Class_10BFBD70();
}
