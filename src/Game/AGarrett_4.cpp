// Game/AGarrett_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109B28E0.h"

struct Struct_10B21820_Object : public Class_109B28E0
{
    char Unknown00[0x520];
    int Unknown520;
};

class Class_10B21820
{
public:
    Struct_10B21820_Object* FUN_10991e10();
};

class AGarrett : public Class_10B21820
{
public:
    void SetNoiseEnabled(bool A);

    char Unknown00[0x490];
    unsigned bIn3rdPersonMode : 1;
    unsigned bLeftFootDown : 1;
    char Unknown494[0x3C];
    unsigned bInPublicSpace : 1;
    unsigned bIsInCitySection : 1;
    unsigned bNoiseEnabled : 1;
};

// FUNCTION: 0x10B21B90 ?SetNoiseEnabled@AGarrett@@QAEX_N@Z
void AGarrett::SetNoiseEnabled(bool A)
{
    if (bNoiseEnabled != A)
    {
        bNoiseEnabled = A;
        if (bIn3rdPersonMode)
        {
            Struct_10B21820_Object* Object = FUN_10991e10();
            if (Object)
                Object->FUN_109b28e0(bNoiseEnabled);
        }
    }
}
