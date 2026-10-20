// Game/Unsorted_10BD98B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AAF570.h"
#include "Game/Class_1098E330.h"

class Class_10BBDB40 : public Class_10AAF570
{
};

class Class_10C7D570
{
public:
    Class_10BBDB40* FUN_10dbd510();
};

struct Struct_10BD99C0
{
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

class Class_10BD99C0
{
public:
    bool FUN_10bd99c0();

    char Unknown00[4];
    Struct_10BD99C0* Unknown04;
};

struct Struct_10BD9A00
{
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

class Class_10BD9A00
{
public:
    char FUN_10bd9a00();

    char Unknown00[4];
    Struct_10BD9A00* Unknown04;
};

// FUNCTION: 0x10BD99C0 ?FUN_10bd99c0@Class_10BD99C0@@QAE_NXZ
bool Class_10BD99C0::FUN_10bd99c0()
{
    Struct_10BD99C0* Data = Unknown04;
    int Value = 0;
    Class_10C7D570* Props = Data->Unknown08;
    ((Class_1098E330*)Props->FUN_10dbd510()->GetLinkType())->FUN_1098e330(0x80062c, &Value);
    return Value != 0;
}

// FUNCTION: 0x10BD9A00 ?FUN_10bd9a00@Class_10BD9A00@@QAEDXZ
char Class_10BD9A00::FUN_10bd9a00()
{
    Struct_10BD9A00* Data = Unknown04;
    int Value = 0;
    Class_10C7D570* Props = Data->Unknown08;
    ((Class_1098E330*)Props->FUN_10dbd510()->GetLinkType())->FUN_1098e330(0x800621, &Value);
    return Value == 0;
}
