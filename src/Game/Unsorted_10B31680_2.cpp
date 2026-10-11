// Game/Unsorted_10B31680_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"
#include "Game/Class_10A55050.h"
#include "Game/Class_10A55080.h"
#include "Game/Class_10A55090.h"

class Class_1091ABB0
{
public:
    Class_109081E0 FUN_1091abb0();
};

extern const char DAT_10e7bda0[];

Class_109081E0 FUN_10950e50(const Class_109081E0& Text);

Class_109081E0 FUN_1090a660(const char* Format, ...);

class Class_10E7BBC8
{
public:
    void FUN_10b31850();

    char Pad00[0x12C];
    Class_1091ABB0 Unknown12C;
    char Pad12D[0x7];
    Class_10A55050* Unknown134;
    unsigned char Unknown138;
    char Pad139[0x3];
    float Unknown13C;
    int Unknown140;
};

// FUNCTION: 0x10B31850 ?FUN_10b31850@Class_10E7BBC8@@QAEXXZ
void Class_10E7BBC8::FUN_10b31850()
{
    if (Unknown134 == 0)
    {
        Unknown138 = 0;
        return;
    }
    Class_109081E0 Movie = FUN_10950e50(FUN_1090a660(DAT_10e7bda0, Unknown12C.FUN_1091abb0().Unknown00));
    ((Class_10A55050*)Unknown134)->FUN_10a55780((int)&Movie);
    ((Class_10A55080*)Unknown134)->FUN_10a55080(1);
    ((Class_10A55090*)Unknown134)->FUN_10a55090(0);
    Unknown140 = 0;
    Unknown13C = 1.0f;
}
