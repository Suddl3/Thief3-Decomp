// Game/Class_10E7AEB8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Config.h"

extern const char DAT_10e7b08c[];

extern const char DAT_10e7b07c[];

extern int DAT_10f0407c;

class Class_10E6AEA0
{
public:
    Class_10E6AEA0();

    virtual ~Class_10E6AEA0();
};

class Class_10B27FE0;

class cT3MainMenuWindow : public Class_10E6AEA0
{
public:
    cT3MainMenuWindow();

    ~cT3MainMenuWindow();

    char Unknown04[0xE4];
    int Unknown0E8;
    char Unknown0EC[0x64];
    int Unknown150;
    int Unknown154;
    int Unknown158;
    int Unknown15C;
    int Unknown160;
    int Unknown164;
    int Unknown168;
    int Unknown16C;
    int Unknown170;
    int Unknown174;
    bool Unknown178;
    Class_10B27FE0* Unknown17C;
    int Unknown180;
    int Unknown184;
    bool Unknown188;
    bool Unknown189;
};

// FUNCTION: 0x10B298D0 ??0cT3MainMenuWindow@@QAE@XZ
cT3MainMenuWindow::cT3MainMenuWindow()
{
    Unknown150 = 0;
    Unknown154 = 0;
    Unknown158 = 0;
    Unknown15C = 0;
    Unknown160 = 0;
    Unknown164 = 0;
    Unknown168 = 0;
    Unknown16C = 0;
    Unknown170 = 0;
    Unknown174 = 0;
    Unknown178 = false;
    Unknown17C = 0;
    Unknown180 = 0;
    Unknown184 = 0;
    Unknown188 = false;
    Unknown189 = false;
    Unknown0E8 = 22;
    int Value = 0;
    if (Config::Instance()->FUN_10910a20("SaveGameOptions", "MinFreeSpaceForSave", &Value, 0) && Value > 0)
    {
        DAT_10f0407c = Value;
    }
}
