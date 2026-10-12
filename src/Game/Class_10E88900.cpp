// Game/Class_10E88900.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B59770.h"
#include "Game/cIntArray.h"

class Class_10E822B0
{
public:
    Class_10E822B0();

    virtual ~Class_10E822B0();

    char Unknown04[0xE4];
    int Unknown0E8;
    char Unknown0EC[0x68];
};

class cRadioWindow
{
public:
    cRadioWindow();

    virtual ~cRadioWindow();

    char Unknown04[0x134];
};

class Class_10E88900 : public Class_10E822B0
{
public:
    Class_10E88900();

    virtual ~Class_10E88900();

    int Unknown154;
    int Unknown158;
    int Unknown15C;
    int Unknown160;
    cIntArray Unknown164;
    cIntArray Unknown170;
    bool Unknown17C;
    cRadioWindow Unknown180;
    int Unknown2B8;
    int Unknown2BC;
    Class_10B59770 Unknown2C0;
};

// FUNCTION: 0x10B7A6F0 ??0Class_10E88900@@QAE@XZ
Class_10E88900::Class_10E88900()
    : Unknown154(0), Unknown158(0), Unknown15C(-1), Unknown160(-1), Unknown17C(false), Unknown2B8(0),
      Unknown2BC(0)
{
    Unknown0E8 = 6;
}

// FUNCTION: 0x10B7A7B0 ??_GClass_10E88900@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B7A6F0's definition in this unit.
