// Game/Unsorted_1093CDF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"

extern bool DAT_10ffc855;

struct Struct_1093CDF0
{
    char Unknown00[8];
};

class Class_1093CDF0
{
public:
    Struct_1093CDF0 FUN_1093cdf0(const cString& Key);
};

class Class_1093D1B0
{
public:
    void FUN_1093d1b0(const char* Name);

    char Unknown00[0x1C5C];
    Class_1093CDF0 Unknown1C5C;
};

// FUNCTION: 0x1093D1B0 ?FUN_1093d1b0@Class_1093D1B0@@QAEXPBD@Z
void Class_1093D1B0::FUN_1093d1b0(const char* Name)
{
    if (!DAT_10ffc855 && Name && *Name)
        Unknown1C5C.FUN_1093cdf0(cString(Name));
}
