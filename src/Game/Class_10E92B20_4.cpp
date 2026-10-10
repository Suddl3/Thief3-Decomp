// Game/Class_10E92B20_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E92B20.h"

struct Struct_10BCEA90_Arg
{
    char Unknown00[0x1c];
    unsigned char Unknown1C;
};

// FUNCTION: 0x10BCEA90 ?FUN_10bcea90@Class_10E92B20@@UAE_NPAUStruct_10BCEA90_Arg@@@Z
bool Class_10E92B20::FUN_10bcea90(Struct_10BCEA90_Arg* Arg)
{
    return Arg->Unknown1C == 0x18;
}
