// Game/Unsorted_10A4A190_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E5BC00.h"
#include "Game/Class_10E67938.h"

struct Struct_10A4C0B0
{
    char Unknown00[0xC];
    int Unknown0C;
};

extern int DAT_10f3a064;

extern bool DAT_10f3a060;

// FUNCTION: 0x10A4C0B0 ?FUN_10a4c0b0@Class_10E5BC00@@UAEHH@Z
int Class_10E5BC00::FUN_10a4c0b0(int A)
{
    Struct_10A4C0B0* Info = Virtual10(A);
    if (Info)
        return Info->Unknown0C;
    return 0;
}

// FUNCTION: 0x10A4C1E0 ??0Class_10E67938@@QAE@XZ
Class_10E67938::Class_10E67938()
{
    DAT_10f3a064 = 0;
    DAT_10f3a060 = false;
    FUN_10aa6180();
}
