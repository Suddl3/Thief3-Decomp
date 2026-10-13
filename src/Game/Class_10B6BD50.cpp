// Game/Class_10B6BD50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cRadioWindow.h"
#include "Game/Class_10B78320.h"
#include "Game/Class_10B6BD50.h"
#include "Game/Class_10B6BBD0_190.h"
#include "Game/Class_10B6BBD0_198.h"
#include "Game/Data_10B66060.h"
#include "Game/Class_10A2AEF0.h"

class Data_10B66060;

// include/Game/Class_10B66980_Unknown158.h has only padding; this copy names the
// fields this function writes, with the same size (0x2C).
class Class_10B66980_Unknown158
{
public:
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    unsigned int Unknown18Bits0To0 : 1;
    unsigned int Unknown18Bits1To1 : 1;
    unsigned int Unknown18Bits2To31 : 30;
    int Unknown1C;
    int Unknown20;
    char Unknown24;
    char Unknown25;
    char Unknown26;
    char Unknown27;
    int Unknown28;
};

extern int* DAT_10ff65a8;

// FUNCTION: 0x10B6BA50 ?SetField@Class_10B6BD50@@QAEXHPAVClass_10B66980_Unknown158@@H@Z
void Class_10B6BD50::SetField(int A, Class_10B66980_Unknown158* B, int C)
{
    switch (A)
    {
    case 0:
        B->Unknown00 = C;
        return;
    case 1:
        B->Unknown04 = C;
        return;
    case 2:
        B->Unknown0C = C;
        return;
    case 3:
        B->Unknown14 = C;
        return;
    case 4:
        B->Unknown18Bits0To0 = C != 0;
        return;
    case 5:
        B->Unknown18Bits1To1 = C != 0;
        return;
    case 6:
        B->Unknown1C = C;
        return;
    case 7:
        B->Unknown20 = C;
        return;
    case 8:
        B->Unknown28 = C;
        return;
    case 9:
        B->Unknown24 = C;
        return;
    case 10:
        B->Unknown25 = C;
        return;
    case 11:
        B->Unknown26 = C;
        return;
    case 12:
        B->Unknown27 = C;
    }
}

// FUNCTION: 0x10B6BD50 ?LookupValue@Class_10B6BD50@@QAEHHH@Z
int Class_10B6BD50::LookupValue(int A, int B)
{
    if (A == 8 && B != -1)
        return DAT_10ff65a8[B];
    return B;
}
