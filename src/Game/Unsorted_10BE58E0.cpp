// Game/Unsorted_10BE58E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10DBD510.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10BE4DD0.h"
#include "Game/Class_10BFBB60.h"
#include "Game/Class_10E97B00.h"

class Class_10BBDB40;

struct Struct_10BE5EF0
{
    char Unknown00[8];
    Class_10DBD510* Unknown08;
};

extern void* DAT_10e96510[];

class Class_10BE5EF0 : public Class_10BE4DD0
{
public:
    Class_10BE5EF0(int A, int B);

    void** Unknown00;
    Struct_10BE5EF0* Unknown04;
    char Unknown08[0x60];
    float Unknown68;
};

extern const char DAT_10e96430[];

extern const char DAT_10e96408[];

extern const char DAT_10e963dc[];

class Class_10BE5D10_FUN_10bfbb60
{
public:
    virtual int Virtual0();
};

class Class_10BE5D10_Unknown04
{
public:
    char Unknown00[0x30];
    Class_10BFBB60 Unknown30;
};

class Class_10E960D8
{
public:
    Class_10E97B00 FUN_10be5d10();

    char Unknown00[4];
    Class_10BE5D10_Unknown04* Unknown04;
};

// FUNCTION: 0x10BE5D10 ?FUN_10be5d10@Class_10E960D8@@QAE?AVClass_10E97B00@@XZ
Class_10E97B00 Class_10E960D8::FUN_10be5d10()
{
    int Evidence = 0;
    if (Unknown04->Unknown30.FUN_10bfbb60())
    {
        Class_10BE5D10_FUN_10bfbb60* Obj = (Class_10BE5D10_FUN_10bfbb60*)Unknown04->Unknown30.FUN_10bfbb60();
        Evidence = Obj->Virtual0();
    }
    switch (Evidence)
    {
    case 1:
        return Class_10E97B00(DAT_10e963dc);
    case 7:
        return Class_10E97B00(DAT_10e96408);
    default:
        return Class_10E97B00(DAT_10e96430);
    }
}

// FUNCTION: 0x10BE5EF0 ??0Class_10BE5EF0@@QAE@HH@Z
Class_10BE5EF0::Class_10BE5EF0(int A, int B) : Class_10BE4DD0(A, B)
{
    Unknown00 = DAT_10e96510;
    Unknown68 = Unknown04->Unknown08->FUN_10dbd510()->GetFloat(0x40100717);
}
