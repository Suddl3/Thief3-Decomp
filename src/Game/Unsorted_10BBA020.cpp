// Game/Unsorted_10BBA020.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1098E330.h"
#include "Game/Class_10C7D570.h"

extern float DAT_10eafbdc;

class Class_10C273E0
{
public:
    bool FUN_10c273e0(int Arg);
};

class Class_10BBA020
{
public:
    bool FUN_10bba020();

    char Unknown00[8];
    Class_10C7D570* Unknown08;
    char Unknown0C[0x88];
    Class_10C273E0 Unknown94;
    char Unknown95[0x2C8 - 0x95];
    float Unknown2C8;
};

// FUNCTION: 0x10BBA020 ?FUN_10bba020@Class_10BBA020@@QAE_NXZ
bool Class_10BBA020::FUN_10bba020()
{
    if (!(Unknown2C8 > DAT_10eafbdc) && !Unknown94.FUN_10c273e0(3))
        return false;
    int Value = 0;
    if (((Class_1098E330*)Unknown08->FUN_10c7d570())->FUN_1098e330(0x40800708, &Value) && Value)
        return true;
    return false;
}
