// Game/Unsorted_10C5EEC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E9C990.h"
#include "Game/Class_10E9C9A8.h"

// FUNCTION: 0x10C5F030 ?FUN_10c5f030@Class_10E9C990@@UAEXHHHH@Z
void Class_10E9C990::FUN_10c5f030(int Code, int A, int B, int C)
{
    switch (Code)
    {
    case 0x5a:
        FUN_10c5e750();
        break;
    case 0x70:
        FUN_10c5e270(A, B, C, 0);
        break;
    }
}

// FUNCTION: 0x10C5F320 ?FUN_10c5f320@Class_10E9C9A8@@UAE_NPAV1@@Z
bool Class_10E9C9A8::FUN_10c5f320(Class_10E9C9A8* Other)
{
    if (Other->Virtual3() == 1)
        return Other->Unknown04 == Unknown04;
    return false;
}
