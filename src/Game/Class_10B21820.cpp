// Game/Class_10B21820.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"
#include "Game/Class_109B28E0.h"

struct Struct_10B21820_Object : public Class_109B28E0
{
    char Unknown00[0x520];
    int Unknown520;
};

extern int DAT_10f03890;

extern int DAT_10ff385c;

class Class_10B21820
{
public:
    void FUN_10b21b30(bool A);
    Struct_10B21820_Object* FUN_10991e10();

    char Unknown00[0x490];
    unsigned Unknown490_0 : 1;
    unsigned Unknown490_1 : 31;
    char Unknown494[0x3C];
    unsigned Unknown4D0_0 : 1;
    unsigned Unknown4D0_1 : 1;
    unsigned Unknown4D0_2 : 1;
};

// FUNCTION: 0x10B21B30 ?FUN_10b21b30@Class_10B21820@@QAEX_N@Z
void Class_10B21820::FUN_10b21b30(bool A)
{
    Unknown490_0 = A;
    Struct_10B21820_Object* Object = FUN_10991e10();
    if (Object)
    {
        Object->Unknown520 = A ? DAT_10f03890 : DAT_10ff385c;
        Object->FUN_109b28e0(Unknown4D0_2);
    }
}
