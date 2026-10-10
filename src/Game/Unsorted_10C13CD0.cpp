// Game/Unsorted_10C13CD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10978090.h"
#include "Game/Class_10BAA9D0.h"
#include "Game/Class_10E700F0.h"
#include "Game/Class_10E98C80.h"
#include "Game/Struct_10AA3520.h"

extern void* DAT_10e98c80[];

extern void* DAT_10e8c1f0[];

extern void* DAT_10e97bc8[];

class Class_10E6DC88
{
public:
    void FUN_10aaf500();
};

class Class_10E8C1F0 : public Class_10E6DC88
{
public:
    char Unknown00[0xc];
    void* Field0c;
    void FUN_10c13e80();
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10BAA6B0_Param;

class Class_10BABED0 : public Class_10BAA9D0
{
};

Class_10BABED0* FUN_10baa6b0(Class_10BAA6B0_Param* A);

bool FUN_10c16700(void* A);

class Class_10E8D618 : public Class_10978090
{
public:
    virtual int FUN_10c13cd0(int A, int B);
};

// FUNCTION: 0x10C13CD0 ?FUN_10c13cd0@Class_10E8D618@@UAEHHH@Z
int Class_10E8D618::FUN_10c13cd0(int A, int B)
{
    Class_10BAA6B0_Param* Param = ((Class_10978090*)FUN_10978090())->Virtual8();
    if (FUN_10baa6b0(Param)->FUN_10baa9d0(DAT_10f35dec->Unknown08, 0.25f, true) && FUN_10c16700(DAT_10f35dec->Unknown08))
        return 1;
    return 0;
}

// FUNCTION: 0x10C13E80 ?FUN_10c13e80@Class_10E8C1F0@@QAEXXZ
void Class_10E8C1F0::FUN_10c13e80()
{
    *(void**)this = DAT_10e8c1f0;
    Field0c = DAT_10e97bc8;
    FUN_10aaf500();
}

// FUNCTION: 0x10C13EA0 ?FUN_10c13ea0@Class_10E700F0@@UAEXHHHH@Z
void Class_10E700F0::FUN_10c13ea0(int p1, int p2, int p3, int p4)
{
}

// FUNCTION: 0x10C15B90 ??0Class_10E98C80@@QAE@XZ
Class_10E98C80::Class_10E98C80()
{
    VTable = DAT_10e98c80;
    Unknown0c = 0;
    Unknown10 = 0;
    Unknown14 = 0;
}
