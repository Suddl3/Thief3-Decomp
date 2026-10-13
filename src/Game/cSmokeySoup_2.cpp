// Game/cSmokeySoup_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10B6FC70.h"
#include "Game/Class_10B6FDA0.h"
#include "Game/Class_10E871C8.h"

extern void* DAT_10e871d0[];

extern void* DAT_10e7edb8[];

Class_10E871C8* GetSoupManager();

extern Class_10E871C8* DAT_10ff65ac;

class Class_10E67BD8
{
public:
    ~Class_10E67BD8();

    void** Unknown00;
    char Unknown04[0x114];
    void** Unknown118;
    char Unknown11C[0x38];
};

class cSmokeySoup : public Class_10E67BD8
{
public:
    ~cSmokeySoup();

    cIntArray Unknown154;
};

// FUNCTION: 0x10B6FB30 ??1Class_10E871C8@@QAE@XZ
// Compiler-generated: emitted with the class's vtable by 0x10B708D0's definition in this unit.

// FUNCTION: 0x10B708D0 ??1cSmokeySoup@@QAE@XZ
cSmokeySoup::~cSmokeySoup()
{
    Unknown00 = DAT_10e871d0;
    Unknown118 = DAT_10e7edb8;
    if (DAT_10ff65ac)
    {
        Class_10E871C8* Manager = GetSoupManager();
        if (--Manager->Unknown102FC == 0 && DAT_10ff65ac)
        {
            delete DAT_10ff65ac;
            DAT_10ff65ac = 0;
        }
    }
}
