// Game/Unsorted_10BBA0C0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1098E330.h"
#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10DBD510.h"

class Class_10BBDB40 : public Class_10AAB5C0
{
};

class Class_10BB8360
{
public:
    int FUN_10bbac00(int Type);

    char Unknown00[8];
    Class_10DBD510* Unknown08;
};

// FUNCTION: 0x10BBAC00 ?FUN_10bbac00@Class_10BB8360@@QAEHH@Z
int Class_10BB8360::FUN_10bbac00(int Type)
{
    int Id;
    switch (Type)
    {
    case 5:
        Id = 0x200689;
        break;
    case 6:
        Id = 0x2006d4;
        break;
    case 8:
        Id = 0x200768;
        break;
    case 12:
        Id = 0x200769;
        break;
    case 11:
        Id = 0x20076a;
        break;
    case 10:
        Id = 0x20076b;
        break;
    case 4:
        Id = 0x2007cd;
        break;
    case 9:
        Id = 0x2007d0;
        break;
    default:
        return -1;
    }
    if (((Class_1098E330*)Unknown08->FUN_10dbd510()->GetUnknown08())->FUN_1098e330(Id, &Type))
        return Type;
    return -1;
}
