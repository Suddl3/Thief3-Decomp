// Game/Unsorted_10B6BBD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B66060.h"
#include "Game/Class_10B6BC80.h"
#include "Game/Struct_10B6BC80.h"

class Class_10B66060;

struct Data_10B66060;

struct Struct_10B6BC80;

class Class_10B154C0;

void* FUN_10b154c0();

class Class_10B154C0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(Class_10B66060* A);
};

class Class_10F3A3D8
{
public:
    char Unknown00[0x150];
    Struct_10B6BC80* Unknown150;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

// FUNCTION: 0x10B6BC80 ?FUN_10b6bc80@Class_10B6BC80@@QAEXXZ
void Class_10B6BC80::FUN_10b6bc80()
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
    Unknown198->FUN_10b66060((int)this, Value);
    Unknown198->Virtual56(2);
    ((Class_10B154C0*)FUN_10b154c0())->Virtual4(Unknown198);
}
