// Game/XBInputInterface_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

class XBInputInterface : public Class_10E6C470
{
public:
    virtual ~XBInputInterface();

    char Unknown04[0x81C];
    IDirectInputDevice8A* Unknown820;
    IDirectInputDevice8A* Unknown824;
};

// FUNCTION: 0x10AAEA40 ??1XBInputInterface@@UAE@XZ
XBInputInterface::~XBInputInterface()
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
