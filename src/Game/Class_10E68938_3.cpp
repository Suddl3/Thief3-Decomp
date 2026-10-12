// Game/Class_10E68938_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A56860.h"
#include "Game/Class_109081E0.h"
#include "Game/cIntArray.h"
#include "Game/Class_10A249B0.h"

// Game/Class_10E67FD0.h makes the base 0x150 bytes, past this class's fields at 0x118: the base is declared here by its vtable only.
class Class_10E67FD0
{
public:
    virtual ~Class_10E67FD0();
};

class Class_10E68938 : public Class_10E67FD0
{
public:
    virtual ~Class_10E68938();

    char Unknown04[0x114];
    Class_10A249B0* Unknown118;
    Class_109081E0 Unknown11C;
    cIntArray Unknown120;
};

// FUNCTION: 0x10A56670 ??1Class_10E68938@@UAE@XZ
Class_10E68938::~Class_10E68938()
{
    delete Unknown118;
}

// FUNCTION: 0x10A56860 ?FUN_10a56860@Class_10A56860@@QAEXH@Z
void Class_10A56860::FUN_10a56860(int Item)
{
    FUN_10a56480(FindIndex(Item));
}
