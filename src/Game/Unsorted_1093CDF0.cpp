// Game/Unsorted_1093CDF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_1093CDF0.h"
#include "Game/Class_1093D1B0.h"

extern bool DAT_10ffc855;

struct Struct_1093CDF0
{
    char Unknown00[8];
};

// FUNCTION: 0x1093D1B0 ?FUN_1093d1b0@Class_1093D1B0@@QAEXPBD@Z
void Class_1093D1B0::FUN_1093d1b0(const char* Name)
{
    if (!DAT_10ffc855 && Name && *Name)
        Unknown1C5C.FUN_1093cdf0(cString(Name));
}
