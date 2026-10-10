// Game/Unsorted_10A8D2D0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6C7B4.h"

// FUNCTION: 0x10A8D2D0 ?FUN_10a8d2d0@Class_10E6C7B4@@UAEHHPAV1@@Z
int Class_10E6C7B4::FUN_10a8d2d0(int A, Class_10E6C7B4* B)
{
    switch (A)
    {
    case 1:
        return B->Unknown04 == Unknown04;
    case 6:
        return B->Unknown04 != Unknown04;
    }
    return 0;
}
