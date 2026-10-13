// Game/Class_10E662D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E662D0.h"

// FUNCTION: 0x10A2ED70 ?IsCompatibleWith@Class_10E662D0@@UAEHPAV1@@Z
int Class_10E662D0::IsCompatibleWith(Class_10E662D0* Other)
{
    if (Unknown04 != 0 && Other->Unknown04 != 0 && Unknown04 != Other->Unknown04)
        return 0;
    return 1;
}
