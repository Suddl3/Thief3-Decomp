// Game/Unsorted_10BCEA70_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E92B20.h"

struct Struct_10BCEA70
{
    char Unknown00[0x1C];
    unsigned char Unknown1C;
};

// FUNCTION: 0x10BCEA70 ?FUN_10bcea70@Class_10E92B20@@UAEHPAUStruct_10BCEA70@@@Z
int Class_10E92B20::FUN_10bcea70(Struct_10BCEA70* A)
{
    unsigned char Kind = A->Unknown1C;
    if (Kind == 1 || Kind == 0xE || Kind == 0x19)
        return 1;
    return 0;
}
