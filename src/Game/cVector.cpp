// Game/cVector.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cVector.h"
#include "T3Player/T3PlayerClasses.h"

// FUNCTION: 0x10B215D0 ?Reflect@cVector@@QAE?AV1@ABV1@@Z
cVector cVector::Reflect(const cVector& N)
{
    cVector T;
    T.Unknown00 = N.Unknown00 * Dot(N);
    T.Unknown04 = N.Unknown04 * Dot(N);
    T.Unknown08 = N.Unknown08 * Dot(N);
    return cVector(Unknown00 - (T.Unknown00 + T.Unknown00), Unknown04 - (T.Unknown04 + T.Unknown04),
                          Unknown08 - (T.Unknown08 + T.Unknown08));
}
