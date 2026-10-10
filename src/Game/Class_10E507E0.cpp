// Game/Class_10E507E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E507E0.h"

// FUNCTION: 0x10A2EDA0 ?FUN_10a2eda0@Class_10E507E0@@UAEHPAV1@@Z
int Class_10E507E0::FUN_10a2eda0(Class_10E507E0* Other)
{
    if ((Unknown04 == 0 || Other->Unknown04 == 0 || Unknown04 == Other->Unknown04)
        && ((Unknown0C == 0 && Other->Unknown0C == 0 && (Unknown08 == 0 || Other->Unknown08 == 0))
            || Unknown08 == Other->Unknown08))
        return 1;
    return 0;
}
