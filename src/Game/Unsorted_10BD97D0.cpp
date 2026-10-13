// Game/Unsorted_10BD97D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AA82D0.h"
#include "Game/Class_10BBB410.h"
#include "Game/Class_10BFF460.h"

extern void* DAT_10e93f68[];

class FArray
{
public:
    FArray() : Data(0), ArrayNum(0), ArrayMax(0) {}

    void* Data;
    int ArrayNum;
    int ArrayMax;
};

class Class_10E90D70
{
public:
    Class_10E90D70(int A, int B);

    void** Unknown00;
    int Unknown04[15];
};

class cTacticWeaponEquip : public Class_10E90D70
{
public:
    cTacticWeaponEquip* FUN_10bd97d0(int A, int B, int C, bool D, bool E);

    int Unknown40;
    bool Unknown44;
    bool Unknown45;
    int Unknown48;
    int Unknown4C;
    bool Unknown50;
    bool Unknown51;
    FArray Unknown54;
    int Unknown60;
};

// FUNCTION: 0x10BD97D0 ?FUN_10bd97d0@cTacticWeaponEquip@@QAEPAV1@HHH_N0@Z
cTacticWeaponEquip* cTacticWeaponEquip::FUN_10bd97d0(int A, int B, int C, bool D, bool E)
{
    this->Class_10E90D70::Class_10E90D70(A, B);
    Unknown00 = DAT_10e93f68;
    Unknown40 = C;
    Unknown44 = E;
    Unknown45 = D;
    Unknown48 = 0;
    Unknown4C = 0;
    Unknown50 = false;
    Unknown51 = false;
    Unknown54.FArray::FArray();
    Unknown60 = 0;
    return this;
}
