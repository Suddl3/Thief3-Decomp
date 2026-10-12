// Game/Class_10E66474_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10E66474.h"

struct Struct_10A334E0;

struct Struct_10A32090
{
    ~Struct_10A32090();

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
};

struct Struct_10A33B70_Param
{
    char Pad00[4];
    int Unknown04;
};

class AActor
{
    DECLARE_CLASS(AActor, UObject, 0x800, Engine)
};

// FUNCTION: 0x10A33B70 ?FUN_10a33b70@Class_10E66474@@QAEXHHH@Z
void Class_10E66474::FUN_10a33b70(int A, int B, int C)
{
    if (A)
    {
        ((UObject*)A)->IsA(AActor::StaticClass());
    }
    int Value = ((Struct_10A33B70_Param*)C)->Unknown04;
    Struct_10A32090 Items = { 0, 0, 0, 0, 0 };
    FUN_10a32450(Value, &Items);
    FUN_10a33930(0, &Items.Unknown00);
    FUN_10a33930(1, &Items.Unknown04);
    FUN_10a33930(2, &Items.Unknown08);
    FUN_10a33930(3, &Items.Unknown0C);
    FUN_10a33930(4, &Items.Unknown10);
}
