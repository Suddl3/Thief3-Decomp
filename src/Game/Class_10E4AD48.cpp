// Game/Class_10E4AD48.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1091E2E0.h"

extern void* DAT_10e4ad48[];

void* FUN_1092fdd0();

class Class_10E4A9C8 : public Class_1091E2E0
{
public:
    Class_10E4A9C8();
    ~Class_10E4A9C8();

    char Unknown64[0x7C];
    bool UnknownE0;
};

class Class_10E4AD48 : public Class_10E4A9C8
{
public:
    Class_10E4AD48();

    char UnknownE4[0x54];
    int Unknown138;
    int Unknown13C;
    void* Unknown140;
};

// FUNCTION: 0x10951F10 ??0Class_10E4AD48@@QAE@XZ
Class_10E4AD48::Class_10E4AD48()
{
    Unknown00 = (int)DAT_10e4ad48;
    Unknown138 = 0;
    Unknown140 = FUN_1092fdd0();
    Unknown58 |= 1;
    Unknown44 = 3;
    Unknown5C = -1;
    Unknown13C = 0;
}
