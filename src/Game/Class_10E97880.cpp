// Game/Class_10E97880.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBB410.h"
#include "Game/Class_10BFF280.h"
#include "Game/Class_10E92B20.h"
#include "Game/Class_10E94100.h"

class Class_10BF69F0_Unknown40
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

struct Struct_10BF69F0_A
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

struct Struct_10BF69F0_Data
{
    char Unknown00[0x2C];
    Struct_10BF69F0_A Unknown2C;
};

class Class_10E97880
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10bf69f0();

    Class_10BBB410* Unknown04;
    char Unknown08[0x38];
    Class_10BF69F0_Unknown40* Unknown40;
};

// FUNCTION: 0x10BF69F0 ?FUN_10bf69f0@Class_10E97880@@UAEXXZ
void Class_10E97880::FUN_10bf69f0()
{
    Class_10BFF280* Info = (Class_10BFF280*)Unknown04->FUN_10bbb410();
    if (Info && Info->FUN_10bff280())
    {
        Struct_10BF69F0_Data* Data = (Struct_10BF69F0_Data*)Info->FUN_10bff280();
        Struct_10BF69F0_A Values = Data->Unknown2C;
        ((Class_10E92B20*)this)->FUN_10bc4ee0(&Values.Unknown00, 0);
    }
    else
    {
        ((Class_10E94100*)this)->FUN_10bc4e30(0);
    }
    if (Unknown40)
        Unknown40->Virtual2();
}
