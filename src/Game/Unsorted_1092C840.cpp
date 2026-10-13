// Game/Unsorted_1092C840.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/Class_1092C160.h"

Class_10905A90_Member* GetAllocator();

extern bool DAT_10ffc855;

struct Struct_1092C840
{
    char Unknown00[8];
};

extern Class_1092C160 DAT_10f31ae0;

// FUNCTION: 0x1092C940 ?FUN_1092c940@@YAXPBD@Z
void FUN_1092c940(const char* Name)
{
    if (!DAT_10ffc855 && Name && *Name)
        DAT_10f31ae0.FUN_1092c840(cString(Name));
}
