// Game/Unsorted_10B64440.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B65220.h"
#include "Game/Struct_10B647A0.h"

extern void* DAT_10e84730[];

class Class_10E81130
{
public:
    Class_10E81130* FUN_10b46080();

    void** Unknown00;
    char Unknown04[0x160];
};

class Class_10E84730 : public Class_10E81130
{
public:
    Class_10E84730* FUN_10b647a0();

    char Unknown164[0xC];
    bool Unknown170;
    int Unknown174;
    int Unknown178;
    Struct_10B647A0 Unknown17C;
    Struct_10B647A0 Unknown188;
    Struct_10B647A0 Unknown194;
    int Unknown1A0;
    Struct_10B647A0 Unknown1A4;
    bool Unknown1B0;
    void* Unknown1B4;
};

// FUNCTION: 0x10B647A0 ?FUN_10b647a0@Class_10E84730@@QAEPAV1@XZ
Class_10E84730* Class_10E84730::FUN_10b647a0()
{
    FUN_10b46080();
    Unknown00 = DAT_10e84730;
    Unknown170 = false;
    Unknown174 = 3;
    Unknown17C.Struct_10B647A0::Struct_10B647A0();
    Unknown188.Struct_10B647A0::Struct_10B647A0();
    Unknown194.Struct_10B647A0::Struct_10B647A0();
    Unknown1A0 = 0;
    Unknown1A4.Struct_10B647A0::Struct_10B647A0();
    Unknown1B0 = false;
    Unknown1B4 = 0;
    return this;
}

// FUNCTION: 0x10B65220 ?FUN_10b65220@Class_10B65220@@QAEXXZ
void Class_10B65220::FUN_10b65220()
{
    if (Unknown1B0 == 0)
        FUN_10b650f0();
    else
    {
        Virtual114();
        FUN_10b64ce0();
    }
}
