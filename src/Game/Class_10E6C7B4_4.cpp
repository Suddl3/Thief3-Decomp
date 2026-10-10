// Game/Class_10E6C7B4_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6C7B4.h"

class Class_1090A780
{
public:
    Class_1090A780(const Class_1090A780& Other);
    ~Class_1090A780();

    char* Unknown00;
};

class Class_109081E0 : public Class_1090A780
{
public:
    Class_109081E0(const char* In);
    Class_109081E0(const Class_1090A780& Other) : Class_1090A780(Other) {}
};

extern Class_1090A780 DAT_10f3a1f8[];

extern const char DAT_10e6c7ec[];

// FUNCTION: 0x10A8D490 ?FUN_10a8d490@Class_10E6C7B4@@UAE?AVClass_109081E0@@XZ
Class_109081E0 Class_10E6C7B4::FUN_10a8d490()
{
    if (Unknown04 >= 0 && Unknown04 < 4)
        return Class_109081E0(DAT_10f3a1f8[Unknown04]);
    return Class_109081E0(DAT_10e6c7ec);
}
