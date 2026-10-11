// Game/Unsorted_10B9CAC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9D060.h"
#include "Game/Class_10B9D080.h"
#include "Game/Class_10B9D0A0.h"
#include "Game/Class_10BC9A50.h"

class Class_10BC9D40;

class Class_10B9CAC0
{
public:
    Class_10BC9D40* FUN_10b9cac0();

    char Unknown00[0x10];
    int Unknown10;
    char Unknown14[4];
    Class_10BC9D40** Unknown18;
};

class Class_10BC9780
{
public:
    bool FUN_10bc9780();
};

class Class_10BC9930
{
public:
    bool FUN_10bc9930();
};

// FUNCTION: 0x10B9CAC0 ?FUN_10b9cac0@Class_10B9CAC0@@QAEPAVClass_10BC9D40@@XZ
Class_10BC9D40* Class_10B9CAC0::FUN_10b9cac0()
{
    if (Unknown10 == 0)
        return 0;
    return Unknown18[Unknown10 - 1];
}

// FUNCTION: 0x10B9D060 ?FUN_10b9d060@Class_10B9D060@@QAE_NXZ
bool Class_10B9D060::FUN_10b9d060()
{
    return (Unknown10 == 0 ? 0 : Unknown18[Unknown10 - 1])->FUN_10bc9780();
}

// FUNCTION: 0x10B9D080 ?FUN_10b9d080@Class_10B9D080@@QAE_NXZ
bool Class_10B9D080::FUN_10b9d080()
{
    return (Unknown10 == 0 ? 0 : Unknown18[Unknown10 - 1])->FUN_10bc9930();
}

// FUNCTION: 0x10B9D0A0 ?FUN_10b9d0a0@Class_10B9D0A0@@QAE_NXZ
bool Class_10B9D0A0::FUN_10b9d0a0()
{
    return (Unknown10 == 0 ? 0 : Unknown18[Unknown10 - 1])->FUN_10bc9a50();
}
