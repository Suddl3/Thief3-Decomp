// Game/Unsorted_10A35640.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A35640.h"
#include "Game/Class_10A35660.h"

struct Struct_10A35640 {
    char Unknown00[0x18];
    int Unknown18;
    int Unknown1C;
};

// FUNCTION: 0x10A35640 ?FUN_10a35640@Class_10A35640@@QAEXPAUStruct_10A35640@@@Z
void Class_10A35640::FUN_10a35640(Struct_10A35640* P)
{
    Unknown70 = P;
    if (P)
    {
        Unknown24 = P->Unknown18;
        Unknown28 = P->Unknown1C;
    }
}

// FUNCTION: 0x10A35660 ?FUN_10a35660@Class_10A35660@@QAEXHH@Z
void Class_10A35660::FUN_10a35660(int p1, int p2)
{
    Unknown78 = p1;
    Unknown7C = p2;
    Unknown70 = 0;
    Unknown74 = 0;
}
