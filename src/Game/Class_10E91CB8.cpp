// Game/Class_10E91CB8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10BCB770_Value.h"

extern void* DAT_10e91cb8[];

struct Struct_10BCB770
{
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

struct Struct_10C7D570
{
    char Unknown00[0x2C];
    Struct_10BCB770_Value Unknown2C;
};

class Class_10E90D70
{
public:
    Class_10E90D70(int A, int B);
    ~Class_10E90D70();

    void** Unknown00;
    Struct_10BCB770* Unknown04;
    int Unknown08[14];
};

class Class_10E91CB8 : public Class_10E90D70
{
public:
    Class_10E91CB8(int A, int B);

    Struct_10BCB770_Value Unknown40;
};

// FUNCTION: 0x10BCB770 ??0Class_10E91CB8@@QAE@HH@Z
Class_10E91CB8::Class_10E91CB8(int A, int B)
    : Class_10E90D70(A, B)
{
    Unknown00 = DAT_10e91cb8;
    Struct_10C7D570* Obj = (Struct_10C7D570*)Unknown04->Unknown08->FUN_10c7d570();
    Unknown40 = Obj->Unknown2C;
}
