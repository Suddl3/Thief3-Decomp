// Game/Unsorted_10C54A20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <list>
#include "Game/Class_10C54B70_Object.h"
#include "Game/Class_10C55320.h"
#include "Game/Object_10AB5B20.h"
#include "Game/Class_10AB5B20.h"
#include "Game/Class_10C54B70_Member.h"
#include "Game/Class_10C55360.h"
#include "Game/Entry_10C55360.h"

struct Struct_10C55320
{
    Struct_10C55320* Unknown00;
    Struct_10C55320* Unknown04;
    char Unknown08[0x14];
    Class_10AB5B20 Unknown1C;
};

class Class_10EB7660
{
public:
    Class_10EB7660();

    virtual ~Class_10EB7660();

    int Unknown04;
};

class Class_10E9C300 : public Class_10EB7660
{
public:
    Class_10E9C300();

    Class_10C54B70_Member Unknown08;
};

// FUNCTION: 0x10C54B70 ??0Class_10E9C300@@QAE@XZ
Class_10E9C300::Class_10E9C300()
{
}

// FUNCTION: 0x10C55320 ?FUN_10c55320@Class_10C55320@@QAE?AVClass_10AB5B20@@XZ
Class_10AB5B20 Class_10C55320::FUN_10c55320()
{
    Unknown58 = Unknown20->Unknown00;
    if (Unknown58 == Unknown20)
        return Class_10AB5B20();
    return Unknown58->Unknown1C;
}

// FUNCTION: 0x10C55360 ?FUN_10c55360@Class_10C55360@@QAE?AVClass_10AB5B20@@XZ
Class_10AB5B20 Class_10C55360::FUN_10c55360()
{
    ++Unknown58;
    if (Unknown58 == Unknown1C.end())
        return Class_10AB5B20();
    return Unknown58->Value;
}
