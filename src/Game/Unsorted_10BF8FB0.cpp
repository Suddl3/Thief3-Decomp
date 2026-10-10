// Game/Unsorted_10BF8FB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBC80.h"
#include "Game/Class_10C04800.h"
#include "Game/Class_10E97AF4.h"
#include "Game/Class_10E97BB8.h"
#include "Game/Class_10E97BC0.h"

extern void* DAT_10ff66a4;

class Class_FieldType {
public:
    void FUN_10c04630();
};

extern void* DAT_10ff66ac;

extern void* DAT_10e97bb8[];

extern void* DAT_10e97bc0[];

// FUNCTION: 0x10BFBC80 ?FUN_10bfbc80@Class_10BFBC80@@QAEXXZ
void Class_10BFBC80::FUN_10bfbc80()
{
    Field44 = 0;
}

// FUNCTION: 0x10C00A40 ?FUN_10c00a40@@YAPAXXZ
void* FUN_10c00a40(void)
{
    return DAT_10ff66a4;
}

// FUNCTION: 0x10C047F0 ?FUN_10c047f0@Class_10E97AF4@@QAEXXZ
void Class_10E97AF4::FUN_10c047f0()
{
    Field04->FUN_10c04630();
}

// FUNCTION: 0x10C04800 ?FUN_10c04800@Class_10C04800@@QAEEXZ
unsigned char Class_10C04800::FUN_10c04800()
{
    return Field1E;
}

// FUNCTION: 0x10C07FD0 ?FUN_10c07fd0@@YAPAXXZ
void* FUN_10c07fd0()
{
    return DAT_10ff66ac;
}

// FUNCTION: 0x10C08880 ?FUN_10c08880@Class_10E97BB8@@QAEXXZ
void Class_10E97BB8::FUN_10c08880()
{
    Field00 = DAT_10e97bb8;
}

// FUNCTION: 0x10C08ED0 ??0Class_10E97BC0@@QAE@XZ
Class_10E97BC0::Class_10E97BC0()
{
    Unknown00 = DAT_10e97bc0;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    Unknown18 = 0;
    Unknown1C = 0;
    Unknown20 = 0;
}
