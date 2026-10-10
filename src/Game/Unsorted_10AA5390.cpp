// Game/Unsorted_10AA5390.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6D600.h"

struct Struct_10AA53E0_Item
{
    char Unknown00[0x1C];
};

// FUNCTION: 0x10AA53E0 ?FUN_10aa53e0@Class_10E6D600@@UAEPAUStruct_10AA53E0_Item@@H@Z
Struct_10AA53E0_Item* Class_10E6D600::FUN_10aa53e0(int A)
{
    return &Unknown10[(Unknown04 + A) % Unknown08];
}
