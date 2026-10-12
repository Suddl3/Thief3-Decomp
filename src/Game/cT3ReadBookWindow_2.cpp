// Game/cT3ReadBookWindow_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/cString.h"

class Class_10E67FD0
{
public:
    Class_10E67FD0();

    virtual ~Class_10E67FD0();

    char Unknown04[0xE4];
    int Unknown0E8;
    char Unknown0EC[0x2C];
};

class cT3ReadBookWindow : public Class_10E67FD0
{
public:
    cT3ReadBookWindow();

    virtual ~cT3ReadBookWindow();

    int Unknown118;
    int Unknown11C;
    int Unknown120;
    int Unknown124;
    int Unknown128;
    int Unknown12C;
    int Unknown130;
    int Unknown134;
    cString Unknown138;
    int Unknown13C;
    int Unknown140;
    int Unknown144;
    int Unknown148;
    int Unknown14C;
    bool Unknown150;
    FString m_Text;
    int Unknown160;
    bool Unknown164;
    int Unknown168;
    cString Unknown16C;
};

// FUNCTION: 0x10B2FB10 ??0cT3ReadBookWindow@@QAE@XZ
cT3ReadBookWindow::cT3ReadBookWindow()
    : Unknown118(0), Unknown11C(0), Unknown120(0), Unknown124(0), Unknown128(0), Unknown12C(0), Unknown134(0),
      Unknown13C(0), Unknown140(0), Unknown144(0), Unknown148(0), Unknown14C(0), Unknown150(false), Unknown160(0),
      Unknown164(false), Unknown168(2), Unknown16C(DAT_10e47660)
{
    Unknown0E8 = 6;
}
