// Game/Class_10E6D9BC_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1090A780.h"
#include "Game/Class_10B36120.h"

class Class_10AAA050_Param
{
public:
    virtual void Virtual0(Class_1090A780& Value);
    virtual void Virtual1(int Value);
};

class Class_10E6D9BC
{
public:
    int FUN_10aaa050(Class_10AAA050_Param* Writer);

    char Unknown00[0x4];
    Class_10B36120 Unknown04;
    Class_1090A780 Unknown08;
    Class_1090A780 Unknown0C;
    Class_1090A780 Unknown10;
    Class_1090A780 Unknown14;
    Class_1090A780 Unknown18;
    Class_1090A780 Unknown1C;
    Class_1090A780 Unknown20;
    int Unknown24;
    char Unknown28[0x8];
    int Unknown30;
};

// FUNCTION: 0x10AAA050 ?FUN_10aaa050@Class_10E6D9BC@@QAEHPAVClass_10AAA050_Param@@@Z
int Class_10E6D9BC::FUN_10aaa050(Class_10AAA050_Param* Writer)
{
    Writer->Virtual0(Unknown04.FUN_10b36120());
    Writer->Virtual0(Unknown08);
    Writer->Virtual0(Unknown10);
    Writer->Virtual0(Unknown18);
    Writer->Virtual0(Unknown0C);
    Writer->Virtual0(Unknown14);
    Writer->Virtual0(Unknown1C);
    Writer->Virtual0(Unknown20);
    Writer->Virtual1(Unknown24);
    Writer->Virtual1(Unknown30);
    return 1;
}
