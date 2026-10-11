// Game/Unsorted_10C22B20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10C22B20.h"

struct Item_10C22A70;

class Class_10BAE0C0
{
public:
    ~Class_10BAE0C0();
};

class Class_10C22A70 : public Class_10BAE0C0
{
public:
    Class_10C22A70() : Unknown00(0), Unknown04(0), Unknown08(0) {}
    void FUN_10c22a70(const Class_10C22A70& Other);

    int Unknown00;
    int Unknown04;
    Item_10C22A70* Unknown08;
};

class Class_10C22B20
{
public:
    Class_10C22B20(const Class_10C22B20& Other);

    Struct_10C22B20 Unknown00;
    Class_10C22A70 Unknown0C;
    char Unknown18[0x5a];
};

// FUNCTION: 0x10C22B20 ??0Class_10C22B20@@QAE@ABV0@@Z
Class_10C22B20::Class_10C22B20(const Class_10C22B20& Other)
{
    Unknown00 = Other.Unknown00;
    Unknown0C.FUN_10c22a70(Other.Unknown0C);
    for (int i = 0; i < 0x5a; i++)
        Unknown18[i] = Other.Unknown18[i];
}
