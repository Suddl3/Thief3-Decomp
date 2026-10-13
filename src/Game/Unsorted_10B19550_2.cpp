// Game/Unsorted_10B19550_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E79488.h"
#include "Game/Class_10F3A3D8.h"
#include "Game/Struct_10AA3520_Member.h"
#include "Game/Class_10ABDC10.h"
#include "T3Player/T3PlayerClasses.h"

struct Struct_10AA3520
{
    char Unknown00[0x08];
    Struct_10AA3520_Member* Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

struct Struct_10B1DAF0_Vec
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

struct Struct_10B1DAF0
{
    char Unknown00[0x2C];
    Struct_10B1DAF0_Vec Unknown2C;
    char Unknown38[0x310];
    int Unknown348;
    char Unknown34C[4];
    Struct_10B1DAF0_Vec Unknown350;
    int Unknown35C;
};

// FUNCTION: 0x10B196A0 ?GetInfoCount@@YAHXZ
int GetInfoCount()
{
    return DAT_10f35dec->Unknown08->Unknown47C;
}

// FUNCTION: 0x10B1DAF0 ?FUN_10b1daf0@@YAXPAUStruct_10B1DAF0@@H@Z
void FUN_10b1daf0(Struct_10B1DAF0* Obj, int Value)
{
    Obj->Unknown350 = Obj->Unknown2C;
    Obj->Unknown35C = Value;
    Obj->Unknown348 = 4;
}
