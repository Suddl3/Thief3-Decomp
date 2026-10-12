// Game/cT3MainMenuWindow.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B27FE0.h"

class cBorderWindow
{
public:
    virtual ~cBorderWindow();
};

class cT3MainMenuWindow : public cBorderWindow
{
public:
    ~cT3MainMenuWindow();

    char Unknown04[0x174];
    bool Unknown178;
    Class_10B27FE0* Unknown17C;
};

// FUNCTION: 0x10B299B0 ??1cT3MainMenuWindow@@UAE@XZ
cT3MainMenuWindow::~cT3MainMenuWindow()
{
    if (Unknown17C)
    {
        delete Unknown17C;
        Unknown17C = 0;
    }
}

// FUNCTION: 0x10B29A20 ??_GcT3MainMenuWindow@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B299B0's definition in this unit.
