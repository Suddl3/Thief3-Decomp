// Game/Unsorted_10BEF240_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBB410.h"
#include "Game/Class_10BFF460.h"
#include "Game/Class_10BF1C40_Unknown40.h"

struct Struct_10BA91E0;

class Class_10BF1C40
{
public:
    bool FUN_10bf1c40();
    float FUN_10bef370();
    bool FUN_10bf0ea0(Struct_10BA91E0* Out, int Id, bool Flag);

    char Unknown00[4];
    Class_10BBB410* Unknown04;
    char Unknown08[0x38];
    Class_10BF1C40_Unknown40* Unknown40;
    char Unknown44[0xC];
    float Unknown50;
};

class Class_10BEF3F0 : public Class_10BF1C40
{
public:
    bool FUN_10bef3f0(bool Flag);
};

// FUNCTION: 0x10BEF3F0 ?FUN_10bef3f0@Class_10BEF3F0@@QAE_N_N@Z
bool Class_10BEF3F0::FUN_10bef3f0(bool Flag)
{
    Class_10BFF460* Obj = Unknown04->GetCurrent();
    float B;
    float A;
    if (Unknown40)
        A = Unknown40->Virtual71();
    else
        A = 0.0f;
    B = FUN_10bef370();
    if (Obj)
    {
        if (Obj->FUN_10bff330() || Flag)
        {
            if (B < A)
                return true;
        }
    }
    return false;
}
