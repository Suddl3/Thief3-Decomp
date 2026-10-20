// Game/Unsorted_10911030.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/cDispatchTable.h"
#include "Game/Class_10914D70.h"
#include "Game/Class_10919B80.h"
#include "Game/Class_10919CA0.h"
#include "Game/Class_1091CCF0.h"
#include "Game/Class_1091E3E0.h"
#include "Game/Class_1091E3F0.h"
#include "Game/Class_1091E400.h"
#include "Game/Class_1091E410.h"

extern float DAT_10f2c8dc;

extern float DAT_10f2c8e0;

extern void* DAT_10e499f4[];

class Class_10E499F4
{
public:
    void ResetVTable();
    float GetField180();

    void* VTable;
    char Pad04[0x17c];
    float Field180;
};

// FUNCTION: 0x10914D70 ?GetField09@Class_10914D70@@QAEEXZ
unsigned char Class_10914D70::GetField09()
{
    return Field09;
}

// FUNCTION: 0x10919120 ?FUN_10919120@@YAMXZ
float FUN_10919120()
{
    return DAT_10f2c8dc;
}

// FUNCTION: 0x10919180 ?FUN_10919180@@YAMXZ
float FUN_10919180()
{
    return DAT_10f2c8e0;
}

// FUNCTION: 0x10919B80 ?SetField28@Class_10919B80@@QAEXH@Z
void Class_10919B80::SetField28(int p1)
{
    Field28 = p1;
}

// FUNCTION: 0x10919CA0 ?GetField14@Class_10919CA0@@QAEMH@Z
float Class_10919CA0::GetField14(int p1)
{
    return Field14;
}

// FUNCTION: 0x1091CCF0 ??0Class_1091CCF0@@QAE@XZ
Class_1091CCF0::Class_1091CCF0()
{
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown10 = 0;
    Unknown18 = -1;
    Unknown14 = 0;
    Unknown1C = 0;
    Unknown00 = 0;
}

// FUNCTION: 0x1091E340 ?ResetVTable@Class_10E499F4@@QAEXXZ
void Class_10E499F4::ResetVTable()
{
    VTable = DAT_10e499f4;
}

// FUNCTION: 0x1091E360 ?GetField180@Class_10E499F4@@QAEMXZ
float Class_10E499F4::GetField180()
{
    return Field180;
}

// FUNCTION: 0x1091E3E0 ?FUN_1091e3e0@Class_1091E3E0@@QAEPAXXZ
void* Class_1091E3E0::FUN_1091e3e0() {
    return &unknown_64;
}

// FUNCTION: 0x1091E3F0 ?FUN_1091e3f0@Class_1091E3F0@@QAEPAXXZ
void* Class_1091E3F0::FUN_1091e3f0() {
    return &unknown_e4;
}

// FUNCTION: 0x1091E400 ?FUN_1091e400@Class_1091E400@@QAEPAXXZ
void* Class_1091E400::FUN_1091e400() {
    return &unknown_124;
}

// FUNCTION: 0x1091E410 ?FUN_1091e410@Class_1091E410@@QAEPAXXZ
void* Class_1091E410::FUN_1091e410() {
    return &unknown_164;
}
