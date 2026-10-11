// Game/Class_10E667C4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A3BA50.h"
#include "Game/Class_10E67938.h"
#include "Game/Class_10E66700.h"
#include "Game/Class_10E667C4.h"

struct Struct_10A3BD30
{
    int Unknown00;
    int Unknown04;
};

// FUNCTION: 0x10A3BD30 ??0Class_10E667C4@@QAE@XZ
Class_10E667C4::Class_10E667C4()
    : Class_10E67938(), Class_10E66700()
{
    char Flag;
    Struct_10A3BD30 Param;
    Param.Unknown00 = 0x25;
    Param.Unknown04 = 0;
    Unknown08.FUN_10a3ba50(&Flag, &Param);
    Unknown48 = 0;
    Unknown4C = 0;
    Unknown50 = 0;
    Unknown54 = 0;
    Unknown58 = 0;
    Unknown5C = 0;
    Unknown60 = 0;
    Unknown64 = 0;
    Unknown68 = 0;
}
