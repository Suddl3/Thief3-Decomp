// Game/Class_10E68938_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A56860.h"
#include "Game/cString.h"
#include "Game/cIntArray.h"
#include "Game/Class_10A249B0.h"

// Game/Class_10E67FD0.h makes the base 0x150 bytes, past this class's fields at 0x118: the base is declared here by its vtable only.
class Class_10E67FD0
{
public:
    virtual ~Class_10E67FD0();
};

class cRadioWindow : public Class_10E67FD0
{
public:
    virtual ~cRadioWindow();

    char Unknown04[0x114];
    Class_10A249B0* Unknown118;
    cString Unknown11C;
    cIntArray m_ChildCount;
};

// FUNCTION: 0x10A56670 ??1cRadioWindow@@UAE@XZ
cRadioWindow::~cRadioWindow()
{
    delete Unknown118;
}

// FUNCTION: 0x10A56860 ?FUN_10a56860@Class_10A56860@@QAEXH@Z
void Class_10A56860::FUN_10a56860(int Item)
{
    SetSelectedIndex(FindIndex(Item));
}
