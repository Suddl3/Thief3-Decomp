// Game/Class_10E99298.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C26660.h"
#include "Game/Class_10E5CB88.h"
#include "Game/Class_10E99298.h"
#include "Game/Class_10C262D0.h"
#include "Game/Class_10C7D570.h"

extern float DAT_10e99258;

struct Struct_10C26310
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

struct Data_10C26310
{
    char Unknown00[0x2C];
    Struct_10C26310 Unknown2C;
    Struct_10C26310 Unknown38;
};

// FUNCTION: 0x10C262A0 ?FUN_10c262a0@Class_10E99298@@UAEMXZ
float Class_10E99298::FUN_10c262a0()
{
    return DAT_10e99258;
}

// FUNCTION: 0x10C26310 ?FUN_10c26310@Class_10E99298@@UAE?AUStruct_10C26310@@XZ
Struct_10C26310 Class_10E99298::FUN_10c26310()
{
    Data_10C26310* Data = (Data_10C26310*)Unknown08->FUN_10c7d570();
    return Data->Unknown2C;
}

// FUNCTION: 0x10C26340 ?FUN_10c26340@Class_10E99298@@UAE?AUStruct_10C26310@@XZ
Struct_10C26310 Class_10E99298::FUN_10c26340()
{
    Data_10C26310* Data = (Data_10C26310*)Unknown08->FUN_10c7d570();
    return Data->Unknown38;
}
