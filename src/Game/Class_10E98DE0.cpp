// Game/Class_10E98DE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBDC30.h"
#include "Game/Class_10DBD510.h"
#include "Game/Struct_10BA91E0.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10E98DE0.h"

float FUN_10ba91e0(const Struct_10BA91E0* A, const Struct_10BA91E0* B);

// FUNCTION: 0x10C1AB00 ?IsWithinRange@Class_10E98DE0@@UAEHPAV1@@Z
int Class_10E98DE0::IsWithinRange(Class_10E98DE0* Other)
{
    float Limit = Unknown08->FUN_10dbd510()->FUN_10bbdad0(0x40100373) * 16.0f;
    if (FUN_10ba91e0(&m_Position, &Other->m_Position) < Limit)
        return 1;
    return 0;
}
