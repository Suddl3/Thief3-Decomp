// Game/Class_10E6DC54_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/IDirectInput8A.h"
#include "Game/IDirectInputDevice8A.h"

extern IDirectInputDevice8A* DAT_10f3a368;

extern IDirectInput8A* DAT_10f3a36c;

class Class_10E6C470
{
public:
    virtual ~Class_10E6C470();
};

class Class_10E6DC54 : public Class_10E6C470
{
public:
    virtual ~Class_10E6DC54();

    char Unknown04[0x81C];
    IDirectInputDevice8A* Unknown820;
    IDirectInputDevice8A* Unknown824;
};

// FUNCTION: 0x10AAEA40 ??1Class_10E6DC54@@UAE@XZ
Class_10E6DC54::~Class_10E6DC54()
{
    if (Unknown820)
    {
        Unknown820->Virtual8();
        Unknown820->Virtual2();
    }
    if (Unknown824)
    {
        Unknown824->Virtual8();
        Unknown824->Virtual2();
    }
    if (DAT_10f3a368)
    {
        DAT_10f3a368->Virtual8();
        DAT_10f3a368->Virtual2();
        DAT_10f3a368 = 0;
    }
    if (DAT_10f3a36c)
    {
        DAT_10f3a36c->Virtual2();
        DAT_10f3a36c = 0;
    }
}
