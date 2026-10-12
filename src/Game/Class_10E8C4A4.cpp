// Game/Class_10E8C4A4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C4A4.h"

// FUNCTION: 0x10C12970 ?Compare@Class_10E8C4A4@@UAEHHPAV1@@Z
int Class_10E8C4A4::Compare(int A, Class_10E8C4A4* Other)
{
    switch (A)
    {
    case 1:
        if (Other->Unknown08 == Unknown08)
            return 1;
        break;
    case 6:
        if (Other->Unknown08 != Unknown08)
            return 1;
        break;
    }
    return 0;
}
