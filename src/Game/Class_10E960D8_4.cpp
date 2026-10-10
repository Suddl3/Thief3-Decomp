// Game/Unsorted_10BE5000_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBB410.h"

extern void* DAT_10e960d8[];

class Class_10bf7f90
{
public:
    void FUN_10bf7f90(int A, int B);
};

class Class_10BF7F90 : public Class_10bf7f90
{
};

class Class_10BFF460;

class Class_10BC4160
{
public:
    virtual void Virtual0();

    Class_10BF7F90* FUN_10bc4160();
};

class Class_10E95F40 : public Class_10BC4160
{
public:
    Class_10E95F40(int A, int B);
    ~Class_10E95F40();
};

class Class_10E960D8 : public Class_10E95F40
{
public:
    Class_10E960D8(int A, int B);

    Class_10BBB410* Unknown04;
    char Unknown08[0x60];
    int Unknown68;
};

// FUNCTION: 0x10BE5810 ??0Class_10E960D8@@QAE@HH@Z
Class_10E960D8::Class_10E960D8(int A, int B)
    : Class_10E95F40(A, B)
{
    *(void**)this = DAT_10e960d8;
    Unknown68 = 0;
    Class_10BF7F90* Info = FUN_10bc4160();
    Info->FUN_10bf7f90(0, 1);
    Unknown04->FUN_10bbb410();
}
