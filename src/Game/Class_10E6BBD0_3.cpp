// Game/Class_10E6BBD0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6BBD0.h"
#include "Game/Class_Field04.h"
#include "Game/Class_10AF7F80.h"
#include "Game/cString.h"
#include "Game/Class_10A74DF0_Unknown00.h"

void FUN_10a4bae0(Class_10A74DF0_Unknown00** Out, cString* Text, int A, int B);

// FUNCTION: 0x10A74DF0 ?FUN_10a74df0@Class_10E6BBD0@@QAEXH@Z
void Class_10E6BBD0::FUN_10a74df0(int A)
{
    FString Name;
    ((Class_Field04*)A)->FUN_1098e290(0x402a6, &Name);
    if (Name.Len() != 0)
    {
        cString Text(((Class_10AF7F80*)&Name)->FUN_10af7f80());
        Class_10A74DF0_Unknown00* Out;
        FUN_10a4bae0(&Out, &Text, A, 1);
        if (Out)
        {
            Out->Virtual2();
        }
    }
}
