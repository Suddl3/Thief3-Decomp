// Game/Unsorted_10B6BE70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A56860.h"
#include "Game/Struct_10B6BC80.h"
#include "Game/Struct_10B6C180.h"

struct Data_10B66060
{
    char Unknown000[0x174];
    unsigned char Unknown174;
    char Unknown175[3];
    Struct_10B6C180 Unknown178;
};

class Class_10F3A3D8
{
public:
    char Unknown00[0x150];
    Struct_10B6BC80* Unknown150;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

class Class_10E85DE0
{
public:
    void FUN_10b6bd70();
    void FUN_10b6c180(Struct_10B6C180* Src);

    char Unknown00[0x190];
    Class_10A56860* Unknown190;
    char Unknown194[8];
    int Unknown19C;
};

// FUNCTION: 0x10B6C180 ?FUN_10b6c180@Class_10E85DE0@@QAEXPAUStruct_10B6C180@@@Z
void Class_10E85DE0::FUN_10b6c180(Struct_10B6C180* Src)
{
    Data_10B66060* Value;
    switch (Unknown19C)
    {
    case 0:
        Value = DAT_10f3a3d8->Unknown150->Unknown08;
        break;
    case 1:
        Value = DAT_10f3a3d8->Unknown150->Unknown10;
        break;
    default:
        Value = 0;
        break;
    }
    if (Src)
    {
        Value->Unknown178 = *Src;
        Value->Unknown174 = Unknown190->Unknown12C;
        FUN_10b6bd70();
    }
    else
        Unknown190->FUN_10a56480(Value->Unknown174);
}
