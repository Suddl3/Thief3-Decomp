// Game/Class_10E95AC8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10978090.h"
#include "Game/Class_10BC4160.h"
#include "Game/Class_10C08940.h"
#include "Game/cTacticMoveToPoint.h"
#include "Game/Class_10E95AC8.h"

class Class_10FF667C
{
public:
    char Unknown00[0x24];
    Class_10978090* Unknown24;
};

extern Class_10FF667C* DAT_10ff667c;

// FUNCTION: 0x10BE1DC0 ?FUN_10be1dc0@Class_10E95AC8@@UAEXXZ
void Class_10E95AC8::FUN_10be1dc0()
{
    if (!DAT_10ff667c->Unknown24->FUN_10978090() || !DAT_10ff667c->Unknown24->FUN_10978090()->FUN_10c08940())
        PopState();
}
