// Game/Unsorted_1094AE10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1094AE10.h"

// FUNCTION: 0x1094AE10 ?IsWithinRange@Class_1094AE10@@QAEHPAV1@M@Z
int Class_1094AE10::IsWithinRange(Class_1094AE10* Other, float Radius)
{
    Radius = Radius * Radius;
    if ((Unknown00 - Other->Unknown00) * (Unknown00 - Other->Unknown00) <= Radius
        && (Unknown04 - Other->Unknown04) * (Unknown04 - Other->Unknown04) <= Radius
        && (Unknown08 - Other->Unknown08) * (Unknown08 - Other->Unknown08) <= Radius)
        return 1;
    return 0;
}
