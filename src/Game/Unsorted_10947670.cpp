// Game/Unsorted_10947670.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10948190.h"

void operator delete(void* Ptr);

class Class_1095A7C0
{
public:
    ~Class_1095A7C0();

    char Unknown00[0x24];
};

class Class_109475E0
{
public:
    ~Class_109475E0();

    char Unknown00[0x24];
};

class Class_109480B0_Unknown54
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual ~Class_109480B0_Unknown54();
};

struct Struct_109480B0
{
};

class Class_109480B0
{
public:
    void FUN_109480b0();

    char Unknown00[0x4c];
    Class_1095A7C0* Unknown4C;
    Class_109475E0* Unknown50;
    Class_109480B0_Unknown54* Unknown54;
};

extern Class_1095A7C0* DAT_10f340f4;

extern Struct_109480B0* DAT_10f340fc;

extern Struct_109480B0* DAT_10f340f8;

extern int DAT_10f34100;

// FUNCTION: 0x109480B0 ?FUN_109480b0@Class_109480B0@@QAEXXZ
void Class_109480B0::FUN_109480b0()
{
    if (Unknown4C)
        delete[] Unknown4C;
    if (Unknown54)
        delete[] Unknown54;
    if (Unknown50)
        delete[] Unknown50;
    if (DAT_10f340f4)
    {
        delete[] DAT_10f340f4;
        DAT_10f340f4 = 0;
    }
    if (DAT_10f340fc)
    {
        delete DAT_10f340fc;
        DAT_10f340fc = 0;
    }
    if (DAT_10f340f8)
    {
        delete DAT_10f340f8;
        DAT_10f340f8 = 0;
    }
    DAT_10f34100 = 0;
}

// FUNCTION: 0x10948190 ?FUN_10948190@Class_10948190@@QAEHPAV1@@Z
int Class_10948190::FUN_10948190(Class_10948190* A)
{
    return A->Unknown00 != Unknown00 || A->Unknown04 != Unknown04 || A->Unknown08 != Unknown08;
}
