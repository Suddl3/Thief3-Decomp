// Game/Class_10E933B8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BB8960.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10DBD510.h"
#include "Game/Struct_10BD2D10.h"

class Class_10E90D70
{
public:
    Class_10E90D70(int A, int B);

    void** Unknown00;
    int Unknown04[15];
};

extern void* DAT_10e933b8[];

class Class_10E933B8 : public Class_10E90D70
{
public:
    Class_10E933B8* FUN_10bd1e70(int A, int B);

    char Unknown40;
};

// FUNCTION: 0x10BD1E70 ?FUN_10bd1e70@Class_10E933B8@@QAEPAV1@HH@Z
Class_10E933B8* Class_10E933B8::FUN_10bd1e70(int A, int B)
{
    this->Class_10E90D70::Class_10E90D70(A, B);
    Unknown40 = 0;
    Unknown00 = DAT_10e933b8;
    return this;
}
