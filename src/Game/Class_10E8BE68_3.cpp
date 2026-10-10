// Game/Class_10E8BE68_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8BE68.h"

struct Struct_10BC4C10
{
    char Unknown00[0x2C];
    char Unknown2C[4];
};

// FUNCTION: 0x10BC4C10 ?FUN_10bc4c10@Class_10E8BE68@@UAEXPAUStruct_10BC4C10@@H@Z
void Class_10E8BE68::FUN_10bc4c10(Struct_10BC4C10* p1, int p2)
{
    if (p1)
        FUN_10bc4170(p1->Unknown2C, p2);
}
